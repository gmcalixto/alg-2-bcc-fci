# Algoritmos e Programação II - Aulas de Laboratório
Ambiente para compilação de programas para a disciplina de Algoritmos e Programação do curso de BCC da FCI

## Compilando programas em C no GitHub Codespaces

Este repositório contém os programas em **C** que serão desenvolvidos nas aulas de laboratório que podem ser compilados diretamente no terminal do GitHub Codespaces usando o **GCC**.

---

## 📦 Pré-requisitos
- Ter o compilador **GCC** instalado no ambiente.  
  > No Codespaces, o GCC já se encontra previamente instalado

---

## ▶️ Compilando e executando

1. Abra o terminal no Codespaces.
2. Execute o comando abaixo para compilar:

```bash
gcc programa.c -o executavel.o
```

Sendo **programa.c** o arquivo que contém o programa em C para ser compiilado e **executavel** o arquivo resultante da compilação para ser executado.

3. Para executar o programa, invoque o programa da seguinte maneira:

```bash
./executavel.o
```