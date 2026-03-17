# 🧮 Sistema Linear Dinâmico em C

Este repositório contém uma implementação em linguagem C de uma estrutura de dados baseada em **Listas Encadeadas** projetada para armazenar, analisar e manipular **Sistemas Lineares** e **Equações Algébricas** de forma dinâmica.

## 🚀 Funcionalidades Principais
* **Análise de Termos (Parsing):** Leitura iterativa de termos algébricos no formato `ax + by`.
* **Estrutura Baseada em Listas Genéricas:** Utiliza listas de alocação dinâmica genéricas (`void *`), permitindo o escalonamento abstrato sem depender de arrays de tamanho fixo.
* **Hierarquia de Dados Intuitiva:** 
  * `Sistema`: Contém uma lista completa de equações (linhas).
  * `Linha` (Equação): Contém uma lista específica de termos matemáticos.
  * `Termo`: Estrutura atômica com seu respectivo coeficiente e incógnita.
* **Tratamento Dinâmico de Sinais Matemáticos:** Inversão lógica de coeficientes baseada nos operadores de adição e subtração lidos em tempo de execução.

## 💻 Como Compilar e Executar

Este projeto foi construído para utilizar C99/C11 e inclui configurações específicas para suporte a UTF-8 no console do Windows.

### Usando GCC (Terminal Padrão)

**1. Clone o repositório e navegue até a pasta:**
```bash
git clone https://github.com/Vinic-Dev/Sistemas_Lineares.git
cd Sistemas_Lineares
```

**2. Compile os arquivos código-fonte:**
```bash
gcc main.c sistema_linear.c lista.c -o sistema_linear
```

**3. Execute o programa principal:**
```bash
./sistema_linear
```

### Usando CMake (Recomendado)
O projeto contém suporte configurado via `CMakeLists.txt` para ambientes que usam ferramentas de build automáticas (como CLion, Visual Studio, etc).

**1. Gere os arquivos de build e compile:**
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## 🛠️ Tecnologias Utilizadas
* **Linguagem:** C (Suporte a Standards recentes)
* **Memória:** Manipulação direta de Array de ponteiros Genéricos (`void *`) e Alocação Dinâmica (`malloc()`/`free()`).
* **Sistemas Operacionais:** Suporte unificado com fix específico para visualização de texto no Windows Console (`<windows.h>`).
