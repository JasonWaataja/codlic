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

#include "config.h"

#include "filetypes.h"

std::map<std::string, std::string>
codlic::create_filetype_map()
{
    std::map<std::string, std::string> map_data;
    map_data["c"] = "*.c";
    map_data["cpp"] = "*.cpp|*.cc|*.C";
    map_data["c++"] = "*.cpp|*.cc|*.C";
    return map_data;
}

const std::map<std::string, std::string>&
codlic::filetype_map()
{
    static std::map<std::string, std::string> map_data = create_filetype_map();
    return map_data;
}