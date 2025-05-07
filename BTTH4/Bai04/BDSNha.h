#include "BDS.h"


class BDSNha : public BDS
{
    private:
        string loaiNha;
        string diaChi;
    public:
        BDSNha();
        BDSNha(string maGD, string ngayGD, long long donGia, double dienTich, string loaiNha, string diaChi);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};