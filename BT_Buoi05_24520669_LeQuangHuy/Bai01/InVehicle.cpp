#include "InVehicle.h"

cInVehicle::cInVehicle()
{
    soTuyen = 0;
    soKmDiDuoc = 0;
}

cInVehicle::cInVehicle(string maChuyen, string hoTenTaiXe, string soXe, int doanhThu, int soTuyen, double soKmDiDuoc) : cVehicle(maChuyen, hoTenTaiXe, soXe, doanhThu)
{
    this->soTuyen = soTuyen;
    this->soKmDiDuoc = soKmDiDuoc;
}

void cInVehicle::nhapThongTin()
{
    cVehicle::nhapThongTin();
    cout << "Nhap so tuyen: ";
    cin >> soTuyen;
    cout << "Nhap so km di duoc: ";
    cin >> soKmDiDuoc;
}

void cInVehicle::xuatThongTin() const
{
    cVehicle::xuatThongTin();
    cout << "So tuyen: " << soTuyen << endl;
    cout << "So km di duoc: " << soKmDiDuoc << endl;
}


