#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // declaraction 
    int n1,n2;
    float n3,n4;
    
    //inputs 
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&n3,&n4);
    
    // helping varaiables 
    int sum = n1+n2;
    int sub = n1-n2;
    
    float sum1 = n3+n4;
    float sub1 = n3-n4;
    
    //printing output 
    printf("%d %d\n",sum,sub);
    printf("%.1f %.1f\n",sum1,sub1);
    
    return 0;
}
