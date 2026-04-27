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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeInstanceTypes request structure.
                */
                class DescribeInstanceTypesRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTypesRequest();
                    ~DescribeInstanceTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone code, such as ap-guangzhou-1. If not passed, return models under the account in all AZs.
                     * @return Zone Availability zone code, such as ap-guangzhou-1. If not passed, return models under the account in all AZs.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone code, such as ap-guangzhou-1. If not passed, return models under the account in all AZs.
                     * @param _zone Availability zone code, such as ap-guangzhou-1. If not passed, return models under the account in all AZs.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Availability zone code, such as ap-guangzhou-1. If not passed, return models under the account in all AZs.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESREQUEST_H_
