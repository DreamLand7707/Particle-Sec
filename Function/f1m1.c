//����һģʽһ
//һ�κ���
//һ�κ���kx+b
//XYZ1������1
//XYZ1X���������1
#include<stdio.h>
void f11(void)
{
    printf("The mode haven't been set!");

    float XYZ1[3],XYZ2[3],XYZ1X[3],XYZ2X[3],O[3];
    float H,a,b,c,,d;
    int i,j=0;
    

    printf("�������һ��������꣬��ʽ(x,y,z)����Ϊ���\n");
    scanf("%f,%f,%f",&XYZ1[0],&XYZ1[1],&XYZ1[2]);
    printf("������ڶ���������꣬��ʽ(x,y,z)����Ϊ���\n");
    scanf("%f,%f,%f",&XYZ2[0],&XYZ2[1],&XYZ2[2]);
    printf("����������Ҫ�ĸ߶ȣ���λΪ����\n");
    scanf("%f",&H);


//����������
     for(i=1;i<=3;i++,j++)
    {
        O[j]=(XYZ1A[j]+XYZ2[j])/2;
        XYZ1X[j]=XYZ1[j]-O[j];
        XYZ2X[j]=XYZ1[j]-O[j];
    }
//�㷨
    a=
    b=
    c=
    d=

//��֤t1�ķ�Χ
    t1=XYZ1[0]-O[0];
    t2=XYZ2[0]-O[0];
    if(t1>t2)
    {
        printf("t��ȡֵ��ΧΪ[%f,%f]\n",t2,t1);
    }
    else
    {
        printf("t��ȡֵ��ΧΪ[%f,%f]\n",t1,t2);
    }

    printf("���ʽ����:\nx=t\ny=%ft+%f\nz=%ft+%f\n",a,b,c,d);


}