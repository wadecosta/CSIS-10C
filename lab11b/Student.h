#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    public:
        Student();
        string getLastName() { return lastName; }
        void setLastName(string val) { lastName = val; }
        string getFirstName() { return firstName; }
        void setFirstName(string val) { firstName = val; }
        string getEmail() { return email; }
        void setEmail(string val) { email = val; }
        // add get and set methods for address, city, zip, phone
        string getAddress(){return address;}
        void setAddress(string val) {address = val;}
        string getCity(){return city;}
        void setCity(string val){city = val;}
        string getZip(){return zip;}
        void setZip(string val){zip = val;}
        string getPhone(){return phone;}
        void setPhone(string val){phone = val;}

        friend istream& operator>>(istream& ins, Student& s);
        friend ostream& operator<<(ostream& outs, Student& s);

    private:
        string lastName;
        string firstName;
        string email;
        string address;
        string city;
        string state;
        string zip;
        string phone;
};

#endif // STUDENT_H
