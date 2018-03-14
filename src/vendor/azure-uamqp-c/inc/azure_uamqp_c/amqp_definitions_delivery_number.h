

// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef AMQP_DEFINITIONS_DELIVERY_NUMBER_H
#define AMQP_DEFINITIONS_DELIVERY_NUMBER_H


#ifdef __cplusplus
#include <cstdint>
extern "C" {
#else
#include <stdint.h>
#include <stdbool.h>
#endif

#include "azure_uamqp_c/amqpvalue.h"
#include "azure_c_shared_utility/umock_c_prod.h"


    typedef sequence_no delivery_number;

    MOCKABLE_FUNCTION(, AMQP_VALUE, amqpvalue_create_delivery_number, delivery_number, value);


    #define amqpvalue_get_delivery_number amqpvalue_get_sequence_no



#ifdef __cplusplus
}
#endif

#endif /* AMQP_DEFINITIONS_DELIVERY_NUMBER_H */