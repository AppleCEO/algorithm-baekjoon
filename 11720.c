#include <stdio.h>
  
int main(){
    int i, N, sum=0;

    scanf("%d", &N);
    char input[N];

    scanf("%s", input);

    for(i=0; i<N; i++){
        sum += input[i]-'0';
    }

    printf("%d", sum);

    return 0;
}
