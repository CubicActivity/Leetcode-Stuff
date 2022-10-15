#include <iostream>
#include <ctime>
#include <fstream>
#include <cmath>

using namespace std;

string passwordGenerator(int number) //function to generate password
{
    //Possible characters
    const char passwordLetters[]={"0123456789!@#$%^&*/.!=""><-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    
    //Password Length to cap random numbers to 78
    int passwordLength=sizeof(passwordLetters)+1;
    
    //String for the generated password
    string passwordStore="";

    //Random character generator for the password  
    for(int i=0;i<number;i++)
    {
        //adds random character from passwordLetters
        passwordStore+=passwordLetters[int (floor(rand()%passwordLength))];
        
    }
    return passwordStore;
}

  void savePasswords(string passwords[]){
    char files;
    bool answered=false;
        while(answered==false){
        //Asks if the user wants to export his passwords
        cout<<"Do you want to export your passwords to a file?(Y/N)"<<endl;
        cin>>files;

        if(files=='Y' || files=='y'){
            ofstream myFile;   //make a ofstream named myfile
    	    myFile.open("myfile.txt");   //files name is myfile
    	    myFile<<"My generated passwords are: "<<endl<<endl;
    	//Stores the passwords in myfile.txt
	        for(int i=0;i<100;i++){
	        myFile<<passwords[i]<<endl;
	        }   
            answered=true;
        } else if (files=='N' || files=='n'){
            break;
        } else {
            cout<<"Invalid Character! Try again. "<<endl;
        }
        }
        cout<<"Your passwords have been Saved."<<endl;
    }

int main ()
{
    int number,i=0;   //Holds user input for password Length
    char anwser;  
    string storePassword[100];  //Empty string array to Store the generated passwords
    srand(time(NULL));   //make a new random every time 


    cout<<"Welcome To My Password Generator! "<<endl;
    
    while(true)
    {
        //User prompt to enter password length
        cout<<"Enter Your Password Length: ";
        cin>>number;

        
        storePassword[i]=passwordGenerator(number);  //Stores random password
        
        //Prints user's password
        cout<<"Your Password Is: "<<storePassword[i]<<endl<<endl;

        bool answered=false;
        while(answered==false){
        //Asks if the user wants another password
        cout<<"Do You Want To Generate Again?(Y/N) "<<endl;  
        cin>>anwser; 

        if(anwser=='Y' || anwser=='y'){
            answered=true;
            //increments the password array index
            i++;
        } else if (anwser=='N' || anwser=='n'){
            savePasswords(storePassword);
            return 0;
        } else {
            cout<<"Invalid Character! Try again. "<<endl;
        }
        }
    }
    
  
  
    return 0;
}


