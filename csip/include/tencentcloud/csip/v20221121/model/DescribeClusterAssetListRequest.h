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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterAssetList request structure.
                */
                class DescribeClusterAssetListRequest : public AbstractModel
                {
                public:
                    DescribeClusterAssetListRequest();
                    ~DescribeClusterAssetListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>General filter criteria list. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy match.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: Access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (accessing), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: Protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: Risk check status, exact match.<br>RiskLevel: Risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: Filter only clusters with HIGH-risk or higher risks. No value required. It takes effect when HasHighRisk is passed in.<br>Region: Region, exact match.<br>OwnerName: Owner, fuzzy match.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: Excluded CLUSTER asset ID, exact exclusion.</p>
                     * @return Filter <p>General filter criteria list. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy match.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: Access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (accessing), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: Protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: Risk check status, exact match.<br>RiskLevel: Risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: Filter only clusters with HIGH-risk or higher risks. No value required. It takes effect when HasHighRisk is passed in.<br>Region: Region, exact match.<br>OwnerName: Owner, fuzzy match.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: Excluded CLUSTER asset ID, exact exclusion.</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>General filter criteria list. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy match.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: Access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (accessing), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: Protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: Risk check status, exact match.<br>RiskLevel: Risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: Filter only clusters with HIGH-risk or higher risks. No value required. It takes effect when HasHighRisk is passed in.<br>Region: Region, exact match.<br>OwnerName: Owner, fuzzy match.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: Excluded CLUSTER asset ID, exact exclusion.</p>
                     * @param _filter <p>General filter criteria list. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy match.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: Access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (accessing), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: Protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: Risk check status, exact match.<br>RiskLevel: Risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: Filter only clusters with HIGH-risk or higher risks. No value required. It takes effect when HasHighRisk is passed in.<br>Region: Region, exact match.<br>OwnerName: Owner, fuzzy match.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: Excluded CLUSTER asset ID, exact exclusion.</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>General filter criteria list. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy match.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: Access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (accessing), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: Protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: Risk check status, exact match.<br>RiskLevel: Risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: Filter only clusters with HIGH-risk or higher risks. No value required. It takes effect when HasHighRisk is passed in.<br>Region: Region, exact match.<br>OwnerName: Owner, fuzzy match.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: Excluded CLUSTER asset ID, exact exclusion.</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERASSETLISTREQUEST_H_
