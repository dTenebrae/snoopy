/*
 * SNOOPY LOGGER
 *
 * File: snoopy/output/stderroutput.c
 *
 * Copyright (c) 2015 Bostjan Skufca (bostjan _A_T_ a2o.si)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */



/*
 * Includes order: from local to global
 */
#include "stderroutput.h"

#include <stdio.h>



/*
 * SNOOPY OUTPUT: stderroutput
 *
 * Description:
 *     Sends given message to STDERR
 *
 * Params:
 *     message: message to send
 *
 * Return:
 *     int: number of characters printed
 */
int snoopy_output_stderroutput (char *logMessage, int errorOrMessage, char *arg)
{
    return fprintf(stderr, "%s\n", logMessage);
}