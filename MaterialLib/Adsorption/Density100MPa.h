/**
 * \copyright
 * Copyright (c) 2012-2016, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#ifndef MATERIALSLIB_ADSORPTION_DENSITY100MPA_H
#define MATERIALSLIB_ADSORPTION_DENSITY100MPA_H

#include "Adsorption.h"

namespace Adsorption
{

class Density100MPa : public AdsorptionReaction
{
public:
    double getAdsorbateDensity(const double T_Ads) const;
    double getAlphaT(const double T_Ads) const;
    double characteristicCurve(const double A) const;
    double dCharacteristicCurve(const double A) const;
};

}
#endif // MATERIALSLIB_ADSORPTION_DENSITY100MPA_H
