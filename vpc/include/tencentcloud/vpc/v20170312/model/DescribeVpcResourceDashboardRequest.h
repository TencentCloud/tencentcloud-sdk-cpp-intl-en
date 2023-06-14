/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_

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
                * DescribeVpcResourceDashboard request structure.
                */
                class DescribeVpcResourceDashboardRequest : public AbstractModel
                {
                public:
                    DescribeVpcResourceDashboardRequest();
                    ~DescribeVpcResourceDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * @return VpcIds Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * @param _vpcIds Vpc instance ID, e.g. vpc-f1xjkw1b.
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                private:

                    /**
                     * Vpc instance ID, e.g. vpc-f1xjkw1b.
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEVPCRESOURCEDASHBOARDREQUEST_H_
