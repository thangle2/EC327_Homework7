#include <iostream>
#include <vector>
#include <algorithm>
//add other libraries if needed

using namespace std;


vector<string> split(const string &expression) {
//returns a vector of strings that represent operands or numbers
 vector<string> result;
 string expression1=expression;
 vector<int> amount;
 string current,signs;
 expression1.erase(std::remove(expression1.begin(),expression1.end(),' '),expression1.end());
 for (int i=0; i<expression1.size();i++){
 	if ((expression1[i]=='*') || (expression1[i]=='+')){
 		amount.push_back(i);
 	}

 }

 if (amount.size()>0){
	 current=expression1.substr(0,amount[0]);
	 result.push_back(current);
}
else{
	result.push_back(expression1);
}
 for (int i=0;i<amount.size()-1;i++){
 	signs=expression1[amount[i]];
 	result.push_back(signs);
 	int amountz=amount[i+1]-amount[i]-1;
 	current=expression1.substr(amount[i]+1,amountz);
 	result.push_back(current);
 	
 }
 signs=expression1[amount[amount.size()-1]];
 result.push_back(signs);
 int amountz=expression1.size()-amount[amount.size()-1]-1;
 current=expression1.substr(amount[amount.size()-1]+1,amountz);
 result.push_back(current);




return result;

//implement your function here

}

 
int main () {
	string test;
	cout<<"Enter an Expression: "<<endl;
	getline(cin,test);
	vector<string> result=split(test);
	for (int i=0;i<result.size();i++){
		cout<<result[i]<<endl;
	}
  //test code: 
  //ask the user to enter an expression
  //call the split function
  //display the split items (numbers and operands) on the console
  

  //add more test cases if needed

  return 0;
}
