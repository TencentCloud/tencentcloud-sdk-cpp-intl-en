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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Step.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeExternalNodeSupportConfig response structure.
                */
                class DescribeExternalNodeSupportConfigResponse : public AbstractModel
                {
                public:
                    DescribeExternalNodeSupportConfigResponse();
                    ~DescribeExternalNodeSupportConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC's CIDR or the CIDRs of other clusters in the same VPC. The network segment must be within the private network segment, for example, 10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ClusterCIDR CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC's CIDR or the CIDRs of other clusters in the same VPC. The network segment must be within the private network segment, for example, 10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16.

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterCIDR() const;

                    /**
                     * 判断参数 ClusterCIDR 是否已赋值
                     * @return ClusterCIDR 是否已赋值
                     * 
                     */
                    bool ClusterCIDRHasBeenSet() const;

                    /**
                     * 获取Cluster network plugin type, support: CiliumBGP, CiliumVXLan
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NetworkType Cluster network plugin type, support: CiliumBGP, CiliumVXLan
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Subnet ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SubnetId Subnet ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable third-party node direct connect support
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Enabled Whether to enable third-party node direct connect support
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取BGP AS number of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AS BGP AS number of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAS() const;

                    /**
                     * 判断参数 AS 是否已赋值
                     * @return AS 是否已赋值
                     * 
                     */
                    bool ASHasBeenSet() const;

                    /**
                     * 获取Switch IP of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SwitchIP Switch IP of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitchIP() const;

                    /**
                     * 判断参数 SwitchIP 是否已赋值
                     * @return SwitchIP 是否已赋值
                     * 
                     */
                    bool SwitchIPHasBeenSet() const;

                    /**
                     * 获取Enabling third-party node pool status
                     * @return Status Enabling third-party node pool status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Reason if enabling failed
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return FailedReason Reason if enabling failed
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取Private Network Access Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Master Private Network Access Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMaster() const;

                    /**
                     * 判断参数 Master 是否已赋值
                     * @return Master 是否已赋值
                     * 
                     */
                    bool MasterHasBeenSet() const;

                    /**
                     * 获取Image Repository Proxy Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Proxy Image Repository Proxy Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProxy() const;

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取Used to record which step the enabling of external nodes process is at
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Progress Used to record which step the enabling of external nodes process is at
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<Step> GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Whether to enable third-party node public network connection support
                     * @return EnabledPublicConnect Whether to enable third-party node public network connection support
                     * 
                     */
                    bool GetEnabledPublicConnect() const;

                    /**
                     * 判断参数 EnabledPublicConnect 是否已赋值
                     * @return EnabledPublicConnect 是否已赋值
                     * 
                     */
                    bool EnabledPublicConnectHasBeenSet() const;

                    /**
                     * 获取Public Network Connection Address of the registered node public network version
                     * @return PublicConnectUrl Public Network Connection Address of the registered node public network version
                     * 
                     */
                    std::string GetPublicConnectUrl() const;

                    /**
                     * 判断参数 PublicConnectUrl 是否已赋值
                     * @return PublicConnectUrl 是否已赋值
                     * 
                     */
                    bool PublicConnectUrlHasBeenSet() const;

                    /**
                     * 获取Custom Domain Name of the registered node public network version
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PublicCustomDomain Custom Domain Name of the registered node public network version
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPublicCustomDomain() const;

                    /**
                     * 判断参数 PublicCustomDomain 是否已赋值
                     * @return PublicCustomDomain 是否已赋值
                     * 
                     */
                    bool PublicCustomDomainHasBeenSet() const;

                private:

                    /**
                     * CIDR used to assign container and service IPs for the cluster. It cannot conflict with the VPC's CIDR or the CIDRs of other clusters in the same VPC. The network segment must be within the private network segment, for example, 10.1.0.0/14, 192.168.0.1/18,172.16.0.0/16.

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_clusterCIDR;
                    bool m_clusterCIDRHasBeenSet;

                    /**
                     * Cluster network plugin type, support: CiliumBGP, CiliumVXLan
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Subnet ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Whether to enable third-party node direct connect support
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * BGP AS number of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_aS;
                    bool m_aSHasBeenSet;

                    /**
                     * Switch IP of the switch to which the node belongs
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_switchIP;
                    bool m_switchIPHasBeenSet;

                    /**
                     * Enabling third-party node pool status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Reason if enabling failed
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Private Network Access Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_master;
                    bool m_masterHasBeenSet;

                    /**
                     * Image Repository Proxy Address
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * Used to record which step the enabling of external nodes process is at
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<Step> m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Whether to enable third-party node public network connection support
                     */
                    bool m_enabledPublicConnect;
                    bool m_enabledPublicConnectHasBeenSet;

                    /**
                     * Public Network Connection Address of the registered node public network version
                     */
                    std::string m_publicConnectUrl;
                    bool m_publicConnectUrlHasBeenSet;

                    /**
                     * Custom Domain Name of the registered node public network version
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_publicCustomDomain;
                    bool m_publicCustomDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALNODESUPPORTCONFIGRESPONSE_H_
