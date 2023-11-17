/* free()
- We use it to free memory that is allocated using malloc & calloc.

- free(ptr);
*/
#include <stdio.h>

int main(void) {
  int*ptr;
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  ptr = (int*)calloc(n,sizeof(int));

  for(int i=0; i<n; i++){
    printf("%d\n",ptr[i] );
  }

  free(ptr);
  ptr = (int*)calloc(2,sizeof(int));
  for(int i=0; i<2; i++){
    printf("%d\n",ptr[i] );
  }
  return 0;
}
