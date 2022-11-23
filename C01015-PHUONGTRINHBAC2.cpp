#include<stdio.h>
#include<math.h> 
int main(){
	float a, b, c;
	float d; 
	scanf ("%f%f%f", &a, &b, &c);
	if (a != 0){ 
	d = (float)b*b -4*a*c;
	if (d < 0) printf("NO");
	if (d == 0) printf("%.2f",(float) -b / 2*a);
	if (d > 0) printf ("%.2f %.2f" ,(float) ((-b + sqrt(d)) /(2*a)), (float) ((-b - sqrt(d)) / (2*a)) );
}
    else {
    if ( b == 0) {
    	if ( c != 0) printf("NO");
		 else printf("VO SO NGHIEM"); 
	}
	else printf ("%.2f", (float) - c / b); 
	}  
	
	return 0; 
} 
