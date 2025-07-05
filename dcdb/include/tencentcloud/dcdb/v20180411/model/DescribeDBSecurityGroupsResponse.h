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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
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
                     * 获取Security group details
                     * @return Groups Security group details
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
                     * 获取Instance VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VIP Instance VIP
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance Port
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VPort Instance Port
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Security group details
                     */
                    std::vector<SecurityGroup> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * Instance VIP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vIP;
                    bool m_vIPHasBeenSet;

                    /**
                     * Instance Port
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_vPort;
                    bool m_vPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDBSECURITYGROUPSRESPONSE_H_
