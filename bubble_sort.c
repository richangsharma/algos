
#include<stdio.h>

void bubble(arr,n)
int arr[],n;
{
int i,j;

for(i=0;i<=n;i++){
	for(j=0;j<=n-1;j++){
		if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
	}
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
int i=0;
for(i=0;i<=n;i++)
	printf("%d ",arr[i]);
}

void main(){
int a[]={7,6,5,4,3,1};
bubble(a,5);
printf("The sorted array is here :D : \n");
print(a,5);

}


