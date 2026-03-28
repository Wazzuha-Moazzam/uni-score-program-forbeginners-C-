#include <iostream>
using namespace std;

    int studentID[4] = {};
    int studentScore[4] = {};
    string studentGrade[4] = {};

void display(){
for (int a = 0; a < 4 ; a++){
    cout<<"student Id: "<<studentID[a]<<endl;
    
    cout<<"student Score: "<<studentScore[a]<<endl;

    if (studentScore[a] >= 85){
            studentGrade[a] = "A";
        }
        else if (studentScore[a] >= 70 && studentScore[a] < 85){
            studentGrade[a] = "B";
        }
        else if (studentScore[a] >= 60 && studentScore[a] < 70){
            studentGrade[a] = "C";
        }
        else if (studentScore[a] >= 50 && studentScore[a] < 60){
            studentGrade[a] = "D";
        }
        else if (studentScore[a] < 50){
            studentGrade[a] = "F";
        
        }
        cout<<"student Grade: "<<studentGrade[a]<<endl;
}
}

void enterData(){
for (int i = 0; i < 4; i ++){
    cout<<"enter students IDs:  "<<endl;
    cin>>studentID[i];
}
cout<<"students IDs have been stored "<<endl;
    for (int j = 0; j<4 ; j++){
    cout<<"enter students scores in order of their IDs;  "<<endl;
        cin>>studentScore[j];
        if (studentScore[j] < 0 || studentScore[j] >  100){
            cout<<"invalid score try again" <<endl;
            j--;
        }    
}
cout<<"students scores have been stored "<<endl;
}

void search(){
    int ID;
    cout<<"what ID do you want to search for: "<<endl;
    cin>>ID;
    for (int k = 0; k < 4; k++){
        if (studentID[k] == ID){
            cout<<"the score of this student is; "<<studentScore[k]<<endl;
            cout<<"the grade of this student is; "<<studentGrade[k]<<endl;
            break;
        }
        else if (k ==3 && studentID[k] != ID){
                cout<<"studentnot found." <<endl;
        }
            
        
}
}

void maxmin(){

    int max = studentScore[0];
    int min = studentScore[0];
    for (int m = 1; m < 4; m++){
        if (studentScore[m] > max){
            max = studentScore[m];
        }
        if (studentScore[m] < min){
            min = studentScore[m];
        }
        }
    cout<<"Maximum score: "<<max<<endl;
    cout<<"Minimum score: "<<min<<endl;
}

void average(){
    float sum = 0;
    for (int n = 0; n < 4 ; n++){
        sum += studentScore[n];
    }
     cout<< "average score is: "<< sum/4 <<endl;

    int count = 0;
    for (int p = 0; p < 4; p++){
        if (studentScore[p] > sum/4){
            count++;
        }
    } 
    cout<<" the number of students who scored above average is; "<<count<<endl;
    
}

void gradeCount(){
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;
    for (int q = 0; q < 4; q ++){
        if (studentGrade[q] == "A"){
            gradeA++;
        }
        else if (studentGrade[q] == "B"){
            gradeB++;
        }
        else if (studentGrade[q] == "C"){
            gradeC++;
        }
        else if (studentGrade[q] == "D"){
            gradeD++;
        }
        else if (studentGrade[q] == "F"){
            gradeF++;
        }
    }
    cout << "Number of students with grade A: " << gradeA << endl;
    cout << "Number of students with grade B: " << gradeB << endl;
    cout << "Number of students with grade C: " << gradeC << endl;
    cout << "Number of students with grade D: " << gradeD << endl;
    cout << "Number of students with grade F: " << gradeF << endl;
}

int main(){

    enterData();
    
    bool working = true;
    while (working){
        cout<< R"(
    ----- MENU ----- 
    1 Display 
    2 Average 
    3 Highest/Lowest 
    4 Search 
    5 Grade Count 
    6 Exit 
    Enter choice: )";
        int choice;
        cin >> choice;

    
        if (choice == 1){
                display();
            }
            else if (choice == 2){
                average();
            }
            else if (choice == 3){
                maxmin();
            }
            else if (choice == 4){
                search();
            }
            else if (choice == 5){
                gradeCount();
            }
            else if (choice == 6){
                working = false;
                cout << "Exiting the program. Goodbye!" << endl;  
             }
             else{
                cout<<"the output is invalid try again." <<endl;
             }
}
    
    return 0;
}



