#include<stdio.h>
#include<stdlib.h>


int main (int argc, char**argv){
	
	if(argc!=3){
		return 0;
	}

	int a=atoi(argv[1]);
	
	int b=atoi(argv[2]);
	if(a==0||b==0){
		if(a==0){
			printf("%d", b);
			return 0;
		}else{
			printf("%d", a);
			return 0;
		}
	}
	
	if(a==b){
		printf("%d\n",a);
		return 0;
	}
	
	if(a==1||b==1){
		printf("1");
		return 0;
	}

	int bigger;
	int smaller;
	
	if(a>b){
		smaller=b;
		bigger=a;
	}else{
		smaller=a;
		bigger=b;
	}

	int remainder=-1;
	int hold=-1;
	int outside=-1;
	int inside=-1;
	
	remainder=bigger%smaller;
	if(remainder==0){
		printf("%d\n", smaller);
		return 0;
	}
	
	hold=remainder;
	inside=smaller;
	outside=remainder;
	remainder=inside%outside;
	
	do{
		if(remainder==0){
			printf("%d \n", hold);
			return 0;
		}else{
			inside=hold;
			hold=remainder;
			outside=remainder;
			remainder=inside%outside;
		}
	}while(remainder!=0);
	
	printf("%d \n", hold);
	return 0;
}
	
