#include <stdio.h>
int main(){
    int num, x;
    scanf("%d",&num);
    for(x=1;x<11;x++){
        printf("%d x %d = %d\n",x,num,(x*num));
    }
    return 0;
}