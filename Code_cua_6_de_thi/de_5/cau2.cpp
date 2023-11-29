#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>

using namespace std;
namespace mp = boost::multiprecision;

class BigInteger {
private:
    mp::cpp_int value;

public:
    // Khởi tạo từ chuỗi.
    BigInteger(const string& str) : value(str) {}

    // Khởi tạo mặc định.
    BigInteger() : value(0) {}

    // Hàm nhập từ bàn phím.
    friend istream& operator>>(istream& is, BigInteger& obj) {
        string str;
        is >> str;
        obj.value = str;
        return is;
    }

    // Hàm xuất ra màn hình.
    friend ostream& operator<<(ostream& os, const BigInteger& obj) {
        os << obj.value;
        return os;
    }

    // Toán tử so sánh bằng.
    bool operator==(const BigInteger& obj) const {
        return value == obj.value;
    }
};

int main() {
    BigInteger n1("1234567891011"); // Khởi tạo từ chuỗi.
    BigInteger n2; // Khởi tạo mặc định = 0.

    cout << "Input an integer = ";
    cin >> n2; // Nhập giá trị từ bàn phím.

    if (n1 == n2) // So sánh bằng nhau.
        cout << "Equal.\n";
    else
        cout << "Not equal.\n";

    return 0;
}
