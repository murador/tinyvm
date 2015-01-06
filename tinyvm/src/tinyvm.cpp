//============================================================================
// Name        : tinyvm.cpp
// Author      : GIanfranco Murador
// Version     :
// Copyright   : GPL
// Description : Simple and tiny VM, with LLVM spec
// Dependency - LLVM and boost library
// Al momento la compilazione viene fatta su ambiente Linux 64 bit
// il porting su windows dovrà contemplare l'uso di LLVM e boost lib per
// windows, per fare questo occorre compilare llvm, in quanto non esistono dei precompilati
// come per le librerie boost
//============================================================================

#include <iostream>
#include "Logger.h"
#include <stdexcept>
#include "version.h"
#include "CommandLine.h"
using namespace std;
using namespace inout;

int banner() {
	cout << "Giano VM - v"
		 << GIANO_MAX_VERSION << "."
		 << GIANO_MIN_VERSION
		 << " (C) 2014 GWS" << endl;
	return 1;
}

int main(int argc, char * argv[]) {
	banner();
	init_logger("Tinyvm");
	logging::add_common_attributes();
	using namespace logging::trivial;
	src::severity_logger<severity_level> lg;

	try {
		BOOST_LOG_SEV(lg, debug)<< "Initialize command input" << std::endl;
		CommandLine * commandLine = new CommandLine();
		CL *cl = commandLine->parse(argc, argv);
		if (!cl->ok) {
			commandLine->print_usage();
			BOOST_LOG_SEV(lg, debug)<< "Malformed parameter";
			return -1;
		}
		// inizializza il parser
	} catch (std::exception& e) {
		std::cout << "FAILURE: " << e.what() << std::endl;
		BOOST_LOG_SEV(lg, fatal)<< e.what() << std::endl;
		return -1;
	}
	return 0;
}
