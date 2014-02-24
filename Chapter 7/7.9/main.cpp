#include <iostream>
#include <cctype>
using namespace std;

const int SLEN = 30;

struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n)
{
  for (int i = 0; i < n; i++)
  {

    cout << "Please, enter student's fullname : ";
    cin.getline(pa[i].fullname, SLEN);
    if (isspace(pa[i].fullname[0]))
    {
        n-=1;
        break;
    }
    cout << "Please, enter student's hobby : ";
    cin.getline(pa[i].hobby, SLEN);
    cout << "Please enter student's OOP level : ";
    cin >> pa[i].ooplevel;
    cin.get();
  }
  return n;
}

void display1(student st)
{
    cout << "Student's name : " << st.fullname << endl << "Student's hobby : " << st.hobby << endl <<
            "Student's oop level : " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "Student's name : " << ps->fullname << endl << "Student's hobby : " << ps->hobby << endl <<
            "Student's oop level : " << ps->ooplevel << endl;
}


void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Student's name : " << pa[i].fullname << endl << "Student's hobby : " << pa[i].hobby << endl <<
            "Student's oop level : " << pa[i].ooplevel << endl;
    }
}
int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

	display3 (ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}
