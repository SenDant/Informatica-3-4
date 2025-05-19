#include <stdio.h>
float calculateAge(int age, float orbit);

int main(){
const float MERCURY = 0.2408467;
const float VENUS = 0.61519726;
const float EARTH = 1.0;
const float MARS = 1.8808158;
const float JUPITER = 11.862615;
const float SATURN = 29.447498;
const float URANUS = 84.016846;
const float NEPTUNE = 164.79132;

int user_age;
printf("Please enter your age: ");
scanf(" %d", &user_age);

int user_selection;
printf("Select a planet:\n1. Mercury\n2. Venus\n3.Earth\n4.Mars\n5.Jupiter\n6.Saturn\n7.Uranus\n8.Neptune\nType your choice: ");
scanf(" %d", &user_selection);

if(user_selection == 1){
calculateAge(user_age, MERCURY);
}
else if(user_selection == 2){
calculateAge(user_age, VENUS);
}
else if(user_selection == 3){
calculateAge(user_age, EARTH);
}
else if(user_selection == 4){
calculateAge(user_age, MARS);
}
else if(user_selection == 5){
calculateAge(user_age, JUPITER);
}
else if(user_selection == 6){
calculateAge(user_age, SATURN);
}
else if(user_selection == 7){
calculateAge(user_age, URANUS);
}
else if(user_selection == 8){
calculateAge(user_age, NEPTUNE);
} else {
    printf("That's not any of the options, try again.\n");
}

}

float calculateAge(int age, float orbit)
{
    float result;
    result = age / orbit;
    printf("You'd be %2.f years old!\n", result);
}