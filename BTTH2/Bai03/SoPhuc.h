#include <bits/stdc++.h>
using namespace std;

class SoPhuc {
    private:
        float iThuc, iAo; 
    public: 
        SoPhuc(); // Khoi tao so phuc
        SoPhuc(float fThuc, float fAo); // Khoi tao so phuc co phan thuc va phan ao
        void Nhap(); // Nhap so phuc
        void Xuat(); // Xuat so phuc
        SoPhuc Tong(SoPhuc); // Tong 2 so phuc
        SoPhuc Hieu(SoPhuc); // Hieu 2 so phuc
        SoPhuc Tich(SoPhuc); // Tich 2 so phuc
        SoPhuc Thuong(SoPhuc); // Thuong 2 so phuc
};