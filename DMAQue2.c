// Write a program to allocate memory of size n, where n is entered by the user.
 
  #include <stdio.h>

int main(void) {
int*ptr;
  int n;
  printf("Enter n :");
  scanf("%d",&n);
  ptr = (int*)calloc(n,sizeof(int));

  for(int i=0; i<5; i++){
    printf("%d\n",ptr[i] );
  }

  return 0;
}