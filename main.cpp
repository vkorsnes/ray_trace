#include <iostream>
#include "vec3.h"

int main() {
  int nx = 200;
  int ny = 100;
  std::cout << "P3\n";
  std::cout << nx << " " << ny << std::endl
	    << 255 << std::endl;
  for (int i = ny-1; i >= 0; --i) {
    for (int j = 0; j < nx; ++j)  {
      vec3 col(float(j) / float(nx), float(i) / float(ny), 0.2);
      int jr = int(255.99*col[0]);
      int jg = int(255.99*col[1]);
      int jb = int(255.99*col[2]);
      std::cout << jr << " " << jg << " " << jb << std::endl;
    }
  }
}
