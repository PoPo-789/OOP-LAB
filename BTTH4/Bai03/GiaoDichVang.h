#include "GiaoDich.h"

class GiaoDichVang : public GiaoDich
{
    private:
        string loaiVang;
    public:
        GiaoDichVang();
        GiaoDichVang(string maGD, string ngayGD, long long soLuong, long long donGia, string loaiVang);
        void Nhap();
        void Xuat() const;
};