#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

struct Student {
    char Fname[20];
    char Mname[20];
    char Lname[20];
    char U_Fname[20];
    char U_Lname[20];
};

 struct Student s1;

 int Grading_System(void);
void Number_Times(void);

 char option, M_I;

 string Subject;

 int i;

 int percent_assignment, percent_quiz,  percent_exam,   percent_activities,   percent_project ,  total_percent;

 int number_assignment, number_quiz, number_exam, number_activities, number_project;
 int total_number;

 int assignment,total_assignment= 0;
 int quiz,total_quiz = 0 ;
 int exam,total_exam = 0 ;
 int activities,total_activities = 0;
 int project,total_project = 0;

 float total_grade;
 float assignment_average, quiz_average, exam_average, activities_average, project_average;
 float assignment_average_total, quiz_average_total, exam_average_total, activities_average_total, project_average_total;


int main () {

  data_info :
       cout << "Data Info\n\n" << endl;
       cout << " Given Name: ";
        cin >> s1.Fname;
       cout << "Middle Name: ";
        cin >> s1.Mname;
       cout << "Family Name: ";
        cin >> s1.Lname;


     if(s1.Fname[0]  >= 'A' && s1.Fname[0]  <= 'Z' || s1.Mname[0]  >= 'A' && s1.Mname[0] <= 'Z' || s1.Lname[0]  >= 'A' && s1.Lname[0]  <= 'Z') {
            system("cls");
            goto data_info;
          }


    // check and convert to uppercase
    for (int i = 0; s1.Fname[i]!='\0'|| s1.Mname[i]!='\0' || s1.Lname[i]!='\0'; i++) {
          if(s1.Fname[0]  >= 'a' && s1.Fname[0]  <= 'z' || s1.Mname[0]  >= 'a' && s1.Mname[0] <= 'z' || s1.Lname[0]  >= 'a' && s1.Lname[0]  <= 'z') {
             s1.Fname[0] = s1.Fname[0] -  32; //convert to uppercase
                     M_I = s1.Mname[0] = s1.Mname[0] -  32; //convert to uppercase
             s1.Lname[0] = s1.Lname[0] -  32; //convert to uppercase
          }

    }


  select_option:

        cout << "\nName: " << s1.Lname  << ", " << s1.Fname <<" "<<  M_I << "." << endl;
        cout << "\nA. Math" << endl;
        cout << "B. English" << endl;
        cout << "C. Science" << endl;
        cout << "D. PE" << endl;
        cout << "E. Computer" << endl;
        cout << "\nSelect Subject: ";
         cin >> option;


    //Option where to input
    if (option=='a' || option=='A' ) {
              cout << "\nPlease assign a percentage.\n";
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
              cout << "\nPlease try again!(Must total of 100%%)\n";
                goto select_option;
            }
              cout << "\nPlease enter the number of each assesment.\n";
               Number_Times ();
              cout << "Please enter the scores:\n";

                Subject = "Math";

    } else  if (option=='b' || option=='B' ) {
             cout << "\nPlease assign a percentage.\n";
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
              cout << "\nPlease try again!(Must total of 100%%)\n";
                goto select_option;
            }
              cout << "\nPlease enter the number of each assesment.\n";
               Number_Times ();
              cout << "Please enter the scores:\n";

               Subject = "English";

    } else  if (option=='c' || option=='C' ) {
               cout << "\nPlease assign a percentage.\n";
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
              cout << "\nPlease try again!(Must total of 100%%)\n";
                goto select_option;
            }
              cout << "\nPlease enter the number of each assesment.\n";
               Number_Times ();
              cout << "Please enter the scores:\n";

                Subject = "Science";

    } else  if (option=='d' || option=='D' ) {
              cout << "\nPlease assign a percentage.\n";
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
              cout << "\nPlease try again!(Must total of 100%%)\n";
                goto select_option;
            }
              cout << "\nPlease enter the number of each assesment.\n";
               Number_Times ();
              cout << "Please enter the scores:\n";

                Subject = "PE";

    } else  if (option=='e' || option=='E' ) {
               cout << "\nPlease assign a percentage.\n";
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
              cout << "\nPlease try again!(Must total of 100%%)\n";
                goto select_option;
            }
              cout << "\nPlease enter the number of each assesment.\n";
               Number_Times ();
              cout << "Please enter the scores:\n";

               Subject = "Computer";
    }  else {
            system("cls");
            goto select_option;
    }


            for (i=1; i<=number_assignment; i++) {     //input data for assignment
                     cout << "      Assignment " << i << ": " ;
                     cin >> assignment;


                    total_assignment = total_assignment + assignment;
                  assignment_average = (float)total_assignment / i;
            assignment_average_total = (assignment_average * (float) (percent_assignment * .01));
            }

             cout << "Assignment Average: " << assignment_average_total << endl;

           for (i=1; i<=number_quiz; i++) {     //input data for quiz
                   cout << "            Quiz " << i << ": " ;
                   cin >> quiz;

                    total_quiz = total_quiz + quiz;
                  quiz_average = (float)total_quiz / i;
            quiz_average_total = (quiz_average * (float) (percent_quiz * .01));
            }

                   cout << "      Quiz Average: " << quiz_average_total << endl;

            for (i=1; i<=number_exam; i++) {     //input data for exam
                   cout << "            Exam " << i << ": " ;
                   cin >> exam;

                    total_exam = total_exam + exam;
                  exam_average = (float)total_exam / i;
            exam_average_total = (exam_average * (float) (percent_exam * .01));
            }

                   cout << "      Exam Average: " << exam_average_total << endl;

            for (i=1; i<=number_activities; i++) {     //input data for activities
                   cout << "      Activities " << i << ": " ;
                   cin >> activities;


                    total_activities = total_activities + activities;
                  activities_average = (float)total_activities / i;
            activities_average_total = (activities_average * (float) (percent_activities * .01));
            }

                    cout << "Activities Average: " << activities_average_total << endl;

              for (i=1; i<=number_project; i++) {    //input data for project
                    cout << "         Project " << i << ": " ;
                    cin >> project;

                    total_project = total_project + project;
                  project_average = (float)total_project / i;
            project_average_total = (project_average * (float) (percent_project * .01));
          }
                    cout << "   Project Average: " << project_average_total << endl;

             // average total grade
           total_grade = assignment_average_total + quiz_average_total + exam_average_total + activities_average_total + project_average_total;

                    cout << "             Total: " << total_number << endl;
                    cout << "   General Average: " << total_grade << endl;

                //copy the previous value
                strcpy(s1.U_Fname,s1.Fname);
                strcpy(s1.U_Lname,s1.Lname);

    // check and convert to uppercase
    for (int i = 0; s1.Fname[i]!='\0' || s1.Mname[i]!='\0' || s1.Lname[i]!='\0'; i++) {
          if(s1.Fname[i]  >= 'a' && s1.Fname[i]  <= 'z') {
             s1.U_Fname[i] = s1.U_Fname[i] -  32; //convert to uppercase
          }
          if(s1.Lname[i]  >= 'a' && s1.Lname[i]  <= 'z') {
             s1.U_Lname[i] = s1.U_Lname[i]  -  32; //convert to uppercase
          }
          /*
           if(s1.Subject[i]  >= 'a' && s1.Subject[i]  <= 'z') {
             s1.Subject[i] = s1.Subject[i] -  32; //convert to uppercase
          }
          */
    }


     // Report
         cout << "\n\nREPORT";
         cout << "\n\nSTUDENT: " << s1.U_Lname  << ", " << s1.U_Fname <<" "<< s1.Mname[0] << "." << endl;
         cout << "\nSUBJECT: " << Subject;
         cout << "\n  GRADE: " << total_grade;


        ofstream MyFile("database.txt");

        // Write the dataToBeWritten into the file
        cout << "\n\nThe file is now opened.\n";

        MyFile << " " <<  s1.Lname  << "  " << s1.Mname <<"  "<<  s1.Fname << "   " <<  s1.Lname << ", " <<  s1.Fname << "  " << s1.Mname[0] << ".  " <<  Subject << "  " <<  total_grade;
        // Closing the file using fclose()
        MyFile.close();


return 0;
}
void Number_Times (void) {
      cout << "\nAssignment: ";
      cin >> number_assignment;
      cout << "      Quiz: ";
      cin >> number_quiz;
      cout << "      Exam: ";
      cin >> number_exam;
      cout << "Activities: ";
      cin >> number_activities;
      cout << "   Project: ";
      cin >> number_project;

    total_number = number_assignment + number_quiz + number_exam + number_activities + number_project;

      cout << "     Total: " << total_number << "\n\n";

}

int Grading_System(void) {
      cout << "\nAssignment: ";
      cin >> percent_assignment;
      cout << "      Quiz: ";
      cin >> percent_quiz;
      cout << "      Exam: ";
      cin >> percent_exam;
      cout << "Activities: ";
      cin >> percent_activities;
      cout << "   Project: ";
      cin >> percent_project;

     total_percent = percent_assignment + percent_quiz + percent_exam +  percent_activities + percent_project;

     cout << "     Total: " << total_percent << "%%\n";

}
