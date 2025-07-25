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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/SecurityGroup.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceSecurityGroups response structure.
                */
                class DescribeDBInstanceSecurityGroupsResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceSecurityGroupsResponse();
                    ~DescribeDBInstanceSecurityGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of security groups in array
                     * @return SecurityGroupSet Information of security groups in array
                     * 
                     */
                    std::vector<SecurityGroup> GetSecurityGroupSet() const;

                    /**
                     * 判断参数 SecurityGroupSet 是否已赋值
                     * @return SecurityGroupSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupSetHasBeenSet() const;

                private:

                    /**
                     * Information of security groups in array
                     */
                    std::vector<SecurityGroup> m_securityGroupSet;
                    bool m_securityGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSRESPONSE_H_
