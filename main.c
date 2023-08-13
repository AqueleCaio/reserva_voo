/*********************************************
Autor: Caio Henrique Pessoa de Lima

Data: 01/07/2022.

Descrição: O código a seguir tem o objetivo 
de simular um sistema de reserva de voo para 
uma companhia area utilizando vetores. 
**********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nvoos[12], op, opcons, i,
loc[12]={03,0,26,24,0,0,06,10,06,16,19,30};

char destino[13][666]= //Destinos Disponíveis.
{"\n","Las Vegas, EUA","Orlando, EUA ","Chicago, EUA",
"Dallas, EUA", "Liverpool, UK ","London, UK  ","Bristol, UK",
"Birmingham, UK","Lisboa, PT  ","Madeira, PT", "Porto Santo, PT","Santa Maria, PT"};

char origem[12][666]= // Origens Disponíveis
{"Congonhas, SP", "Guarulhos, SP", "Campinas, SP", "Barbacena, MG", 
"Bom Despacho, MG", "Paulo Afonso, BA","Ilhéus, BA","Nova Iguaçu, RJ", 
"Cabo Frio, RJ","Florianópolis, SC","Porto Alegre, RS","Recife, PE"};

void menu();
void consulta();
void reserva();

void consulta(){ // Função que armazema informações sobre os Números dos voos, Origens e Destinos.
if(op==1){ // Opção de Consulta.
    system("clear");
    printf ("*************\n");
    printf ("* Consultas *\n");
    printf ("*************");
    printf("\n――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――");
    printf ("\n| (1) Números dos Voos  |  (2) Origens de Voo  |  (3) Destinos |\n");
    printf("――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――\n");    
    scanf("%d", &opcons);

  switch (opcons){ // Opções de consulta
    
    case 1:  // Números dos voos.   
      for (int i=1; i<=12; i++){ 
      printf("\n\nNº de Voo: [ %d ]", nvoos[i]=i);
        printf("\nLugares diponíveis: %d", loc[i]);
    }     
      printf("\n\n(3)  |  Voltar para o Menu Princiapal\n");
      scanf ("%d", &op);  
  break;
    
    case 2: // Estados de Origem.
      for (int j=0; j<12; j++){
      printf ("\n\n[ Aeroporto de %s ] ", &origem[j][i]);
    } 
      printf("\n\n(3)  |  Voltar para o Menu Princiapal\n");
      scanf ("%d", &op);  
  break;
    
    case 3: // Destinos dos voos.   
      for (int j=1; j<=12; j++){   
      printf ("\n\n %s\t|\tNº de voo: [ %d ]", &destino[j][i], nvoos[i]=j);
    }
      printf("\n\n(3)  |  Voltar para o Menu Princiapal\n");
      scanf ("%d", &op);
    }
  }
}

void reserva(){ // Função que efetua a reserva do cliente.
  if (op==2){ // Opção de Reserva.
    do{
      system("clear");
      printf ("\nQual Número de Voo Você Deseja: ");
      scanf ("%d", &i);
        printf ("\n\nNº do Voo: [ %d ]", nvoos[i]=i);

        if (i>12||i==0){
        printf ("\n\nEste Voo Não Existe.");
          printf ("\n\n(3)  Voltar");
          scanf("%d", &op);
          }
        else {
        if (i==1||i==4||i==5){
          printf("\n\nEste Voo está Lotado");
            printf ("\n\n(3)  Voltar");
            scanf("%d", &op);
          }
        else {
        printf ("\n\n%d Lugares Disponíveis para o Voo [ %d ]", loc[i], nvoos[i]=i);
          printf ("\n\n(1)  |  Finalizar Reserva  |  (2)  Voltar  |  (3)  Voltar para o Menu Principal\n");
          scanf ("%d", &op);
      
        if (op==1){
        loc[i]--;
        printf ("\n\nReserva Realizada com Sucesso!, Obrigado pela Preferência!");
          printf ("\n\n(3)  Voltar");
          scanf("%d", &op);
      }
    }
  }
}  while (op==2);
    printf("\n\n(3)  |  Aperte Novamente para Voltar\n");
    scanf("%d", &op);
  }
}

void menu(){ 
  system("clear");
  printf ("*************************************************************"); 
    printf ("\n*                         BEM-VINDO                         *");
    printf ("\n*                                                           *");
    printf ("\n*   Consulte suas viagens, e Faça sua reserva Aqui e Agora  *");
  printf ("\n*************************************************************");

   printf("\n―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――");
     printf ("\n|\t (1) Consultar  \t|\t  (2) Reservar  \t|  (3) Sair |\n"); // Opções de Escolha.  
   printf("―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――\n");
   scanf ("%d", &op);

   if (op==3){
    printf("\nObrigado pela Prefência! Volte Sempre! :D");
    exit(0);
  }
}

int main() {
  do{   
    menu();  
    
    consulta();
    reserva();
    
     if (op>3){
      system("clear");
      printf ("\n\nOpção Inválida");
        printf ("\n\n(3)  Voltar");
        scanf("%d", &op);
    }
  } while (op==3);  
  
return 0;
}
