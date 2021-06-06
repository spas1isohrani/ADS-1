// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int SIZE, int value) {
  int a;
  int count = 0, leftborder = 0, rightborder = SIZE;
  
   do {
      int i = (leftborder + rightborder)/2;
      a = i;
      if (arr[i] == value) {
        count++;
        while (arr[i] == value) {
          i--;
          if (arr[i] == value) {
            count++;
          }
        }
        while (arr[a] == value) {
          a++;
          if (arr[a] == value) {
            count++;
          }
        }
        return count;
      } else if (arr[i] > value) {
        rightborder = i - 1;
      }
     while (leftborder <= rightborder);
  return 0; // если ничего не найдено
}
