// Exercício sugerido para a pratica do que foi visto em sala de aula.

#include <stdio.h>
#include <stdlib.h>

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int senha = 0;
    int t = 0;
    
    int canA = 0, canB = 0, canC = 0, branco = 0, nulo = 0;
    
    int op = 0;
    int urnaAtiva = 1;

    do {
        printf("Insira a senha da urna: ");
        scanf("%d", &senha);
        
        if (senha == 4321) {
            printf("Urna ativada com sucesso!\n\n");
            break;
        } else {
            t++;
            if (t < 3) {
                printf("Senha incorreta. Tentativa %d/3\n", t);
                limparTela();
            } else {
                printf("Acesso bloqueado. Procure o administrador do sistema.\n");
                return 0;
            }
        }
    } while (t < 3);

    while (urnaAtiva) {
        limparTela();
        printf("\n=== URNA ELETRÔNICA ===\n");
        printf("10 - Candidato A\n");
        printf("20 - Candidato B\n");
        printf("30 - Candidato C\n");
        printf(" 0 - Voto em Branco\n");
        printf("-----------------------\n");
        printf("Insira o numero do seu voto: ");
        scanf("%d", &op);

        switch (op) {
            case 10:
                canA++;
                printf(">> Voto confirmado para Candidato A!\n");
                break;
            case 20:
                canB++;
                printf(">> Voto confirmado para Candidato B!\n");
                break;
            case 30:
                canC++;
                printf(">> Voto confirmado para Candidato C!\n");
                break;
            case 0:
                branco++;
                printf(">> Voto em BRANCO confirmado!\n");
                break;
            case 999:
                printf("\n--- MODO MESÁRIO ---\n");
                printf("Digite a senha do mesario para encerramento: ");
                scanf("%d", &senha);
                
                if (senha == 4321) {
                    urnaAtiva = 0;
                    printf("Votação encerrada com sucesso.\n");
                } else {
                    printf("Senha incorreta! Operação cancelada.\n");
                }
                break;
            default:
                nulo++;
                printf(">> Voto NULO registrado!\n");
                break;
        }
    }

    int totalVotos = canA + canB + canC + branco + nulo;

    limparTela();
    printf("======================================\n");
    printf("        BOLETIM DE URNA (APURAÇÃO)    \n");
    printf("======================================\n");
    printf("Candidato A (10): %d voto(s)\n", canA);
    printf("Candidato B (20): %d voto(s)\n", canB);
    printf("Candidato C (30): %d voto(s)\n", canC);
    printf("Votos em Branco : %d voto(s)\n", branco);
    printf("Votos Nulos     : %d voto(s)\n", nulo);
    printf("--------------------------------------\n");
    printf("TOTAL DE VOTOS  : %d\n", totalVotos);
    printf("======================================\n");

    return 0;
}