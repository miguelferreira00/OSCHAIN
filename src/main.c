#include "inc/wallet.h"
#include "inc/server.h"
#include "inc/main.h"

// É responsável pela interação com o utilizador || Gera as trasnsações entre as wallets(carteiras)

float bal(int id){
    // TO DO -- dúvida em relação ao tipo da função se será int ou float
    return -1;
}

int trx(int src_id, int dest_id, float amount){
    // TO DO -- dúvida em relação ao tipo do amount
    return -1;
}

void rcp(int id){
    // TO DO -- dúvida em relação ao tipo da função | o que é o receipt na prática?
}

void help(){
    printf("Comandos disponíveis:\n");
    printf("bal <id> - Ver saldo atual da carteira\n");
    printf("trx <src_id> <dest_id> <amount> - Criar transação de <src_id> para <dest_id>\n");
    printf("rcp <id> - Obter comprovativo de transação de um id\n");
    printf("stat - Mostrar estado atual do sistema\n");
    printf("end - Terminar o programa\n");
}

void end(){
    printf("A terminar programa");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".");
    exit();
}