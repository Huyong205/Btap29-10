#include<bits/stdc++.h>
using namespace std;

struct DT{
	double *a; //mang chua cac he so cua da thuc
	int n; //bac da thuc
};

void nhapDT(DT& dathuc){
	cout << "Nhap bac cua da thuc: "; cin >> dathuc.n;
	dathuc.a = new double[dathuc.n + 1];
	cout << "Nhap cac he so cua da thuc: ";
	for(int i = 0; i <= dathuc.n; i++){
		cin >> dathuc.a[i];
	}
}

void inDT(DT dathuc){
	for(int i = 0; i < dathuc.n; i++){
		if(dathuc.a[i] == 0) continue;
		if (i == 0 && dathuc.a[i] != 0){
			cout << dathuc.a[i];
		}
		else if(dathuc.a[i] != 0){
			cout << dathuc.a[i] << "x^" << i;
		}
		if(i != dathuc.n - 1 && dathuc.a[i + 1]) cout << " + ";
	}
	if(dathuc.a[dathuc.n]) cout << " + " << dathuc.a[dathuc.n] << "x^" << dathuc.n; 
}

int main(){
	DT dathuc;
	nhapDT(dathuc);
	inDT(dathuc);
}
