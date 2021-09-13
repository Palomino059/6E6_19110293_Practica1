
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string.h>

using namespace std;

void Arma_x(int Arma_arm_num, int Arma_selec, char Arma_dem[], char Arma_ens[])
{
   if(Arma_arm_num == Arma_selec)
   {
       cout<<"EL CHERIFF VA A BUSCAR EL ARMA ";
	   puts(Arma_ens);
	   cout<<"Y VE QUE EL ARMA NO SE ENCUENTRA EN SU AREA CORRESPONDIENTE "<<endl;
	   cout<<"Y OBSERVAS QUE EL ARMA CONTIENE MANCHAS DE SANGRE"<<endl;
	   system("PAUSE");
	   system("cls");	
   }	
   else
	{
		int Rama = 1 + rand() % 3;
		
		if(Rama == 1)
		{
			cout<<"EL SHERIFF VA A BUSCAR EL ARMA ";
			puts(Arma_ens);
		    cout<<"Y VE QUE EL ARMA SE ENCUENTRA EN SU AREA CORRESPONDIENTE "<<endl;
	        cout<<"Y NO ENCUENTRO NADA RARO EN EL ARMA "<<endl; 
			system("PAUSE");
			system("cls");
		}
		
		if(Rama == 2)
		{
			cout<<"EL SHERIFF VA A BUSCAR EL ARMA ";
			puts(Arma_ens);
		    cout<<"Y VE QUE EL ARMA NO SE ENCUENTRA EN SU AREA CORRESPONDIENTE PERO ESTABA EN OTRO LUGAR "<<endl;
	        cout<<"Y EN EL ARMA NO SE ENCONTRO NADA RARO "<<endl; 
			system("PAUSE");
			system("cls");
		}
		
		else if(Rama == 3)
		{
		    cout<<"EL SHERIFF VA A BUSCAR EL ARMA ";
			puts(Arma_ens);
			cout<<"Y VE QUE EL ARMA SE ENCUENTRA EN SU AREA CORRESPONDIENTE "<<endl;
	        cout<<"PERO OBSERVA QUE EL ARMA ESTABA USADA  "<<endl; 
	        cout<<"Y QUE PARTES DEL ARMA ESTABAN DESTROSADAS"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}

void Personaje_x(int Personaje_per_num, int Personaje_selec, char Personaje_dem[], char Personaje_ens[] )
{
   if(Personaje_per_num == Personaje_selec)
   {
       cout<< "EL SHERIFF VA CON LA PERSONA";
	   puts(Personaje_ens);
	   cout<<"Y LE CUENTA QUE NUNCA HABIA VISO ESA PERSONA "<<endl;
	   cout<<"LO DICE CON LA MIRADA A OTRO LADO"<<endl;
	   cout<<"Y CON LA FRENTE SUDADA"<<endl;
	   system("PAUSE");
	   system("cls");	
   }	
   else
	{
		int Rama = 1 + rand() % 3;
		
		if(Rama == 1)
		{
			cout<< "EL SHERIFF VA CON LA PERSONA";
	        puts(Personaje_ens);
	        cout<<"Y LE CUENTA QUE LO VIERON CON UNA PERSONA QUE ESTABA MUY ENOJADA CON EL PERO NO PUDIERON VER SU ROSTO"<<endl;
	        cout<<"LA PERSONA SE NOTABA CONFIABLE Y NO ESQUIVO MI  MIRADA"<<endl;
	        system("PAUSE");
	        system("cls");
		}
		
		if(Rama == 2)
		{
			cout<< "EL SHERIFF VA CON LA PERSONA";
	        puts(Personaje_ens);
	        cout<<"Y LE CUENTA QUE SI VIO PERO QUE NO LE HIZO NADA MALO A EL"<<endl;
	        cout<<"LA PERSONA SE NOTABA CONFIABLE"<<endl;
	        system("PAUSE");
	        system("cls");
		}
		
		else if(Rama == 3)
		{
			cout<< "EL SHERIFF VA CON LA PERSONA";
	        puts(Personaje_ens);
	        cout<<"DICEN QUE CONVIVERON UN RATO CON EL PERO SOLO PARA TOMAR "<<endl;
	        cout<<"Y NOTAS QUE LA PERSONA ESTA MUY EBRIO Y DESCUBRES QUE NO HUBIERA PODIDO PARARSE POR LO BORRACHO QUE ESTABA "<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}

void Lugar_x(int Lugar_lur_num, int Lugar_selec, char Lugar_dem[], char Lugar_ens[] )
{
   if(Lugar_lur_num == Lugar_selec)
   {
       cout<<"EL SHERIFF SE DIREJE AL LUGAR :";
	   puts(Lugar_ens);
	   cout<<"Y VE QUE EL LUGAR TIENE GOTAS DE SANGRE"<<endl;
	   system("PAUSE");
	   system("cls");	
   }	
   else
	{
		int Rama = 1 + rand() % 3;
		
		if(Rama == 1)
		{
			cout<<"EL SHERIFF SE DIREJE AL LUGAR :";
	        puts(Lugar_ens);
	        cout<<"Y VE QUE EL LUGAR ESTA DESORDENADO PERO NO ENCUENTRA NADA MALO "<<endl;
			system("PAUSE");
			system("cls");
		}
		
		if(Rama == 2)
		{
			cout<<"EL SHERIFF SE DIREJE AL LUGAR :";
	        puts(Lugar_ens);
	        cout<<"Y VE QUE EL LUGAR ESTA ORDENADO PERO SOSPECHA DEL LUGAR "<<endl;
			system("PAUSE");
			system("cls");
		}
		
		else if(Rama == 3)
		{
			cout<<"EL SHERIFF SE DIREJE AL LUGAR :";
	        puts(Lugar_ens);
	        cout<<"Y VE QUE EL LUGAR ESTA TODO ORDENADO Y NO ENCUENTRA NADA MALO"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}


int main()
{
	
    int num;
    int arm_num;
	int per_num; 
	int lug_num;

	
    char tipos_Armas[5][10]={{"CUCHILLO"},{"HACHA"},{"REVOLVER"},{"SOGA"},{"ARCO"}};
    char tipos_Lugares[5][20]={{"BAR"},{"HABITACION"},{"ZONA_DE_BAILE"},{"BANO"},{"PATIO"}};
    char tipos_Personajes[5][20]={{"CANTINERO"},{"VAQUERO"},{"MESERA"},{"MUSICO"},{"INDIO"}};
  
    char Arma_dem[20];
    char Arma_ens[20];
    char Lugar_dem[20];
    char Lugar_ens[20];
    char Personaje_dem[20];
    char Personaje_ens[20]; 
     
    int	Arma_fin;
	int Lugar_fin;
	int Personaje_fin;
	
	int Arma_selec;
	int Lugar_selec;
	int Personaje_selec;
    int Juego_selec;
     
    const int tam = 5;
	int Arma[tam];
	int Lugar[tam];
	int Personaje[tam];
	
	
	srand(time(0));
	
	Juego_selec = 1 + rand() % 5;
	
	for(int i=0; i<tam; i++)
	{
		Arma[i]=1 + rand() % 5;
		Lugar[i]=1 + rand() % 5;
		Personaje[i]=1 + rand() % 5;
	
			for(int x=0; x<=tam; x++)
			{
				if(Juego_selec == x)
				{
					Arma_selec=Arma[x-1];
					Lugar_selec=Lugar[x-1];
					Personaje_selec=Personaje[x-1];
				}
			}
	}
	
	for(int x=0; x<=5; x++)
	{
		if(x == Arma_selec)
		{
			for(int i=0; i<30; i++)
			{
				Arma_dem[i]=tipos_Armas[x-1][i];
			}
		}
	}
	
		for(int x=0; x<5; x++)
	{
		if(x == Lugar_selec)
		{
			for(int i=0; i<30; i++)
			{
				Lugar_dem[i]=tipos_Lugares[x-1][i];
			}
		}
	}
	
	
		for(int x=0; x<5; x++)
	{
		if(x == Personaje_selec)
		{
			for(int i=0; i<30; i++)
			{
				Personaje_dem[i]=tipos_Personajes[x-1][i];
			}
		}
	}
  
    cout<<"--------------------REGLAS--------------------"<<endl;
    cout<<"ES UN JUEGO QUE ESTA AMBIENTADO EN EL TIEMPO DEL VIEJO OESTE";
    cout<<"Y TU ERES EL SHERIFF DE UN PUEBLO Y TE AVISAN QUE HUBO UN ASESINATO Y QUE ENCONTRARON UN CUERPO EN LA CANTINA";
    cout<<"Y TU TRABAJO COMO SHERIFF ES ENCONTRAR AL ASESINO PARA LLEVARTELO ANTE LA JUSTICIA,";
    cout<<"TENDRAS UNA CIERTA CANTIDAD DE TURNOS PARA PODER DEDUCIR O ENCTRAR AL ASESINO ";
    cout<<"EN LA CANTINA TENDRAS QUE INVESTIGAR  LOS LUGARES QUE TIENE LA CANTINA, LAS PERSONAS QUE ESTUVIERON EN EL ASESINATO E";
    cout<<"INVESTIGAR EL TIPO DE ARMA QUE UTILIZARON PARA ASESINARLO,";
    cout<<"AL FINAL DE LOS TURNOS TENDRAS QUE PONER TUS DEDUCCIONES DE QUIEN FUE EL ASESINO, LA LUGAR DONDE LO MATARON Y EL ARMA";
    cout<<"DESPUES DE PONER TUS DEDUCCINES TE DIREMOS TU FUERON CORRECTAS O ERRONEAS."<<endl;
    system("PAUSE");
	system("cls");
	
	cout<<"-------------------HISTORIA 1-------------------"<<endl;
	cout<<"ES 8 DE SEPTIEMBRE DE 1860 UNA TARDE TRANQUILA Y UN INDIO LLEGO AL PUEBLO DE VISITA ";
	cout<<"CUANDO LLEGA AL PUEBLO SE DIREGE HACIA LA CANTINA POR UNOS TRAGOS YA CUADO LLEGA A LA CANTINA TODA LA GENTE SE LE QUEDA MIRANDO POR SER ALGUIEN DE OTRO LUGAR ";
	cout<<"EL INDIO SE DIRIGE A LA BARRA DEL BAR Y SE PIDE VARIOS TRAGOS HASTA QUEDAR BORRACHO Y EL INDIO TIENE UN COMPORTAMIENTO MUY PESADO QUE HACE QUE LA GENTE SE ENOJE CON EL"<<endl;
    cout<<"PASA UN TIEMPO Y EL INDIO DESAPARECE, YA QUE TODOS ESTAN MAS TRANQUILOS PORQUE SE HABIA IDO EL INDIO, DE REPENTE ALGUIEN DA UN GRITO PORQUE SE ENCONTRO EL CUERPO";
    cout<<"SIN VIDA DEL INDIO."<<endl;
	system("PAUSE");
	system("cls");
	
	cout<<"-------------------HISTORIA 2-------------------"<<endl;
	cout<<"TU ERES EL SHERIFF DE UN PUEBLO Y ES UNA NOCHE CUALQUIERA EN TU LUGAR DE TRABAJO Y LLEGA UN CIUDADANO DEL PUEBLO AVISANDOTE QUE HUBO UN ASESINATO EN LA CANTINA ";
	cout<<"QUE HACE POCO SE ENCONTRARON EL CUERPO SIN VIDA DE UN INDIO, TE DIREJES A LUGAR DEL CRIMEN QUE ES LA CANTINA Y VEZ QUE AY 5 PERSONAS EN EL LUGAR ";
	cout<<"LES PIDES QUE NADIE SEVALLA POR QUE SE CONVIERTEN EN SOSPECHOSOS, TE DIRIGES HACIA EL CUERPO Y VEZ QUE FUE ASESINADO CON UNA ARMA PERO NO ESTA VISIBLE  "<<endl;
    cout<<"Y VES QUE ES MOMENTO DE INVESTIGAR Y DE INTERROGAR A LA GENTE."<<endl;
	system("PAUSE");
	system("cls");
	
    for(int a=0; a<5; a++)
    {
	
	cout<<"HOLA SHERIFF";
	cout<<"\nQUE ES LO QUE QUIERES INVESTIGAR ?"<<endl;
	cout<<"\n1.-ARMAS ";
	cout<<"\n2.-PERSONAJES";
	cout<<"\n3.-LUGAR"<<endl;
	cout<<"INGRESA EL NUMERO:";cin>>num;
	
            switch(num)
	         {
	           case 1:
                {
                    cout<<"\n SELECCIONA EL ARMA QUE QUIERES INVESTIGAR:"<<endl;
                    cout<<"\n1.CUCHILLO ";
                    cout<<"\n2.HACHA ";
	                cout<<"\n3.PISTOLA ";
	                cout<<"\n4.SOGA ";
                    cout<<"\n5.ARCO "<<endl;
                    cout<<"INGRESA EL NUMERO:";cin>>arm_num;
	                                   
	                         switch(arm_num)
	                           {
	                            	case 1:
									{
										cout<<"----CUCHILLO----"<<endl;
										
									   	for(int x=0; x<=5; x++)
			                                {
			    			    		    	if(x == arm_num)
				       	    			    	{
										             for(int i=0; i<30; i++)
								         		    {
										        	   Arma_ens[i]=tipos_Armas[x-1][i];
									    	        }
									            }
								            }
								               Arma_x(arm_num, Arma_selec, Arma_dem, Arma_ens);
				    					break;
    								 }
									
								
	                               	case 2: 
    								{
    									cout<<"----HACHA----"<<endl;
	                                    for(int x=0; x<=5; x++)
			                                {
			    			    		    	if(x == arm_num)
				       	    			    	{
										             for(int i=0; i<30; i++)
								         		    {
										        	   Arma_ens[i]=tipos_Armas[x-1][i];
									    	        }
									            }
								            }
								        Arma_x(arm_num, Arma_selec, Arma_dem, Arma_ens);
										break;
								    }
														  
									case 3: 
									{
										cout<<"----PISTOLA----"<<endl;
									    for(int x=0; x<=5; x++)
			                                {
			    			    		    	if(x == arm_num)
				       	    			    	{
										             for(int i=0; i<30; i++)
								         		    {
										        	   Arma_ens[i]=tipos_Armas[x-1][i];
									    	        }
									            }
								            }
								        Arma_x(arm_num, Arma_selec, Arma_dem, Arma_ens);
				    							 	
			         					break;
			    					 }  
														 
									case 4:
			    				     {
			    				     	cout<<"----CUERDA----"<<endl;
			 							for(int x=0; x<=5; x++)
			                                {
			    			    		    	if(x == arm_num)
				       	    			    	{
										             for(int i=0; i<30; i++)
								         		    {
										        	   Arma_ens[i]=tipos_Armas[x-1][i];
									    	        }
									            }
								            }
								        Arma_x(arm_num, Arma_selec, Arma_dem, Arma_ens);
				    					break;				 
    								  }
														
									case 5:
									{
										cout<<"----ARCO----"<<endl;
										for(int x=0; x<=5; x++)
			                                {
			    			    		    	if(x == arm_num)
				       	    			    	{
										             for(int i=0; i<30; i++)
								         		    {
										        	   Arma_ens[i]=tipos_Armas[x-1][i];
									    	        }
									            }
								            }
								        Arma_x(arm_num, Arma_selec, Arma_dem, Arma_ens);
				    					break;
									}   
														
                                                        default:
														{
															cout<<"ERROR, DATO INVALIDO "<<endl;
															break;
														}
                                                        	
													  }
											break;		  
	                                   }
	                                   
	                            case 2: {
	                                   cout<<"\n SELECCIONA AL PERSONAJE QUE QUIERAS INTERROGAR :"<<endl;
                  	                   cout<<"\n1.CANTINERO (ALFONSO) ";
                	                   cout<<"\n2.VAQUERO (ALAN)";
	                                   cout<<"\n3.MESERA(SANDRA)";
	                                   cout<<"\n4.MUSICO (DANIEL) ";
	                                   cout<<"\n5.INDIO(RODOLFO)"<<endl;
	                                   cout<<"INGRESA EL NUMERO:";cin>>per_num;
	                                   
	                                   switch(per_num)
	                                                  {
	                                                  	case 1:
														{
															cout<<"----CANTINERO----"<<endl;
															for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == per_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Personaje_ens[i]=tipos_Personajes[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Personaje_x(per_num, Personaje_selec, Personaje_dem, Personaje_ens);
															break;
														 }
														  
	                                                  	case 2: 
														{
															cout<<"----VAQUERO----"<<endl;
																for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == per_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Personaje_ens[i]=tipos_Personajes[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Personaje_x(per_num, Personaje_selec, Personaje_dem, Personaje_ens);
															break;
													    }
														  
														 case 3: 
														 {
														 	cout<<"----MESERA----"<<endl;
														 		for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == per_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Personaje_ens[i]=tipos_Personajes[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Personaje_x(per_num, Personaje_selec, Personaje_dem, Personaje_ens);
															break;
														 }  
														 
														case 4:
													     {
													     	cout<<"----MUSICO----"<<endl;
														 		for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == per_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Personaje_ens[i]=tipos_Personajes[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Personaje_x(per_num, Personaje_selec, Personaje_dem, Personaje_ens);
															break;
														  }
														
														case 5:
														{
															cout<<"----INDIO----"<<endl;
																for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == per_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Personaje_ens[i]=tipos_Personajes[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Personaje_x(per_num, Personaje_selec, Personaje_dem, Personaje_ens);
															break;
														}   
														
                                                        default:
														{
																cout<<"ERROR, DATO INVALIDO "<<endl;
															break;
														}
                                                       	
													  }
												 break;	  
							               	}    
								
							    case 3: {
	                                   cout<<"\n SELECCIONA EL LUGAR DONDE QUIERES INVESTIGAR:"<<endl;
                  	                   cout<<"\n1.BAR ";
                	                   cout<<"\n2.HABITACION";
	                                   cout<<"\n3.ZONA DE BAILE";
	                                   cout<<"\n4.BANO ";
	                                   cout<<"\n5.PATIO"<<endl;
	                                   cout<<"INGRESA EL NUMERO:";cin>>lug_num;
	                                   
	                                   switch(lug_num)
	                                                  {
	                                                  	case 1:
														{
															cout<<"----BAR----"<<endl;
																for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == lug_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Lugar_ens[i]=tipos_Lugares[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Lugar_x(lug_num, Lugar_selec, Lugar_dem, Lugar_ens);
															break;
														 }
														  
	                                                  	case 2: 
														{
															cout<<"----HABITACION----"<<endl;
															for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == lug_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Lugar_ens[i]=tipos_Lugares[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Lugar_x(lug_num, Lugar_selec, Lugar_dem, Lugar_ens);
															break;
													    }
														  
														 case 3: 
														 {
														 	cout<<"----ZONA DE BAILE----"<<endl;
														 	for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == lug_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Lugar_ens[i]=tipos_Lugares[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Lugar_x(lug_num, Lugar_selec, Lugar_dem, Lugar_ens);
															break;
														 }  
														 
														case 4:
													     {
													     	cout<<"----BANO----"<<endl;
													     	for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == lug_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Lugar_ens[i]=tipos_Lugares[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Lugar_x(lug_num, Lugar_selec, Lugar_dem, Lugar_ens);
															break;
														  }
														
														case 5:
														{
															cout<<"----PATIO----"<<endl;
															for(int x=0; x<=5; x++)
			                                                  {
			    			    		                    	if(x == lug_num)
				       	    			                        	{
										                            for(int i=0; i<30; i++)
								         		                       {
										        	                      Lugar_ens[i]=tipos_Lugares[x-1][i];
									    	                            }
									                                 }
								                               }
								                              Lugar_x(lug_num, Lugar_selec, Lugar_dem, Lugar_ens);
															break;
														}   
														
                                                        default:
														{
															cout<<"ERROR, DATO INVALIDO "<<endl;
															break;
														}
                                                        	
													  }
	                            	
									             break; 
								           }       	   
                            default: {
                            	cout<<"ERROR, DATO INVALIDO"<<endl;
								break;
							}	                                

			      }
			  }
			  
cout<<"BIEN SHERIFF YA SE TE ACABARON LOS TURNOS ES HORA DE PONER TUS TEORIAS O DEDUCCIONES SOBRE EL RESPECTO ASESINO";
cout<<"AHORA INGRESA QUIEN CRES QUE SEA EL ASESINO, CON QUE ARMA LO MATO Y EN DONDE LO MATO."<<endl;
system("cls");
	      
	      
cout<<"----ARMAS----"<<endl; 
cout<<"1. CUCHILLO"<<endl; 
cout<<"2. HACHA"<<endl;
cout<<"3. REVOLVER"<<endl;
cout<<"4. SOGA"<<endl; 
cout<<"5. ARCO"<<endl;
cout<<endl;
	    	
cout<<"MUY BIEN CHERIFF,"<<endl;
cout<<"CUAL FUE EL ARMA DEL ASESINATO?"<<endl;	      
cin>>Arma_fin;

if(Arma_fin>=1 && Arma_fin<=5)
    {     
        cout<<"EL DATO FUE GUARDADO"<<endl;
    }
		
else
	{
	    cout<<"\n ERROR, EL DATO ES INVALIDO"<<endl;
	}
cout<<endl;	
system("PAUSE");
system("cls");


cout<<"----PERSONAJES----"<<endl; 
cout<<"1. CANTINERO (ALFONSO)"<<endl; 
cout<<"2. VAQUERO (ALAN)"<<endl; 
cout<<"3. MESERA (SANDRA)"<<endl;
cout<<"4. MUSICO (DANIEL)"<<endl; 
cout<<"5. INDIO (RODOLFO)"<<endl;
cout<<endl;


cout<<"QUIEN ES EL ASESINO?"<<endl;
cin>>Personaje_fin;

if(Personaje_fin>=1 && Personaje_fin<=5)
    {     
        cout<<"EL DATO FUE GUARDADO"<<endl;
    }
		
else
	{
	    cout<<"\n ERROR,EL DATO ES INVALIDO"<<endl;
	}

cout<<endl;
system("PAUSE");
system("cls");

cout<<"----LUGARES----"<<endl; 
cout<<"1. BAR"<<endl; 
cout<<"2. HABITACION"<<endl; 
cout<<"3. ZONA DE BAILE"<<endl;
cout<<"4. BANO"<<endl; 
cout<<"5. PATIO"<<endl;
cout<<endl;
 
cout<<"EN QUE LUGAR FUE EL ASESINATO ?"<<endl;
cin>>Lugar_fin;

if(Lugar_fin>=1 && Lugar_fin<=5)
    {     
        cout<<"EL DATO FUE GUARDADO"<<endl;
    }
		
else
	{
	    cout<<"\n ERROR, EL DATO ES INVALIDO"<<endl;
	}

cout<<endl;
system("PAUSE");
system("cls");


if(Arma_fin == Arma_selec && Personaje_fin == Personaje_selec && Lugar_fin == Lugar_selec)
	{
		cout<<"FELICIDADES SHERIFF!!"<<endl;
		cout<<"DIMOS CON EL ASESINO"<<endl;
		cout<<"EL ASESINO FUE EL/LA ";
		puts(Personaje_dem);
		cout<<"LLEVANDO A NUESTRO SUJETO A LA ZONA QUE FUE EL/LA ";
		puts(Lugar_dem);
		cout<<"Y AHI LO MATO UTILIZANDO EL ARMA QUE FUE EL/LA ";
		puts(Arma_dem);
		cout<<"AHORA EL ASESINO PASARA MUCHO TIEMPO EN LA CARCEL"<<endl;
		cout<<"SIGUE ASI SHERIFF Y SERAS EL MEJOR SHERIFF DEL PUEBLO"<<endl;
		
	}
	
	else 
	{
		cout<<"LO SENTIMOS SHERIFF "<<endl;
		cout<<"NO DIMOS CON EL ASESINO"<<endl;
		cout<<"EL ASESINO CORRECTO FUE EL/LA ";
		puts(Personaje_dem);
		cout<<"LLEVANDO A NUESTRO SUJETO A LA ZONA QUE FUE EL/LA ";
		puts(Lugar_dem);
		cout<<"Y AHI LO MATO UTILIZANDO EL ARMA QUE FUE EL/LA ";
		puts(Arma_dem);
		cout<<"EL ASESINO SE DIO A LA FUGA POR NO ENCONTRAR A LA PERSONA ADECUADA"<<endl;
		cout<<"INTENTALO DE NUEVO"<<endl;
	}

system("PAUSE");

 return 0;	
}
