#include < stdio.h >

  int main() {
    int temp, arr[1000], n, opt;
    printf("please enter how many integers you want to sort: "); //prompt user for how many numbers user want to sort
    scanf("%d", & n);
    printf("options: 1.ascending order\n2.descending order\nenter option no:");
    scanf("%d", & opt);
    printf("enter numbers to sort:"); //prompt user to select from above options
    for (int i = 0; i < n; i++) {
      scanf("%d", & arr[i]);
    }
    for (int j = 0; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (opt == 1) {
          if (arr[j] > arr[k]) { //swap higher integer with lower one to sort in ascending order
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
          }
        }
        if (opt == 2) {
          if (arr[j] < arr[k]) { // swap lower integer with higher one to sort in descending order
            temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;

          }
        }
      }
    }
    for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
  }