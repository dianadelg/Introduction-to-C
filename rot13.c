#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strLength=0;
char hold='a';
int charVal=0;
int x;

void change(char *argvP, int length){ 

	for(x=0;x<length;x++){
		
		
		hold=argvP[x];
		charVal = hold;
		
		if(!((charVal>=65&&charVal<=90)||(charVal>=97&&charVal<=122))){
			continue;
		}else{
			if(charVal>=65&&charVal<=90){
				if(charVal>=65&&charVal<=77){
					charVal=charVal+13;
				
				 
				}else{
					charVal=charVal-13;
				}
			}else{
				if(charVal>=97&&charVal<=109){
					charVal=charVal+13;
				}else{
					charVal=charVal-13;
				}
			}
		}
		hold=charVal;
		argvP[x]=hold;
	}
		return;
}

int main(int argc, char**argv){
	
	if(argc!=2){
		return 0;
	}

	if(strlen(argv[1])==0){
		printf("%s",argv[1]);
		return 0;
	}
	strLength=strlen(argv[1]);	
	
	char * argvP; /*pointer to string */
	argvP=argv[1];
	change(argvP,strLength);
	
	

	printf("%s \n",argv[1]);
	return 0;
}
