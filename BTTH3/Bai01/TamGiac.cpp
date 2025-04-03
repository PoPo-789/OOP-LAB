#include "TamGiac.h"

cTamGiac::cTamGiac() {
    A = cDiem(0, 0);
    B = cDiem(0, 0);
    C = cDiem(0, 0);
}

cTamGiac::cTamGiac(cDiem a, cDiem b, cDiem c) {
    A = a;
    B = b;
    C = c;
}

cTamGiac::cTamGiac(cTamGiac &tg) {
    A = tg.A;
    B = tg.B;
    C = tg.C;
}

cTamGiac::~cTamGiac() {
    //
}

void cTamGiac::Nhap() {
    cout << "Nhap diem A: " << endl;
    A.Nhap();
    cout << "Nhap diem B: " << endl;
    B.Nhap();
    cout << "Nhap diem C: " << endl;
    C.Nhap();
}

void cTamGiac::Xuat() {
    cout << "Diem A: ";
    A.Xuat();
    cout << "Diem B: ";
    B.Xuat();
    cout << "Diem C: ";
    C.Xuat();
}

void cTamGiac::TinhTien() {
    double x, y;
    cout << "Nhap vector tinh tien (x, y): ";
    cin >> x >> y;
    cDiem v(x, y);
    A.TinhTien(v);
    B.TinhTien(v);
    C.TinhTien(v);
    cout << "Tam giac sau khi tinh tien: " << endl;
    Xuat();
}

string cTamGiac::KiemTraLoai() {
    double AB = A.TinhKhoangCach(B);
    double AC = A.TinhKhoangCach(C);
    double BC = B.TinhKhoangCach(C);
    if (AB == AC && AC == BC) {
        return "Tam giac deu";
    } else if (AB == AC || AB == BC || AC == BC) {
        return "Tam giac can";
    } else if (AB * AB + AC * AC == BC * BC || AB * AB + BC * BC == AC * AC || AC * AC + BC * BC == AB * AB) {
        return "Tam giac vuong";
    } else {
        return "Tam giac thuong";
    }
}

double cTamGiac::TinhChuVi() {
    double AB = A.TinhKhoangCach(B);
    double AC = A.TinhKhoangCach(C);
    double BC = B.TinhKhoangCach(C);
    return AB + AC + BC;
}

double cTamGiac::TinhDienTich() {
    double AB = A.TinhKhoangCach(B);
    double AC = A.TinhKhoangCach(C);
    double BC = B.TinhKhoangCach(C);
    double p = (AB + AC + BC) / 2;
    return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}

void cTamGiac::PhongTo() {
    double hs;
    cout << "Nhap he so phong to: ";
    cin >> hs;
    A.PhongTo(hs);
    B.PhongTo(hs);
    C.PhongTo(hs);
    cout << "Tam giac sau khi phong to: " << endl;
    Xuat();
}

void cTamGiac::ThuNho() {
    double hs;
    cout << "Nhap he so thu nho: ";
    cin >> hs;
    A.ThuNho(hs);
    B.ThuNho(hs);
    C.ThuNho(hs);
    cout << "Tam giac sau khi thu nho: " << endl;
    Xuat();
}

void cTamGiac::Quay() {
    double goc;
    cout << "Nhap goc quay (rad): ";
    cin >> goc;
    A.Quay(goc);
    B.Quay(goc);
    C.Quay(goc);
    cout << "Tam giac sau khi quay: " << endl;
    Xuat();
}

