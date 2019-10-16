#include<stdio.h>
#include<locale.h>

void main(){
	
		printf("--|Seja bem vindo ao Projeto Thaygon Augusto!|--\n--|Se trata de um projeto para calcular\n a média final de um aluno \nem seu ano escolar.|--\n");
	
	int s;
		printf("Deseja testar o programa ? 1-sim 2-nao :");
			scanf("%d",&s);
	while(s == 1){
	
	char a[10],b[30];

	gets(a);
		printf("Digite o nome do Aluno(a):"); 
			gets(b);
	char serie[10];
	int ano;
		printf("Imforme a serie do Aluno :");
		scanf("%d",&ano);
		int de = 1 + ano;
	
	int matricula;
		printf("Informe o numero de matricula :");
			scanf("%d",&matricula);
	float m1,m2,m3,m4,falta;
		printf("Por favor, informe a nota da Prova 1 :");
			scanf("%f",&m1);
		printf("Por favor, informe a nota da Prova 2 :");
			scanf("%f",&m2);
		printf("Por favor, informe a nota da Prova 3 :");
			scanf("%f",&m3);
		printf("Por favor, informe a nota da Prova 4 :");
			scanf("%f",&m4);
	float media =  (m1 + m2 + m3 + m4) / 4;
		printf("Quantas faltas o Auno(a) teve durante o ano ?\n");
			scanf("%f",&falta);
	
	if(falta > 130){
		printf(" O aluno(a) %s foi reprovado por falta :( \n)",b);
		printf("A quantidade de faltas excedeu o limite de 130! Seu numero de faltas : %f.2 ", falta);
		
			breack;
	}else if(media >= 6){
		printf("Media do Aluno(a) %s : %.1f\n",b,media);
		
		printf("O Aluno(a) %s\nMatricula : %d \nEsta aprovado para a %d serie\n",b,matricula,de);
	}else{
		printf("Aluno(a) %s esta reprovado!\n\n\n\n",b);
	}
	int resposta;
		printf("Deseja fazer uma nova opercao ? 1 - Sim ou 2 - Nao\n");
			scanf("%d",&resposta);
	if(resposta == 2){
			system("pause");
	}	
}
}
	

