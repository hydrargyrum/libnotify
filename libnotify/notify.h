/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2004-2006 Christian Hammond
 * Copyright (C) 2010 Red Hat, Inc.
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
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA  02111-1307, USA.
 */

#ifndef _LIBNOTIFY_NOTIFY_H_
#define _LIBNOTIFY_NOTIFY_H_

#include <glib.h>

#include <libnotify/notification.h>
#include <libnotify/notify-enum-types.h>
#include <libnotify/notify-features.h>

G_BEGIN_DECLS

/**
 * Initializes the notifications library.
 *
 * @param app_name The application name.
 *
 * @return TRUE if the library initialized properly.
 */
gboolean        notify_init (const char *app_name);

/**
 * Uninitializes the notifications library.
 *
 * This will be automatically called on exit unless previously called.
 */
void            notify_uninit (void);

/**
 * Returns whether or not the notification library is initialized.
 *
 * @return TRUE if the library is initialized, or FALSE.
 */
gboolean        notify_is_initted (void);

/**
 * Returns the name of the application set when notify_init() was called.
 *
 * @return The name of the application.
 */
const char     *notify_get_app_name (void);

GList          *notify_get_server_caps (void);

gboolean        notify_get_server_info (char **ret_name,
                                        char **ret_vendor,
                                        char **ret_version,
                                        char **ret_spec_version);

G_END_DECLS

#endif /* _LIBNOTIFY_NOTIFY_H_ */
