#include <iostream>
using namespace std;
// deletes the first element from an array
int main() {
    int n;
    cin >> n;

    int arr[20];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++) {
        cout << arr[i];

        if (i < n - 1) {
            cout << " ";
        }
    }

    return 0;
}
// at the end of the linked list

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int *ptr = &n;
//     int num = *ptr;
//     int sum = 0;

//     while (num > 0) {
//         int digit = num % 10;

//         if (digit % 2 != 0) {
//             sum += digit;
//         }

//         num /= 10;
//     }

//     cout << sum;

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// void calculateMotion(double *u, double *a, int *t) {
//     double finalVelocity = *u + (*a) * (*t);
//     double distance = (*u) * (*t) + 0.5 * (*a) * (*t) * (*t);

//     cout << fixed << setprecision(2);
//     cout << "Final Velocity: " << finalVelocity << endl;
//     cout << "Distance: " << distance;
// }

// int main() {
//     double u, a;
//     int t;

//     cin >> u >> a >> t;

//     calculateMotion(&u, &a, &t);

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Input
// {
// public:
//     string name;
//     int rollNumber;

//     void read()
//     {
//         getline(cin, name);
//         cin >> rollNumber;
//     }

//     void display()
//     {
//         cout << rollNumber << ": " << name;
//     }
// };

// int main()
// {
//     Input student;

//     student.read();
//     student.display();

//     return 0;
// }