// IDBusWatch.hh --- DBUS bus watch interface
//
// Copyright (C) 2007, 2008, 2011 Rob Caelers <robc@krandor.nl>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef IDBUSWATCH_HH
#define IDBUSWATCH_HH

#include <string>

namespace workrave
{
  class IDBusWatch
  {
  public:
    virtual ~IDBusWatch() {}
    virtual void bus_name_presence(const std::string &name, bool present) = 0;
  };
}

#endif // IDBUSWATCH_HH
