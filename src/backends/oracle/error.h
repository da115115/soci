//
// Copyright (C) 2004-2007 Maciej Sobczak, Stephen Hutton
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef SOCI_ORACLE_ERROR_H_INCLUDED
#define SOCI_ORACLE_ERROR_H_INCLUDED

#ifdef SOCI_HEADERS_NOT_BURIED
#include "soci-oracle.h"
#else
#include <soci/oracle/soci-oracle.h>
#endif

namespace soci
{

namespace details
{

namespace oracle
{

void throw_oracle_soci_error(sword res, OCIError *errhp);

void get_error_details(sword res, OCIError *errhp,
    std::string &msg, int &errNum);

} // namespace oracle

} // namespace details

} // namespace soci

#endif
