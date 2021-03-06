/*
 * JITCompiler.h
 *  Created on: 05/nov/2014
 *      Author: Gianfranco Murador
 *  Provide an interface to the git compiled
 */

#ifndef JITCOMPILER_H_
#define JITCOMPILER_H_
#include <sstream>
#include <string>

namespace vm {
	namespace compiler {
	    enum ARCH {
	    	INTEL = 0,
	    	ARM = 1,
	    	MIPS = 2
	    };

		class JITCompiler {
		private:
             ARCH arch;
		public:
			JITCompiler();
			virtual ~JITCompiler();
			// traduce il codice in linguaggio macchina
			// che viene passata in input, di default viene usata
			// l'architettura intel
			std::string translate(std::stringstream out,
								  int pos,
								  ARCH arch);
		};
	} /* namespace compiler */
} /* namespace vm */

#endif /* JITCOMPILER_H_ */
