#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

float calcularMedia(float nota1, float nota2, float nota3) {
        return (nota1 + nota2 + nota3) / 3;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    vector<string> alunos;
    vector<float> nota1, nota2, nota3, medias;
    
    for(int i = 0; i < 5; i++) {
    
    string aluno;
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        getline(cin >> ws, aluno);
        alunos.push_back(aluno);

    float n1, n2, n3;
    do {
        cout << "Digite a nota 1 (0 a 10): ";
        cin >> n1;
        if(n1 < 0 || n1 > 10)
            cout << "Valor inválido! Digite entre 0 e 10.\n";
    } while(n1 < 0 || n1 > 10);

    do {
        cout << "Digite a nota 2 (0 a 10): ";
        cin >> n2;
        if(n2 < 0 || n2 > 10)
            cout << "Valor inválido! Digite entre 0 e 10.\n";
    } while(n2 < 0 || n2 > 10);

    do {
        cout << "Digite a nota 3 (0 a 10): ";
        cin >> n3;
        if(n3 < 0 || n3 > 10)
            cout << "Valor inválido! Digite entre 0 e 10.\n";
    } while(n3 < 0 || n3 > 10);
        
        nota1.push_back(n1);
        nota2.push_back(n2);
        nota3.push_back(n3);

    float media = calcularMedia(n1, n2, n3);
        medias.push_back(media);
    }

        cout << "\nALUNO\tN1\tN2\tN3\tMÉDIA\tSITUAÇÃO\n";

    for(int i = 0; i <alunos.size(); i++) {
        cout << alunos[i] << "\t" << nota1[i] << "\t" << nota2[i] << "\t" << nota3[i] << "\t" << medias[i] << "\t";
    
    if(medias[i] >= 7)
        cout << "Aprovado!\n";
    else
        cout << "Reprovado\n";
    }

    float maior = medias[0];
    int indiceMaior = 0;

    for(int i = 1; i < medias.size(); i++) {
        if(medias[i] > maior) {
            maior = medias[i];
            indiceMaior = i;

        }
    }

        cout << "\nMelhor aluno: " << alunos[indiceMaior] << " com media " << maior << endl;

    return(0);
}
