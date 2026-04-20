📌 Sobre o projeto

Este projeto é um sistema desenvolvido em C++ que permite cadastrar alunos, registrar suas notas e calcular automaticamente suas médias.

O programa também classifica os alunos como aprovados ou reprovados e identifica o aluno com o melhor desempenho da turma.

✨ Funcionalidades

✔ Cadastro de alunos
✔ Entrada de 3 notas por aluno
✔ Validação de dados (somente valores entre 0 e 10)
✔ Cálculo automático da média
✔ Exibição em formato de tabela
✔ Classificação automática:

✅ Aprovado (média ≥ 7)
❌ Reprovado (média < 7)

✔ Identificação do melhor aluno 🏆

🖥️ Demonstração
Digite o nome do aluno 1: João
Digite a nota 1 (0 a 10): 8
Digite a nota 2 (0 a 10): 7
Digite a nota 3 (0 a 10): 9

ALUNO    N1    N2    N3    MÉDIA    SITUAÇÃO
João     8     7     9     8        Aprovado!

Melhor aluno: João com media 8
⚙️ Como executar
🔧 Pré-requisitos
Compilador C++ (g++, MinGW ou MSYS2)
Sistema operacional Windows
🛠️ Compilar
g++ main.cpp -o programa
▶️ Executar
./programa
🧠 Estrutura do código

O projeto utiliza:

Vetores (vector) → armazenar dados dos alunos
Função (calcularMedia) → separar lógica de cálculo
Laços (for) → repetição de cadastro
Validação (do-while) → garantir entrada correta
🔍 Lógica aplicada

O cálculo da média segue a fórmula:

m
e
ˊ
dia=
3
nota1+nota2+nota3
	​

🚀 Melhorias futuras
🔄 Permitir número variável de alunos
💾 Salvar dados em arquivo
📊 Ordenar alunos por desempenho
🎨 Criar interface gráfica
📱 Adaptar para aplicações reais (sistema escolar)
⚠️ Observações
O sistema está configurado para 5 alunos fixos
A biblioteca <math.h> não é necessária no código atual
Compatível com UTF-8 (acentuação funcionando)
👨‍💻 Autor

Bruno José Favetti Naressi (Glório)
🎓 Ciência da Computação
💻 Em evolução constante na área de tecnologia

⭐ Contribuição

Se quiser contribuir:

Fork o projeto
Crie uma branch (git checkout -b feature/minha-feature)
Commit (git commit -m 'feat: minha melhoria')
Push (git push origin minha-feature)
Abra um Pull Request
💡 Licença

Este projeto é livre para estudo e aprimoramento 🚀
