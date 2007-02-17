/**
 * projectM -- Milkdrop-esque visualisation SDK
 * Copyright (C)2003-2004 projectM Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * See 'LICENSE.txt' included within this release
 *
 */

#ifndef _PER_FRAME_EQN_TYPES_H
#define _PER_FRAME_EQN_TYPES_H

#include "param_types.h"
#include "expr_types.h"

typedef struct PER_FRAME_EQN_T {
  int index;
  struct PARAM_T * param; /* parameter to be assigned a value */
  struct GEN_EXPR_T * gen_expr;   /* expression that paremeter is equal to */
} per_frame_eqn_t;

#endif /** !_PER_FRAME_EQN_TYPES_H */
