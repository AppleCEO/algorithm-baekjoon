#include <stdio.h>
  
int main(){
    int i, j, sum=0;
    char input[100][100] = {0};
    char ch;

    for(i=0; i<100; i++){
       scanf("%s", input[i]);
       ch = input[i][0];
       if(!(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z'))){
           break;
       }
    }

    for(i=0; i<100; i++){
        for(j=0; j<100; j++){
            ch = input[i][j];
            if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z')){
                printf("%c", ch);
            } else {
                break;
            }
        }

        printf("\n");
    }

    return 0;
}
