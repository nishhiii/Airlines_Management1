#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;        
void mainMenu();          // function declaration
class Management{         // class mgt:: airline system
    public:
      
     Management(){        // default constructor
         mainMenu();
     }

};

class Details{                      // for customer details
    public:
        static string name, gender;      // properties/ attributes                    
        int phoneNo;
        int age;
        string add;
        static int cID;
        char arr[100];
        // setter function
        void information(){              // methods/functions/properties       
            cout<<"\n Enter the customer ID:";
            cin>>cID;
            cout<<"\n Enter the Name :";
            cin.ignore();               // clears input buffer
            getline(cin,name);           // ----------------------------change---------------------
            cin.ignore();
            cout<<"\n Enter the age:";
            cin>>age;
            cout<<"\n Enter the address:";
            cin>>add;
            cout<<"\n Gender :";
            cin>>gender;
            cout<<"Your details is saved with us\n"<<endl;
        }

};
int Details::cID;                          // static member declaration   :     --type className :: name--
string Details::name;
string Details::gender;
class registration{                            // class for ticket 
    public:
        static char choice;                     // attributes
        char choice1;       // for specific flight
        char back;
        static float charges;
        void flights(){
            string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia","Europe"};  
            for(int i=0;i<6;i++){                                       // for printing options
                cout<<(i+1)<<".flight to "<<flightN[i]<<endl;
            }
            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;                       // static
            switch(choice){
                case '1':{
                    cout<<"___________Welcome to Dubai Emirates_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. DUB - 456"<< endl;
                    cout<<"\t01-01-2023  8:00AM 10hrs Rs.20000"<<endl;
                    cout<<"2. DUB - 782"<< endl;
                    cout<<"\t05-01-2023  5:00AM 8hrs Rs.25000"<<endl;
                    cout<<"3. DUB - 657"<< endl;
                    cout<<"\t15-01-2023  10:00PM 12hrs Rs.18000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=20000;
                        cout<<"You have successfully booked the flight DUB - 456"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=25000;
                        cout<<"You have successfully booked the flight DUB - 782"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=18000;
                        cout<<"You have successfully booked the flight DUB - 657"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;       //---------------debug-------------------------
                    cin>>back;
                    break;
                }
                case '2':{
                     cout<<"___________Welcome to Canadian Airlines_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. CA - 211"<< endl;
                    cout<<"\t01-01-2023  8:00AM 14hrs Rs.90000"<<endl;
                    cout<<"2. CA - 231"<< endl;
                    cout<<"\t05-01-2023  5:00AM 19hrs Rs.105000"<<endl;
                    cout<<"3. CA - 251"<< endl;
                    cout<<"\t15-01-2023  10:00PM 20hrs Rs.111000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=90000;
                        cout<<"You have successfully booked the flight CA - 211"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=105000;
                        cout<<"You have successfully booked the flight CA - 231"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=111000;
                        cout<<"You have successfully booked the flight CA - 251"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '3':{
                     cout<<"___________Welcome to UK Airways_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. UK - 321"<< endl;
                    cout<<"\t01-01-2023  8:00AM 14hrs Rs.90000"<<endl;
                    cout<<"2. UK - 341"<< endl;
                    cout<<"\t05-01-2023  5:00AM 19hrs Rs.105000"<<endl;
                    cout<<"3. UK - 361"<< endl;
                    cout<<"\t15-01-2023  10:00PM 20hrs Rs.111000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=90000;
                        cout<<"You have successfully booked the flight UK - 321"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=105000;
                        cout<<"You have successfully booked the flight UK - 341"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=111000;
                        cout<<"You have successfully booked the flight UK - 361"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '4':{
                     cout<<"___________Welcome to US Airways_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. US - 401"<< endl;
                    cout<<"\t01-01-2023  8:00AM 14hrs Rs.90000"<<endl;
                    cout<<"2. US - 471"<< endl;
                    cout<<"\t05-01-2023  5:00AM 19hrs Rs.105000"<<endl;
                    cout<<"3. US - 481"<< endl;
                    cout<<"\t15-01-2023  10:00PM 20hrs Rs.111000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=90000;
                        cout<<"You have successfully booked the flight US - 401"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=105000;
                        cout<<"You have successfully booked the flight US - 471"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=111000;
                        cout<<"You have successfully booked the flight US - 481"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '5':{
                     cout<<"___________Welcome to Australian Airlines_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. AS - 561"<< endl;
                    cout<<"\t01-01-2023  8:00AM 14hrs Rs.90000"<<endl;
                    cout<<"2. AS - 511"<< endl;
                    cout<<"\t05-01-2023  5:00AM 19hrs Rs.105000"<<endl;
                    cout<<"3. aS - 591"<< endl;
                    cout<<"\t15-01-2023  10:00PM 20hrs Rs.111000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=90000;
                        cout<<"You have successfully booked the flight AS - 561"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=105000;
                        cout<<"You have successfully booked the flight AS - 511"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=111000;
                        cout<<"You have successfully booked the flight AS - 591"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                case '6':{
                     cout<<"___________Welcome to European Airlines_________\n"<<endl;
                    cout<<"Your comfort is our priority. Enjoy the journer!"<<endl;
                    cout<<"Following are the flights\n"<<endl;
                    cout<<"1. EU - 661"<< endl;
                    cout<<"\t01-01-2023  8:00AM 14hrs Rs.90000"<<endl;
                    cout<<"2. EU - 601"<< endl;
                    cout<<"\t05-01-2023  5:00AM 19hrs Rs.105000"<<endl;
                    cout<<"3. EU - 621"<< endl;
                    cout<<"\t15-01-2023  10:00PM 20hrs Rs.111000"<<endl;

                    cout<<"Select the flight you want to book: "<<endl;
                    cin>>choice1;
                    if(choice1=='1'){
                        charges=90000;
                        cout<<"You have successfully booked the flight EU - 661"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='2'){
                        charges=105000;
                        cout<<"You have successfully booked the flight EU - 601"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else if(choice1=='3'){
                        charges=111000;
                        cout<<"You have successfully booked the flight EU - 621"<<endl;
                        cout<<"You can go back to menu and take the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to main menu "<<endl;
                    cin>>back;
                    break;

                }
                default :{
                    cout<<"Invalid Input, shifting to the main menu !"<<endl;
                    mainMenu();
                    break;
                }
            }
            mainMenu();
        }

};


float registration::charges;                       // static member declaration
char registration::choice;


class ticket: public registration, Details{               // inherited classs  ,,,, details:customer          ,,, registration:flight
    public:

    // function to save ticket in txt file
      void Bill(){                                         // to create a bill
          string destination="";
          ofstream outf("records.txt");                    // output to txt file:   writing in txt file:  ofstream:class    outf:object
          outf<<"____________ABC Airlines___________"<<endl;     // >> stream insertion op,,,,,,,,, << stream extraction op
          outf<<"_____________Ticket________________"<<endl;
          outf<<"____________________________________"<<endl;
          outf<<"Customer ID: "<<Details::cID<<endl;              // syntax for using static members ,, for customer details
          outf<<"Customer Name: "<<Details::name<<endl;
          outf<<"Customer Gender: "<<Details::gender<<endl;
          outf<<"\tDescription "<<endl<<endl;

          if(registration::choice=='1'){
              destination="Dubai";
          }
          else if(registration::choice=='2'){
              destination="Canada";
          }
          else if(registration::choice=='3'){
              destination="UK";
          }
          else if(registration::choice=='4'){
              destination="USA";
          }
          else if(registration::choice=='5'){
              destination="Australia";
          }
          else if(registration::choice=='6'){
              destination="Europe";
          }
          
              outf<<"Destination\t\t"<<destination<<endl;        // static members for flight details
              outf<<"Flight cost: \t\t"<<registration::charges<<endl;
          
          outf.close();     // to close the file


      }

      // function to print ticket in console
      void dispBill()                      
      {
          ifstream ifs("records.txt");        // ifstream: input from txt file, reading from txt file,,,, ifstream:class,,,ifs:object
          {
              if(!ifs){                                  // file.txt :  bjdabkjdbadbahjhdbhas'c'
                  cout<<"File error!"<<endl;
              }
              while(!ifs.eof()){
                  ifs.getline(arr, 100);
                  cout<<arr<<endl;
              }
          }
          ifs.close();        // for closing the file
      }
};

void mainMenu(){                             // global function
    char lchoice;
   // int schoice;
    char back;

    cout<<"\t                  ABC Airlines\n      "<<endl;
    cout<<"\t___________________Main Menu_________________"<<endl;


    cout<<"\t_____________________________________________"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t|\t Press 1 to add Customer Details          \t"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration          \t"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges           \t"<<endl;
    cout<<"\t|\t Press 4 to Exit                          \t"<<endl;
    cout<<"\t_____________________________________________"<<endl;

    cout<<"Enter the coice : ";
    cin>>lchoice;


    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
     case '1':{
          cout<<"__________Customers__________\n"<<endl;
         d.information();       // setter function
         cout<<"Press any key to go back to Main Menu  ";
         cin>>back;
         if(back){
            mainMenu();
            }
          else{
            mainMenu();
          } break;
       }
          case '2':{
               cout<<"_________Book a Flight using this system_____\n"<<endl;
               r.flights();
               break;
        
        }   
                case '3':{
                cout<<"___________GET YOUR TICKET______\n"<<endl;
                t.Bill();       // setter function : to save tckt in txt file
                cout<<" Your ticket is printed, you can collect it \n"<<endl;
                cout<<"Press any key to display your ticket ";
                cin>>back;
                if(back)
                {
                    t.dispBill();                // getter function: gets tckt from txt file
                    cout<<"Press any key to go back to main menu: ";
                    cin>>back;
                    if(back){
                        
                     mainMenu();
                      }
                     else{
                    mainMenu();
                      }
                }
                else{
                    mainMenu();
                }
                break;
         }
          case '4':{
              cout<<"\n\n\t_________Thank-You__________"<<endl;
              break;
          }
          default :{
              cout<<"Invalid input, Please try again!\n"<<endl;
              mainMenu();
              break;
          }
    }


}

int main(){

    Management Mobj;
    return 0;
}