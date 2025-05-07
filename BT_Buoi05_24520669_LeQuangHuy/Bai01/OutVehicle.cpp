#include "OutVehicle.h"

cOutVehicle::cOutVehicle()
{
    noiDen = "";
    soNgayDiDuoc = 0;
}

cOutVehicle::cOutVehicle(string maChuyen, string hoTenTaiXe, string soXe, int doanhThu, string noiDen, int soNgayDiDuoc) : cVehicle(maChuyen, hoTenTaiXe, soXe, doanhThu)
{
    this->noiDen = noiDen;
    this->soNgayDiDuoc = soNgayDiDuoc;
}

void cOutVehicle::nhapThongTin()
{
    cVehicle::nhapThongTin();
    cout << "Nhap noi den: ";
    cin.ignore();
    getline(cin, noiDen);
    cout << "Nhap so ngay di duoc: ";
    cin >> soNgayDiDuoc;
}

void cOutVehicle::xuatThongTin() const
{
    cVehicle::xuatThongTin();
    cout << "Noi den: " << noiDen << endl;
    cout << "So ngay di duoc: " << soNgayDiDuoc << endl;
}

