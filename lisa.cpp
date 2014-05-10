#include<iostream>
#include<vector>

using namespace std;

int main()


{

      vector <string> hotelname;

      vector <string> roomlength;

      vector <string> username;

      vector <string> password;

      vector <string> customerid;

      vector <string> customername1;

      vector <string> customerage;

      vector <string> customeroccupation;

      vector <string> customertime;

      vector <string> customerroomtype;

      vector <string> customerbill;

      string bill;

      string type;

      string occupation;

      string time;

      string age;

      string name1;

      string id;

      string pass;

      string user;

      int option;

      string name;

      string length;

      cout<<"Welcome to the Luxury ABC Hotel\n"<<endl;
      cout<<"12 Blue Mahogany Avenue\n"<<endl;
      cout<<"Kingston 5\n"<<endl;
      cout<<"Tel:999-9999\n"<<endl;

      for (int x=0; x < 2; x++)

      {

         cout<<"    ABC Login Page    \n"<<endl;

         cout<< " 1:Administrator login\n"<<endl;

         cout<< " 2:Customer Login\n"<<endl;

         cout<< " 3:Exit\n"<<endl;

         cin>> option;

          if (option==1)


              cout<< "\nLuxury Hotel Admin Login\n"<<endl;

               cout<<"Enter username:\n"<<endl;

               cin>> user;

                username.push_back(user);

                 cout<<"Enter password:\n"<<endl;

                cin>> pass;

                   password.push_back(pass);

                   int option;


                                         {
                                           cout<<"luxury hotel admin login\n"<<endl;

                                           cout<< "1.Add customer\n "<<endl;

                                             cout<< "2.Display Customer\n "<<endl;

                                             cout<<"3.Search Customer\n"<<endl;

                                             cout<<"4.Update Customer\n"<<endl;

                                             cout<<"5.Delete Customer\n"<<endl;

                                             cout<<"6.Room Rates\n"<<endl;

                                             cout<<"7.Generate Bill\n"<<endl;

                                             cout<<"8.Exit\n"<<endl;

                                             cin>> option;

                                             if (option==1)
                                             cout<< "\nLuxury Hotel add customer\n"<<endl;

                                                 cout<<"Enter customer id:\n"<<endl;

                                                     cin>> id;

                                                        customerid.push_back(id);

                                                          cout<<"Enter customer name:\n"<<endl;

                                                              cin>> name1;

                                                                    customername1.push_back(name1);

                                             cout<<"Enter customer age:\n"<<endl;

                                                              cin>> age;

                                                                    customerage.push_back(age);

                                                     cout<<"Enter customer occupation:\n"<<endl;

                                                      cin>> occupation;

                                                          customeroccupation.push_back(occupation);

                                                          cout<<"Enter customer check in time:\n"<<endl;

                                                              cin>> time;

                                                                    customertime.push_back(time);

                                                                    cout<<"Enter customer roomtype:\n"<<endl;

                                                              cin>> type;

                                                                    customerroomtype.push_back(type);

                                                                    cout<<"Enter customer bill:\n"<<endl;

                                                              cin>> bill;

                                                                    customerbill.push_back(bill);

                                                                    cout<<"Do you want to enter another? (Y/N)\n"<<endl;
                                                                    string response;
                                                              cin>> response;

                                                    while (response=="Y");


                                                    }


                                                    cout<<"Customer id#: \n" <<endl;

                                                    cout <<"Customer name: \n"<<endl;

                                                          cout <<"Customer age: \n"<<endl;

                                                           cout <<" Occupation: \n"<<endl;

                                                                cout <<" Check-in date: \n"<<endl;

                                                                cout <<" how long of a stay: \n"<<endl;

                                                                cout <<" Room type: \n"<<endl;

                                                                cout<<"room amount: \n"<<endl;

                                                                 cout <<" click'a' to view more customers\n";

                                                                  string next;
                                                                  cin>> next;

                                                                   if (next=="a")


  {

    cout<<"Customer id#: " ;
     cout<<" Customer name: ";

  cout<<" Customer age: ";

           cout<<"Occupation: ";

                               cout<<" Check-in date: ";

                               cout<<" how long of a stay stay: ";

                                        cout<<"Room type: ";

                                                     cout<<" Bill amount: ";

                                                      }





                                                   }


                                                   }
                                                   }

                                                              cout<<"1. Super Luxury\n";

                                                                                cout<<"2. Luxury\n";

 cout<<"3. Delux\n";

 cout<<"4. Standard \n";

 cout<<"room type number: ";

 cin>> type;

 }

 {

 cout<<"customer id number\n";

 cout<<"Customer id#: \n";

 cout<<" Customer name: \n";

 cout<<" Customer age: \n";

 cout<<" Occupation: \n";

 cout<<" Check-in date: \n";

 cout<<" how long of a stay: \n";

 cout<<" Room type: \n";

 cout<<" Bill amount: \n";

 }



{

gen_bill();

 {

available_room();

 {

 cout<<"1. Super Luxury: \n";

 cout<<"2. Luxury: \n";

 cout<<"3. Delux: \n";

 cout<<"4. Standard \n";

 }
