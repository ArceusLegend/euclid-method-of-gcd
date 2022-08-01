#include<stdio.h>

int euclid(int a, int b){
	if(b==0){
		return a;
	}
	return euclid(b, a/b);
}

int main(){
	int x, y, gcd, temp;
	printf("Enter 2 integers: ");
	scanf("%d%d", &x, &y);
	
	if(x<y){
		temp=x;
		x=y;
		y=temp;
	}
	
	gcd=euclid(x, y);
	printf("Greatest common divisor is: %d", gcd);
	
	return 0;
}
