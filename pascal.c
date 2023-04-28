#include <stdio.h>

int fatoracao(int num);

int main() {
  
	unsigned short int N, Resul;
  int i, j;
  
	scanf("%hu", &N);
	for (i=0; i<=N; i++) {
    
		  printf("Linha %d: \t", i);
    
		for (j=0; j<=i; j++) {
			
				Resul = fatoracao(i)/(fatoracao(j)*fatoracao(i-j));
			
			printf("%hu\t", Resul);
		}
		putchar('\n');
	}
}

int fatoracao(int num) {
	if (num==0) return 1;
	int i, f = 1;
	for (i=num; i>=1; i--) f *= i;
	return f;
}
