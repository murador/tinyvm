/*
 * Logger.h
 *  Created on: 18/ott/2014
 *      Author: Gianfranco Murador
 *  Definisce un wrapper per boost trivial logger
 *  Trivial logger è una libreria avanzata per tracciare i log
 *  applicativi =). E' thread safe e gestisce correttamenete i sink di logging
 *
 */

#pragma once
#ifndef LOGGER_H_
#define LOGGER_H_

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
namespace logging = boost::log;
namespace src = boost::log::sources;
namespace sinks = boost::log::sinks;
namespace keywords = boost::log::keywords;

/**
 * Initialize the boostlogger
 */
void init_logger(std::string filename){
	 logging::add_file_log
	    (
	        keywords::file_name = filename + "_%N.log",                                   /*< file name pattern >*/
	        keywords::rotation_size = 10 * 1024 * 1024,                                   /*< rotate files every 10 MiB... >*/
	        keywords::time_based_rotation = sinks::file::rotation_at_time_point(0, 0, 0), /*< ...or at midnight >*/
	        keywords::format = "[%TimeStamp%]: %Message%",                                 /*< log record format >*/
	        keywords::auto_flush = true
	     );

	 	//
	    logging::core::get()->set_filter
	    (
	        logging::trivial::severity >= logging::trivial::info
	    );

}

#endif /* LOGGER_H_ */
