//函数一模式一
//一次函数
//一次函数kx+b
//XYZ1是坐标1
//XYZ1X是相对坐标1
#include<stdio.h>
void f11(void)
{
    printf("The mode haven't been set!");

    float XYZ1[3],XYZ2[3],XYZ1X[3],XYZ2X[3],O[3];
    float H,a,b,c,,d;
    int i,j=0;
    

    printf("请输入第一个点的坐标，格式(x,y,z)，均为半角\n");
    scanf("%f,%f,%f",&XYZ1[0],&XYZ1[1],&XYZ1[2]);
    printf("请输入第二个点的坐标，格式(x,y,z)，均为半角\n");
    scanf("%f,%f,%f",&XYZ2[0],&XYZ2[1],&XYZ2[2]);
    printf("请输入你想要的高度，单位为格数\n");
    scanf("%f",&H);


//获得相对坐标
     for(i=1;i<=3;i++,j++)
    {
        O[j]=(XYZ1A[j]+XYZ2[j])/2;
        XYZ1X[j]=XYZ1[j]-O[j];
        XYZ2X[j]=XYZ1[j]-O[j];
    }
//算法
    a=
    b=
    c=
    d=

//验证t1的范围
    t1=XYZ1[0]-O[0];
    t2=XYZ2[0]-O[0];
    if(t1>t2)
    {
        printf("t的取值范围为[%f,%f]\n",t2,t1);
    }
    else
    {
        printf("t的取值范围为[%f,%f]\n",t1,t2);
    }

    printf("表达式如下:\nx=t\ny=%ft+%f\nz=%ft+%f\n",a,b,c,d);


}