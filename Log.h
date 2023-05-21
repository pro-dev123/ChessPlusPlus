#pragma once

#ifndef _LOG_H
#define _LOG_H

#include <iostream>

#define LOG(x) std::cout << "LOG: " << x << std::endl;
#define WARN(x) std::cout << "WARN: " << x << std::endl;
#define ERROR(x) std::cout << "ERROR: " << x << std::endl;

#endif // !_LOG_H
