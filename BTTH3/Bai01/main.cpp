#include "TamGiac.h"

int main()
{
    cTamGiac tg;
    tg.Nhap();
    tg.Xuat();
    cout << "Chu vi: " << tg.TinhChuVi() << endl;
    cout << "Dien tich: " << tg.TinhDienTich() << endl;
    cout << "Loai tam giac: " << tg.KiemTraLoai() << endl;
    tg.TinhTien();
    tg.PhongTo();
    tg.ThuNho();
    tg.Quay();
    
    return 0;
}