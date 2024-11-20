#include <stdio.h>
int main (){
	int soNguyen1 = 5;
	int soNguyen2 = 10;
	int tong = soNguyen1 + soNguyen2;
	int hieu = soNguyen1 - soNguyen2;
	int tich = soNguyen1 * soNguyen2;
	int thuong = soNguyen1 / soNguyen2;
	printf("Tong cua %d va %d la: %d\n", soNguyen1, soNguyen2, tong);
	printf("Hieu cua %d va %d la: %d\n", soNguyen1, soNguyen2, hieu);
	printf("Tich cua %d va %d la: %d\n", soNguyen1, soNguyen2, tich);
	printf("Thuong cua %d va %d la: %d\n", soNguyen1, soNguyen2, thuong);
	return 0;
}

