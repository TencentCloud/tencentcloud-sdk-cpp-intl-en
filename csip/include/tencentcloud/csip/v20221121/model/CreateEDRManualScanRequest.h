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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>
#include <tencentcloud/csip/v20221121/model/ClusterWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateEDRManualScan request structure.
                */
                class CreateEDRManualScanRequest : public AbstractModel
                {
                public:
                    CreateEDRManualScanRequest();
                    ~CreateEDRManualScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Asset selection method: all - all assets/tag - select by tag (hosts only)/direct - direct selection</p>
                     * @return AssetSelectionType <p>Asset selection method: all - all assets/tag - select by tag (hosts only)/direct - direct selection</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>Asset selection method: all - all assets/tag - select by tag (hosts only)/direct - direct selection</p>
                     * @param _assetSelectionType <p>Asset selection method: all - all assets/tag - select by tag (hosts only)/direct - direct selection</p>
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Detection mode: full - full-disk detection / quick - rapid detection / include - detect specified paths only / exclude - exclude specified paths</p>
                     * @return ScanType <p>Detection mode: full - full-disk detection / quick - rapid detection / include - detect specified paths only / exclude - exclude specified paths</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 设置<p>Detection mode: full - full-disk detection / quick - rapid detection / include - detect specified paths only / exclude - exclude specified paths</p>
                     * @param _scanType <p>Detection mode: full - full-disk detection / quick - rapid detection / include - detect specified paths only / exclude - exclude specified paths</p>
                     * 
                     */
                    void SetScanType(const std::string& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

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
                     * 获取<p>Directly selected host list (used when AssetSelectionType=direct or all)</p>
                     * @return InstanceIDsWithAppId <p>Directly selected host list (used when AssetSelectionType=direct or all)</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Directly selected host list (used when AssetSelectionType=direct or all)</p>
                     * @param _instanceIDsWithAppId <p>Directly selected host list (used when AssetSelectionType=direct or all)</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Host list for removal (used when AssetSelectionType=all)</p>
                     * @return ExcludeInstanceIDsWithAppId <p>Host list for removal (used when AssetSelectionType=all)</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>Host list for removal (used when AssetSelectionType=all)</p>
                     * @param _excludeInstanceIDsWithAppId <p>Host list for removal (used when AssetSelectionType=all)</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID corresponding to the host</p>
                     * @return TagIds <p>Tag ID corresponding to the host</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>Tag ID corresponding to the host</p>
                     * @param _tagIds <p>Tag ID corresponding to the host</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster list for direct selection</p>
                     * @return ClusterIDsWithAppId <p>Cluster list for direct selection</p>
                     * 
                     */
                    std::vector<ClusterWithAppIdItem> GetClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Cluster list for direct selection</p>
                     * @param _clusterIDsWithAppId <p>Cluster list for direct selection</p>
                     * 
                     */
                    void SetClusterIDsWithAppId(const std::vector<ClusterWithAppIdItem>& _clusterIDsWithAppId);

                    /**
                     * 判断参数 ClusterIDsWithAppId 是否已赋值
                     * @return ClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster list for removal (used when AssetSelectionType=all)</p>
                     * @return ExcludeClusterIDsWithAppId <p>Cluster list for removal (used when AssetSelectionType=all)</p>
                     * 
                     */
                    std::vector<ClusterWithAppIdItem> GetExcludeClusterIDsWithAppId() const;

                    /**
                     * 设置<p>Cluster list for removal (used when AssetSelectionType=all)</p>
                     * @param _excludeClusterIDsWithAppId <p>Cluster list for removal (used when AssetSelectionType=all)</p>
                     * 
                     */
                    void SetExcludeClusterIDsWithAppId(const std::vector<ClusterWithAppIdItem>& _excludeClusterIDsWithAppId);

                    /**
                     * 判断参数 ExcludeClusterIDsWithAppId 是否已赋值
                     * @return ExcludeClusterIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Selected path list (required when ScanType is include or exclude, up to 100 entries)</p>
                     * @return CustomPaths <p>Selected path list (required when ScanType is include or exclude, up to 100 entries)</p>
                     * 
                     */
                    std::vector<std::string> GetCustomPaths() const;

                    /**
                     * 设置<p>Selected path list (required when ScanType is include or exclude, up to 100 entries)</p>
                     * @param _customPaths <p>Selected path list (required when ScanType is include or exclude, up to 100 entries)</p>
                     * 
                     */
                    void SetCustomPaths(const std::vector<std::string>& _customPaths);

                    /**
                     * 判断参数 CustomPaths 是否已赋值
                     * @return CustomPaths 是否已赋值
                     * 
                     */
                    bool CustomPathsHasBeenSet() const;

                    /**
                     * 获取<p>Timeout period in seconds, upper limit 7200</p>
                     * @return Timeout <p>Timeout period in seconds, upper limit 7200</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>Timeout period in seconds, upper limit 7200</p>
                     * @param _timeout <p>Timeout period in seconds, upper limit 7200</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * @return EnableMemShellScan <p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * 
                     */
                    int64_t GetEnableMemShellScan() const;

                    /**
                     * 设置<p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * @param _enableMemShellScan <p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * 
                     */
                    void SetEnableMemShellScan(const int64_t& _enableMemShellScan);

                    /**
                     * 判断参数 EnableMemShellScan 是否已赋值
                     * @return EnableMemShellScan 是否已赋值
                     * 
                     */
                    bool EnableMemShellScanHasBeenSet() const;

                private:

                    /**
                     * <p>Asset selection method: all - all assets/tag - select by tag (hosts only)/direct - direct selection</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>Detection mode: full - full-disk detection / quick - rapid detection / include - detect specified paths only / exclude - exclude specified paths</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Directly selected host list (used when AssetSelectionType=direct or all)</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Host list for removal (used when AssetSelectionType=all)</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Tag ID corresponding to the host</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>Cluster list for direct selection</p>
                     */
                    std::vector<ClusterWithAppIdItem> m_clusterIDsWithAppId;
                    bool m_clusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Cluster list for removal (used when AssetSelectionType=all)</p>
                     */
                    std::vector<ClusterWithAppIdItem> m_excludeClusterIDsWithAppId;
                    bool m_excludeClusterIDsWithAppIdHasBeenSet;

                    /**
                     * <p>Selected path list (required when ScanType is include or exclude, up to 100 entries)</p>
                     */
                    std::vector<std::string> m_customPaths;
                    bool m_customPathsHasBeenSet;

                    /**
                     * <p>Timeout period in seconds, upper limit 7200</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     */
                    int64_t m_enableMemShellScan;
                    bool m_enableMemShellScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRMANUALSCANREQUEST_H_
