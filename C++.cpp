#include <iostream>
#include <cstring>

struct Student {
    char Fname[20];
    char Mname[20];
    char Lname[20];
    char Subject[20];
};

 struct Student s1;

 int Grading_System(void);
void Number_Times (void);

 char option, M_I, student_M_I;

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
    printf("Data Info\n\n");
    printf(" Given Name: ");
    scanf("%s", &s1.Fname);
    printf("Middle Name: ");
    scanf("%s", &s1.Mname);
    printf("Family Name: ");
    scanf("%s", &s1.Lname);

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
    printf("\nName: %s, %s %c.\n", s1.Lname, s1.Fname, M_I);
    printf("\nA. Math\n");
    printf("B. English\n");
    printf("C. Science\n");
    printf("D. PE\n");
    printf("E. Computer\n");

    printf("\nSelect Subject: ");
    scanf("%s", &option);


    //Option where to input
    if (option=='a' || option=='A' ) {
               printf("\nPlease assign a percentage.\n");
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
                printf("\nPlease try again!(Must total of 100%%)\n");
                goto select_option;
            }
               printf("\nPlease enter the number of each assesment.\n");
               Number_Times ();
               printf("Please enter the scores:\n");
                strcpy(s1.Subject,"Math");

    } else  if (option=='b' || option=='B' ) {
               printf("\nPlease assign a percentage.\n");
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
                printf("\nPlease try again!(Must total of 100%%)\n");
                goto select_option;
            }
               printf("\nPlease enter the number of each assesment.\n");
               Number_Times ();
               printf("Please enter the scores:\n");
                strcpy(s1.Subject,"English");

    } else  if (option=='c' || option=='C' ) {
               printf("\nPlease assign a percentage.\n");
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
                printf("\nPlease try again!(Must total of 100%%)\n");
                goto select_option;
            }
               printf("\nPlease enter the number of each assesment.\n");
               Number_Times ();
               printf("Please enter the scores:\n");
                strcpy(s1.Subject,"Science");

    } else  if (option=='d' || option=='D' ) {
               printf("\nPlease assign a percentage.\n");
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
                printf("\nPlease try again!(Must total of 100%%)\n");
                goto select_option;
            }
               printf("\nPlease enter the number of each assesment.\n");
               Number_Times ();
               printf("Please enter the scores:\n");
                strcpy(s1.Subject,"PE");

    } else  if (option=='e' || option=='E' ) {
               printf("\nPlease assign a percentage.\n");
               Grading_System ();
            if ( total_percent != 100 ) {
                system("cls");
                printf("\nPlease try again!(Must total of 100%%)\n");
                goto select_option;
            }
               printf("\nPlease enter the number of each assesment.\n");
               Number_Times ();
               printf("Please enter the scores:\n");
                strcpy(s1.Subject,"Computer");

    }  else {
            system("cls");
            goto select_option;
    }


            for (i=1; i<=number_assignment; i++) {     //input data for assignment
                     printf("\nAssignment %d: ",i);
                     scanf("%d", &assignment);

                    total_assignment = total_assignment + assignment;
                  assignment_average = (float)total_assignment / i;
            assignment_average_total = (assignment_average * (float) (percent_assignment * .01));
            }
            printf("%.2f\n",assignment_average_total );
           for (i=1; i<=number_quiz; i++) {     //input data for quiz
                 printf("      Quiz %d: ",i);
                 scanf("%d", &quiz);

                    total_quiz = total_quiz + quiz;
                  quiz_average = (float)total_quiz / i;
            quiz_average_total = (quiz_average * (float) (percent_quiz * .01));
            }
            printf("%.2f\n",quiz_average_total );

            for (i=1; i<=number_exam; i++) {     //input data for exam
                 printf("      Exam %d: ",i);
                 scanf("%d", &exam);

                    total_exam = total_exam + exam;
                  exam_average = (float)total_exam / i;
            exam_average_total = (exam_average * (float) (percent_exam * .01));
            }
            printf("%.2f\n",exam_average_total );
            for (i=1; i<=number_activities; i++) {     //input data for activities
                 printf("Activities %d: ",i);
                 scanf("%d", &activities);

                    total_activities = total_activities + activities;
                  activities_average = (float)total_activities / i;
            activities_average_total = (activities_average * (float) (percent_activities* .01));
            }
            printf("%.2f\n",activities_average_total );
              for (i=1; i<=number_project; i++) {    //input data for project
                 printf("   Project %d: ",i);
                 scanf("%d", &project);

                    total_project = total_project + project;
                  project_average = (float)total_project / i;
            project_average_total = (project_average * (float) (percent_project * .01));
          }
           printf("%.2f\n",project_average_total );

    // average total grade
    total_grade = assignment_average_total + quiz_average_total + exam_average_total + activities_average_total + project_average_total;

    // check and convert to uppercase
    for (int i = 0; s1.Fname[i]!='\0' || s1.Mname[i]!='\0' || s1.Lname[i]!='\0' || s1.Subject[i]!='\0'; i++) {
          if(s1.Fname[i]  >= 'a' && s1.Fname[i]  <= 'z') {
             s1.Fname[i] = s1.Fname[i] -  32; //convert to uppercase
          }
          if(s1.Lname[i]  >= 'a' && s1.Lname[i]  <= 'z') {
             s1.Lname[i] = s1.Lname[i] -  32; //convert to uppercase
          }
          /*
           if(s1.Subject[i]  >= 'a' && s1.Subject[i]  <= 'z') {
             s1.Subject[i] = s1.Subject[i] -  32; //convert to uppercase
          }
          */
    }


     // Report
      printf("\n\nREPORT");
      printf("\n\nSTUDENT: %s, %s %c.", s1.Lname, s1.Fname, s1.Mname[0]);
      printf("\nSUBJECT: %s",s1.Subject);
      printf("\n  GRADE: %.2f",total_grade);

      FILE *fptr;

         fptr = fopen("database.txt", "w");
      if (fptr == NULL) {

         printf("\n\nFile does not exists. \n");

      } else {
        printf("\n\nThe file is now opened.\n") ;

        // Write the dataToBeWritten into the file
         fprintf(fptr, "%s   %s   %s   %s, %s %c.   %s   %.2f", s1.Lname, s1.Mname, s1.Fname, s1.Lname, s1.Fname, M_I, s1.Subject, total_grade );
         fputs("\n", fptr) ;
        // Closing the file using fclose()
        fclose(fptr) ;
      }

return 0;
}
void Number_Times (void) {

    printf("\nAssignment: ");
    scanf("%d", &number_assignment);
    printf("      Quiz: ");
    scanf("%d", &number_quiz);
    printf("      Exam: ");
    scanf("%d", &number_exam);
    printf("Activities: ");
    scanf("%d", &number_activities);
    printf("   Project: ");
    scanf("%d", &number_project);

    total_number = number_assignment + number_quiz + number_exam + number_activities + number_project;

    printf("     Total: %d\n\n",total_number);
}

int Grading_System(void) {

     printf("\n  Assignment: ");
     scanf("%d",&percent_assignment);
     printf("        Quiz: ");
     scanf("%d", &percent_quiz);
     printf("        Exam: ");
     scanf("%d", &percent_exam);
     printf("  Activities: ");
     scanf("%d", &percent_activities);
     printf("     Project: ");
     scanf("%d", &percent_project);

     total_percent = percent_assignment + percent_quiz + percent_exam +  percent_activities + percent_project;

     printf("       Total: %d%%\n",total_percent);
}
