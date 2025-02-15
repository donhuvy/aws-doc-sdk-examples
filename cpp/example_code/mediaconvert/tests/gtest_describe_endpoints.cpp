// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0
/*
 * Test types are indicated by the test label ending.
 *
 * _1_ Requires credentials, permissions, and AWS resources.
 * _2_ Requires credentials and permissions.
 * _3_ Does not require credentials.
 *
 */

#include <gtest/gtest.h>
#include "mediaconvert_samples.h"
#include "MediaConvert_gtests.h"

namespace AwsDocTest {
    // NOLINTNEXTLINE(readability-named-parameter)
    TEST_F(MediaConvert_GTests, describe_endpoints_2_) {

        auto result = AwsDoc::MediaConvert::describeEndpoints(*s_clientConfig);
        ASSERT_TRUE(result);
    }

} // namespace AwsDocTest
