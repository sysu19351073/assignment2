#include<iostream>
using namespace std;

class Identity
{
public:
	long long int number_;
	string name_;
	Identity(long long int number, string name);
	Identity(Identity& id);
	~Identity();
	void setf(long long int num, string nam);
	void getf();
};

Identity::Identity(long long int number, string name) :number_(404), name_("reef")
{
	cout << "constructor" << endl;
}

Identity::Identity(Identity& id) : number_(id.number_), name_(id.name_)
{
	number_ = id.number_;
	name_ = id.name_;
	cout << "copy constructor" << endl;
}

Identity::~Identity()
{
	cout << "distructor" << endl;
}

void Identity::getf()
{
	cout << name_ << ":" << number_ << endl;
}

void Identity::setf(long long int num, string nam)
{
	number_ = num;
	name_ = nam;
}

class Student
{
private:
	Identity id_;
	string school_;
public:
	Student(Identity id, string school);
	Student(Student& st);
	~Student();
	void setdf(Identity id, string school);
	void getdf();
};

Student::Student(Identity id, string school) :id_(id), school_(school)
{
	cout << "constructor" << endl;
}

Student::Student(Student& st) : id_(st.id_), school_(st.school_)
{
	id_ = st.id_;
	school_ = st.school_;
	cout << "copy constructor" << endl;
}

Student::~Student()
{
	cout << "distructor" << endl;
}

void Student::setdf(Identity id, string school)
{
	id_ = id;
	school_ = school;
}

void Student::getdf()
{
	cout << school_ << "\t" << id_.name_ << ":\t" << id_.number_ << endl;
}

Student MakeStudent(long long int number0, const char* name0, string school0)
{
	Identity id0(number0, name0);
	id0.setf(number0, name0);
	Student st0(id0, school0);
	return st0;
}

int main()
{
	Student MakeStudent(long long int number, const char* name, string school);
	Identity id1(440106200108134011, "great_xian");
	id1.setf(440106200108134011, "xian");
	id1.getf();
	Student st1(id1, "sysu");
	st1.setdf(id1, "sysu_unv");
	st1.getdf();
	MakeStudent(440106200108134000, "hua", "sysu").getdf();
	return 0;
}