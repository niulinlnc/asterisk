/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_playback.c
 *
 * Playback control resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_PLAYBACK_H
#define _ASTERISK_RESOURCE_PLAYBACK_H

#include "asterisk/ari.h"

/*! \brief Argument struct for ast_ari_get_playback() */
struct ast_get_playback_args {
	/*! \brief Playback's id */
	const char *playback_id;
};
/*!
 * \brief Get a playback's details.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_playback(struct ast_variable *headers, struct ast_get_playback_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_stop_playback() */
struct ast_stop_playback_args {
	/*! \brief Playback's id */
	const char *playback_id;
};
/*!
 * \brief Stop a playback.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_stop_playback(struct ast_variable *headers, struct ast_stop_playback_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_control_playback() */
struct ast_control_playback_args {
	/*! \brief Playback's id */
	const char *playback_id;
	/*! \brief Operation to perform on the playback. */
	const char *operation;
};
/*!
 * \brief Control a playback.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_control_playback(struct ast_variable *headers, struct ast_control_playback_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_PLAYBACK_H */
