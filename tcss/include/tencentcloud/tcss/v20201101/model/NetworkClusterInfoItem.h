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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_

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
                * Response parameters structure of the network cluster asset
                */
                class NetworkClusterInfoItem : public AbstractModel
                {
                public:
                    NetworkClusterInfoItem();
                    ~NetworkClusterInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取Cluster version
                     * @return ClusterVersion Cluster version
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version
                     * @param _clusterVersion Cluster version
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
                     * 获取Cluster OS
                     * @return ClusterOs Cluster OS
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置Cluster OS
                     * @param _clusterOs Cluster OS
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取Cluster type
                     * @return ClusterType Cluster type
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type
                     * @param _clusterType Cluster type
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
                     * 获取Cluster region
                     * @return Region Cluster region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster region
                     * @param _region Cluster region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Cluster network plugin
                     * @return NetworkPolicyPlugin Cluster network plugin
                     * 
                     */
                    std::string GetNetworkPolicyPlugin() const;

                    /**
                     * 设置Cluster network plugin
                     * @param _networkPolicyPlugin Cluster network plugin
                     * 
                     */
                    void SetNetworkPolicyPlugin(const std::string& _networkPolicyPlugin);

                    /**
                     * 判断参数 NetworkPolicyPlugin 是否已赋值
                     * @return NetworkPolicyPlugin 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginHasBeenSet() const;

                    /**
                     * 获取Cluster status
                     * @return ClusterStatus Cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Cluster status
                     * @param _clusterStatus Cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Total number of policies
                     * @return TotalRuleCount Total number of policies
                     * 
                     */
                    int64_t GetTotalRuleCount() const;

                    /**
                     * 设置Total number of policies
                     * @param _totalRuleCount Total number of policies
                     * 
                     */
                    void SetTotalRuleCount(const int64_t& _totalRuleCount);

                    /**
                     * 判断参数 TotalRuleCount 是否已赋值
                     * @return TotalRuleCount 是否已赋值
                     * 
                     */
                    bool TotalRuleCountHasBeenSet() const;

                    /**
                     * 获取Number of enabled policies
                     * @return EnableRuleCount Number of enabled policies
                     * 
                     */
                    int64_t GetEnableRuleCount() const;

                    /**
                     * 设置Number of enabled policies
                     * @param _enableRuleCount Number of enabled policies
                     * 
                     */
                    void SetEnableRuleCount(const int64_t& _enableRuleCount);

                    /**
                     * 判断参数 EnableRuleCount 是否已赋值
                     * @return EnableRuleCount 是否已赋值
                     * 
                     */
                    bool EnableRuleCountHasBeenSet() const;

                    /**
                     * 获取Status of the cluster network plugin. Valid values: `Running` (normal); `Error` (abnormal).
                     * @return NetworkPolicyPluginStatus Status of the cluster network plugin. Valid values: `Running` (normal); `Error` (abnormal).
                     * 
                     */
                    std::string GetNetworkPolicyPluginStatus() const;

                    /**
                     * 设置Status of the cluster network plugin. Valid values: `Running` (normal); `Error` (abnormal).
                     * @param _networkPolicyPluginStatus Status of the cluster network plugin. Valid values: `Running` (normal); `Error` (abnormal).
                     * 
                     */
                    void SetNetworkPolicyPluginStatus(const std::string& _networkPolicyPluginStatus);

                    /**
                     * 判断参数 NetworkPolicyPluginStatus 是否已赋值
                     * @return NetworkPolicyPluginStatus 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginStatusHasBeenSet() const;

                    /**
                     * 获取Error message of the cluster network plugin
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkPolicyPluginError Error message of the cluster network plugin
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkPolicyPluginError() const;

                    /**
                     * 设置Error message of the cluster network plugin
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkPolicyPluginError Error message of the cluster network plugin
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNetworkPolicyPluginError(const std::string& _networkPolicyPluginError);

                    /**
                     * 判断参数 NetworkPolicyPluginError 是否已赋值
                     * @return NetworkPolicyPluginError 是否已赋值
                     * 
                     */
                    bool NetworkPolicyPluginErrorHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster version
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Cluster OS
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * Cluster type
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Cluster network plugin
                     */
                    std::string m_networkPolicyPlugin;
                    bool m_networkPolicyPluginHasBeenSet;

                    /**
                     * Cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Total number of policies
                     */
                    int64_t m_totalRuleCount;
                    bool m_totalRuleCountHasBeenSet;

                    /**
                     * Number of enabled policies
                     */
                    int64_t m_enableRuleCount;
                    bool m_enableRuleCountHasBeenSet;

                    /**
                     * Status of the cluster network plugin. Valid values: `Running` (normal); `Error` (abnormal).
                     */
                    std::string m_networkPolicyPluginStatus;
                    bool m_networkPolicyPluginStatusHasBeenSet;

                    /**
                     * Error message of the cluster network plugin
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkPolicyPluginError;
                    bool m_networkPolicyPluginErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERINFOITEM_H_
