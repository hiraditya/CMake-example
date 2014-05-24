#include<SortAlgorithms.h>
#include<Printer.h>
#include<iostream>


int main() {
  std::vector<int> v;
  int i = 0;
  while(i < 10) {
    v.push_back(100 - i++);
  }
  DEBUG(dbgs() << "\nBefore sorting: " << v;);
  bubbleSort(v);
  DEBUG(dbgs() << "\nAfter sorting: " << v;);
  return 0;
}
