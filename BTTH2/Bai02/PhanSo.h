#include <bits/stdc++.h>
using namespace std;

class PhanSo {
    private:
        int iTu, iMau;
    public: 
        PhanSo(); // Khoi tao phan so
        PhanSo(int iTu, int iMau); // Khoi tao phan so co tu va mau
        void Nhap(); // Nhap phan so
        void Xuat(); // Xuat phan so
        void RutGon(); // Rut gon phan so
        void Tong(PhanSo); // Tong 2 phan so
        void Hieu(PhanSo); // Hieu 2 phan so
        void Tich(PhanSo); // Tich 2 phan so
        void Thuong(PhanSo); // Thuong 2 phan so
        void SoSanh(PhanSo); // So sanh 2 phan so
};
        