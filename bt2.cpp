#include<bits/stdc++.h>
using namespace std;

class TinhBieuThuc {
	private:
		int a,b,c,d;
	public:
    	int nhap();
    	int xuat();
		int calculate(); 
    
};

int TinhBieuThuc::nhap(){
	cin>>a>>b>>c>>d;
	cout << a << "+(" << b << " - abs(" << c << "))*" << d<<endl;
}
int TinhBieuThuc::calculate(){
        return a + (b - abs(-c)) * d;
    }

int TinhBieuThuc::xuat(){
	int kq = calculate();
    cout << kq <<endl;
}

int main() {
	
    TinhBieuThuc x;
    x.nhap();
    x.calculate();
    x.xuat();
    return 0;
}


