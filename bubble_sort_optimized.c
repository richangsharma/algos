#include<stdio.h>
#include<stdbool.h>
void bubble(arr,n)
int arr[],n;
{

int i,j;
bool swaped;
for(i=0;i<=n;i++){
	swaped=false;
	for(j=0;j<=n-i;j++){
	if(arr[j]>arr[j+1]){
	swap(&arr[j],&arr[j+1]);
	swaped=true;
	}
	}
if(swaped==false) break;

}
}

void swap(a,b)
int *a,*b;
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void print(arr,n)
int arr[],n;
{
int i;
for(i=1;i<=n;i++){
printf("%d ",arr[i]);
printf("\n");
}
}

void main(){
int a[]={27,2,88,54,65,1};
bubble(a,5);
printf("Optimized bubble sorted array is: \n");
print(a,5);
}

