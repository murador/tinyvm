/*
 * CommandLine.h
 *
 *  Created on: 17/ott/2014
 *      Author: Gianfranco Murador
 */

#ifndef COMMANDLINE_H_
#define COMMANDLINE_H_
#include "common.h"

namespace inout {
/**
 * Classe per la gestione della linea di comando
 */

class CommandLine {
public:
	// inizializza il tutto
	CommandLine();
	// distrugge l'oggetto
	virtual ~CommandLine();
	// parsa la linea di comando
	CL * parse(int argc,char* argv[]);
	CL * parse_win(int argc, char *argv[]);
	void print_usage();
};


} /* namespace inout */

#endif /* COMMANDLINE_H_ */
