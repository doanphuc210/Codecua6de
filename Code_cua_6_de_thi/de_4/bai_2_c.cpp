class EyedFace : public IFace {
private:
    static int count;  // Đếm số đối tượng EyedFace

    string shape;
    int eyes;

protected:
    string getShape();

public:
    EyedFace(string sh, int e) : shape(sh), eyes(e) {
        count++;
    }

    virtual void show() override {
        cout << "Shape: " << shape << ", Eyes: " << eyes << endl;
    }

    virtual IFace* clone() override {
        return new EyedFace(*this);
    }

    ~EyedFace() {
        count--;
    }

    static int getCount() {
        return count;
    }
};

int EyedFace::count = 0;  // Khởi tạo biến đếm

void testFace(IFace* fc) {
    IFace* a[3] = { fc, fc->clone(), fc->clone() };
    for (int i = 0; i < 3; i++) {
        a[i]->show();
    }
    cout << "The same 3 lines?" << endl;
}

int main() {
    Face fc1("Rectangle");
    testFace(&fc1);

    EyedFace ef1("Circle", 2);
    testFace(&ef1);

    cout << "Number of EyedFace objects: " << EyedFace::getCount() << endl;

    return 0;
}
