#include <stdio.h>
int main(){

    int prim=50, seg=20,temp;
    int *punt_num;
    printf("Al inicio - prim; %d y seg=%d ",prim,seg);

    punt_num=&prim;
    temp = *punt_num;

    *punt_num=seg;

    printf("despues - prim=%d   seg= %d",prim,seg);

return 0;
}