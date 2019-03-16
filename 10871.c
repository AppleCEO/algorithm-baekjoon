#include <stdio.h>

int main(){
    int N, X, i, count=0;
    
    scanf("%d %d", &N, &X);
    
    int num[N];
    int result[N];
    
    
    for(i=0; i<N; i++){
        scanf("%d ", &num[i]);
        if(num[i]<X){
            result[count] = num[i];
            count++;
        } 
    }
    
    for(i=0; i<count; i++){
        printf("%d ", result[i]);
    }
    
    return 0;
}
