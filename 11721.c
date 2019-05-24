#include <stdio.h>
  
int main(){
    int i, j, sum=0;
    char ch;

    char input[100]={0};

    scanf("%s", input);

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            ch = input[j+i*10];
            if(!(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z'))){
                return 0;
	    }
	    printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

