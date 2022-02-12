/*
 * file: cadastroPress.h
 *
 * Descricao: Cadastro de pressao em veotoes
 *
 * Autor: Felipe Hugo
 * Data: 14/12/2021
 * 
 * Ultima Alteracao: Felipe Hugo
 * Data da ultima alteracao: 14/12/2021
 *
 */
static const int NP = 20;
#include "Pressao.cpp"
class cadastroPress: virtual public Pressao{

    Pressao vPressao[NP];
    bool valid;
public:
    void setPress(); 
    void exPress(float, float);
    void consultPress(float, float);
    void listPress();  
   

};

