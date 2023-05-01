#include <stdio.h>
#define diziboyutu 10


int main(int argc, char const *argv[])
{
   
   int arr[diziboyutu] = {2,4,1,3,5,85,-12,4,0,45};

   int i,j,temp,ek_index;
 

   for(i=0;i<diziboyutu-1;i++){
    ek_index = i;

   		for(j=i+1;j<diziboyutu;j++){

          if(arr[ek_index] > arr[j]){
            ek_index = j;          	
          }

   		}

    temp = arr[i];
    arr[i] = arr[ek_index];
    arr[ek_index] = temp;
   
}


    printf("Siralanmis dizi : \n");
    for(i=0;i<diziboyutu;i++){
     	printf("%d  ",arr[i]);
   }
 
  


	return 0;
}