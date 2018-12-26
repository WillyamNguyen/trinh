#include<fstream>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
typedef struct {
	char Ten[15];
	bool GioiTinh;
	char Email[30];
	char SDT[11];
	char DiaChi[30];
	
} DanhBa;
void NhapDanhBa();
void DocFileDanhBa(char *TenFile);
void XuatDanhBa();
void XuatFlieDanhba(char *TenFile);
void NhapDanhBa(){
	cout<< "\nNhap ten:"; cin.getline(Ten,15);
	
	}
void DocFileDanhBa(char* TenFile){
	
}
int main(){
	DanhBa B;
	B.NhapDanhBa();
	
}

	

//	class DanhBa{
//		public:
//		string Ten;
//		private:
//		char SDT[11];
//		string Email, GioiTinh, DiaChi;
//	};
	
