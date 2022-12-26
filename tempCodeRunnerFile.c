#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    printf("Number of elemnts: ");
    scanf("%d", &N);
    int a[N];
    printf("Enter 5 integers: ");

    // taking input and storing it in an array
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("Displaying integers: ");

    // printing elements of an array
    for (int i = 0; i < N; ++i)
    {
        printf("%d\n", a[i]);
    }

    printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < N-1; ++i) {
      int j = i+1;
      int k = i+2;
      if(a[i]==a[j]){
          int n = a[i] + a[j];
          a[i]= 0;
          a[j]=n;
      }
      
      else if(a[i]==a[k]){
          int n = a[i]+a[j]+a[k];
          a[k] =n;
          a[i]=0;
          a[j]=0;
      }

  }
  for (int i = 0; i < N; ++i)
    {
        printf("Displaying new array: %d\n", a[i]);
    }

    for (int i = 1; i < N; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("Largest element = %d", a[0]);
}