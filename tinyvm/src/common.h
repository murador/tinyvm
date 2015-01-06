/*
 * common.h
 *
 *  Created on: 17/ott/2014
 *      Author: Gianfranco Murador
 */

#ifndef COMMON_H_
#define COMMON_H_
#include <string>

/**
 * Definisce una strutture per il parsing di linee di comando
 * Ex. tinyvm -c -f file -lib
 *     tinyvm  -i -lib
 */
typedef struct CL {
  std::string input;
  int compile;
  std::string libpath;
  // usalo come un interprete
  int interactive;
  int ok;
}CL;

#endif /* COMMON_H_ */
