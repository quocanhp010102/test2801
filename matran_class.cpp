#include <iostream>
#include <stdio.h>
using namespace std; 
// test ma trans
class matran{
	private:
	 int hang;
	 int cot;
	 int Matran[50][50];
    public:
    	void Nhap(){
    		cout<<"Nhap so hang: ";
    		cin>>hang;	
    		cout<<"Nhap so cot: ";
    		cin>>cot;
    		for(int i = 0; i < hang; i++){
    			for(int j = 0; j < cot; j++){
    				cout<<"["<<i<<"]["<<j<<"] = ";
    				cin >> Matran[i][j];
				}
			}
			cout << endl;
		}
		void In(){
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					cout << Matran[i][j] << "\t";
				}
			    cout << endl;
			}
		}
		matran tong(matran b){
			matran c;
			c.hang = b.hang;
			c.cot = b.cot;
			for(int i = 0; i < hang; i++){
				for(int j = 0; j < cot; j++){
					c.Matran[i][j] = Matran[i][j] + b.Matran[i][j];
			 }
		  }
			return c;
		}
		matran tich(matran b){
			matran c;
			c.hang = b.hang;
			c.cot = b.cot;
			for(int i = 0; i < hang; i++){
				for(int j = 0; i < hang; j++){
					for(int l = 0; l < cot; l++){
						c.Matran[i][j] = Matran[i][l] * b.Matran[l][j];
					}
				}
			}
			return c;
		}
}; 


int main(){
	matran a, b, c, d;
	cout<<"Nhap ma tran A: "<<endl;
	a.Nhap();
	cout<<"Nhap ma tran B: "<<endl;
    b.Nhap();
    cout<<"Ma tran A la: "<<endl;
	a.In();
	cout<<"Ma tran B la: "<<endl;
	b.In();
	cout<<"Tong 2 ma tran: "<<endl;
    c = a.tong(b);
    c.In();
    cout<<"Tich 2 ma tran: "<<endl;
    d = a.tich(b);
    d.In();
	
}
