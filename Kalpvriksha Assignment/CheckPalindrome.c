#include<stdio.h>
#include<string.h>

int main(){
    char str[100],revStr[100];
    printf("Enter String to be Checked");
    fgets(str,100,stdin);

    for(int i=0;i<strlen(str);i++){
        revStr[i]=str[strlen(str)-1-i];
    }
    if(strcmp(str,revStr)==0){
        
        printf("String is Palindrome");
    }else{
        

        printf("Not Palindrome");
    }

}