#include <stdio.h>
int main() 
  {
    int n, i, j;
    printf("Enter the number : ");
    scanf("%d", &n);
    int s = n;
   	for (i = 0; i < s; i++) 
	 {
		printf (" ");
	 }
	printf("0\n");
	int x = n;
	for (i = 0; i < n; i++) 
	   {
		x = x - 1;
		for (j = 0; j < x; j++) 
		 {
			printf(" ");
	  	 }
		int y = x + 1;
		for (j = x ;j < n; j++) {
			if (y <= n) {
				printf("%d", y);
				y++;
			}
		}
		printf("0");
		y = y - 1;
		for (j = n ;j > 0; j--) {
			if (y >= x+1) {
				printf("%d", y);
				y--;
			}
		}
		printf("\n");
	}
	return 0;
}
