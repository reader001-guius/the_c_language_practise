#include <stdio.h>
int main(){
    int ax1,ay1,ax2,ay2;
    int bx1,by1,bx2,by2;
    scanf("%d %d %d %d",&ax1,&ay1,&ax2,&ay2);
    scanf("%d %d %d %d",&bx1,&by1,&bx2,&by2);
    int axbig,axsml;
    if(ax1>ax2){
        axbig=ax1;
        axsml=ax2;

    }
    else{
        axbig=ax2;
        axsml=ax1;
    }
    int aybig,aysml;
    if(ay1>ay2){
        aybig=ay1;
        aysml=ay2;
    }
    else{
        aybig=ay2;
        aysml=ay1;
    }
    int bxbig,bxsml;
    if(bx1>bx2){
        bxbig=bx1;
        bxsml=bx2;
    }
    else{
        bxbig=bx2;
        bxsml=bx1;
    }
    int bybig,bysml;
    if(by1>by2){
        bybig=by1;
        bysml=by2;
    }
    else{
        bybig=by2;
        bysml=by1;
    }
    if(axbig<=bxsml||bxbig<=axsml||aybig<=bysml||bybig<=aysml){
        printf("0");
    }
    else{
        int dxbig,dxsml,dybig,dysml;
        dxbig=axbig<bxbig?axbig:bxbig;
        dxsml=axsml>bxsml?axsml:bxsml;
        dybig=aybig<bybig?aybig:bybig;
        dysml=aysml>bysml?aysml:bysml;
        int squ=(dxbig-dxsml)*(dybig-dysml);
        printf("%d\n",squ);
    }
    return 0;
}