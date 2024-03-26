#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i, j, k, temp, sum;
    cout << "Enter the no of Employees : ";
    cin >> n;

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int weekly_hours[n][7], employee[n][2];

    for (i = 0; i < n; ++i) {
        employee[i][0] = i;
        sum = 0;
        cout << "Enter weekly hours for Employee " << i + 1 << " :\n";
        for (j = 0; j < 7; ++j) {
            cout << "For " << days[j] << " : ";
            cin >> weekly_hours[i][j];
            sum += weekly_hours[i][j];
        }
        employee[i][1] = sum;
    }

    for (i = 0; i < n - 2; ++i) { 
        for (j = i + 1; j < n; ++j) {
            if (employee[i][1] < employee[j][1]) {
                for (k = 0; k < 2; ++k) {
                    temp = employee[i][k];
                    employee[i][k] = employee[j][k];
                    employee[j][k] = temp;
                }
            }
        }
    }

    cout << "Employee Total_hours_worked" << endl;
    for (i = 0; i < n; ++i) {
        cout << " " << employee[i][0] << "\t" << employee[i][1] << endl;
    }

    return 0;
}
