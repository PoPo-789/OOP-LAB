#include "NhanVien.h"

class NhanVienSX : public NhanVien
{
    private:
        int soNgayLamViec;
    public:
        NhanVienSX();
        NhanVienSX(string hoTen, string ngaySinh, int Luong, int soNgayLamViec);
        void Nhap();
        void Xuat();
        int tinhLuong();
};