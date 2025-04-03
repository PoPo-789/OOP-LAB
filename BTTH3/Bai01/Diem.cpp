#include "Diem.h"

cDiem::cDiem() {
    dx = 0;
    dy = 0;
}

cDiem::cDiem(double x, double y) {
    dx = x;
    dy = y;
}

cDiem::~cDiem() {
    //
}

void cDiem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> dx;
    cout << "Nhap tung do: ";
    cin >> dy;
}

void cDiem::Xuat() {
    cout << "(" << dx << ", " << dy << ")" << endl;
}

double cDiem::TinhKhoangCach(cDiem a) {
    return sqrt(pow(dx - a.dx, 2) + pow(dy - a.dy, 2));
}

void cDiem::TinhTien(cDiem x) {
    dx += x.dx;
    dy += x.dy;
}

void cDiem::PhongTo(double hs) {
    dx *= hs;
    dy *= hs;
}

void cDiem::ThuNho(double hs) {
    dx /= hs;
    dy /= hs;
}

void cDiem::Quay(double goc) {
    double x = dx * cos(goc) - dy * sin(goc);
    double y = dx * sin(goc) + dy * cos(goc);
    dx = x;
    dy = y;
}
