#include <iostream>
void Menu1();
  void Menu11();
  void Menu12();
void PistesRemontees() {
 
 system("cls");
 Menu11(); 
 }

 
 void Chemin()
 {
 	system("cls");
 	Menu12();   	
 }
     

    void RetourMenu11()
 {
 	system("cls");
 	Menu11();
 	
 }
      


  void Consultation()
 {
 	system("cls");
 	int saisieConsul; 
 	//std::cout<<"consultation test"<<std::endl;
 	std::cout<<"tapez 0 pour retour au menu precedent"<<std::endl;
 	std::cin>>saisieConsul; 
 	if (saisieConsul==0) {
 	RetourMenu11();
 	}
 	 
 }
 
   void ModifierTemps()
 {
 	system("cls");
 	int saisieTemps; 
 	//std::cout<<"consultation test"<<std::endl;
 	std::cout<<"tapez 0 pour retour au menu precedent"<<std::endl;
 	std::cin>>saisieTemps; 
 	if (saisieTemps==0) {
 	RetourMenu11();
 	}
 	 
 	
 }

      void RetourMenu1()
 {
 	system("cls");
 	Menu1();
 	
 }
 
   
 
       void RetourMenu12()
 {
 	system("cls");
 	Menu12();
 	
 }
 
  void Menu11()
{      
		std::cout<<std::endl<<"		----------------------		"<<std::endl;
	    std::cout<<std::endl<<" ------------------PISTES ET REMONTEES--------------------"<<std::endl;
	    std::cout<<std::endl<<"		----------------------		"<<std::endl<<std::endl;
	    
	    
       std::cout<<"	 1. Quel est ce trajet ? "<<std::endl;
       std::cout<<"	 2. A partir de ce point ? "<<std::endl<<std::endl<<std::endl;
       std::cout<<"	 0. Revenir au menu Principal"<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
       std::cout<<"	  Veuillez entrer votre choix :    " ;
       int choixMenu2;
       std::cin>>choixMenu2; 
       
         if (choixMenu2!=0 && choixMenu2!=1 && choixMenu2!=2 )
		{std::cout<<"votre choix n'est pas correct, reesayez : "<<std::endl;   
		system("cls");
	     Menu11();
	    }
    
	   do{
	   switch(choixMenu2)
        {
            case 0 :       RetourMenu1();     
            	break;
 
            case 1 : Consultation()  ;
            break;
            
            case 2 : ModifierTemps()   ;
            break;
  
            break;
  } }while(choixMenu2!=0);    
  
  
  
  
     }
     
     
     
void Menu12()
{      
		std::cout<<std::endl<<"		----------------------		"<<std::endl;
	    std::cout<<std::endl<<" ------------------CHOIX CHEMIN--------------------"<<std::endl;
	    std::cout<<std::endl<<"		----------------------		"<<std::endl<<std::endl;
	    
	    
       std::cout<<"	 1. Consulter l'ensemble des pistes et remontees"<<std::endl;
       std::cout<<"	 2. Choisir son chemin "<<std::endl<<std::endl<<std::endl;
       std::cout<<"	 0. Revenir au menu principal"<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
       std::cout<<"	  Veuillez entrer votre choix :    " ;
       int choixMenu1 ; 
       int choixMenu2;
       std::cin>>choixMenu2; 
       
       
     
	   switch(choixMenu2)
        {
            case 0 :   RetourMenu1();         
            	break;
 
            case 1 : std::cout<<"		Votre choix est 1"<<std::endl     ;
            break;
            
            case 2 : Chemin()    ;
            break;
 
 
            break;
  }        
  }
  

  


void Menu1()

{
	int choixMenu1 ; 
	
	std::cout<<"	~~~~Emmanuel Salameh & Maxime Domecq~~~~"<<std::endl;
		std::cout<<std::endl<<"		----------------------		"<<std::endl;
	    std::cout<<std::endl<<" ------------------BORNE INTERACTIVE--------------------"<<std::endl;
	    std::cout<<std::endl<<"		----------------------		"<<std::endl<<std::endl;
	    
	    
       std::cout<<"	 1. Consulter l'ensemble des pistes et remontees"<<std::endl;
       std::cout<<"	 2. Choisir son chemin "<<std::endl<<std::endl<<std::endl;
       std::cout<<"	 0. Quitter l'interface"<<std::endl<<std::endl<<std::endl<<std::endl<<std::endl;
       std::cout<<"	  Veuillez entrer votre choix :    " ;
       
       std::cin>>choixMenu1; 
       
      if (choixMenu1!=0 && choixMenu1!=1 && choixMenu1!=2 )
		{std::cout<<"votre choix n'est pas correct, reesayez : "<<std::endl;   
		system("cls");
	     Menu1();
	    }
	  
	  
     
        switch(choixMenu1)
        {
            case 0 : exit (EXIT_FAILURE);
            	break;
 
            case 1 : PistesRemontees();
            break;
            
            case 2 : Chemin()    ;
            break;
 
            break;
  }   }      
     
  
  
  

  
int main()
{
	Menu1();
    return 0;

}









     
       
  
  

 