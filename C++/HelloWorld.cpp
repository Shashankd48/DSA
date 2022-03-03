#include <iostream>
#include <vector>
#include <string>
#include<conio.h>

using namespace std;

string myFunction() {
  
  return "I just got executed!";
}

class FunctionsCollection {
    public:
        string name;
        string age;

    // FunctionsCollection()
};

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    int array[] = {12,12,23};

    string name = "Shashank Dubey";

    FunctionsCollection obj;
    


    string yourMsg =  myFunction();    

    cout<<yourMsg<<" "<<name<<endl;

    for (const string& word : msg)
    {
        cout << word << " ";
    }
	
    cout << endl;

}
