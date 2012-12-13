/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2002-2010  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "textfile.h"

int read_discoverable_timeout(const char *src, int *timeout);
int read_pairable_timeout(const char *src, int *timeout);
int read_on_mode(const char *src, char *mode, int length);
int read_local_name(const bdaddr_t *bdaddr, char *name);
int read_local_class(const bdaddr_t *bdaddr, uint8_t *class);
int write_remote_appearance(const bdaddr_t *local, const bdaddr_t *peer,
				uint8_t bdaddr_type, uint16_t appearance);
int read_remote_appearance(const bdaddr_t *local, const bdaddr_t *peer,
				uint8_t bdaddr_type, uint16_t *appearance);
int write_lastused_info(const bdaddr_t *local, const bdaddr_t *peer,
					uint8_t peer_type, struct tm *tm);
ssize_t read_pin_code(const bdaddr_t *local, const bdaddr_t *peer, char *pin);
int delete_entry(const bdaddr_t *src, const char *storage, const bdaddr_t *dst,
							uint8_t dst_type);
int store_record(const gchar *src, const gchar *dst, uint8_t dst_type,
							sdp_record_t *rec);
sdp_record_t *record_from_string(const gchar *str);
sdp_record_t *fetch_record(const gchar *src, const gchar *dst,
			   uint8_t dst_type, const uint32_t handle);
int delete_record(const gchar *src, const gchar *dst, uint8_t dst_type,
							const uint32_t handle);
void delete_all_records(const bdaddr_t *src, const bdaddr_t *dst,
							uint8_t dst_type);
sdp_list_t *read_records(const bdaddr_t *src, const bdaddr_t *dst);
sdp_record_t *find_record_in_list(sdp_list_t *recs, const char *uuid);
int read_device_pairable(const bdaddr_t *local, gboolean *mode);
int write_device_services(const bdaddr_t *sba, const bdaddr_t *dba,
				uint8_t bdaddr_type, const char *services);
int delete_device_service(const bdaddr_t *sba, const bdaddr_t *dba,
						uint8_t bdaddr_type);
char *read_device_services(const bdaddr_t *sba, const bdaddr_t *dba,
							uint8_t bdaddr_type);
int write_device_characteristics(const bdaddr_t *sba, const bdaddr_t *dba,
					uint8_t bdaddr_type, uint16_t handle,
							     const char *chars);
char *read_device_characteristics(const bdaddr_t *sba, const bdaddr_t *dba,
					uint8_t bdaddr_type, uint16_t handle);
int write_device_attribute(const bdaddr_t *sba, const bdaddr_t *dba,
				uint8_t bdaddr_type, uint16_t handle,
							const char *chars);
int read_device_attributes(const bdaddr_t *sba, textfile_cb func, void *data);
int read_device_ccc(const bdaddr_t *local, const bdaddr_t *peer,
			uint8_t bdaddr_type, uint16_t handle, uint16_t *value);
int write_device_ccc(const bdaddr_t *local, const bdaddr_t *peer,
					uint8_t bdaddr_type, uint16_t handle,
					uint16_t value);
void delete_device_ccc(const bdaddr_t *local, const bdaddr_t *peer);
