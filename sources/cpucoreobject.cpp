/*Copyright 2016 Michael Osei

This file is part of Cysboard.

Cysbaord is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Cysboard is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Cysboard.  If not, see <http://www.gnu.org/licenses/>.*/


#include "cpucoreobject.h"

CpuCoreObject::CpuCoreObject(){}
CpuCoreObject::~CpuCoreObject(){}

int CpuCoreObject::getCurrentSpeed(){
    return m_currentSpeed;
}

int CpuCoreObject::getCacheSize(){
    return m_cacheSize;
}

double CpuCoreObject::getUsePercentage(){
    return m_usePercentage;
}

