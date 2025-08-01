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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeDBSecurityGroups response structure.
                */
                class DescribeDBSecurityGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDBSecurityGroupsResponse();
                    ~DescribeDBSecurityGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Security group rules
                     * @return Groups Security group rules
                     * 
                     */
                    std::vector<SecurityGroup> GetGroups() const;

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取Private IPv4 address of an instance
                     * @return VIP Private IPv4 address of an instance
                     * 
                     */
                    std::string GetVIP() const;

                    /**
                     * 判断参数 VIP 是否已赋值
                     * @return VIP 是否已赋值
                     * 
                     */
                    bool VIPHasBeenSet() const;

                    /**
                     * 获取Private network port
                     * @return VPort Private network port
                     * 
                     */
                    std::string GetVPort() const;

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                private:

                    /**
                     * Security group rules
                     */
                    std::vector<SecurityGroup> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * Private IPv4 address of an instance
                     */
                    std::string m_vIP;
                    bool m_vIPHasBeenSet;

                    /**
                     * Private network port
                     */
                    std::string m_vPort;
                    bool m_vPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
