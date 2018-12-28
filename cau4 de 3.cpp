#include<iostream>
#include<fstream>
using namespace std;

	struct Cap{
		
	};
int n;
fstream fi;
void DocFile(int a[10][10], int n){
	fi.open("Bieu Do.txt",ios :: in);
	fi>>n;
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n; j++){
			fi>>a[i][j];
		}
	}
	fi.close();
}
void TaoMoi(int a[10][10], int &n){
	cout << "Nhap n"; 
	cin >> n;
	fi.open("Bieu Do.txt",ios :: out);
			fi << n;
		fi >>n;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout<< "Trong so" << i << "den" << j;
				cin >> a[i][j];
				fi << a[i][j] << "_";
			}
		}
		fi<<endl;
		fi.close();
} 
void XuatBieuDo(int a[10][10], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			cout << a[i][j] << "_";
		}
	}
}
int main(){
	int n;
//	cout<< "Nhap n:";
//	cin >> n;
	int a[10][10];
//	XuatBieuDo(a,n);
	TaoMoi(a, n);
	DocFile(a, n);
	XuatBieuDo(a, n);
	
}
