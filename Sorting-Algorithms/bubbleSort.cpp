#include <bits/stdc++.h>

#define gap cout << endl << endl
#define loop(i, a, b) for (int i = a; i < b; i++)
  using namespace std;

void userswap(int * x, int * y) {
  int temp = * x;
  * x = * y;
  * y = temp;
}
void bubbleSort(int * arr, int size) {
  //outer loop
  loop(i, 0, size - 1) //for passes equal to number of elements
  {
    bool ifSwapped = false; //meaning swap is not  assumed to happen
    loop(j, 0, size - i - 1) {
      if (arr[j] > arr[j + 1]) //if forward is lesser than previous , ned to swap
      {
        userswap( & arr[j], & arr[j + 1]);
        ifSwapped = true; //but here it is swapped
      }
    }
    if (!ifSwapped) //in case we have not swapped even once , means it is already sorted
      break;
  }
}

int main() {
  cout << "**************Bubble Sort ********************";
  gap;

  cout << "Enter the size of the array : ";
  int size;
  cin >> size;
  //taking size as the inout

  //declaring array
  int * arr = new int[size];

  loop(i, 0, size) {
    cout << "Enter the element : ";
    cin >> arr[i];
  }
  gap;

  bubbleSort(arr, size);
  gap;

  cout << "Elements in sorted order are : ";
  loop(i, 0, size) {

    cout << arr[i] << " ";
  }
  delete[] arr;
  return 0;

}
