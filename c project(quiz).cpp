#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void get_questions(struct quiz q[50]);
void play_quiz(struct quiz q[50]);


struct quiz{
	char question[500];
	char option1[50];
	char option2[50];
	char option3[50];
	char option4[50];
	int answer_no;
};

int score;

int main(){
	
	struct quiz q[10];

	char play;
	
	printf("****Welcome to Movie&Tv Quiz****\n\n\n");
	
	printf("Here are the rules before you begin:\n\n");
	printf("1. You will be quizzed on 10 movies and tv-shows related questions and you will be given 4 options for each.\n");
	printf("2. You are required to enter the answer no. of the answer you think is correct.\n");
	printf("3. If your answer is correct, you will get a score of 10 points.\n");
	printf("4. If your answer is incorrect, your score will remain the same.\n");
	printf("5. You are required to press a key(any key) to move toward next question.\n");

	printf("\n\nAre you ready to begin? Press 'y' for yes and 'n' for no. ");
	scanf("%c", &play);
	
	if(tolower(play)=='y'){
		get_questions(q);
		play_quiz(q);
	}else 
		return 0;
	
	
	printf("\n\nYour final score is %d out of 100. Way to go!", score);
	
	return 0;	
}

void get_questions(struct quiz q[50]){
		
		strcpy(q[0].question, "1. Who directed 'Pulp Fiction'?");
		strcpy(q[0].option1, "1.Quentin Tarantino");
		strcpy(q[0].option2, "2.Steven Spielberg");
		strcpy(q[0].option3, "3.Christopher Nolan");
		strcpy(q[0].option4, "4.David Fincher");
		q[0].answer_no = 1;
		
		strcpy(q[1].question, "2. What was the first movie released in the Marvel Cinematic Universe?");
		strcpy(q[1].option1, "1.The Indredible Hulk");
		strcpy(q[1].option2, "2.Captain America: The First Avenger");
		strcpy(q[1].option3, "3.Iron Man");
		strcpy(q[1].option4, "4.Thor");
		q[1].answer_no = 3;
		
		strcpy(q[2].question, "3. Leonardo DiCaprio won the Academy Award for Best Actor for his role in which film?");
		strcpy(q[2].option1, "1.Shutter Island");
		strcpy(q[2].option2, "2.The Revenant");
		strcpy(q[2].option3, "3.Django Unchained");
		strcpy(q[2].option4, "4.The Wolf of Wall Street");
		q[2].answer_no = 2;
		
		strcpy(q[3].question, "4. Which country did Chandler tell Janice he was moving to so he could break up with her in ‘Friends’");
		strcpy(q[3].option1, "1.Vietnam");
		strcpy(q[3].option2, "2.Yemen");
		strcpy(q[3].option3, "3.Mongolia");
		strcpy(q[3].option4, "4.Myanmar");
		q[3].answer_no = 2;
		
		strcpy(q[4].question, "5. Which Game of Thrones star was nominated for an Emmy for every single season?");
		strcpy(q[4].option1, "1.Peter Dinklage");
		strcpy(q[4].option2, "2.Emilia Clarke");
		strcpy(q[4].option3, "3.Lena Headey");
		strcpy(q[4].option4, "4.Nikolaj Coster-Waldau");
		q[4].answer_no = 1;
		
		strcpy(q[5].question, "6. Which is the only male roommate on The Big Bang Theory without a doctorate?");
		strcpy(q[5].option1, "1.Leonard");
		strcpy(q[5].option2, "2.Raj");
		strcpy(q[5].option3, "3.Sheldon");
		strcpy(q[5].option4, "4.Howard");
		q[5].answer_no = 4;
		
		strcpy(q[6].question, "7. What is the highest-rated TV series on the IMDB Top 250 TV series list?");
		strcpy(q[6].option1, "1.Game of Thrones");
		strcpy(q[6].option2, "2.Friends");
		strcpy(q[6].option3, "3.Breaking Bad");
		strcpy(q[6].option4, "4.Chernobyl");
		q[6].answer_no = 3;
		
		strcpy(q[7].question, "8. What is the capital of Westeros in Game of Thrones?");
		strcpy(q[7].option1, "1.Winterfell");
		strcpy(q[7].option2, "2.King's Landing'");
		strcpy(q[7].option3, "3.Casterly Rock");
		strcpy(q[7].option4, "4.Dorne");
		q[7].answer_no = 2;
		
		strcpy(q[8].question, "9. What is the Original name of 'Money Heist'?");
		strcpy(q[8].option1, "1.Al filo de la ley");
		strcpy(q[8].option2, "2.El abuelo");
		strcpy(q[8].option3, "3.A flor de pell");
		strcpy(q[8].option4, "4.La Casa De Papel");
		q[8].answer_no = 4;
		
		strcpy(q[9].question, "10. In what UK city does Peaky Blinders take place?");
		strcpy(q[9].option1, "1.Brimingham");
		strcpy(q[9].option2, "2.Liverpool");
		strcpy(q[9].option3, "3.Manchester");
		strcpy(q[9].option4, "4.London");
		q[9].answer_no = 1;
		
}

void play_quiz(struct quiz q[50]){
	
	int ans;
	
	for(int i=0;i<10;i++){
		
		system("cls");
		printf("\n\nYour current score is %d/100\n\n\n", score);
					
		printf("%s\n\n", q[i].question);
		
		printf("%s\t%s\n%s\t%s\n\n", q[i].option1, q[i].option2, q[i].option3, q[i].option4);
		
		scanf("%d",&ans);
		
		if(ans == q[i].answer_no){
			printf("Correct!!");
			score += 10;
		}else{
			printf("Sorry, incorrect.");
		}
		
		getch();
		if(kbhit()){
			continue; 
		}
	}
	
}

