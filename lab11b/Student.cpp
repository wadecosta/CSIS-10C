#include "Student.h"

Student::Student()
{
    //ctor
}


istream& operator>>(istream& ins, Student& s)
{
    string line;
    // this initial do-loop skips over any blank lines
    //  in the file that may be separating data entries
    do{
		getline(ins, line);
		//cout<<"skip loop, read "<<line<<endl;
	} while(line.length()<2&& !ins.fail());
	line.erase(line.length()-1,1);
    s.lastName = line;
    //cout<<"Just assigned lastname to "<<line<<endl;
    //cout<<"and here it is "<<s.lastName<<endl;
	getline(ins, line); // using getline allows multiple words per field
	//cout<<"just read "<<line<<endl;
	line.erase(line.length()-1,1);
	s.firstName = line;
	getline(ins, line);
	//cout<<"just read "<<line<<endl;
	line.erase(line.length()-1,1);
	s.email = line;
	getline(ins, line);//cout<<"just read "<<line<<endl;
	line.erase(line.length()-1,1);
	s.address = line;
    getline(ins, line);//cout<<"just read "<<line<<endl;
    line.erase(line.length()-1,1);
    s.city = line;
    getline(ins, line);//cout<<"just read "<<line<<endl;
    line.erase(line.length()-1,1);
    s.state = line;
    getline(ins, line);//cout<<"just read "<<line<<endl;
    line.erase(line.length()-1,1);
    s.zip = line;
    getline(ins, line);//cout<<"just read "<<line<<endl;
    line.erase(line.length()-1,1);
    s.phone = line;
    return ins;
}

ostream& operator<<(ostream& outs, Student& s)
{
    outs<<"Student: "<<s.lastName<<", "<<s.firstName<<", "<<s.email<<endl;
    outs<<s.address<<", "<<s.city<<", "<<s.state<<", "<<s.zip<<endl;
    outs<<s.phone<<endl<<endl;
    return outs;
}

