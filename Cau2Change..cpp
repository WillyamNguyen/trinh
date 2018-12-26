#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

	struct NgayThang
	{
		int Date;
		int Month;
		int Year;
	};
	int Month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int NamNhuan(int Year){
		if((Year % 400 == 0)||((Year % 4 == 0)&&(Year % 100 != 0)))
			return 1;
		else
			return 0;
	}
	int TimSTT(NgayThang n){
		int stt = 0;
		for(int i = 0; i < n.Month; i++)
			stt += Month[i];
		stt += n.Date;
		if(NamNhuan == 0 && n.Month > 2)
			stt + 1;
		return stt; 
	}
	NgayThang ngayTuSTT(int stt, int Year){
		NgayThang TimNgay;
		int i=1;
			while (stt > Month[i]){
				stt-=Month[i];
				i++;
				if (NamNhuan(Year)==1 && i==2)
					Month[i]=29;
			}
			TimNgay.Month = i;
			TimNgay.Date = stt;
			TimNgay.Year = Year;
				Month[2]=28;
	return TimNgay;
	}
	NgayThang congNgayThang(NgayThang n, int x){
		int kq = x + TimSTT(n);
		int Year = n.Year;
		if(kq <= 365)
			return ngayTuSTT(kq, Year);
		else
			if(NamNhuan(Year) == 1)
				if(kq == 366)
					return ngayTuSTT(kq, Year);
				else
					return ngayTuSTT(kq - 366, Year + 1);
			else
				return ngayTuSTT(kq - 365, Year + 1); 
	}
int main()
{
	string ST;
		cout <<"Nhap giu lieu vao: ";
		getline(cin, ST);
		NgayThang D;
			char t[4];
				t[0] = ST[0];
				t[1] = ST[1];
			D.Date = atoi(t);
				t[0] = ST[3];
				t[1] = ST[4];
			D.Month = atoi(t);
				t[0] = ST[6];
				t[1] = ST[7];
				t[2] = ST[8];
				t[3] = ST[9];
			D.Year = atoi(t);
			cout << "Ngay " << D.Date << " thang " << D.Month << " nam " << D.Year;
			if(NamNhuan(D.Year) == 1)
				cout<< "\nLa nam nhuan!";
			else
				cout<< "\nLa nam khong nhuan!";
			cout<<"\nLa ngay thu "<<TimSTT(D)<<" trong nam !";
		
		
//		
////	 Cach 2
//	int Day, Month, Year;
//	char c;
//	
//	cout << "Nhap ngay thang: ";
//	cin >> Day >> c >> Month >> c >> Year;
//	cout << "Ngay " << Day << " thang " << Month << " nam " << Year;
}
