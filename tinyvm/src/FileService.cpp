/*
 * FileService.cpp
 *
 *  Created on: 18/ott/2014
 *      Author: Gianfranco Murador
 */

#include "FileService.h"

namespace inout {

FileService::FileService() {
}

FileService::~FileService() {
}

FileService::FileService(std::string filename) {
	this->setFileName(filename);
}

void FileService::setFileName(std::string filename) {
	this->filename = filename;
}

std::string FileService::getFileName() {
	if ( this->filename.empty()) {
		throw std::exception();
	}else {
	   return this->filename;
	}
}

/**
 * Read the file e get into a stringstream
 * buffer
 */
void FileService::read() {
		std::string line;
		std::ifstream f(this->filename.c_str());
		// read the file in input with a stream of strings
		try {
			if ( f.is_open()) {
				while (getline(f,line)) {
					this->ss << line;
				}
			}
			f.close();
		} catch (std::exception& ex) {
			if ( f.is_open()) { f.close();}
			throw ex;
		}
}

/**
 * Return a stringstream defined
 **/
std::stringstream& FileService::getStringStream() {
	// if the buffer is empty()
	if (ss.rdbuf()->in_avail() == 0){
	   read();
	}
	return this->ss;
}

} /* namespace inout */
