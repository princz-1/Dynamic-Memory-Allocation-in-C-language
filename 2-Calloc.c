/* calloc()
continuous allocation

- initializes with 0
- ptr = (int*)calloc(5,sizeof(int));

*/

#include <stdio.h>

int main(void) {
  float *ptr;
  ptr = (float*)calloc(5,sizeof(float));
  for(int i=0; i<5; i++){
    printf("%f\n",ptr[i]);
  }
  return 0;
}
