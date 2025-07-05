/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVEINPUTSECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVEINPUTSECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeStreamLiveInputSecurityGroups request structure.
                */
                class DescribeStreamLiveInputSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLiveInputSecurityGroupsRequest();
                    ~DescribeStreamLiveInputSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                private:

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVEINPUTSECURITYGROUPSREQUEST_H_
