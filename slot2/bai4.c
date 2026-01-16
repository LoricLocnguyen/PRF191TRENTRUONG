#include<stdio.h>
int main(){
     int chon ; 
    int soluong;
    int gia ;
    int tong ;
    // giá sản phẩm 
	int pizza = 120000 ; 
	int Coca = 15000 ; 
	int goithuoc = 25000 ;
	int keo = 5000 ; 
	
	// in menu
  printf("==========MENU==========\n");
  printf("1. pizza - 120000\n");
  printf("2. Coca - 15000\n ");
  printf("3. goithuoc - 25000\n ");
  printf("4. keo = 5000\n");
  
  // chọn sản phẩm 
  printf("Ban muon chon san pham(1-4) : ");
  scanf("%d",&chon);
  if (chon==1 ) {
  	gia = pizza; 
  }else if (chon==2) {
  	gia = Coca ; 
  }else if (chon==3) {
  	gia = goithuoc;
  }else if (chon ==4){
  	gia = keo;
  	
  }else {
  	printf("Lua chon khong hop le\n");
  }
  
  // nhập số lượng 
  printf("Nhap so luong : ");
  scanf("%d",soluong);
  tong = gia*soluong;
  printf("Tong tien phai tra: %d VND\n",tong);
  return 0 ;
  
  
  
  
}