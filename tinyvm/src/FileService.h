/*
 * FileService.h
 *
 *  Created on: 18/ott/2014
 *      Author: Gianfranco Murador
 * Definisce un classe per la gestione
 * dei file. Nel caso deve fornire un modo
 * efficiente per la scritture e lettura di un file
 */

#ifndef FILESERVICE_H_
#define FILESERVICE_H_
#include <sstream>
#include <iostream>
#include <fstream>

namespace inout {
   /**
    * Copyright(C) - Definition of simple FileService
    *
    **/
	class FileService {
	private:
      std::string filename;
      std::stringstream ss;
      void read();
	public:
		FileService();
		FileService(std::string filename);
		void setFileName(std::string filename);
		std::string getFileName();
		virtual ~FileService();
		std::stringstream& getStringStream();
	};

} /* namespace inout */

#endif /* FILESERVICE_H_ */
