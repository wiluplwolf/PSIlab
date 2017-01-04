
/*! \file Hashmap.h
    \brief Handles inclusion of hash map STL extension.
*/

/*
 * 
 * website: http://kataklinger.com/
 * contact: me[at]kataklinger.com
 *
 */

#ifndef __GA_HASHMAP_H__
#define __GA_HASHMAP_H__

#include "Platform.h"

#ifdef __GAL_DOCUMENTATION__

/// <summary>This macro defines name of namespace which contains non-standard extenstions of STL.</summary>
#define STLEXT

#else

#if defined(GAL_STL_EXT_MSVC)

#include <hash_map>
#define STLEXT stdext

#elif defined(GAL_STL_EXT_STLPORT)

#include <hash_map>
#define STLEXT std;

#elif defined(GAL_STL_EXT_GNUC)

#include <ext/hash_map>
#define STLEXT __gnu_cxx;

#endif

#endif

#endif // __GA_HASHMAP_H__
