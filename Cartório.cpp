#include <stdio.h> //Bioblioteca de comunicação de usuário 
#include <stdlib.h> //biblioteca de alocação de espaço em memória 
#include <locale.h> //biblioteca de alocações de texto por região 

int main()



{   int opcao=0; //defenindo as variáveis
    int laco=1; 

    for(laco=1;laco=1;)
    
    {
	
	
		system("cls");

		setlocale(LC_ALL,"Portuguese"); //defenindo linguagem 
	
		printf(" ###cartório da EBAC ###\n\n");  //inicio do menu 
 	    printf("Escolha a opção desejada do manu:\n\n");
		printf("\t1 - registrar nomes\n");
		printf("\t2 - consultar nomes\n");
		printf("\t3 - deletar nomes\n\n");// fim do menu
		printf("opacao:");
		scanf("%d",&opcao);//armazenando a escolha do usuário
	
    	system("cls");
    	
    	switch(opcao)
    	{
    	
    		
    	    case1:
    	    printf("Você escolheu o registro de nomes!\n");
       		system("pause");
       	    break;
        
        
         	case2:         		
            printf("Você escolheu consultar os nomes!\n");
    	    system("pause");
    	    break;
    	    
    	    
    	
    	    case3:    	    
    	    printf("Você escolheu deletar nomes!\n");
    	    system("pause");
    	    break;
    	    
    	    
    	
    	    default:
    	    printf("Essa opção não está disponivel!\n");// fim da seleção
    	    system("pause");
    	    break;
               
         
		}
    
	}
	
	
	
}







	
	

    
   

   
   
     




	
		
	
	
	
	
	
