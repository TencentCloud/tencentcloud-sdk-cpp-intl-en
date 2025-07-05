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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupReferences request structure.
                */
                class DescribeSecurityGroupReferencesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupReferencesRequest();
                    ~DescribeSecurityGroupReferencesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取A set of security group instance IDs, e.g. ['sg-12345678']
                     * @return SecurityGroupIds A set of security group instance IDs, e.g. ['sg-12345678']
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置A set of security group instance IDs, e.g. ['sg-12345678']
                     * @param _securityGroupIds A set of security group instance IDs, e.g. ['sg-12345678']
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * A set of security group instance IDs, e.g. ['sg-12345678']
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESECURITYGROUPREFERENCESREQUEST_H_
