
#include <iostream>
using namespace std;

// Lab 9 - Noe Zuniga
// CIS 5 Week 09 - Call and return

double average(const int a[], int n) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return static_cast<double>(sum) / n;
}

void printSummary(double avg) {
    cout << "Average: " << avg << endl;
}

int main() {
    const int N = 4;
    int scores[N] = {80, 90, 70, 100};

    double avg = average(scores, N);
    printSummary(avg);

    return 0;
}

