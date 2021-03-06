#include<iostream.h>
class students{
	private:
		int sub1, sub2, sub3, sub4, sub5;
		float average;
		char grade, name[20];


		void calculate_average(){
			average = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
		}

		void calculate_grade(){
			if(average > 90){
				grade = 'O';
			} else if(average > 80 && average <= 90){
				grade = 'E';
			} else if(average > 70 && average <= 80){
				grade = 'A';
			} else if(average > 60 && average <= 70){
				grade = 'B';
			} else if(average > 50 && average <= 60){
				grade = 'C';
			} else if(average > 40 && average <= 50){
				grade = 'D';
			} else {
				grade = 'F';
			}
		}


	public:
		students(){
			sub1 = sub2 = sub3 = sub4 = sub5 = 0;
			grade = 'F';
			average = 0;
		}

		void setInput(char *n, int a, int b, int c, int d, int e){
			sub1 = a;
			sub2 = b;
			sub3 = c;
			sub4 = d;
			sub5 = e;
			name = n;
		}

		void display_marks(){
			cout << "\nMarks obtained == \n";
			cout << "Subject 1 = " << sub1 << endl;
			cout << "Subject 2 = " << sub2 << endl;
			cout << "Subject 3 = " << sub3 << endl;
			cout << "Subject 4 = " << sub4 << endl;
			cout << "Subject 5 = " << sub5 << endl;
		}

		void display_average(){
			calculate_average();
			cout << "\nAverage of the marks obtained = " << average << endl;
		}

		void display_grade(){
			calculate_grade();
			cout << "\nGrade obtained = " << grade;
		}

		void display_name(){
			cout << "\nStudent name = " << name;
		}
};


int main(){
	students s[10];
	int sub1, sub2, sub3, sub4, sub5, n, i;
   char name[20];

	cout << "Enter the number of students you have = ";
	cin >> n;
	for(i = 0; i < n; i++){
		cout << "\nEnter name = ";
		cin >> name;
		cout << "\nEnter marks for student " << name <<"==\n";
		cout << "Subject 1 = ";
		cin >> sub1;
		cout << "Subject 2 = ";
		cin >> sub2;
		cout << "Subject 3 = ";
		cin >> sub3;
		cout << "Subject 4 = ";
		cin >> sub4;
		cout << "Subject 5 = ";
		cin >> sub5;
		s[i].setInput(name, sub1, sub2, sub3, sub4, sub5);
	}

	for(i = 0; i < n; i++){
   	s[i].display_name();
		s[i].display_marks();
		s[i].display_average();
		s[i].display_grade();
	}

	return 0;
}
