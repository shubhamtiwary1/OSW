#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
	int a,b;
	char c;
	printf("Enter the two mumber: ");
	scanf("%d %d",&a, &b);
	printf("Enter the oprtator: ");
	scanf("%c", &c);
	scanf("%c", &c);
	switch(c){
		case '+' : printf("%d", a+b);
			break;
		case '-' : printf("%d", a-b);
		 	break;
		 case '/' : printf("%d", a/b);
		 	break;
		 case '*' : printf("%d", a*b);
		 	break;
		 case '%' : printf("%d", a%b);
		 	 break;
		 case '^' : printf("%d", a^b);
		 	 break;
		 case '2' : printf("%lf %lf", sqrt(a), sqrt(b));
		 	 break;
		 case '3' : printf("%lf %lf", cbrt(a), cbrt(b));
		 	 break;
		 case 's' : printf("%lf %lf", sin(a*PI/180), sin(b*PI/180));
		 	break;
		 case 'c' :printf("%lf %lf", cos(a*PI/180), cos(b*PI/180));
		 	break;
		 default : printf("Exit ");
	}
	printf("\n");
}
