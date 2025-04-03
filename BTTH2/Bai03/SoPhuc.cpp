#include "SoPhuc.h"

SoPhuc::SoPhuc() // Khoi tao so phuc
{
    iThuc = 0;
    iAo = 0;
}

SoPhuc::SoPhuc(float iThuc, float iAo) // Khoi tao so phuc co phan thuc va phan ao
{
    this->iThuc = iThuc;
    this->iAo = iAo;
}

void SoPhuc::Nhap() // Nhap so phuc
{
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SoPhuc::Xuat() // Xuat so phuc
{
    cout << iThuc << " + " << iAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc sp) // Cong 2 so phuc
{
    SoPhuc kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc sp) // Tru 2 so phuc
{
    SoPhuc kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc sp) // Nhan 2 so phuc
{
    SoPhuc kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc sp) // Chia 2 so phuc
{
    SoPhuc kq;
    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / (sp.iThuc * sp.iThuc + sp.iAo * sp.iAo);
    kq.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / (sp.iThuc * sp.iThuc + sp.iAo * sp.iAo);
    return kq;
}