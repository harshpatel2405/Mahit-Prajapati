/*
C++ PRACTICAL - MULTIPLE INHERITANCE

Create a program using Multiple Inheritance for a WhatsApp system.

Class: User

* name
* phone
Method: * showUser() -> Display name and phone number.

Class: Messaging

Methods:
* sendMessage() -> Increase message count by 1.
* messageCount
* showMessages() -> Display total messages.

Class: WhatsApp

& Inherit from both User and Messaging.

Add Data Member:
* onlineStatus

Methods:
* goOnline() -> Set the user status to online.
* send() -> Send a message only if the user is online.
* showProfile() -> Display name, phone, online status and message count.

CONDITIONS:

1. Use Multiple Inheritance.
2. Use constructors for initialization.
3. Do not use simple getters/setters.
4. send() must check onlineStatus before sending a message.
5. Demonstrate all functionality in main().

INHERITANCE:
    User          Messaging
      \             /
       \           /
         WhatsApp

*/

#include <iostream>
using namespace std;

class User
{
  string name;
  long long int phone;

protected:
  User(string name, long long int phone)
  {
    this->name = name;
    this->phone = phone;
    cout << "User Class Initialised." << endl;
  }

  // * getters
  void showUser()
  {
    cout << "Name : " << name << endl;
    cout << "Phone : " << phone << endl;
  }

  string getName()
  {
    return name;
  }

  long long int getPhone()
  {
    return phone;
  }
};

class Messaging
{
  int messageCount;

protected:
  Messaging(int messageCount)
  {
    this->messageCount = messageCount;
    cout << "Messaging Class Initialised." << endl;
  }

  void sendMessage()
  {
    messageCount++;
    cout << "New message has been added to all messages and count has been increased...." << endl;
  }

  // * getters
  void showMessages()
  {
    cout << "Total Messages : " << messageCount << endl;
  }

  int getTotalMessage()
  {
    return messageCount;
  }
};

class Whatsapp : protected User, protected Messaging
{
  bool onlineStatus = false;

public:
  Whatsapp(string name, long long int phone, int messageCount) : User(name, phone), Messaging(messageCount)
  {
    cout << "Online Status Class Initialised.." << endl;
  }

  void goOnline()
  {
    onlineStatus = true;
    cout << getName() << " is Online .." << endl;
  }

  void send()
  {
    if (onlineStatus)
    {
      sendMessage();
    }
    else
    {
      cout << getName() << " is Offline..cannot send message.." << endl;
    }
  }

  void showProfile()
  {
    showUser();
    showMessages();
    cout << "Online Status : " << (onlineStatus ? "ON" : "OFF") << endl;
  }
};

int main()
{
  Whatsapp wp("Harsh", 9822234452, 10);
  cout << "\nFunction Call 1\n---------------" << endl;
  wp.showProfile();
  cout << "\nFunction Call 2\n---------------" << endl;
  wp.send();
  cout << "\nFunction Call 3\n---------------" << endl;
  wp.goOnline();
  cout << "\nFunction Call 4\n---------------" << endl;
  wp.send();
  cout << "\nFunction Call 5\n---------------" << endl;
  wp.showProfile();

  return 0;
}