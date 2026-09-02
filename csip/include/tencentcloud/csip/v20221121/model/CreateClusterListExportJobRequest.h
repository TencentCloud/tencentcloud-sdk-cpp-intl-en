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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERLISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERLISTEXPORTJOBREQUEST_H_

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
                * CreateClusterListExportJob request structure.
                */
                class CreateClusterListExportJobRequest : public AbstractModel
                {
                public:
                    CreateClusterListExportJobRequest();
                    ~CreateClusterListExportJobRequest() = default;
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
                     * 获取<p>List of Universal Filter Criteria. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy matching.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (is being connected), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: risk check status, exact match.<br>RiskLevel: risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: only filter clusters with HIGH risk or higher. No value is required. Passing in HasHighRisk takes effect.<br>Region: Region, exact match.<br>OwnerName: owner, fuzzy matching.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: excluded CLUSTER asset ID, exact exclusion.</p>
                     * @return Filter <p>List of Universal Filter Criteria. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy matching.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (is being connected), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: risk check status, exact match.<br>RiskLevel: risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: only filter clusters with HIGH risk or higher. No value is required. Passing in HasHighRisk takes effect.<br>Region: Region, exact match.<br>OwnerName: owner, fuzzy matching.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: excluded CLUSTER asset ID, exact exclusion.</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>List of Universal Filter Criteria. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy matching.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (is being connected), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: risk check status, exact match.<br>RiskLevel: risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: only filter clusters with HIGH risk or higher. No value is required. Passing in HasHighRisk takes effect.<br>Region: Region, exact match.<br>OwnerName: owner, fuzzy matching.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: excluded CLUSTER asset ID, exact exclusion.</p>
                     * @param _filter <p>List of Universal Filter Criteria. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy matching.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (is being connected), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: risk check status, exact match.<br>RiskLevel: risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: only filter clusters with HIGH risk or higher. No value is required. Passing in HasHighRisk takes effect.<br>Region: Region, exact match.<br>OwnerName: owner, fuzzy matching.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: excluded CLUSTER asset ID, exact exclusion.</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Exportable fields</p>
                     * @return ExportFields <p>Exportable fields</p>
                     * 
                     */
                    std::vector<std::string> GetExportFields() const;

                    /**
                     * 设置<p>Exportable fields</p>
                     * @param _exportFields <p>Exportable fields</p>
                     * 
                     */
                    void SetExportFields(const std::vector<std::string>& _exportFields);

                    /**
                     * 判断参数 ExportFields 是否已赋值
                     * @return ExportFields 是否已赋值
                     * 
                     */
                    bool ExportFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>List of Universal Filter Criteria. Supported filter fields:<br>ClusterId: CLUSTER ID, exact match.<br>ClusterName: CLUSTER name, fuzzy matching.<br>ClusterType: CLUSTER type, exact match. Values: TKE_MANAGED_CLUSTER (Tencent Cloud Standard CLUSTER), TKE_INDEPENDENT_CLUSTER (Standard CLUSTER Master SELF-maintenance), TKE_SERVERLESS_CLUSTER (SERVERLESS CLUSTER), TKE_EDGE_CLUSTER (EDGE CLUSTER), SELF_BUILT (SELF-BUILT within Tencent Cloud), SELF_BUILT_OTHER (non-Tencent Cloud SELF-BUILT/hybrid cloud).<br>RunStatus: CLUSTER Running status, exact match. Values: Running, Exception, Unknown.<br>AccessedStatus: access status, exact match. Values: AccessedNone (not integrated), AccessedInstalling (is being connected), AccessedException (access Exception), AccessedInstalled (integrated).<br>DefendStatus: protection status, exact match. Values: Enabled (defended), Partial (Partial protection), Disabled (no protection).<br>RiskStatus: risk check status, exact match.<br>RiskLevel: risk level, exact match. Values: CRITICAL, HIGH, MEDIUM, LOW, NONE (no risk).<br>HasHighRisk: only filter clusters with HIGH risk or higher. No value is required. Passing in HasHighRisk takes effect.<br>Region: Region, exact match.<br>OwnerName: owner, fuzzy matching.<br>ClusterAssetIds: CLUSTER asset ID, exact match.<br>ExcludeClusterAssetIds: excluded CLUSTER asset ID, exact exclusion.</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Exportable fields</p>
                     */
                    std::vector<std::string> m_exportFields;
                    bool m_exportFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERLISTEXPORTJOBREQUEST_H_
