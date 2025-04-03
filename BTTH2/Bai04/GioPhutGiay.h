#include <bits/stdc++.h>
using namespace std;

class GioPhutGiay
{
    private:
        int iGio, iPhut, iGiay; 
    public:
        GioPhutGiay(); // Khoi tao gio phut giay
        GioPhutGiay(int iGio, int iPhut, int iGiay); // Khoi tao gio phut giay
        void Nhap(); // Nhap gio phut giay
        void Xuat(); // Xuat gio phut giay
        GioPhutGiay TinhCongThemMotGiay(); // Tinh cong them 1 giay
        bool KiemTraGioPhutGiayHopLe(); // Kiem tra gio phut giay hop le
};
