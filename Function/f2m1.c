//i.函数二模式一
//ii.二次函数
//iii.两点加上一个高度确定二次函数,且两个点在同一个平面,此平面平行于XOZ平面
/*iiii.二次函数是ax^2+bx+c,此函数只是确定了同平面的两个点,其实a和c两个值都没法确定
但是为了方便输入和理解起见,仅仅输入c值即可,正好对应函数的高度*/
#include<stdio.h>
void f21(void)
{
    float A[3],B[3],O[3],A1[3],B1[3];
    float k,a,t1,t2,c;
    char d;
    int i,j=0;
    printf("请输入第一个点的坐标，格式(x,y,z)，均为半角\n");
    scanf("%f,%f,%f",&A[0],&A[1],&A[2]);
    printf("请输入第二个点的坐标，格式(x,y,z)，均为半角\n");
    scanf("%f,%f,%f",&B[0],&B[1],&B[2]);
    printf("请输入你想要的高度，单位为格数\n");
    scanf("%f",&c);
    for(i=1;i<=3;i++,j++)
    {
        O[j]=(A[j]+B[j])/2;
        A1[j]=A[j]-O[j];
        B1[j]=B[j]-O[j];
    }
    k=(A1[2]-B1[2])/(A1[0]-B1[0]);
    a=-c/(A1[0]*A1[0]);
    t1=A[0]-O[0];t2=B[0]-O[0];
    printf("表达式如下:\nx=t\ny=%ft^2+%f\nz=%ft\n",a,c,k);
    if(t1>t2)
    {
        printf("t的取值范围为[%f,%f]\n",t2,t1);
    }
    else
    {
        printf("t的取值范围为[%f,%f]\n",t1,t2);
    }
}