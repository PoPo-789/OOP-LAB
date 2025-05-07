#include <bits/stdc++.h>

using namespace std;

class NhanVien
{
    private:
        string hoTen;
        string ngaySinh;
    public:
        NhanVien();
        NhanVien(string hoTen, string ngaySinh);
        void Nhap();
        void Xuat();
};