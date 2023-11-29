#include <iostream>

using namespace std;

class Sạp {
public:
  int số_thứ_tự_sạp;
  float diện_tích_sạp;

  Sạp() {}
  Sạp(int số_thứ_tự_sạp, float diện_tích_sạp) {
    this->số_thứ_tự_sạp = số_thứ_tự_sạp;
    this->diện_tích_sạp = diện_tích_sạp;
  }

  float tínhTiềnThuê() {
    return this->diện_tích_sạp * 40000000;
  }

  virtual float tínhThuếDoanhThu() = 0;
};

class SạpThựcPhẩm : public Sạp {
public:
  float tiền_sử_dụng_dịch_vụ_đông_lạnh;

  SạpThựcPhẩm() {}
  SạpThựcPhẩm(int số_thứ_tự_sạp, float diện_tích_sạp, float tiền_sử_dụng_dịch_vụ_đông_lạnh)
      : Sạp(số_thứ_tự_sạp, diện_tích_sạp) {
    this->tiền_sử_dụng_dịch_vụ_đông_lạnh = tiền_sử_dụng_dịch_vụ_đông_lạnh;
  }

  float tínhThuếDoanhThu() override {
    return 0.05 * this->tínhTiềnThuê();
  }

  float tínhTổngSốTiền() {
    return this->tínhTiềnThuê() + this->tínhThuếDoanhThu() + this->tiền_sử_dụng_dịch_vụ_đông_lạnh;
  }
};

class SạpQuầnÁo : public Sạp {
public:
  SạpQuầnÁo() {}
  SạpQuầnÁo(int số_thứ_tự_sạp, float diện_tích_sạp) : Sạp(số_thứ_tự_sạp, diện_tích_sạp) {}

  float tínhThuếDoanhThu() override {
    return 0.1 * this->tínhTiềnThuê();
  }

  float tínhTổngSốTiền() {
    return this->tínhTiềnThuê() + this->tínhThuếDoanhThu();
  }
};
