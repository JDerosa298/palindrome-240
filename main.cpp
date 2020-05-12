//Program that determines if a word is a palindrome using
//both the stack and queue containers
//Written by John DeRosa
//November 2017
//Language: C++ (g++target)

#include <iostream> //including the needed libraries and header files to create the program
#include<stack>
#include<queue>
#include<stdlib.h>
using namespace std;

int main(void)
{   bool pal=true; //creating the needed variables for the program
    queue<char>user_q;
    string word;
    stack<char>user_s;
    int i=0;
    cout<<"please input the word you think is a palindrome:";// asking the user for the word that they want to test
    cin>>word;
    for(i=0;i<word.size();i++) //pushing each character of the string that the user input into the stack and the queue
     {
         user_q.push(word[i]); // the queue will store the word in the proper order
         user_s.push(word[i]); // the stack will store the word in a reversed order
     }

    while(pal && !(user_q.empty() && user_s.empty())) // looping to test if the word is a palindrome ugh
    {                                                 // if the containers are empty stop testing because the entire
                                                      //word has been checked and is a palindrome
        if(user_q.front()!=user_s.top())// if two letters in the same position are different change the sentinel to false and exit the loop
        {
          pal=false;
        }
        else     // if they are the same then move on to the next position in the word
        {
            user_q.pop();
            user_s.pop();

        }
    }
    if(pal) // if the word is a palindrome communicate this to the user
    {
        cout<<"\n"<<word<<" is a palindrome!!\n";
    }
    else // if the word is not a palindrome communicate this to the user
    {
        cout<<"\n"<<word<<" is not a palindrome.\n";
    }


    return(0);

}
