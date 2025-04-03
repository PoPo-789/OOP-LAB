#pragma once
#include "Diem.h"

class cTamGiac: protected cDiem 
{
    private:
        cDiem A, B, C;
    public:
        cTamGiac();
        cTamGiac(cDiem a, cDiem b, cDiem c);
        cTamGiac(cTamGiac &tg);
        ~cTamGiac();
        void Nhap();
        void Xuat();    
        void TinhTien();
        string KiemTraLoai();
        double TinhChuVi();
        double TinhDienTich();
        void PhongTo();
        void ThuNho();
        void Quay();
};
