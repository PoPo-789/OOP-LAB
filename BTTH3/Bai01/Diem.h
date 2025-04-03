#pragma once
#include <bits/stdc++.h>
using namespace std;

class cDiem {  
    protected:
        double dx, dy;
    public: 
        cDiem();
        cDiem(double x, double y);
        ~cDiem();
        void Nhap();
        void Xuat();
        void TinhTien(cDiem x);
        void PhongTo(double hs);
        void ThuNho(double hs);
        void Quay(double goc);
        double TinhKhoangCach(cDiem a);
};