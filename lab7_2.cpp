#include <iostream>
#include <string>
#include<iomanip>
using namespace std;



char findGrade(float score)
{
return score>90?'A' :score>75?'B' :score>60?'C':score>45?'D':'F';
}
int main(){
	//Input the number of students
	int N,j = 0;
	
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];
	//Store names and scores of students into an array 
	    for(int i=0;i<N;i++){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		//cin>>name[i];
		//cin.ignore();
		
		//[Missing Code 2] Get name of the i-th students that may include whitespace.
		cout << "Score of student " << i+1 << ": ";
		cin>>score[i]; 	
		//[Missing Code 3] Get score of the i-th students.
	}
	
	//Print names scores and grades
	j = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(j < N){
		cout << setw(25) << name[j] << setw(8) << score[j] << setw(8) << findGrade(score[j]) << "\n";
		j++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
