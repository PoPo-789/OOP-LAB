#include "BDS.h"

class BDSDat : public BDS
{
    private:
        char loaiDat;
    public:
        BDSDat();
        BDSDat(string maGD, string ngayGD, long long donGia, double dienTich, char loaiDat);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};