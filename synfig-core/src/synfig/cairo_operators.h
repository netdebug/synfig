/* === S Y N F I G ========================================================= */
/*!	\file cairo_operators.h
 **	\brief Helper functions that use Cairo operators to do Synfig blending
 **
 **	$Id$
 **
 **	\legal
 **	Copyright (c) 2012 Carlos López
 **
 **	This package is free software; you can redistribute it and/or
 **	modify it under the terms of the GNU General Public License as
 **	published by the Free Software Foundation; either version 2 of
 **	the License, or (at your option) any later version.
 **
 **	This package is distributed in the hope that it will be useful,
 **	but WITHOUT ANY WARRANTY; without even the implied warranty of
 **	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 **	General Public License for more details.
 **	\endlegal
 */
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_CAIRO_OPERATORS_H
#define __SYNFIG_CAIRO_OPERATORS_H

/* === H E A D E R S ======================================================= */
#include "color.h"
#include "cairo.h"
#include "cairomm/cairomm.h"

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */
void cairo_paint_with_alpha_operator(cairo_t* cr, float alpha, synfig::Color::BlendMethod method, int w, int h);
//void cairo_paint_operator(cairo_t* cr, Color::BlendMethod method);
//void cairo_stroke_operator(cairo_t* cr, Color::BlendMethod method);
//void cairo_fill_operator(cairo_t* cr, Color::BlendMethod method);
//void cairo_mask_operator(cairo_t* cr, cairo_pattern_t* pattern, Color::BlendMethod method);
/* === E N D =============================================================== */

#endif
