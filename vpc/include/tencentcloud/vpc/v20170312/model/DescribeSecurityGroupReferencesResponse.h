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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ReferredSecurityGroup.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupReferences response structure.
                */
                class DescribeSecurityGroupReferencesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupReferencesResponse();
                    ~DescribeSecurityGroupReferencesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Referred security groups.
                     * @return ReferredSecurityGroupSet Referred security groups.
                     * 
                     */
                    std::vector<ReferredSecurityGroup> GetReferredSecurityGroupSet() const;

                    /**
                     * 判断参数 ReferredSecurityGroupSet 是否已赋值
                     * @return ReferredSecurityGroupSet 是否已赋值
                     * 
                     */
                    bool ReferredSecurityGroupSetHasBeenSet() const;

                private:

                    /**
                     * Referred security groups.
                     */
                    std::vector<ReferredSecurityGroup> m_referredSecurityGroupSet;
                    bool m_referredSecurityGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESRESPONSE_H_
