#include <stdio.h>

float farhToCelsius(float farh) {
  return (farh - 32)*5/9;
}

int main() {
  float farh, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 30;

  for(int i=lower; i<=upper; i=i+step) {
    farh = i;
    celsius = farhToCelsius(farh);
    printf("Celsius: %.2f Fahr: %.2f\n", celsius, farh);
  }
}
