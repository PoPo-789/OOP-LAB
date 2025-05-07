#include <bits/stdc++.h>
using namespace std;

class GiaoDich
{
    private:
        string maGD;
        string ngayGD;
        long long soLuong;
        long long donGia;
    public:
        GiaoDich();
        GiaoDich(string maGD, string ngayGD, long long soLuong, long long donGia);
        void Nhap();
        void Xuat() const;
        long long getSoLuong() const { return soLuong; } 
        long long getDonGia() const { return donGia; }
};
