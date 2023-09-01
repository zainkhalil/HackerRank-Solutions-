#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int total;
    scanf("%d",&total) ; 
    int *arr = (int*)malloc(total* sizeof(int));
    int num = 0;
    int len = 0;
    
      if(arr == NULL)
    {
        printf("-1");
        return -1;    
    }
    
    for(int i = 0;i<total;i++)
    {
        scanf("%d",&arr[i]);
        len++;
        //printf("%d\n",arr[i]);  // chaecking if numbers are stored in array or not 
    }
    
     //    int len = *(&arr + 1) - arr;
     //printf("%d\n",len);
     
   
    int max= 0;
    for(int i = 0 ; i<len;i++)
    {
        max = max + arr[i];
    }
    
    free(arr);
    printf("%d",max); 
    
    return 0;
}
