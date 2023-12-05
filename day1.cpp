#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string line;
    fstream file("/home/spirit/Documents/adventofcode2023/day1.txt");

    vector<int> calibration_values;
    while (getline(file, line)) {
        vector<int> digits;
        for (int i = 0; i < line.size(); i++) {
            const auto c = line[i];
            if (c >= '0' && c <= '9') {
                digits.push_back(c - '0');
            }
        }
        if (!digits.empty()) {
            calibration_values.push_back(digits[0] * 10 + digits.back());
        }
    }

    int sum = 0;
    for (int value : calibration_values) {
        sum += value;
    }

    cout << "Sum: " << sum << '\n';
    return 0;
}
