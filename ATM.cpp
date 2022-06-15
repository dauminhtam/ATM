#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin, cardid; 
	int i;
	char check;
	printf ("Login: ");
	printf ("\nMoi ban nhap cardid: ");
	scanf ("%d", &cardid);
	printf ("\nMoi ban nhap ma Pin: ");
	scanf ("%d", &pin);
	
	if (cardid == 123 && pin == 456){
		do {
			printf ("\nMoi ban chon chuc nang: ");
			scanf ("%d", &i);
			switch (i){
				case 1:
					printf ("\nMoi ban chon so tien can rut: ");
					break;
				case 2:
					printf ("\nMoi ban chuyen khoan: ");
					break;
				case 3: 
					printf ("\nMoi ban xem so du: ");
					break;
				case 4: 
					printf ("\nKet thuc");
					break;
			}
			printf ("\nBan co muon tiep tuc khong Y/N: ");
			fflush (stdin);
			scanf ("%c", &check);
		}
		while (check ==  'Y' || check == 'y');
	}
	else printf ("\nInvalid");
	return 0;
}
