 #include <stdio.h>

 int main() {
   int length = 5;
   int width = 15;
   int area;
   int perimeter;
   area = length * width;
   perimeter = 4 * length;

   int fahrenheit = 86;
   int celcius;
   celcius = (fahrenheit-32)/1.8;

   int minutes = 349;
   int hours;
   int minutes2;
   hours = minutes/60;
   minutes2 = minutes%60;

   printf("----Area and Perimeter of a Rectangle----\n");
   printf("Area: %d \n", area);
   printf("Perimeter: %d \n", perimeter);
   printf("-----Fahrenheit to Celcius Converter-----\n");
   printf("%d°F = %d°C\n", fahrenheit, celcius);
   printf("------Minutes into Hours and Minutes------\n");
   printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, minutes2);


   return 0;
 }