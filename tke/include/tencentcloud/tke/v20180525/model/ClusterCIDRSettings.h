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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Container networking parameters for the cluster
                */
                class ClusterCIDRSettings : public AbstractModel
                {
                public:
                    ClusterCIDRSettings();
                    ~ClusterCIDRSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC
                     * @return ClusterCIDR CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 设置CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC
                     * @param ClusterCIDR CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC
                     */
                    void SetClusterCIDR(const std::string& _clusterCIDR);

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取Whether to ignore ClusterCIDR conflict errors, which are not ignored by default
                     * @return IgnoreClusterCIDRConflict Whether to ignore ClusterCIDR conflict errors, which are not ignored by default
                     */
                    bool GetIgnoreClusterCIDRConflict() const;

                    /**
                     * 设置Whether to ignore ClusterCIDR conflict errors, which are not ignored by default
                     * @param IgnoreClusterCIDRConflict Whether to ignore ClusterCIDR conflict errors, which are not ignored by default
                     */
                    void SetIgnoreClusterCIDRConflict(const bool& _ignoreClusterCIDRConflict);

                    /**
                     * 判断参数 IgnoreClusterCIDRConflict 是否已赋值
                     * @return IgnoreClusterCIDRConflict 是否已赋值
                     */
                    bool IgnoreClusterCIDRConflictHasBeenSet() const;

                    /**
                     * 获取Maximum number of pods on each node in the cluster
                     * @return MaxNodePodNum Maximum number of pods on each node in the cluster
                     */
                    uint64_t GetMaxNodePodNum() const;

                    /**
                     * 设置Maximum number of pods on each node in the cluster
                     * @param MaxNodePodNum Maximum number of pods on each node in the cluster
                     */
                    void SetMaxNodePodNum(const uint64_t& _maxNodePodNum);

                    /**
                     * 判断参数 MaxNodePodNum 是否已赋值
                     * @return MaxNodePodNum 是否已赋值
                     */
                    bool MaxNodePodNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of cluster services
                     * @return MaxClusterServiceNum Maximum number of cluster services
                     */
                    uint64_t GetMaxClusterServiceNum() const;

                    /**
                     * 设置Maximum number of cluster services
                     * @param MaxClusterServiceNum Maximum number of cluster services
                     */
                    void SetMaxClusterServiceNum(const uint64_t& _maxClusterServiceNum);

                    /**
                     * 判断参数 MaxClusterServiceNum 是否已赋值
                     * @return MaxClusterServiceNum 是否已赋值
                     */
                    bool MaxClusterServiceNumHasBeenSet() const;

                    /**
                     * 获取The CIDR block used to assign cluster service IP addresses. It must conflict with neither the VPC CIDR block nor with CIDR blocks of other clusters in the same VPC instance. The IP range must be within the private network IP range, such as 10.1.0.0/14, 192.168.0.1/18, and 172.16.0.0/16.
                     * @return ServiceCIDR The CIDR block used to assign cluster service IP addresses. It must conflict with neither the VPC CIDR block nor with CIDR blocks of other clusters in the same VPC instance. The IP range must be within the private network IP range, such as 10.1.0.0/14, 192.168.0.1/18, and 172.16.0.0/16.
                     */
                    std::string GetServiceCIDR() const;

                    /**
                     * 设置The CIDR block used to assign cluster service IP addresses. It must conflict with neither the VPC CIDR block nor with CIDR blocks of other clusters in the same VPC instance. The IP range must be within the private network IP range, such as 10.1.0.0/14, 192.168.0.1/18, and 172.16.0.0/16.
                     * @param ServiceCIDR The CIDR block used to assign cluster service IP addresses. It must conflict with neither the VPC CIDR block nor with CIDR blocks of other clusters in the same VPC instance. The IP range must be within the private network IP range, such as 10.1.0.0/14, 192.168.0.1/18, and 172.16.0.0/16.
                     */
                    void SetServiceCIDR(const std::string& _serviceCIDR);

                    /**
                     * 判断参数 ServiceCIDR 是否已赋值
                     * @return ServiceCIDR 是否已赋值
                     */
                    bool ServiceCIDRHasBeenSet() const;

                    /**
                     * 获取Subnet ID of the ENI in VPC-CNI network mode
                     * @return EniSubnetIds Subnet ID of the ENI in VPC-CNI network mode
                     */
                    std::vector<std::string> GetEniSubnetIds() const;

                    /**
                     * 设置Subnet ID of the ENI in VPC-CNI network mode
                     * @param EniSubnetIds Subnet ID of the ENI in VPC-CNI network mode
                     */
                    void SetEniSubnetIds(const std::vector<std::string>& _eniSubnetIds);

                    /**
                     * 判断参数 EniSubnetIds 是否已赋值
                     * @return EniSubnetIds 是否已赋值
                     */
                    bool EniSubnetIdsHasBeenSet() const;

                    /**
                     * 获取Repossession time of ENI IP addresses in VPC-CNI network mode, whose range is [300,15768000)
                     * @return ClaimExpiredSeconds Repossession time of ENI IP addresses in VPC-CNI network mode, whose range is [300,15768000)
                     */
                    int64_t GetClaimExpiredSeconds() const;

                    /**
                     * 设置Repossession time of ENI IP addresses in VPC-CNI network mode, whose range is [300,15768000)
                     * @param ClaimExpiredSeconds Repossession time of ENI IP addresses in VPC-CNI network mode, whose range is [300,15768000)
                     */
                    void SetClaimExpiredSeconds(const int64_t& _claimExpiredSeconds);

                    /**
                     * 判断参数 ClaimExpiredSeconds 是否已赋值
                     * @return ClaimExpiredSeconds 是否已赋值
                     */
                    bool ClaimExpiredSecondsHasBeenSet() const;

                private:

                    /**
                     * CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC’s CIDR or the CIDRs of other clusters in the same VPC
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * Whether to ignore ClusterCIDR conflict errors, which are not ignored by default
                     */
                    bool m_ignoreClusterCIDRConflict;
                    bool m_ignoreClusterCIDRConflictHasBeenSet;

                    /**
                     * Maximum number of pods on each node in the cluster
                     */
                    uint64_t m_maxNodePodNum;
                    bool m_maxNodePodNumHasBeenSet;

                    /**
                     * Maximum number of cluster services
                     */
                    uint64_t m_maxClusterServiceNum;
                    bool m_maxClusterServiceNumHasBeenSet;

                    /**
                     * The CIDR block used to assign cluster service IP addresses. It must conflict with neither the VPC CIDR block nor with CIDR blocks of other clusters in the same VPC instance. The IP range must be within the private network IP range, such as 10.1.0.0/14, 192.168.0.1/18, and 172.16.0.0/16.
                     */
                    std::string m_serviceCIDR;
                    bool m_serviceCIDRHasBeenSet;

                    /**
                     * Subnet ID of the ENI in VPC-CNI network mode
                     */
                    std::vector<std::string> m_eniSubnetIds;
                    bool m_eniSubnetIdsHasBeenSet;

                    /**
                     * Repossession time of ENI IP addresses in VPC-CNI network mode, whose range is [300,15768000)
                     */
                    int64_t m_claimExpiredSeconds;
                    bool m_claimExpiredSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERCIDRSETTINGS_H_
