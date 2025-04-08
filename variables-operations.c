 #include <stdio.h>

 int main() {
  //rectangle area and perimeter
   int length;
   int width;
   printf("Enter the rectangle's width: ");
   scanf("%d", &width);
   printf("Enter the rectangle's length: ");
   scanf("%d", &length);
   int area;
   int perimeter;
   area = length * width;
   perimeter = 2*(width+length);

   //fahrenheit to celcius
   int fahrenheit;
   int celcius;
   printf("Enter Fahrenheit grades: ");
   scanf("%d", &fahrenheit);
   celcius = (fahrenheit-32)/1.8;
   //minutes to hours and minutes
   int minutes;
   int hours;
   int minutes2;
   printf("Enter minutes: ");
   scanf("%d", &minutes);
   hours = minutes/60;
   minutes2 = minutes%60;

   float areacircle;
   int radius;
   areacircle = 3.1416*(radius*radius);
   printf("Enter the radius of the circle: ");
   scanf("%d", &radius);

   printf("----Area and Perimeter of a Rectangle----\n");
   printf("Area: %d \n", area);
   printf("Perimeter: %d \n", perimeter);
   printf("-----Fahrenheit to Celcius Converter-----\n");
   printf("%d°F = %d°C\n", fahrenheit, celcius);
   printf("------Minutes into Hours and Minutes------\n");
   printf("%d minutes is equal to %d hours and %d minutes\n", minutes, hours, minutes2);
   printf("------The area of a circle with a radius of %d is: %.2f------\n", radius, areacircle);


   return 0;
 }