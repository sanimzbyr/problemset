#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <sstream>

using namespace std;

std::vector<int> extractIntegers(const std::string& input) {
    std::vector<int> integers;
    std::string numberStr;
    
    for (char ch : input) {
        if (std::isdigit(ch)) {
            numberStr += ch; // Add digit to the current number string
        } else {
            if (!numberStr.empty()) {
                integers.push_back(std::stoi(numberStr)); // Convert to integer and store
                numberStr.clear(); // Clear the number string for the next number
            }
        }
    }
    
    // If the last part of the string is a number, add it to the vector
    if (!numberStr.empty()) {
        integers.push_back(std::stoi(numberStr));
    }

    return integers;
}

int main() {
    std::string input;
    getline(cin, input);
    std::vector<int> integers = extractIntegers(input);
    
    // Sort the integers in ascending order
    std::sort(integers.begin(), integers.end());
    
    // Use ostringstream to construct the output string
    std::ostringstream oss;
    for (int num : integers) {
        oss << num << "+";
    }
    
    std::string output = oss.str();
    // Remove the last character (trailing space)
    if (!output.empty()) {
        output.pop_back();
    }

    std::cout << output << std::endl;

    return 0;
}
