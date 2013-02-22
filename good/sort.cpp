#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <iterator>

int main() {

  std::vector<int> data(100);
  for (int i = 0; i < data.size(); ++i) {
    data[i] = rand() % data.size();
  }
  
  std::sort(data.begin(), data.end());

  std::copy(data.begin(), data.end(), std::ostream_iterator<int>(std::cout, "\n"));
  std::cout << std::endl;
  return 0;
}
