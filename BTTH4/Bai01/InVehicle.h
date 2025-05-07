#pragma once
#include "Vehicle.h"

class cInVehicle : public cVehicle
{
    private:
        int soTuyen;
        double soKmDiDuoc;
    public:
        cInVehicle();
        cInVehicle(string, string, string, int, int, double);
        void nhapThongTin();
        void xuatThongTin() const;
};
