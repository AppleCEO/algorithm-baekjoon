#include <stdio.h>
<<<<<<< HEAD

int main(){
    int i, N, sum=0;
    
    scanf("%d", &N);
    char input[N];
    
    scanf("%s", input);

    for(i=0; i<N; i++){
        sum += (int)input[i]-48;
    }
    
    printf("%d", sum);
    
=======
  
int main(){
    int i, N, sum=0;

    scanf("%d", &N);
    char input[N];

    scanf("%s", input);

    for(i=0; i<N; i++){
        sum += input[i]-'0';
    }

    printf("%d", sum);

>>>>>>> c15c7eb0f122243f286858986422b9ed73131841
    return 0;
}
