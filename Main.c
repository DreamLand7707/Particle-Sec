#include<stdio.h>
int main()
{
    float A[3],B[3],O[3],A1[3],B1[3];
    float k,a,t1,t2,c;
    char d;
    int i,j=0;
    printf("�������һ��������꣬��ʽ(x,y,z)����Ϊ���\n");
    scanf("%f,%f,%f",&A[0],&A[1],&A[2]);
    printf("������ڶ���������꣬��ʽ(x,y,z)����Ϊ���\n");
    scanf("%f,%f,%f",&B[0],&B[1],&B[2]);
    printf("����������Ҫ�ĸ߶�a����λΪ����\n");
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
    printf("����ʽ����:\nx=t\ny=%ft^2+%f\nz=%ft\n",a,c,k);
    if(t1>t2)
    {
        printf("t��ȡֵ��ΧΪ[%f,%f]\n",t2,t1);
    }
    else
    {
        printf("t��ȡֵ��ΧΪ[%f,%f]\n",t1,t2);
    }
    getchar();
    getchar();
    return 0;
}
int prinCoord(int x, int y,int z){
  // 输出坐标
  scanf(“%d%d%d”,&x,&y,&z);
  //算法：
  
  
  
  return x,y,z;
}
