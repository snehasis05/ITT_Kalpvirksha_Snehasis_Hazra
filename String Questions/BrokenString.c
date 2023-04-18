// https://www.codechef.com/problems/BROKENSTRING

#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
    char str[100];
    int noOfTestcase;
    
    scanf("%d", &noOfTestcase);
    while(noOfTestcase>0){
        int result =1;
        scanf("%s",str);
        int len=strlen(str);
        for(int i=0;i<len/2;i++){
            if(str[i]!=str[i+len/2]){
                result=0;


            }
        }
        if(result==1){
            printf("YES");
        }else{
            printf("NO");
        }

        noOfTestcase--;
    }
	return 0;
}

