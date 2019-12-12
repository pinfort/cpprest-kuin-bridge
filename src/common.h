#pragma once

#pragma comment(lib, "ucrt.lib")
#pragma comment(lib, "vcruntime.lib")

#include <Windows.h>

#include <cpprest/http_client.h>
#include <cpprest/filestream.h>
#include "kuin_type_bridge.h"

#define KUIN_MAX_PATH (512)

using namespace utility;                    // Common utilities like string conversions
using namespace web;                        // Common features like URIs.
using namespace web::http;                  // Common HTTP functionality
using namespace web::http::client;          // HTTP client features
using namespace concurrency::streams;       // Asynchronous streams

typedef unsigned char Bool;
typedef wchar_t Char;
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned long long U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef signed long long S64;
