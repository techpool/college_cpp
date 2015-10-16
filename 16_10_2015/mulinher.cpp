/*
	Create a class student which contains the student name, roll no., address and phone number. Create another
	class, marks, which will inherit from student class to include the marks of three subjects to the corresponding
	student. Create another class hostel which will inherit from student class and contain the information of
	hostel(hostel id, hostel name).

	Display all the information of the respective students.

*/
#include<iostream.h>
class marks{
	private:
		int maths;
		int computer;
		int physics;

	public:
		void setMarks(){
			cout << "Enter marks in maths: ";
			cin >> maths;
			cout << "Enter marks in computer: ";
			cin >> computer;
			cout << "Enter marks in physics: ";
			cin >> physics;
		}

		void displayMarks(){
			cout << "\n::MARKS::\n";
			cout << "Maths: " << maths << endl;
			cout << "Computer: " << computer << endl;
			cout << "Physics: " << physics << endl;
		}

};

class hostel{
	private:
		int hostel_id;
		char hostel_name[40];

	public:
		void setHostel(){
			cout << "Enter hostel name: ";
			cin >> hostel_name;
			cout << "Enter hostel id: ";
			cin >> hostel_id;
		}

		void displayHostelInfo(){
			cout << "\n::HOSTEL INFORMATION::\n";
			cout << "Hostel Name: " << hostel_name << endl;
			cout << "Hostel ID: " << hostel_id << endl;
		}
};

class student: public marks, public hostel{
	private:
		char name[40];
		int roll_no;
		char address[100];
		int phone_no;

	public:
		student(){
			//name = "";
			roll_no = 0;
			//address = {};
			phone_no = 0;
		}

		void setData(){
			cout << "Enter the student = ";
			cin >> name;
			cout << "Enter roll number = ";
			cin >> roll_no;
			cout << "Enter address = ";
			cin >> address;
			cout << "Enter phone number = ";
			cin >> phone_no;
		}

		void displayData(){
			cout << "\n::BASIC DATA::\n";
			cout << "Name: " << name << endl;
			cout << "Roll No.: " << roll_no << endl;
			cout << "Address: " << address << endl;
			cout << "Phone No.: " << phone_no << endl;
		}
};

int main(){
	student a;
	a.setData();
	a.setMarks();
	a.setHostel();
	a.displayData();
	a.displayMarks();
	a.displayHostelInfo();
	return 0;
}