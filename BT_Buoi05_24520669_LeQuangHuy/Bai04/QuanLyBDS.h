#include "BDSNha.h"
#include "BDSChungCu.h"
#include "BDSDat.h"

class QuanLyBDS
{
    private:
        vector<BDSDat> dsBDSDat;
        vector<BDSChungCu> dsBDSChungCu;
        vector<BDSNha> dsBDSNha;
    public:
        void NhapDSBDSDat();
        void NhapDSBDSChungCu();
        void NhapDSBDSNha();
        void TongSoLuongBDSDat();
        void TongSoLuongBDSChungCu();
        void TongSoLuongBDSNha();
        void TrungBinhThanhTienBDSChungCu();
        void BDSNhaCoGiaTriCaoNhat();
        void TimDSGiaoDichTheoNgay();
        void Menu();
};