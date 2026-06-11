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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * List of clusters
                */
                class AssetClusterListItem : public AbstractModel
                {
                public:
                    AssetClusterListItem();
                    ~AssetClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterID <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterID <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>Cluster name.</p>
                     * @return ClusterName <p>Cluster name.</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Cluster name.</p>
                     * @param _clusterName <p>Cluster name.</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster status<br>CSR_RUNNING: Running<br>CSR_EXCEPTION: Exception<br>CSR_DEL: Deleted</p>
                     * @return Status <p>Cluster status<br>CSR_RUNNING: Running<br>CSR_EXCEPTION: Exception<br>CSR_DEL: Deleted</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Cluster status<br>CSR_RUNNING: Running<br>CSR_EXCEPTION: Exception<br>CSR_DEL: Deleted</p>
                     * @param _status <p>Cluster status<br>CSR_RUNNING: Running<br>CSR_EXCEPTION: Exception<br>CSR_DEL: Deleted</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>ID of the bound cluster</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindRuleID <p>ID of the bound cluster</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBindRuleID() const;

                    /**
                     * 设置<p>ID of the bound cluster</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindRuleID <p>ID of the bound cluster</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindRuleID(const std::string& _bindRuleID);

                    /**
                     * 判断参数 BindRuleID 是否已赋值
                     * @return BindRuleID 是否已赋值
                     * 
                     */
                    bool BindRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Binding rule name</p>
                     * @return BindRuleName <p>Binding rule name</p>
                     * 
                     */
                    std::string GetBindRuleName() const;

                    /**
                     * 设置<p>Binding rule name</p>
                     * @param _bindRuleName <p>Binding rule name</p>
                     * 
                     */
                    void SetBindRuleName(const std::string& _bindRuleName);

                    /**
                     * 判断参数 BindRuleName 是否已赋值
                     * @return BindRuleName 是否已赋值
                     * 
                     */
                    bool BindRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>ClusterType:<br>CT_TKE: tke cluster;<br>CT_USER_CREATE: user-built cluster;<br>CT_TKE_SERVERLESS: TKE Serverless Cluster;</p>
                     * @return ClusterType <p>ClusterType:<br>CT_TKE: tke cluster;<br>CT_USER_CREATE: user-built cluster;<br>CT_TKE_SERVERLESS: TKE Serverless Cluster;</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>ClusterType:<br>CT_TKE: tke cluster;<br>CT_USER_CREATE: user-built cluster;<br>CT_TKE_SERVERLESS: TKE Serverless Cluster;</p>
                     * @param _clusterType <p>ClusterType:<br>CT_TKE: tke cluster;<br>CT_USER_CREATE: user-built cluster;<br>CT_TKE_SERVERLESS: TKE Serverless Cluster;</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster edition</p>
                     * @return ClusterVersion <p>Cluster edition</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>Cluster edition</p>
                     * @param _clusterVersion <p>Cluster edition</p>
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>Memory capacity</p>
                     * @return MemLimit <p>Memory capacity</p>
                     * 
                     */
                    int64_t GetMemLimit() const;

                    /**
                     * 设置<p>Memory capacity</p>
                     * @param _memLimit <p>Memory capacity</p>
                     * 
                     */
                    void SetMemLimit(const int64_t& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取<p>cpu</p>
                     * @return CpuLimit <p>cpu</p>
                     * 
                     */
                    int64_t GetCpuLimit() const;

                    /**
                     * 设置<p>cpu</p>
                     * @param _cpuLimit <p>cpu</p>
                     * 
                     */
                    void SetCpuLimit(const int64_t& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取<p>Cluster audit switch status:<br>Closed/Closing/CloseFailed/Opened/Opening/OpenFailed</p>
                     * @return ClusterAuditStatus <p>Cluster audit switch status:<br>Closed/Closing/CloseFailed/Opened/Opening/OpenFailed</p>
                     * 
                     */
                    std::string GetClusterAuditStatus() const;

                    /**
                     * 设置<p>Cluster audit switch status:<br>Closed/Closing/CloseFailed/Opened/Opening/OpenFailed</p>
                     * @param _clusterAuditStatus <p>Cluster audit switch status:<br>Closed/Closing/CloseFailed/Opened/Opening/OpenFailed</p>
                     * 
                     */
                    void SetClusterAuditStatus(const std::string& _clusterAuditStatus);

                    /**
                     * 判断参数 ClusterAuditStatus 是否已赋值
                     * @return ClusterAuditStatus 是否已赋值
                     * 
                     */
                    bool ClusterAuditStatusHasBeenSet() const;

                    /**
                     * 获取<p>Access status:<br>Not connected: AccessedNone<br>Defended: AccessedDefended<br>No protection: AccessedInstalled<br>Partial protection: AccessedPartialDefence<br>Access exception: AccessedException<br>Uninstallation exception: AccessedUninstallException<br>Accessing: AccessedInstalling<br>Uninstalling: AccessedUninstalling</p>
                     * @return AccessedStatus <p>Access status:<br>Not connected: AccessedNone<br>Defended: AccessedDefended<br>No protection: AccessedInstalled<br>Partial protection: AccessedPartialDefence<br>Access exception: AccessedException<br>Uninstallation exception: AccessedUninstallException<br>Accessing: AccessedInstalling<br>Uninstalling: AccessedUninstalling</p>
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置<p>Access status:<br>Not connected: AccessedNone<br>Defended: AccessedDefended<br>No protection: AccessedInstalled<br>Partial protection: AccessedPartialDefence<br>Access exception: AccessedException<br>Uninstallation exception: AccessedUninstallException<br>Accessing: AccessedInstalling<br>Uninstalling: AccessedUninstalling</p>
                     * @param _accessedStatus <p>Access status:<br>Not connected: AccessedNone<br>Defended: AccessedDefended<br>No protection: AccessedInstalled<br>Partial protection: AccessedPartialDefence<br>Access exception: AccessedException<br>Uninstallation exception: AccessedUninstallException<br>Accessing: AccessedInstalling<br>Uninstalling: AccessedUninstalling</p>
                     * 
                     */
                    void SetAccessedStatus(const std::string& _accessedStatus);

                    /**
                     * 判断参数 AccessedStatus 是否已赋值
                     * @return AccessedStatus 是否已赋值
                     * 
                     */
                    bool AccessedStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>Cluster name.</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Cluster status<br>CSR_RUNNING: Running<br>CSR_EXCEPTION: Exception<br>CSR_DEL: Deleted</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ID of the bound cluster</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bindRuleID;
                    bool m_bindRuleIDHasBeenSet;

                    /**
                     * <p>Binding rule name</p>
                     */
                    std::string m_bindRuleName;
                    bool m_bindRuleNameHasBeenSet;

                    /**
                     * <p>ClusterType:<br>CT_TKE: tke cluster;<br>CT_USER_CREATE: user-built cluster;<br>CT_TKE_SERVERLESS: TKE Serverless Cluster;</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>Cluster edition</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>Memory capacity</p>
                     */
                    int64_t m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * <p>cpu</p>
                     */
                    int64_t m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * <p>Cluster audit switch status:<br>Closed/Closing/CloseFailed/Opened/Opening/OpenFailed</p>
                     */
                    std::string m_clusterAuditStatus;
                    bool m_clusterAuditStatusHasBeenSet;

                    /**
                     * <p>Access status:<br>Not connected: AccessedNone<br>Defended: AccessedDefended<br>No protection: AccessedInstalled<br>Partial protection: AccessedPartialDefence<br>Access exception: AccessedException<br>Uninstallation exception: AccessedUninstallException<br>Accessing: AccessedInstalling<br>Uninstalling: AccessedUninstalling</p>
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
