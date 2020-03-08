#include<iostream>
using namespace std;

class Identity
{
private:
	long long int number_;
	string name_;
public:
	Identity(long long int number, string name);
	Identity(Identity& id);
	~Identity();
	void setf(long long int num, string nam);
	void getf();
};

Identity::Identity(long long int number, string name):number_(404),name_("reef")
{
	cout << "constructor" << endl;
}

Identity::Identity(Identity& id):number_(id.number_),name_(id.name_)
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

int main()
{
	Identity id1(440106200108134011, "great_xian");
	id1.setf(440106200108134011, "xian");
	id1.getf();
	return 0;
}