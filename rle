#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length=0;
int cCount=0;


int charC(int hold){
	
	int check;
	check=0;
	long long h=(long)(long)hold;
	while(h!=0){
		h/=10;
		check++;
	}
	
	check=check+1;
	return check;
}

int arrSize(char *argvP, int arrLength){
	
	int i;
	int count=1;
	char letter;

	for(i=0;i<arrLength;i++){
		letter=argvP[i];
		if(i==arrLength-1){
			
			cCount+=charC(count);
			break;
		}
		if(argvP[i+1]==letter){
			count++;
		}else{
			cCount+=charC(count);
			letter=argvP[i+1];
			count=1;
		}
	}
	
	return cCount;
}


int main(int argc, char** argv){
	
	if(argc!=2){
		return 0;
	}
	
	if(strlen(argv[1])==0){
		printf("%s",argv[1]);
		return 0;
	}

	char * arr;
	arr=argv[1];
	length=strlen(arr);
	
	//check for empty string here
	
	if(length==1){
		char test=arr[0];
		if(test>=48&&test<=57){
			printf("error");
			return 0;
		}else{printf("%s",arr); return 0;}
	}
	int i;
	for(i=0;i<length;i++){
		char test=arr[i];
		
		if(test>=48&&test<=57){
			printf("error");
			return 0;
		}
	} 

	if(length==1){
		printf("%s", arr);
		return 0;
	}

	int newL=0;
	newL=arrSize(arr,length);
	
	if(newL>length){
		printf("%s",arr);
		return 0;
	}

	newL=newL*2;
	
	char*compressed=(char*)malloc(newL*sizeof(char));

	if(compressed==NULL){
		return 0;
	}

	compressed[0]='\0';
	
	char cTos[2];
	cTos[1]='\0';
	
	char letterAdd='a';
	int c=0;
	int add=1;


	for(c=0;c<length;c++){
		letterAdd=arr[c];
		if(c==length-1){
			cTos[0]=letterAdd;
			strcat(compressed,cTos);
	
			char arr[12];
			sprintf(arr,"%d",add);
			strcat(compressed,arr);
			break;
		}
		if(arr[c+1]==letterAdd){
			add++;
		}else{
			cTos[0]=letterAdd;
			strcat(compressed,cTos);
			char arr2[12];
			sprintf(arr2,"%d",add);
			strcat(compressed,arr2);
			letterAdd=arr[c+1];
			add=1;
		}
	}

printf("%s \n", compressed);

return 0;

	

}
