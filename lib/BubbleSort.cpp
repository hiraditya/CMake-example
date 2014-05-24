
// Include 'your' header files before the standard header files.
#include <SortAlgorithms.h>
#include<Printer.h>

#include<vector>


void bubbleSort(std::vector<int>& arr) {
  bool swapped = true;
  size_t n = arr.size();
  unsigned j = 0;
  int tmp;
  while (swapped) {
    swapped = false;
    j++;
    for (unsigned i = 0; i < n - j; i++) {
      if (arr[i] > arr[i + 1]) {
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
        swapped = true;
      }
    }
  //  DEBUG(dbgs() << "\nAfter Iteration: " << j << arr);
  }
}

