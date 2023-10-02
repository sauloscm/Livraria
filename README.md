# Livraria

Este é um projeto de uma livraria virtual em C++ que permite adicionar, listar, editar, excluir e pesquisar livros.

## Pré-requisitos

Antes de executar o projeto, certifique-se de ter o compilador C++ (como o g++) instalado em seu sistema.

## Compilando e Executando

Para compilar o projeto, você pode usar o seguinte comando: 

g++ -std=c++11 -Wall -Wextra -o livraria main.cpp menu.cpp livraria.cpp livro.cpp

Depois de compilado, execute o programa com:

./livraria

O projeto inclui um arquivo `Makefile` que simplifica o processo de compilação e execução do programa.

make`: Isso compilará o programa principal e criará um arquivo executável chamado `livraria`.

make clean`: Isso removerá todos os arquivos objeto gerados durante a compilação, bem como o executável `livraria`.

## Funcionalidades

O projeto da livraria possui as seguintes funcionalidades:

- Adicionar Livros
- Listar Livros
- Editar Livros
- Excluir Livros
- Pesquisar Livros


