#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

vector<string> readLetterOutput(const string& exeName) {
    vector<string> outputLines;
    char buffer[256];

    string command = exeName; // e.g., "p.exe"
    FILE* pipe = _popen(command.c_str(), "r");
    if (!pipe) {
        cerr << "Failed to run " << exeName << endl;
        return outputLines;
    }

    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        string line(buffer);
        // Remove trailing newline
        if (!line.empty() && line.back() == '\n')
            line.pop_back();
        outputLines.push_back(line);
    }
    _pclose(pipe);

    return outputLines;
}

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // Store each letter's output
    vector<vector<string>> lettersOutput;
    size_t maxLines = 0;

    for (char c : name) {
        string exeName;
        if (isalpha(c)) {
            exeName = string(1, tolower(c)) + ".exe";
            vector<string> letterLines = readLetterOutput(exeName);
            maxLines = max(maxLines, letterLines.size());
            lettersOutput.push_back(letterLines);
        }
    }

    // Print horizontally aligned
    for (size_t i = 0; i < maxLines; ++i) {
        for (const auto& letter : lettersOutput) {
            if (i < letter.size())
                cout << letter[i] << "  "; // spacing between letters
            else {
                cout << string(letter[0].size(), ' ') << "  "; // blank space if shorter
            }
        }
        cout << endl;
    }

    return 0;
}
