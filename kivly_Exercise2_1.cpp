#include <iostream>
#include <conio.h>
using namespace std;
class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Enter Employee\'s Number =";
   cin >> emp_num;
   cout << "Enter Employee\'s Salary =" ;
   cin >> emp_comp;
  }
  void display(){
   cout << "Employee\'s Number =" << emp_num << endl;
   cout << "Employee\'s Salary =" << emp_comp << endl;
   cout << "-" << endl;
  }
};
  void garis(){
	cout << "========================+==" << endl;	
  }
  
int main(){
 employee emp1, emp2, emp3;
 cout << "\tDATA EMPLOYEE" << endl;
 garis();
 cout << "Masukan data ke Employee 1" << endl;
 emp1.entData();
 garis();
 cout << "Masukan data ke Employee 2" << endl;
 emp2.entData();
 garis();
 cout << "Masukam data ke Employee 3" << endl;
 emp3.entData();
 
 system ("CLS");
 cout << "==============================" << endl;
 cout << "~ Total Data Yang Di masukan ~" << endl;
 cout << "==============================" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}
