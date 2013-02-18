#pragma once

#include <common/common.hpp>

/* This file contains some error definitions. */
#define E_PLATFM "Failed to query OpenCL platforms!"
#define E_DEVICE "Failed to query OpenCL devices!"
#define E_CTX "Failed to create context!"
#define E_QUEUE "Failed to create queue!"
#define E_BUF "Failed to create buffer!"
#define E_READ "Failed to read from buffer!"
#define E_WRITE "Failed to write to buffer!"
#define E_BIND "Failed to bind buffer to kernel!"
#define E_INFO "Failed to acquire device information!"
#define E_PROG "Failed to create program!"
#define E_BUILD "Failed to build program! Compilation log available."
#define E_KER "Failed to create kernel!"

/* Error string formatting. */
std::string Error(std::string msg, int code);