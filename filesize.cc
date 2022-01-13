/**
 * Author: Eddy Qiu
 * Date: 01/13/2022
 * Description: Trivial program for CS4420
 **/

#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // dummy var for counting lines
    string str = "";
    // outputs the program name
    cout << "program: " << argv[0] << endl;
    // count the number of lines from each argument
    for (int arg = 1; arg < argc; ++arg){
        // declare file stream and will read using it
        ifstream s; 
        // counter for lines
        int lines = 0;
        // open the file
        s.open(argv[arg]);
        // if cannot be opened, set lines = -1
        if(!s){
            lines = -1;
        } else {
            // else count number of lines
            while(getline(s, str)){
                lines+=1;
            }
        }
        // output each file's name and its lines
        cout << " " << argv[arg] << ": " << lines << endl;
        // closes stream
        s.close();
    }
    exit(0); // this means that the program executed correctly!
}
