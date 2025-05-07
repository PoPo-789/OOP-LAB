#include "NhanVien.h"

class NhanVienVP : public NhanVien
{
    private:
        int luongCanBan;
        int soSanPham;
    public:
        NhanVienVP();
        NhanVienVP(string hoTen, string ngaySinh, int Luong, int luongCanBan, int soSanPham);
        void Nhap();
        void Xuat();
        int tinhLuong();
};