#pragma once
#include "Vehicle.h"

class cOutVehicle : public cVehicle
{
    private:
        string noiDen;
        int soNgayDiDuoc;
    public:
        cOutVehicle();
        cOutVehicle(string, string, string, int, string, int);
        void nhapThongTin();
        void xuatThongTin() const;
};
