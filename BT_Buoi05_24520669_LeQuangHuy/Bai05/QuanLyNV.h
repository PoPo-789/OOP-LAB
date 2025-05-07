#pragma once
#include "NhanVienVP.h"
#include "NhanVienSX.h"

class QuanLyNV
{
    private:
        NhanVienVP* dsVP;
        NhanVienSX* dsSX;
        int nVP, nSX;
    public:
        QuanLyNV();
        QuanLyNV(int nVP, int nSX);
        ~QuanLyNV();
        void NhapDSVP();
        void NhapDSSX();
        void XuatDSVP();
        void XuatDSSX();
        void TinhTongLuongCTYPhaiTra();
        void MENU();
};