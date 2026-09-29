#define cimg_display 0
#include <CImg.h>

#include <algebrique.hpp>

using std::cout;
using std::endl;
using Image = cimg_library::CImg<unsigned char>;

void mandelbrot(Image& img, int maxIter, Algebrique min, Algebrique max) {

  int iterations;

  double c_iteration_real_part;
  double c_iteration_imaginary_part;

  double c_real_part;
  double c_imaginary_part;

  double couleur;
  unsigned char colour;

  for(int x = 0; x < img.width(); ++x) {
    for(int y = 0; y < img.height(); ++y) {
      double re = min.getRe() + (max.getRe() - min.getRe()) * x / (img.width() - 1);
      double im = min.getIm() + (max.getIm() - min.getIm()) * y / (img.height() - 1);
      Algebrique c(re, im);

      // ICI
      iterations = 0;
      Algebrique c_iteration(0.0, 0.0);

      while(iterations <= maxIter && c_iteration.versPolaire().getMod() <= 2)
      {
        c_iteration_real_part = c_iteration.getRe();
        c_iteration_imaginary_part = c_iteration.getIm();

        c_real_part = c.getRe();
        c_imaginary_part = c.getIm();

        c_iteration.setRe(c_iteration_real_part*c_iteration_real_part - c_iteration_imaginary_part*c_iteration_imaginary_part + c_real_part);
        c_iteration.setIm(2*c_iteration_real_part*c_iteration_imaginary_part + c_imaginary_part);

        iterations++;
      }

      couleur = ((double) iterations / maxIter) * 255.0;
      // Attention aux cast int et double.

      colour = couleur;

      img(x, y, 0) = colour;
      img(x, y, 1) = colour;
      img(x, y, 2) = colour;
    }
  }
}

int main() {
  Image img(640 * 32, 480 * 32, 1, 3, 0);

  mandelbrot(img, 100, {-2.0, -1.0}, {1.0, 1.0});

  img.save_bmp("mandelbrot.bmp");
}
