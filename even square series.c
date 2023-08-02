#include <stdio.h> 
int main() {   
  int N, i, sum = 0; 
  printf("Enter the value of N: ");     
  scanf("%d", &N);     
  for (i = 2; i <= N; i+=2) {    
    int term = i * i; 
    sum += term; 
    } 
    printf("Sum of the even square series: %d\n", sum);     
	return 0; 
} 

