#include <stdio.h>
#define NUM 5
int main(void)
{
  int data[NUM], i, j;
  for(i=0; i<NUM; i++) 
    scanf("%d", &data[i]);    
  
  for(i=0; i<NUM-1; i++) {
    for(j=i+1; j<NUM; j++) {
      if(data[i] < data[j]) {
	int tmp = data[i];
	data[i] = data[j];
	data[j] = tmp;
      }
    }
  }

  printf("%d %d %d %d %d\n", data[0], data[1], data[2], data[3], data[4]);
  
  return 0;
}
