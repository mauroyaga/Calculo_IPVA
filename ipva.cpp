
 /* 
    Nome do Programa:
    Descri��o do Programa:
    Autor: Mauro Cesar Yaga Junior 
    Data: 
 */


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	
	int opcao, ano_veiculo, ano, idade_veiculo;
  
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("+====================+\n");
	printf("|SELECIONE O TIPO    |\n");
	printf("|DE VE�CULO:         |\n");
	printf("+====================+\n");
	
	
	printf("====================\n");
	printf("|1.CARRO           |\n");
	printf("|2.MOTO            |\n");
	printf("====================\n");
	
	printf("Digite sua  op��o de ve�culo: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("\nSeu ve�culo � do tipo carro\n");
		break;
		
		case 2:
			printf("\nSeu ve�culo � do tipo moto\n");
		break;
		
		default:
			printf("\nOp��o iv�lida!\n");		
		break;
	}
	
	printf("\nDigite o ano desta data: \n");
	scanf("%d", &ano);
	
	printf("\nDigite o ano do seu ve�culo: \n");
	scanf("%d", &ano_veiculo);
	
	idade_veiculo = ano - ano_veiculo;
	
	if(opcao == 1 && idade_veiculo < 20)
	{
		printf("\nSeu ve�culo ainda paga IPVA\n");
		
    }else if(opcao == 1 && idade_veiculo >= 20){
    	
    	printf("\nSeu ve�culo est� isento\n");
    }
    if (opcao == 2 && idade_veiculo < 10){
    	
    	printf("\nSeu ve�culo ainda paga IPVA\n");
    	
	}else if(opcao == 2 && idade_veiculo >= 10){
    	
    	printf("\nSeu ve�culo est� isento\n");
    }
    	
system("PAUSE");	                            
return 0;                                         
  
} /* end main */


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     					
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */
