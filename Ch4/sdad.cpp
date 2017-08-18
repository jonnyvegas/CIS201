
/*
 File: ch4ex14.cpp
 Description:   To maintain one's body weight, an adult human needs to consume enough calories daily to (1) meet
                the basal metabolic rate (energy required to breathe, maintain body temperature, etc). (2) account
                for physical activity such as exercise, and (3) account for the energy required to digest the food
                that is being eaten.  For an adult that weighs P pounds, we can estimate these caloric requirements
                using the following formulas:

                        1.  Basal metabolic rate: Calories required = 70 * ( P / 2.2 ) ^0.756

                        2.  Physical activity: Calories required = 0.0385 * Intensity * P * Minutes

                Here, Minutes is the number of minutes spent during the physical activity, and Intensity is a number
                that estimates the intensity of the activity. Here are some sample numbers for the range of values:

                                                Activity            Intensity
                                            Running 10 mph              17
                                            Running 6 mph               10
                                            Basketball                  8
                                            Walking 1 mph               1

                        3.  Energy to digest food: calories required = TotalCaloriesConsumed * 0.1

                In other words, 10 percent of the calories we consume goes towards digestion.

                Write a function that computes the calories requires for the basal metabolic rate, taking as input a parameter
                for the person's weight.  Write another function that computes the calories required for physical activity,
                taking as input parameters for the intensity, weight, and minutes spent exercising.

                Use these functions in a program that inputs a person's weight, an estimate for the intensity of physical
                activity, the number of minutes spent performing the physical activity, and the number of calories in one
                serving of your favorite food.  The program should then calculate and output how many servings of
                that food should be eaten per day to maintain the person's current weight at the specified activity level.
                The computation should include the energy that is required to digest food.

                    You can find estimates of the caloric content of many foods on the Web.  For example,
                    a double cheeseburger has approximately 1000 calories.

 Created: 09/22/11
*/

#include <iostream>
#include <cmath>

using namespace std;

double intensity, minutes, weight, calories_per_serving, total_servings;
double myRate(double minutes, double intensity, double weight);

int main()

{
    char ans;

    do
    {

        cout << "Enter your weight: ";

        cin >> weight;

        cout << "Enter the minutes spent on physical activity: ";

        cin >> minutes;

        cout << "Estimate the intensity of the activity: ";

        cin >> intensity;

        cout << "Enter the number of calories per serving of your favorite food: ";

        cin >> calories_per_serving;

        cout << endl;
        cout << "To maintain your body weight you would have to consume " << myRate(minutes, intensity, weight)
             << " calories." << endl;

        total_servings = (((myRate(minutes, intensity, weight) * 0.1) + myRate(minutes, intensity, weight)) / calories_per_serving);

        cout << "Or " << total_servings  << " servings of your favorite food. " << endl;

        // Allows the user to restart the program with new data
        cout << endl;
        cout << "Would you like to run this program again? (Y or N)" << endl;
        cin >> ans;
        cout << endl;

    }

    while ((ans=='Y')||(ans=='y'));

    cout << "This is the end of the program." << endl;

    return 0;

}

double myRate(double minutes, double intensity, double weight)
{
    double basal, activity, calories_needed;

    // basal metabolic rate
    basal = 70.0 * pow( (weight/2.2), 0.756 );

    // physical activity
    activity = 0.0385 * intensity * weight * minutes;

    // calories needed to be consumed
    calories_needed = basal + activity;

    // return calories needed
    return calories_needed;
}


