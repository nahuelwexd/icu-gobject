/*
 * Copyright 2022 Nahuel Gomez https://nahuelwexd.com
 *
 * SPDX-License-Identifier: LGPL-3.0-or-later
 */

#pragma once

#if !defined(ICU_USE_UNSTABLE_API)
#  error "icu-gobject is unstable API. You must define ICU_USE_UNSTABLE_API before including <icu-gobject.h>"
#endif

#include <glib.h>

G_BEGIN_DECLS

#define _ICU_GOBJECT_INSIDE
#  include "icu-constrained-field-position.h"
#  include "icu-enum-types.h"
#  include "icu-error.h"
#  include "icu-field-position-iterator.h"
#  include "icu-field-position.h"
#  include "icu-formatted-number.h"
#  include "icu-formatted-value.h"
#  include "icu-number-format-field.h"
#  include "icu-number-formatter.h"
#  include "icu-version.h"
#undef _ICU_GOBJECT_INSIDE

G_END_DECLS
