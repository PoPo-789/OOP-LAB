#include "GiaoDich.h"

class GiaoDichTienTe : public GiaoDich
{
    private:
        string loaiTienTe;
        long long tyGia;
    public:
        GiaoDichTienTe();
        GiaoDichTienTe(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiTienTe, long long tyGia);
        void Nhap();
        long long thanhTien(); 
        string getLoaiTienTe() const { return loaiTienTe; }
        void Xuat() const;
};