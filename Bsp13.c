float numberOne, numberTwo, result;

int add(float nr1, float nr2, float *res) {
	*res = nr1+nr2;
	return 0;
}

int sub(float nr1, float nr2, float *res) {
	*res = nr1-nr2;
	return 0;
}

int mul(float nr1, float nr2, float *res) {
	*res = nr1*nr2;
	return 0;
}

int div(float nr1, float nr2, float *res) {
	*res = nr1/nr2;
	return 0;
}

int pow(float nr1, float nr2, float *res){
	*res = nr1;
	for (int i = 1; i < nr2; i++)
	{
		*res *= nr1;
	}
	return 0;
}

int readNumbers(float nr1, float nr2) {
	char operation;
	printf("Bitte 1. Zahl eingeben: ");
	scanf("%f", &nr1);
	printf("Bitte 2. Zahl eingeben: ");
	scanf("%f", &nr2);
	printf("Bitte Operation (+,-,*,/) eingeben <andere Zeichen zum Beenden>: ");
	scanf(" %c", &operation);
	if(nr2 ==0 && operation=='/')
	{
		printf("Division durch 0 ist nicht möglich");
	}
	else{
		switch (operation)
		{
			case '+':
				add(nr1,nr2,&result);
				break;
			case '-':
				sub(nr1,nr2,&result);
				break;
			case '*':
				mul(nr1,nr2,&result);
				break;
			case '/':
				div(nr1,nr2,&result);
				break;
			default:
				printf("Fehler, Berechnung nicht möglich!");
				return 1;
				
		}
		printf("%f %c %f = %f\n",nr1,operation,nr2,result);
	}
	

	return 0;
}

//MAIN PROGRAM
int main(void) {

	printf("Taschenrechner\n");
	printf("==============\n");
	readNumbers(numberOne, numberTwo);


	return 0;
}