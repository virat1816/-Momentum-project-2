#include<stdio.h>

 int main() {
	
	char ch;
	
	printf("Enter any character : ");
	scanf("%c",&ch);
	
	if((ch>='a'&& ch<='z')||(ch<='a'&& ch>='z')){
		 printf("'%c' is alphabet.", ch);
	}
	else if((ch>='0' && ch<='9'))
	{
		printf("'%c' is digit.",ch);
	}else{
		printf("'%c' is Special charater.",ch);
	}
	return 0;
}
