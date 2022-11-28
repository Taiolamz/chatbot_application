#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << " ------------------------" << endl;
    cout << "|                        |" << endl;
    cout << "|                        |" << endl;
    cout << "|                        |" << endl;
    cout << "|                        |" << endl;
    cout << "| C H A T B O T          | " << endl;
    cout << "| A P P L I C A T I O N  |" << endl;
    cout << "|        B Y             |" << endl;
    cout << "|     G E N E S I S      |" << endl;
    cout << "|          - -           |" << endl;
    cout << "|           O            |" << endl;
    cout << "|                        |" << endl;
    cout << "|                        |" << endl;
    cout << "|                        |" << endl;
    cout << "| ....kindly             |" << endl;
    cout << "| ....maintain           |" << endl;
    cout << "| .......a               |" << endl;
    cout << "| ....lowercase and      |" << endl;
    cout << "| .ignore punctuations   |" << endl;
    cout << "| ........ :)            |" << endl;
    cout << " ------------------------  " << endl;

    string str;
    string statement[14];
    statement[0] = "hello";
    statement[1] = "hi";
    statement[2] = "hey";
    statement[3] = "how much exercise today";
    statement[4] = "i do not really like running, do you recommend any other exercise";
    statement[5] = "i just sat on my sofa watching tv all day";
    statement[6] = "what exercise burns the most calories";
    statement[7] = "why do i have to do exercises";
    statement[8] = "do i have to be on a diet to maintain a perfect shape";
    statement[9] = "thank you";
    statement[10] = "goodbye";
    statement[11] = "well done";
    statement[12] = "excellent";
    statement[13] = "can i ask a question";
    string responses[14] = {"hi there", "hi there", "hi there", "have at least 30 minutes of a moderate physical exercise", "swimming or Biking can replace that", "try taking a walk for about 30-40 minutes and stretch out", "running and Jump rope workout seems to burn the most calories", "to surely keep fit", "a good diet also helps you to keep fit", "you are welcome", "bye! (input exit to close)", "thank you", "thank you" ,"yes please"};
    do
    {
        cout << "Type in your statement" << endl;
        getline(cin, str);
        {
            if (str.find("how") != string::npos || str.find("what") != string::npos || str.find("do") != string::npos)
            {
                cout << "BOT ===>>>  ";
            }
            int len = str.size();
            if (len > 100)
            {
                cout << "Check your spellings or You should try out google ;)" << endl;
            }
            else if (str == statement[0])
            {
                cout << "BOT: hi there :)" << endl;
            }
            else if (str == statement[1])
            {
                cout << "BOT: hi there :)" << endl;
            }
            else if (str == statement[2])
            {
                cout << "BOT: hi there :)" << endl;
            }
            else if (str == statement[3])
            {
                cout << "have at least 30 minutes of a moderate physical exercise" << endl;
            }
            else if (str == statement[4])
            {
                cout << "Swimming or Biking can replace that" << endl;
            }
            else if (str == statement[5])
            {
                cout << "try taking a walk for about 30-40 minutes and stretch out" << endl;
            }
            else if (str == statement[6])
            {
                cout << "running and Jump rope workout seems to burn the most calories" << endl;
            }
            else if (str == statement[7])
            {
                cout << "to surely keep fit" << endl;
            }
            else if (str == statement[8])
            {
                cout << "a good diet also helps you to keep fit" << endl;
            }
            else if (str == statement[9])
            {
                cout << "you are welcome" << endl;
            }
            else if (str == statement[10])
            {
                cout << "bye! (input exit to close)" << endl;
            }
            else if (str == statement[11])
            {
                cout << "thank you" << endl;
            }
            else if (str == statement[12])
            {
                cout << "thank you" << endl;
            }
            else if (str == statement[13])
            {
                cout << "yes please" << endl;
            }
            else
            {
                cout << "i do not understand this, you should give google a try" << endl;
                cout << "***************************" << endl;
                cout << "**********O R *************" << endl;
                cout << "***************************" << endl;
                cout << "input exit to close your program" << endl;
                cout << "***************************" << endl
                     << endl;
            }
        }
    } while (str != "exit");
    {
        cout << "BYE! " << endl;
    }
};