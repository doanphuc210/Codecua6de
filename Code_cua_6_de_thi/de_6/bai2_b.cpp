#include <iostream>
#include <vector>

using namespace std;

class Bệnh_nhân {
public:
  int MSBN;
  string Loại;
  float Viện_phí;

  Bệnh_nhân() {
    MSBN = 0;
    Loại = "N/A";
    Viện_phí = 0;
  }

  void Lập_hồ_sơ_bệnh_án(int ngày, string loại_hoạt_động, float phí) {
    Log_hoạt_động log;
    log.Ngày = ngày;
    log.MSBN = MSBN;
    log.Loại_hoạt_động = loại_hoạt_động;
    log.Phí = phí;
    Hồ_sơ_bệnh_án.push_back(log);
  }

private:
  vector<Log_hoạt_động> Hồ_sơ_bệnh_án;
};
