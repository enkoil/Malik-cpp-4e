
#include <iostream>

using namespace std;

int main() {
    double score1, score2, score3, score4, score5;

    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    cout << "The average test score is " << (score1 + score2 + score3 + score4 + score5) / 5.0 << " points." << endl;

    return 0;
}