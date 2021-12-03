#include<string>

#include "ast.hpp"

#ifndef __UTILS_HPP__
#define __UTILS_HPP__

std::string elemTypeToCType(ACCCDSL::TensorElemType t);
std::string elemTypeToNCCLType(ACCCDSL::TensorElemType t);
std::string elemTypeToMPIType(ACCCDSL::TensorElemType t);
std::string redOpToNCCLReduceOp(ACCCDSL::ReduceOperation op);
std::string redOpToMPIReduceOp(ACCCDSL::ReduceOperation op);
size_t sizeOfElemType(ACCCDSL::TensorElemType t);

#endif /*__UTILS_HPP__*/