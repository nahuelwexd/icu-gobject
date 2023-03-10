/*
 * Copyright 2023 Nahuel Gomez https://nahuelwexd.com
 *
 * SPDX-License-Identifier: LGPL-3.0-or-later
 */

#include "icu-field-position.h"

/**
 * IcuFieldPosition:
 * @begin_index: The start of the text range containing field.
 * @end_index: The limit of the text range containing field.
 * @field: The field.
 *
 * A struct representing a range of text containing a specific field.
 */

G_DEFINE_BOXED_TYPE (IcuFieldPosition, icu_field_position, icu_field_position_copy, icu_field_position_free)

IcuFieldPosition *
icu_field_position_copy (const IcuFieldPosition *self)
{
  IcuFieldPosition *copy = NULL;

  g_return_val_if_fail (self != NULL, NULL);

  copy = g_new0 (IcuFieldPosition, 1);
  memcpy (copy, self, sizeof (IcuFieldPosition));

  return copy;
}

void
icu_field_position_free (IcuFieldPosition *self)
{
  g_return_if_fail (self != NULL);
  g_free (self);
}
