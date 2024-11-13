#include <iostream>
using namespace std;

// Function to find the position of the last person standing
int josephus(int n, int k) {
    // Base case: if there's only one person, they are the survivor
    if (n == 1)
        return 0;
    else
        // Recurrence relation to find the safe position
        return (josephus(n - 1, k) + k) % n;
}

int main() {
    int n, k;
    cout << "Enter the number of people (n): ";
    cin >> n;
    cout << "Enter the step count (k): ";
    cin >> k;

    // Since position is generally considered from 1, we add 1 to the result
    int survivor = josephus(n, k) + 1;
    cout << "The position of the last person standing is: " << survivor << endl;
    return 0;
}
