#include "GiaoDichTienTe.h"
#include "GiaoDichVang.h"

class QuanLy
{
    private:
        vector<GiaoDichVang> dsGiaoDichVang;
        vector<GiaoDichTienTe> dsGiaoDichTienTe;
    public:
        void NhapDSGiaoDichVang();
        void NhapDSGiaoDichTienTe();
        void XuatDSGiaoDichVang() const;
        void XuatDSGiaoDichTienTe() const;
        void GiaoDichVangThanhTienCaoNhat();
        void GiaoDichEuroThanhTienThapNhat();
        void GiaoDichTren1Ty();
        void Menu();
};