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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ResourceDashboard.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeVpcResourceDashboard response structure.
                */
                class DescribeVpcResourceDashboardResponse : public AbstractModel
                {
                public:
                    DescribeVpcResourceDashboardResponse();
                    ~DescribeVpcResourceDashboardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of resource objects.
                     * @return ResourceDashboardSet List of resource objects.
                     * 
                     */
                    std::vector<ResourceDashboard> GetResourceDashboardSet() const;

                    /**
                     * 判断参数 ResourceDashboardSet 是否已赋值
                     * @return ResourceDashboardSet 是否已赋值
                     * 
                     */
                    bool ResourceDashboardSetHasBeenSet() const;

                private:

                    /**
                     * List of resource objects.
                     */
                    std::vector<ResourceDashboard> m_resourceDashboardSet;
                    bool m_resourceDashboardSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDRESPONSE_H_
