#ifndef DEBUG_H
#define DEBUG_H

#ifndef NDEBUG
#define DEBUG(ARG) do { ARG; } while(0)
#else
#define DEBUG(ARG)
#endif

#include<iostream>
#include<algorithm>

// std::cout to print to screen.
// You can return any stream derived from std::ostream e.g. any filestream
inline std::ostream& dbgs() {
  return std::cout;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "\n";
  for (size_t i = 0; i < v.size(); ++i)
    os << v[i] << " ";
  os << "\n";
  return os;
}
#endif // DEBUG_H
