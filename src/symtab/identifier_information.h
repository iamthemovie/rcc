#ifndef RCC_SYMTAB_IDENTIFIER_INFORMATION_H
#define RCC_SYMTAB_IDENTIFIER_INFORMATION_H

#include "../types/data_type.h"

#include <string>
using std::string;

/**

  Classe base que representa informações sobre identificadores encontrados em um programa
  durante a fase de parsing. Atributos comuns a qualquer tipo específico de informação
  sobre identificadores incluem o identificador (string) em si, sua respectiva categoria
  e nível de escopo em o mesmo é declarado/utilizado.

*/
class IdentifierInformation {
public:
   IdentifierInformation(string id);

   // Getters/setters.
   string identifier();
   void identifier(string id);

   unsigned int scopeLevel() const;
   void scopeLevel(const unsigned int level);
   
   void type(DataType *t);
   DataType *type();
   
private:
   string _id;
   unsigned int _scopeLevel;
   DataType *_type;
   //string _typeStr;
};

#endif
