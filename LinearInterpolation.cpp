#include <iostream>
using namespace std;

static double linear_interpolation() {

    cout << "Linear Interpolation Calculator: \n";

    // Input values
    double max_given_y, min_given_y, target_y, max_given_x, min_given_x;
    cout << "Enter value for max_given_y: ";
    cin >> max_given_y;
    cout << "Enter value for min_given_y: ";
    cin >> min_given_y;
    cout << "Enter value for target_y: ";
    cin >> target_y;
    cout << "Enter value for max_given_x: ";
    cin >> max_given_x;
    cout << "Enter value for min_given_x: ";
    cin >> min_given_x;

    // Left side of equation
    double left_side = (max_given_y - min_given_y) / (max_given_y - target_y);

    // Solve for target_x value on right side of equation
    double target_x = max_given_x - ((max_given_x - min_given_x) / left_side);

    return target_x;
}

int main() {
    while (true) {
        double target_x = linear_interpolation();
        cout << "The interpolated value target_x is: " << target_x << endl;
        
        // Option to restart or exit program loop
        string repeat;
        cout << "Restart? (y/n) ";
        cin >> repeat;
        cout << "\n";
        if (repeat != "y") {
            break;
        }
    }
    return 0;
}
