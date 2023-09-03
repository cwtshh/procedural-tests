#include <iostream>
#include <string> 
#include <vector>  

using namespace std;

string *generateProceduralMatrix(int height, int width, int percentage, string *matrix) {
    
    for(int i = 0; i < height - 1; i++) {
        for(int j = 0; width -1; j++) {
            if(rand() % 100 < percentage) {
                matrix[i][j] = 'x';
            } else {
                matrix[i][j] = ' ';
            }
        }
    }

    for(int i = 0; i < height - 1; i++) {
        matrix[i][0] = 'x';
        matrix[i][width - 1] = 'x';
    }

    for(int i = 0; i < width - 1; i++) {
        matrix[0][i] = 'x';
        matrix[height - 1][i] = 'x';
    }

    return matrix;
}

int main() {

    int height = 10;
    int width = 10;

    string *matrix = new string[height];

    for(int i = 0; i < height; i++) {
        matrix[i] = string(width, ' ');
    }

    matrix = generateProceduralMatrix(height, width, 50, matrix);

    for(int i = 0; i < height; i++) {
        cout << matrix[i] << endl;
    }



    return 0;
}