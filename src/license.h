/*
 * Copyright (C) 2017 Jason Waataja

 * This file is part of CodLic.

 * CodLic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * CodLic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with CodLic.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CODLIC_LICENSE_H
#define CODLIC_LICENSE_H

#include <map>

namespace codlic {

/* Get a map of license names to paths where they are contained. */
const std::map<std::string, std::string>& license_paths();

/*
 * Don't call this function. Call license_paths() instead. It returns a static
 * instance of an object created by this function.
 */
std::map<std::string, std::string> create_license_paths();

class License {
public:
    License(const std::string& file_path);
};
} /* namespace codlic */

#endif /* CODLIC_LICENSE_H */
