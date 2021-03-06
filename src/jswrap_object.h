/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * JavaScript methods for Objects
 * ----------------------------------------------------------------------------
 */
#include "jsvar.h"

JsVar *jswrap_object_length(JsVar *parent);
JsVar *jswrap_object_toString(JsVar *parent);
JsVar *jswrap_object_clone(JsVar *parent);

void jswrap_object_on(JsVar *parent, JsVar *event, JsVar *listener);
void jswrap_object_emit(JsVar *parent, JsVar *event, JsVar *v1, JsVar *v2);
void jswrap_object_removeAllListeners(JsVar *parent, JsVar *event);

void jswrap_function_replaceWith(JsVar *parent, JsVar *newFunc);
