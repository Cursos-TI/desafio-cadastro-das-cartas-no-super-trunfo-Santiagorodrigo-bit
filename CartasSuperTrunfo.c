#include <stdio.h>
#include <string.h> // Para strcspn()
int main() 
{
    
    // Declarando Variáveis Carta1
    char Estado1, Codigo1[4], Cidade1[20]; // sinais de igual e valores iniciais
    int Populacao1 = 0, Pontos_turisticos1 = 0;
    float Pib1 = 0.0f, Area1 = 0.0f; 
    
    // Declarando variáveis Carta2
    char Estado2, Codigo2[4], Cidade2[20];
    int Populacao2 = 0, Pontos_turisticos2 = 0;
    float Pib2 = 0.0f, Area2 = 0.0f;
    
    // Leitura da Carta 1
    printf("Digite uma letra de A a H\n");    // Solicito ao usuário digitar uma letra de A a H.
    
    scanf(" %c", &Estado1);        // " %c", Lê os dados digitado pelo usuário e copia na variável 'Estado'
                                  // Formato de entrada char, 
                                 // Espaço para evitar buffer " %c"
    getchar();                  // Limpa o \n do buffer                       
    
    printf("Digite o código:(de 1 e 4)\n");   // Solicito ao usuário digitar um número de 1 a 4
   
    scanf("%3s", Codigo1);                  // "%s" Lê os dados inserido e armazena na variável 'Codigo'
                                           // Formato de entrada como 'string' ,limitado a 3 caracteres +'\0'
    getchar();                            // Limpa o \n do buffer                        
    
    printf("Digite o nome da cidade\n"); // Solicito ao usuário digitar o nome da cidade
    
    fgets(Cidade1, sizeof(Cidade1), stdin); // fgets ler strings (incluindo espaços)
                                           //  sizeof(Cidade1) Limite máximo de caracteres(evita buffer overflow)
                                          //   stdin: Leitura vem do teclado
                                          
    Cidade1[strcspn(Cidade1, "\n")] = '\0'; // '\n'  Remove a quebra de linha que o fgets captura '= \0'
    
    
    printf("Digite a população\n");  // Solicito ao usuário digitar a população
    
    scanf("%d", &Populacao1);   // "%d" Recebe os dados do usuário no formato inteiro
                               //  "&"  Armazena dados recebido na variável 'População1' 

    printf("Digite a área km²\n"); // Solicito ao usuário digitar a área 
    
    
    scanf("%f", &Area1);   // "%f" Recebe os dados do usuário no formato float
                          // "&" Armazena os dados recebido na variável 'Area1'

    printf("Digite o Pib\n"); // Solicito ao usuário digitar o PIB 
    
    
    scanf("%f", &Pib1);  // "%f" Recebe os dados do usuário no formato float
                       // "&" Armazena os dados recebido na variável 'Pib1'
    
    printf("Digite o total de Pontos turísticos\n"); // Solicito ao usuário digitar o número de pontos turísticos 
    
    scanf("%d", &Pontos_turisticos1);  // "%d" Recebe os dados do usuário no formato  Inteiro  
                                      // "&" Armazena na variável 'Pontos_turisticos1'
                                      
                                      
    // Leitura da Carta 2
    printf("Digite uma letra de A a H\n");    // Solicito ao usuário digitar uma letra de A a H.
    
    scanf(" %c", &Estado2);        // " %c", Lê os dados digitado pelo usuário e copia na variável 'Estado2'
                                  // Formato de entrada char, 
                                 // Espaço para evitar buffer " %c"
    getchar();                  // Limpa o \n do buffer                       
    
    printf("Digite um numero de 1 a 4\n");   // Solicito ao usuário digitar um número de 1 a 4
   
    scanf("%3s", Codigo2);                  // "%s" Lê os dados inserido e armazena na variável 'Codigo2'
                                           // Formato de entrada como string ,limitado a 3 caracteres +'\0'
    getchar();
    
    printf("Digite o nome da cidade\n");        // Solicito ao usuário digitar o nome da cidade
    
    fgets(Cidade2, sizeof(Cidade2), stdin);   // fgets ler strings (incluindo espaços)
                                             //  sizeof(Cidade1) Limite máximo de caracteres(evita buffer overflow)
                                            //   stdin: Leitura vem do teclado
    
    Cidade2[strcspn(Cidade2, "\n")] = '\0'; // '\n'  Remove a quebra de linha que o fgets captura '= \0'
    

    
    printf("Digite a população cidade\n");  // Solicito ao usuário digitar o número de habitantes
    
    scanf("%d", &Populacao2);             // "%d" Recebe os dados do usuário no formato inteiro
                                         //  "&"  Armazena dados recebido na variável 'População' 

    printf("Digite a área km²\n");     // Solicito ao usuário digitar a área da cidade
    
    
    scanf("%f", &Area2);   // "%f" Recebe os dados do usuário no   formato float
                          // "&" Armazena os dados recebido na variável 'Area'

    printf("Digite o Pib Cidade\n"); // Solicito ao usuário digitar o PIB da cidade 
    
    
    scanf("%f", &Pib2);  // "%f" Recebe os dados do usuário no formato float
                        // "&" Armazena os dados recebido na variável 'Pib'
    
    printf("Digite o total de ponto turísticos\n"); // Solicito ao usuário digitar o número de pontos turísticos 
    
    scanf("%d", &Pontos_turisticos2);  // "%d" Recebe os dados do usuário no formato  Inteiro  
                                      // "&" Armazena na variável 'Pontos_turisticos'
  
  
  
    
    
    
    // Dados recebido, usarei 'printf' para imprimir as informações da carta 1.
    
    printf("\nCarta 1:\n");
    
    
    printf("Estado: %c\n", Estado1); //  %c: Imprime um único caractere tipo char
                                   // "\n" Adiciona uma nova linha
                                  
    
    printf("Código: %c%s\n", Estado1 , Codigo1);  // '%c' Caractere único, (char)  armazenado  na variável 'Estado1'
                                                 // '%s' Cadeia de carácteres (string) armazenado na variável 'Codigo1'
                                                // '%c%s\n' Imprime a soma das variáveis 'Estado1' e 'Codigo1'
                                               //  "\n" Adiciona uma nova linha
    
    printf("Cidade: %s\n", Cidade1); // " %c", Lê os dados digitado pelo usuário e copia na variável 'Estado'
                                    // Formato de entrada char, 
                                   // Espaço para evitar buffer " %c"
    
    getchar();                  // Limpa o \n do buffer 
   

    printf("População: %d\n", Populacao1);  // '%d' Imprime valor do tipo inteiro, armazenado na variável 'Populção1'
                                          //  '\n' Adiciona uma nova linha
    
    printf("PIB: %.2f\n", Pib1);  // '%.2f' Imprime valor do tipo float com duas casas decimais, armazenado na variável 'Pib'
                                 // '\n' Adiciona uma nova linha
                      
    
    printf("Área km²: %.2f\n", Area1); // '%.2f' Imprime um valor float com duas casas decimais, armazenado na variável 'Area'
                                      //  '\n' Adiciona uma nova linha
  
    printf("Número de Pontos Turísticos: %d\n\n", Pontos_turisticos1);  
                     // '%d' Imprime valor do tipo inteiro, armazenado na variável 'Pontos_turisticos1'
                    //  '\n' Adiciona uma nova linha
                                                         


// imprimir as informações da carta 2.
    
    printf("\nCarta 2:\n"); // Imprimi Carta 2 , 
    
    
    printf("Estado: %c\n", Estado2); //  %c: Imprime um único caractere tipo char
                                    // "\n" Adiciona uma nova linha
                                  
    
    printf("Código: %c%s\n", Estado2 , Codigo2); // '%c' Caractere único, (char)  armazenado  na variável 'Estado2'
                                                // '%s' Cadeia de carácteres (string) armazenado na variável 'Codigo2'
                                               // '%c%s\n' Imprime a soma das variáveis 'Estado2' e 'Codigo2'
                                              //  "\n" Adiciona uma nova linha
    
    printf("Cidade: %s\n", Cidade2); // '%s' Imprime valor do tipo string, armazenado na variável 'Cidade2'
                                   //  '\n' Adiciona uma nova linha
   
    printf("População: %d\n", Populacao2);  // '%d' Imprime valor do tipo inteiro, armazenado na variável 'Populção2'
                                           //  '\n' Adiciona uma nova linha
    
    printf("PIB: %.2f\n", Pib2);  // '%.2f' Imprime valor do tipo float com duas casas decimais, armazenado na variável 'Pib2'
                                 // '\n' Adiciona uma nova linha
                      
    
    printf("Área km: %.2f\n", Area2); // '%.2f' Imprime um valor float com duas casas decimais, armazenado na variável 'Area2'
                                     //  '\n' Adiciona uma nova linha
    
    printf("Pontos turísticos: %d\n", Pontos_turisticos2); // '%d' Imprime valor do tipo inteiro, armazenado na var 'Pontos_turisticos2'

    return 0;
}