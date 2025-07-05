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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CheckEdgeClusterCIDR request structure.
                */
                class CheckEdgeClusterCIDRRequest : public AbstractModel
                {
                public:
                    CheckEdgeClusterCIDRRequest();
                    ~CheckEdgeClusterCIDRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster VPC ID
                     * @return VpcId Cluster VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Cluster VPC ID
                     * @param _vpcId Cluster VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Cluster Pod CIDR block
                     * @return PodCIDR Cluster Pod CIDR block
                     * 
                     */
                    std::string GetPodCIDR() const;

                    /**
                     * 设置Cluster Pod CIDR block
                     * @param _podCIDR Cluster Pod CIDR block
                     * 
                     */
                    void SetPodCIDR(const std::string& _podCIDR);

                    /**
                     * 判断参数 PodCIDR 是否已赋值
                     * @return PodCIDR 是否已赋值
                     * 
                     */
                    bool PodCIDRHasBeenSet() const;

                    /**
                     * 获取Cluster service CIDR block
                     * @return ServiceCIDR Cluster service CIDR block
                     * 
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置Cluster service CIDR block
                     * @param _serviceCIDR Cluster service CIDR block
                     * 
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     * 
                     */
                    bool ServiceCIDRHasBeenSet() const;

                private:

                    /**
                     * Cluster VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Cluster Pod CIDR block
                     */
                    std::string m_podCIDR;
                    bool m_podCIDRHasBeenSet;

                    /**
                     * Cluster service CIDR block
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CHECKEDGECLUSTERCIDRREQUEST_H_
