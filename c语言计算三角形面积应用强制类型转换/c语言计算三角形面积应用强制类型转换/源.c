#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
int main() {
	float a=0.0, b=0.0, c=0.0,s=0.0, area=0.0;
	printf("Input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	s = (a + b + c) / 2;
	area = (float)sqrt(s * (s - a) * (s - b) * (s - c));
	printf("area=%f\n", area);
	return 0;
}