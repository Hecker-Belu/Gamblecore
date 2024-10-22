#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdio>
using namespace std;

int main(){
    srand(time(NULL));
    while(true){
        string result = "";
        for(int i=0;i<3;i++){
            int randnum = rand() % 101;
            if(randnum <= 30){
                randnum = 7;
            } else {
                randnum = rand() % 8;
            }
            result += to_string(randnum);
        }
        cout << "Slot Machine: " << result << endl;
        if(result == "777"){
            cout << "Winner!";
            FILE *file = fopen("credit.txt", "w");
            fprintf(file, "You won the jackpot! Here is your hash: cfe8ba78439e7a5fe1418443d26cc16fc76eaa9baaef34895318a2abba5092bd");
            fclose(file);
            break;
        }
        Sleep(500);
    }
    Sleep(5000);
    return 0;
}
