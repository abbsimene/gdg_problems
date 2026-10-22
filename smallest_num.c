#include <stdio.h>
#include <string.h>


int main(void) {
  int num[1000];
  int n ,temp;
  int max = 1;
  printf("give us a number between 1 and 1000 \n");
  scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("give us a number : \n");
        scanf("%d", &num[i]);
      }

  for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
          if (num[i] > num[j]) {
              temp = num[i];
              num[i] = num[j];
              num[j] = temp;
          }
      }
  }

  for (int i = 0; i < n; i++) {
    if (num[i] == max) {
        max++;
    }
  }


  printf("the biggest smallest number that doesnt exist in the array is %d", max);
  return 0;
}