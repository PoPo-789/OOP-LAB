#include <bits/stdc++.h>
using namespace std;

class BDS
{
    private:
        string maGD;
        string ngayGD;
        long long donGia;
        double dienTich;
    public:
        BDS();
        BDS(string maGD, string ngayGD, long long donGia, double dienTich);
        void Nhap();
        void Xuat() const;
        long long getDonGia() const { return donGia; }
        double getDienTich() const { return dienTich; }
        string getNgayGD() const { return ngayGD; }
};