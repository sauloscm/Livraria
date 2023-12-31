#ifndef MENU_HPP
#define MENU_HPP
#include "livraria.hpp"

class Menu {
public:
	Menu(Livraria &liv);
	void executar();
	void editarLivro();

private:
    Livraria& livraria;
    int exibirMenu() const;
    void listarLivros() const;
    void adicionarLivro();
    void excluirLivro();
    void pesquisarLivro() const;
	void menuEditarLivro(); 
	

};

#endif
