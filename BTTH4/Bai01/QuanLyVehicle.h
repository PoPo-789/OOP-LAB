#pragma once
#include "InVehicle.h"
#include "OutVehicle.h"

class QuanLy
{
    private:
        vector<cInVehicle> dsNoiThanh;
        vector<cOutVehicle> dsNgoaiThanh;
    public:
        void tinhTongDoanhThu() const;
        void tinhTongDoanhThuNoiThanh() const;
        void tinhTongDoanhThuNgoaiThanh() const;
        void menu();
};