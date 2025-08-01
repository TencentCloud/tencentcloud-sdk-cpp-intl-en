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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDREQUEST_H_

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
                * DescribeSubnetResourceDashboard request structure.
                */
                class DescribeSubnetResourceDashboardRequest : public AbstractModel
                {
                public:
                    DescribeSubnetResourceDashboardRequest();
                    ~DescribeSubnetResourceDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subnet instance ID, such as `subnet-f1xjkw1b`.
                     * @return SubnetIds Subnet instance ID, such as `subnet-f1xjkw1b`.
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Subnet instance ID, such as `subnet-f1xjkw1b`.
                     * @param _subnetIds Subnet instance ID, such as `subnet-f1xjkw1b`.
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * Subnet instance ID, such as `subnet-f1xjkw1b`.
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESUBNETRESOURCEDASHBOARDREQUEST_H_
