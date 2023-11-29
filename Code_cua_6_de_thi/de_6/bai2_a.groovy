classDiagram

class Bệnh_nhân {
  + MSBN: int
  + Loại: string
  + Viện_phí: float
  + Lập_hồ_sơ_bệnh_án(ngày: int, loại_hoạt_động: string, phí: float): void
}

class Bệnh_nhân_nội_trú : Bệnh_nhân {
  + Số_ngày_nằm_viện: int
}

class Bệnh_nhân_ngoại_trú : Bệnh_nhân {
}

class Log_hoạt_động {
  + Ngày: int
  + MSBN: int
  + Loại_hoạt_động: string
  + Phí: float
}

class Danh_sách_bệnh_nhân {
  + danh_sách: vector<Bệnh_nhân>
  + Lấy_danh_sách_bệnh_nhân(): vector<Bệnh_nhân>
}

class Chương_trình {
  + Danh_sách_bệnh_nhân danh_sách_bệnh_nhân
  + Đọc_log_hoạt_động(tệp_log: string): void
  + Tính_viện_phí(): void
  + In_thống_kê_viện_phí(): void
}

Bệnh_nhân "1" --* "0..*" Log_hoạt_động
Bệnh_nhân_nội_trú "1" --* "0..*" Log_hoạt_động
Bệnh_nhân_ngoại_trú "1" --* "0..*" Log_hoạt_động
Danh_sách_bệnh_nhân "1" --* "0..*" Bệnh_nhân
Chương_trình "1" --* "1" Danh_sách_bệnh_nhân
