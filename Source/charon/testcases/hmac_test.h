/**
 * @file hmac_test.h
 * 
 * @brief Tests the hmac class
 * 
 */

/*
 * Copyright (C) 2005 Jan Hutter, Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */
 
#ifndef HMAC_TEST_H_
#define HMAC_TEST_H_

#include "../transforms/hmac.h"
#include "../utils/tester.h"

/**
 * @brief Test function used to test the hmac functionality
 * using sha1.
 *
 * @param tester associated tester object
 */
void test_hmac_sha1(tester_t *tester);

#endif /*HMAC_TEST_H_*/
