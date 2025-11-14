printf("=== Cadastro de Territorios ===\n\n");

// Entrada dos dados
for (i = 0; i < 5; i++) {
    printf("Cadastro do Territorio %d:\n", i + 1);

    printf("Digite o nome do territorio: ");
    scanf("%s", territorios[i].nome);

    printf("Digite a cor do exercito: ");
    scanf("%s", territorios[i].cor);

    printf("Digite a quantidade de tropas: ");
    scanf("%d", &territorios[i].tropas);

    printf("\n");
}

// Exibição dos dados cadastrados
printf("\n=== Territorios Cadastrados ===\n\n");

for (i = 0; i < 5; i++) {
    printf("Territorio %d:\n", i + 1);
    printf("Nome: %s\n", territorios[i].nome);
    printf("Cor do exercito: %s\n", territorios[i].cor);
    printf("Tropas: %d\n", territorios[i].tropas);
    printf("-----------------------------\n");
}

return 0;