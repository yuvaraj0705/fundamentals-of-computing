#include <stdio.h> 
int main() { 
    int N, i, sum = 0, sign = 1;     
	printf("Enter the value of N: ");     
	scanf("%d", &N); 
    for (i = 1; i <= N; i++) {         
	if (i % 2 == 0) {         
	    sum -= i;         } 
		else { 
            sum += i; 
        } 
        sign *= -1; 
    } 
    printf("Sum of the series: %d\n	", sum);     
	return 0; 
} 								   			

