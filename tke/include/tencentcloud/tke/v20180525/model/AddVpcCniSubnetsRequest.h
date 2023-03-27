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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_

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
                * AddVpcCniSubnets request structure.
                */
                class AddVpcCniSubnetsRequest : public AbstractModel
                {
                public:
                    AddVpcCniSubnetsRequest();
                    ~AddVpcCniSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The subnets added for the cluster container network
                     * @return SubnetIds The subnets added for the cluster container network
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置The subnets added for the cluster container network
                     * @param SubnetIds The subnets added for the cluster container network
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取ID of the VPC where the cluster resides
                     * @return VpcId ID of the VPC where the cluster resides
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC where the cluster resides
                     * @param VpcId ID of the VPC where the cluster resides
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Whether to skip adding the VPC IP range to `NonMasqueradeCIDRs` field of `ip-masq-agent-config`. Default value: `false`
                     * @return SkipAddingNonMasqueradeCIDRs Whether to skip adding the VPC IP range to `NonMasqueradeCIDRs` field of `ip-masq-agent-config`. Default value: `false`
                     */
                    bool GetSkipAddingNonMasqueradeCIDRs() const;

                    /**
                     * 设置Whether to skip adding the VPC IP range to `NonMasqueradeCIDRs` field of `ip-masq-agent-config`. Default value: `false`
                     * @param SkipAddingNonMasqueradeCIDRs Whether to skip adding the VPC IP range to `NonMasqueradeCIDRs` field of `ip-masq-agent-config`. Default value: `false`
                     */
                    void SetSkipAddingNonMasqueradeCIDRs(const bool& _skipAddingNonMasqueradeCIDRs);

                    /**
                     * 判断参数 SkipAddingNonMasqueradeCIDRs 是否已赋值
                     * @return SkipAddingNonMasqueradeCIDRs 是否已赋值
                     */
                    bool SkipAddingNonMasqueradeCIDRsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The subnets added for the cluster container network
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * ID of the VPC where the cluster resides
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Whether to skip adding the VPC IP range to `NonMasqueradeCIDRs` field of `ip-masq-agent-config`. Default value: `false`
                     */
                    bool m_skipAddingNonMasqueradeCIDRs;
                    bool m_skipAddingNonMasqueradeCIDRsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_
