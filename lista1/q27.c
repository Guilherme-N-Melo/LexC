#include <stdio.h>

int main() {
    const int userT = 1001;
    const int passT = 4321;
    int user, pass;

    printf("Digite o usuario: ");
    scanf("%d", &user);

    printf("Digite a senha: ");
    scanf("%d", &pass);

    if (user == userT) {
        if (pass == passT) {
            printf("Acesso liberado\n");
        } else {
            printf("Senha incorreta\n");
        }
    } else {
        printf("Usuario inexistente\n");
    }

    return 0;
}