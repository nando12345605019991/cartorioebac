#include <stdio.h> //Bioblioteca de comunica��o de usu�rio 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 

int main()



{   int opcao=0; //defenindo as vari�veis
    int laco=1; 

    for(laco=1;laco=1;)
    
    {
	
	
		system("cls");

		setlocale(LC_ALL,"Portuguese"); //defenindo linguagem 
	
		printf(" ###cart�rio da EBAC ###\n\n");  //inicio do menu 
 	    printf("Escolha a op��o desejada do manu:\n\n");
		printf("\t1 - registrar nomes\n");
		printf("\t2 - consultar nomes\n");
		printf("\t3 - deletar nomes\n\n");// fim do menu
		printf("opacao:");
		scanf("%d",&opcao);//armazenando a escolha do usu�rio
	
    	system("cls");
    	
    	switch(opcao)
    	{
    	
    		
    	    case1:
    	    printf("Voc� escolheu o registro de nomes!\n");
       		system("pause");
       	    break;
        
        
         	case2:         		
            printf("Voc� escolheu consultar os nomes!\n");
    	    system("pause");
    	    break;
    	    
    	    
    	
    	    case3:    	    
    	    printf("Voc� escolheu deletar nomes!\n");
    	    system("pause");
    	    break;
    	    
    	    
    	
    	    default:
    	    printf("Essa op��o n�o est� disponivel!\n");// fim da sele��o
    	    system("pause");
    	    break;
               
         
		}
    
	}
	
	
	
}







	
	

    
   

   
   
     




	
		
	
	
	
	
	
