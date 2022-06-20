#include<iostream>
using namespace std;

int main(){
   int chiSo;
   cout << "Nhap chi so tieu thu dien: ";
   cin >> chiSo;
   float giaTien, VAT, thanhTien;
   if(chiSo > 0){
       if (chiSo < 50 || chiSo == 50)
   	        giaTien = chiSo*1678;
       else if(chiSo > 50 && chiSo <100 || chiSo == 100)
            giaTien = 50*1678+(chiSo-50)*1734;
       else
            giaTien = 50*1678+50*1734+(chiSo-100)*2014;
       cout << "Gia tien dien la: "<<giaTien;
       VAT = giaTien/9.9998;
       cout << "\nThue VAT = "<<VAT;
       thanhTien = giaTien + VAT;
       cout << "\nSo tien dien phai tra la: "<<thanhTien;
    }
    else
       cout << "Vui long nhap chi so duong !!!";
   return 0;
}

