#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#include <mysql.h>
#include <string.h>

 MYSQL *conn;
 MYSQL_RES *res;
 MYSQL_ROW row;

 char matrix[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2'};
char matrix_a[29]={' ','*',' ',' ','*','*','*',' ','*',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_b[29]={'*','*','*','*','*',' ',' ','*','*','*','*',' ','*','*','*',' ','*',' ',' ','*','*',' ',' ','*','*','*','*','*'};
char matrix_c[29]={' ',' ','*','*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ','*',' ',' ',' ',' ','*','*',};
char matrix_d[29]={'*',' ',' ',' ','*','*',' ',' ','*',' ','*',' ','*',' ',' ','*','*',' ',' ','*','*','*','*',' ',' ',' ',' ',' '};
char matrix_e[29]={'*','*','*','*','*',' ',' ',' ','*',' ',' ',' ','*','*','*','*','*',' ',' ',' ','*',' ',' ',' ','*','*','*','*'};
char matrix_f[29]={'*','*','*','*','*',' ',' ',' ','*',' ',' ',' ','*','*','*','*','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' '};
char matrix_g[29]={' ',' ','*','*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ','*','*',' ','*',' ','*',' ',' ','*','*'};
char matrix_h[29]={'*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*','*','*','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*'};
char matrix_i[29]={'*','*','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ','*','*','*',' '};
char matrix_j[29]={'*','*','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' '};
char matrix_k[29]={'*',' ',' ','*','*',' ','*',' ','*','*',' ',' ','*',' ',' ',' ','*','*',' ',' ','*',' ','*',' ','*',' ',' ','*'};
char matrix_l[29]={'*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*','*','*','*'};
char matrix_m[28]={'*',' ',' ','*','*','*','*','*','*',' ',' ','*','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_n[28]={'*',' ',' ','*','*','*',' ','*','*',' ','*','*','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_o[28]={' ','*','*',' ','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*',' ','*','*',' '};
char matrix_p[28]={'*','*','*',' ','*',' ',' ','*','*',' ',' ','*','*','*','*',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' '};
char matrix_q[28]={' ','*','*',' ','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ','*','*',' ','*','*','*'};
char matrix_r[28]={'*','*','*',' ','*',' ',' ','*','*',' ',' ','*','*','*','*',' ','*',' ','*',' ','*',' ',' ','*','*',' ',' ','*'};
char matrix_s[28]={' ','*','*',' ','*',' ',' ','*','*',' ',' ',' ',' ','*','*',' ',' ',' ',' ','*','*',' ',' ','*',' ','*','*',' '};
char matrix_t[28]={'*','*','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_u[28]={'*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*','*',' ',' ','*',' ','*','*',' '};
char matrix_v[28]={'*',' ',' ','*',' ','*',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_w[28]={'*',' ',' ','*','*',' ',' ','*','*','*','*','*','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_x[28]={'*',' ',' ','*',' ','*','*',' ',' ','*','*',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char matrix_y[28]={'*',' ',' ','*',' ','*',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' '};
char matrix_z[28]={'*','*','*','*',' ',' ','*',' ',' ','*',' ',' ','*',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' '};

char matrix_entered[29];
 int position;



char q[1000];
char r[1000];
char usercodeEntered[10];
char passwordEntered[10];

void enter();
void answer();
int attempt(ch);
int k=0;

//void finish_with_error();
void check_activation()
{
     char query_string[] = {"SELECT activationstatus FROM pupil where  userCode = '%s' and password = '%s'"};
		sprintf(r, query_string,usercodeEntered,passwordEntered);
		if (mysql_query(conn, r)) {
			//fprintf(stderr, "%s\n", mysql_error(conn));
			//exit(1);

			 finish_with_error(conn);


		}

res=mysql_store_result(conn);
      if(res==NULL){
            finish_with_error(conn);
        }

       int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }
}

void finish_with_error(MYSQL *conn)
{
    fprintf(stderr, "%s\n",mysql_error(conn));
    mysql_close(conn);
    exit(1);
}

int main()
{
     char *server = "localhost";
     char *user = "root";
     char *password = "";
     char *database = "kindercare";



     char command[1000];
     char startDate[20];
     char endDate[20];
     int totalAssignments;



    //connecting to the database
    conn= mysql_init(NULL);
  conn = (mysql_real_connect(conn, server, user, password, database, 0, NULL, 0));
  if(conn)
     {
       printf("Connection successful.\n");
     }
     else{
        printf("Failed to connect.\n");
     }
   printf("============================================================================\n");
   printf("================KINDERCARE ASSIGNMENT MANAGEMENT SYSTEM=====================\n");
   printf("============================================================================\n\n");
     //pupil logs in
    printf("Enter your user code:\n");
      scanf("%s",usercodeEntered );
      fflush(stdin);

    printf("Enter your password:\n");
    scanf("%s", passwordEntered);
    fflush(stdin);




    char query_string[] = {"SELECT * FROM pupil where  userCode = '%s' and password = '%s' "};
		sprintf(q, query_string,usercodeEntered,passwordEntered);
		if (mysql_query(conn, q)) {
			//fprintf(stderr, "%s\n", mysql_error(conn));
			//exit(1);
			 finish_with_error(conn);
		}

		res = mysql_store_result(conn);

		if((row= mysql_fetch_row(res)) > 0) {

     printf("Below are the commands that you can use:\n");
     printf("     1.Viewall\n");
     printf("     2.Checkstatus\n");
     printf("     3.Viewassignment assignmentid\n");
     printf("     4.Checkdates datefrom dateto\n");
     printf("     5.Check ActivationStatus\n");
     printf("     6.Attemptassignment\n");
     printf("     7.RequestActivation\n\n");

     printf("Enter a command\n");
     scanf("%s", command);
    fflush(stdin);


      char a[]="Check_Activation_Status";
      char b[]="RequestActivation";
      char c[]="Viewall";
      char d[]="Checkdates";
      char e[]="Attemptassignment";

     if(strcmp(command,a)==0){
    // check_activation(usercodeEntered,passwordEntered);

    check_activation();

  }


 else if(strcmp(command,b)==0)
  {
      char query_string[] = {"UPDATE pupil SET requeststatus= 'Pending' where  userCode = '%s' AND password = '%s' AND activationstatus = 'deactivated' "};
		sprintf(r, query_string,usercodeEntered,passwordEntered);
		if (mysql_query(conn, r)) {
			//fprintf(stderr, "%s\n", mysql_error(conn));
			//exit(1);

			 finish_with_error(conn);


		}

printf("Activation Request has been successfully sent");

  }


 else if(strcmp(command,c)==0)
 {
     char query_string[] = {"SELECT AssignmentNo,startDate,endDate FROM submiitedassignment WHERE teacherNo=(SELECT teacherNo FROM pupil where userCode = '%s' and password= '%s')"};
     sprintf(r, query_string,usercodeEntered,passwordEntered);
		if (mysql_query(conn, r))
        {
           finish_with_error(conn);

        }
     res=mysql_store_result(conn);
      if(res==NULL){
            finish_with_error(conn);
        }

       int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }

 }

 else if(strcmp(command,d)==0)
 {
     char start[30],end[30];
     printf("Enter startdate yy-mm-dd:");
     scanf("%s",start);

     printf("Enter enddate yy-mm-dd:");
     scanf("%s",end);


    //checking for pupil's user code and password in the database
    char query_string[]="SELECT * FROM submiitedassignment where startDate >= '%s' AND endDate <= '%s' AND teacherNo=(SELECT teacherNo FROM pupil where userCode ='%s')";
    sprintf(q,query_string,start,end,usercodeEntered);
    if(mysql_query(conn,q))
    {
        finish_with_error(conn);
    }

    res=mysql_store_result(conn);
    if(res==NULL)
    {
        finish_with_error(conn);
    }


       int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
            for(int i=0; i<num_fields; i++){
                printf("%s\t", row[i]?row[i]: "NULL");
            }
            printf("\n");
        }

		}

		else if(strcmp(command, e)==0) {
                char assignmentid[20];
                printf("\nEnter assignmentid: ");
                scanf("%s", assignmentid);
             char query_string[]="SELECT Assignment FROM submiitedassignment where AssignmentNo = '%s' AND teacherNo=(SELECT teacherNo FROM pupil where userCode ='%s')";
    sprintf(q,query_string,assignmentid, usercodeEntered);
    if(mysql_query(conn,q))
    {
        finish_with_error(conn);
    }

    res=mysql_store_result(conn);
    if(res==NULL)
    {
        finish_with_error(conn);
    }

char assignment[30];
       int num_fields=mysql_num_fields(res);
           while((row=mysql_fetch_row(res))){
                strcpy(assignment, row[0]);
                int score=0;
                for(int i=0;i<strlen(assignment);++i)
                {

                   // int ;
                   score= attempt(assignment[i]);
                    //total+=k;

                    //printf("%d",k);
                }
                printf("%d",score);



        }

		}

		}

 else
 {
     printf("Incorrect usercode or password");
 }



        return 0;
}



void enter(ch)
{
    system("cls");
    printf("Letter %c",ch);
    printf("\n");
     printf(" _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[0],matrix[1],matrix[2],matrix[3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[4],matrix[5],matrix[6],matrix[7]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[8],matrix[9],matrix[10],matrix[11]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |   %c |   %c |\n",matrix[12],matrix[13],matrix[14],matrix[15]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix[16],matrix[17],matrix[18],matrix[19]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix[20],matrix[21],matrix[22],matrix[23]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |  %c  |\n",matrix[24],matrix[25],matrix[26],matrix[27]);
   printf("|_____|_____|_____|_____|\n");


}


int attempt(ch)
{
    printf("Letter %c",ch);
    printf("\n");
   printf(" _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[0],matrix[1],matrix[2],matrix[3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[4],matrix[5],matrix[6],matrix[7]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix[8],matrix[9],matrix[10],matrix[11]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |   %c |   %c |\n",matrix[12],matrix[13],matrix[14],matrix[15]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix[16],matrix[17],matrix[18],matrix[19]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix[20],matrix[21],matrix[22],matrix[23]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |  %c  |\n",matrix[24],matrix[25],matrix[26],matrix[27]);
   printf("|_____|_____|_____|_____|\n");

   for(int i=0;i<29;i++)
   {

   printf("Enter 0 or 1 at position %c:",matrix[i]);
   scanf("%d",&position);
    fflush(stdin);

   if(position == 0)
   {
       matrix_entered[i]=' ';
   }

   else if(position== 1)
   {

       matrix_entered[i]='*';
   }
   else
   {
       printf("invalid");
       i--;
   }

   }
    if(ch=='A')
 {
     int k=0;
    for(int i=0;i<29;++i)
  {
if(matrix_a[i]==matrix_entered[i])
{
    k++;
}
else
    {
        k+=0;
    }
  }

  }

 else if(ch=='B')
{
for(int i=0;i<29;++i)
{
if(matrix_b[i]==matrix_entered[i])
{
    k++;

}

else
    {
        k+=0;
    }




}





}

else if(ch=='C')
{


for(int i=0;i<29;++i)
{


if(matrix_c[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }

}




}

else if(ch=='D')
{
for(int i=0;i<29;++i)
{


if(matrix_d[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='E')
{

for(int i=0;i<29;++i)
{


if(matrix_e[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='F')
{

for(int i=0;i<29;++i)
{


if(matrix_f[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='G')
{

for(int i=0;i<29;++i)
{


if(matrix_g[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}


else if(ch=='H')
{

for(int i=0;i<29;++i)
{


if(matrix_h[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}


else if(ch=='I')
{

for(int i=0;i<29;++i)
{


if(matrix_i[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }

}



}
else if(ch=='J')
{

for(int i=0;i<29;++i)
{


if(matrix_j[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='K')
{

for(int i=0;i<29;++i)
{


if(matrix_k[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='L')
{

for(int i=0;i<29;++i)
{


if(matrix_l[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='M')
{

for(int i=0;i<29;++i)
{


if(matrix_m[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='N')
{

for(int i=0;i<29;++i)
{


if(matrix_n[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}



}

else if(ch=='O')
{

for(int i=0;i<29;++i)
{


if(matrix_o[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='P')
{

for(int i=0;i<29;++i)
{


if(matrix_p[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='q')
{

for(int i=0;i<29;++i)
{


if(matrix_q[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}
else if(ch=='R')
{

for(int i=0;i<29;++i)
{


if(matrix_r[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}
else if(ch=='S')
{

for(int i=0;i<29;++i)
{


if(matrix_s[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='T')
{

for(int i=0;i<29;++i)
{


if(matrix_t[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='U')
{

for(int i=0;i<29;++i)
{


if(matrix_u[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='V')
{
int k=0;
for(int i=0;i<29;++i)
{


if(matrix_v[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}



printf("%d",k);
}

else if(ch=='X')
{

for(int i=0;i<29;++i)
{


if(matrix_x[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='Y')
{

for(int i=0;i<29;++i)
{


if(matrix_y[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}

else if(ch=='Z')
{

for(int i=0;i<29;++i)
{


if(matrix_z[i]==matrix_entered[i])
{

    k++;

}

else
    {
        k+=0;
    }



}




}


    answer();
    return k;
}

void answer()
{
     printf("\n\n\n\n");
     printf(" _____ _____ _____ _____\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix_entered[0],matrix_entered[1],matrix_entered[2],matrix_entered[3]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix_entered[4],matrix_entered[5],matrix_entered[6],matrix_entered[7]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |  %c  |  %c  |\n",matrix_entered[8],matrix_entered[9],matrix_entered[10],matrix_entered[11]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |  %c  |   %c |   %c |\n",matrix_entered[12],matrix_entered[13],matrix_entered[14],matrix_entered[15]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix_entered[16],matrix_entered[17],matrix_entered[18],matrix_entered[19]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |   %c |\n",matrix_entered[20],matrix_entered[21],matrix_entered[22],matrix_entered[23]);
   printf("|_____|_____|_____|_____|\n");
   printf("|  %c  |   %c |   %c |  %c  |\n",matrix_entered[24],matrix_entered[25],matrix_entered[26],matrix_entered[27]);
   printf("|_____|_____|_____|_____|\n");

}
