#include "BDS.h"

class BDSChungCu : public BDS
{
    private:
        string maCanHo;
        int tang;
    public:
        BDSChungCu();
        BDSChungCu(string maGD, string ngayGD, long long donGia, double dienTich, string maCanHo, int tang);
        void Nhap();
        void Xuat() const;
        double thanhTien();
};