#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    //setting variables for later loops
    int chars=0;
    string line;
    //prompting user for file name
    cout << "Enter a file name: ";
    string name;
    cin >> name;
    ///checking that the file exists and connects
    ifstream ifile(name, ios::in);
    if (!ifile)
        cout << "File not found" << endl;
    
    else{
        //sets starting point to beginning of file
       ifile.seekg(0, ios::beg);
        //while loop until the end of the file
        while (!ifile.eof()){
            //gets a line of the specified file and puts the string into 'line'
            getline(ifile,line );
            //gets length of the line taken from file and adds it to chars
            chars+=line.length();
            
        }
        
    }
    //displays total characters
    cout << chars << " characters." << endl;
    //closes the file
    ifile.close();
    return 0;
}