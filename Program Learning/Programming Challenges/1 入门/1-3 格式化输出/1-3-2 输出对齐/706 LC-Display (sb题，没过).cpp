#include <bits/stdc++.h>
using namespace std;
void lcdDisplay(int size, string number){
    string outline[5][10] = {
            " - ", "   ", " - ", " - ", "   ", " - ", " - ", " - ", " - ", " - ",
            "| |", "  |", "  |", "  |", "| |", "|  ", "|  ", "  |", "| |", "| |",
            "   ", "   ", " - ", " - ", " - ", " - ", " - ", "   ", " - ", " - ",
            "| |", "  |", "|  ", "  |", "  |", "  |", "| |", "  |", "| |", "  |",
            " - ", "   ", " - ", " - ", "   ", " - ", " - ", "   ", " - ", " - "
    };
    for (int row = 1; row <= (2 * size + 3); row++){
        for (int i = 0; i < number.length(); i++){
            string line;
            int column = number[i] - '0';
            if (row == 1) line = outline[0][column];
            if (2 <= row && row < (size + 2)) line = outline[1][column];
            if (row == (size + 2)) line = outline[2][column];
            if ((size + 3) <= row && row <= (2 * size + 2)) line = outline[3][column];
            if (row == (2 * size + 3)) line = outline[4][column];
            cout << line[0];
            for (int j = 0; j < size; j++) cout << line[1];
            cout << line[2];
            if (i < 7) cout << " ";
        }
        cout << '\n';
    }
}

int main(){
    int size;
    string number;
    while (cin >> size >> number, size){
        lcdDisplay(size, number);
        cout << endl;
    }
    return 0;
}
