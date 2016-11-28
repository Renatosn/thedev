#include <stdio.h>
 int main () {

	int resultado, a, b;
	char operacao;
	scanf("%d %c %d",&a, &operacao, &b);
	//scanf("%d",&b);
	switch (operacao) {
	    case '+':
	     resultado= a+b;
	     break;

	    case '-':
	     resultado= a-b;
	     break;

        case '/':
	     resultado= a/b;
	     break;

        case 'x':
	     resultado= a*b;
	     break;
	    default: printf("ERRO");
	}
	 printf("%d",resultado );
	 return-0;
 }
