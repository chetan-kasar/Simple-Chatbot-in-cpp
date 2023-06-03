#include<iostream>
#include<map>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    map<vector<string> , vector<string>>dataset;
    dataset[{"hi","hello","hey"}] = {"Hello","Welcome","How can I help you"};
    dataset[{"do you know me","know me"}] = {"No","Sorry but I can't","As a ChatBot I don't have any personal information. So I don't know who are you"};
    dataset[{"what is your name", "whats your name"}] = {"ChatBot 3.0","Myself ChatBot","My Name is ChatBot"};
    cout<<"Welcome To chatbot 3.0 !!!!";
    string input = "";
    while(true)
    {
        if(input == "exit")
        {
            break;
        }
        cout<<"\n\nYou : ";
        getline(cin, input);
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        for(auto i : dataset)
        {
            if(find(i.first.begin(), i.first.end(), input) != i.first.end())
            {
                srand(time(0));
                int r = rand()%i.second.size();
                cout<<"Bot : "<<i.second[r];
            }
        }
    }
    return 0;
}