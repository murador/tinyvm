/*
 * GianoParser.h
 *
 *  Created on: 16/ott/2014
 *      Author: Gianfranco Murador
 *  Parser in spirit del linguaggio Giano.
 *  Vedere una possibile integrazione con le librerie C-Lang
 *  Inoltre vedere come richiamare il parser per la definizione
 *  e gestione della grammatica
 */
#pragma once
#ifndef GIANOPARSER_H_
#define GIANOPARSER_H_
#include <string>
#include <sstream>
#include <boost/spirit/include/qi.hpp>

namespace parser{

namespace qi = boost::spirit;

class GianoParser {
private:
	  /**
	   * Definizione del lexer del linguaggio
	   */
      int defineLexer();

      /**
       * Definizione del parser del linguaggio
       * in forma BNF
       */
      int defineParser();
public:
        // in questo punto definiamo correttamente
		GianoParser();

		// viene parsato il contenuto dello stream
		// nel caso torna in output un errore
		int parse(std::stringstream& ssource);

		// in questo punto viene valutato il contenuto
		// quindi parsing ed esecuzione
		int evalute(std::stringstream& ssource);

		// traduzione del contenuto in output
		std::string translateToBC(std::stringstream& ssource);

		// distrutture di default
		virtual ~GianoParser();
	};
}

#endif /* GIANOPARSER_H_ */
