#include<bits/stdc++.h>
using namespace std;

class cong{
	private:
		int a, b;
	public:
		void nhap();
		int in();
};

void cong::nhap(){
	cin>>a>>b;
}
int cong::in(){
	cout<<a+b;
}

int main(){
	cong x;
	x.nhap();
	x.in();

}
