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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_

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
                * Cluster status information
                */
                class ClusterStatus : public AbstractModel
                {
                public:
                    ClusterStatus();
                    ~ClusterStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Cluster status
                     * @return ClusterState Cluster status
                     */
                    std::string GetClusterState() const;

                    /**
                     * 设置Cluster status
                     * @param ClusterState Cluster status
                     */
                    void SetClusterState(const std::string& _clusterState);

                    /**
                     * 判断参数 ClusterState 是否已赋值
                     * @return ClusterState 是否已赋值
                     */
                    bool ClusterStateHasBeenSet() const;

                    /**
                     * 获取Status of nodes in the cluster
                     * @return ClusterInstanceState Status of nodes in the cluster
                     */
                    std::string GetClusterInstanceState() const;

                    /**
                     * 设置Status of nodes in the cluster
                     * @param ClusterInstanceState Status of nodes in the cluster
                     */
                    void SetClusterInstanceState(const std::string& _clusterInstanceState);

                    /**
                     * 判断参数 ClusterInstanceState 是否已赋值
                     * @return ClusterInstanceState 是否已赋值
                     */
                    bool ClusterInstanceStateHasBeenSet() const;

                    /**
                     * 获取Indicates whether the monitoring service is enabled for the cluster
                     * @return ClusterBMonitor Indicates whether the monitoring service is enabled for the cluster
                     */
                    bool GetClusterBMonitor() const;

                    /**
                     * 设置Indicates whether the monitoring service is enabled for the cluster
                     * @param ClusterBMonitor Indicates whether the monitoring service is enabled for the cluster
                     */
                    void SetClusterBMonitor(const bool& _clusterBMonitor);

                    /**
                     * 判断参数 ClusterBMonitor 是否已赋值
                     * @return ClusterBMonitor 是否已赋值
                     */
                    bool ClusterBMonitorHasBeenSet() const;

                    /**
                     * 获取Number of cluster nodes being created. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @return ClusterInitNodeNum Number of cluster nodes being created. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t GetClusterInitNodeNum() const;

                    /**
                     * 设置Number of cluster nodes being created. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @param ClusterInitNodeNum Number of cluster nodes being created. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    void SetClusterInitNodeNum(const int64_t& _clusterInitNodeNum);

                    /**
                     * 判断参数 ClusterInitNodeNum 是否已赋值
                     * @return ClusterInitNodeNum 是否已赋值
                     */
                    bool ClusterInitNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of running nodes in the cluster. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @return ClusterRunningNodeNum Number of running nodes in the cluster. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t GetClusterRunningNodeNum() const;

                    /**
                     * 设置Number of running nodes in the cluster. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @param ClusterRunningNodeNum Number of running nodes in the cluster. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    void SetClusterRunningNodeNum(const int64_t& _clusterRunningNodeNum);

                    /**
                     * 判断参数 ClusterRunningNodeNum 是否已赋值
                     * @return ClusterRunningNodeNum 是否已赋值
                     */
                    bool ClusterRunningNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of abnormal nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @return ClusterFailedNodeNum Number of abnormal nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t GetClusterFailedNodeNum() const;

                    /**
                     * 设置Number of abnormal nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     * @param ClusterFailedNodeNum Number of abnormal nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    void SetClusterFailedNodeNum(const int64_t& _clusterFailedNodeNum);

                    /**
                     * 判断参数 ClusterFailedNodeNum 是否已赋值
                     * @return ClusterFailedNodeNum 是否已赋值
                     */
                    bool ClusterFailedNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of shutdown nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ClusterClosedNodeNum Number of shutdown nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t GetClusterClosedNodeNum() const;

                    /**
                     * 设置Number of shutdown nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ClusterClosedNodeNum Number of shutdown nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetClusterClosedNodeNum(const int64_t& _clusterClosedNodeNum);

                    /**
                     * 判断参数 ClusterClosedNodeNum 是否已赋值
                     * @return ClusterClosedNodeNum 是否已赋值
                     */
                    bool ClusterClosedNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of nodes being shut down in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ClusterClosingNodeNum Number of nodes being shut down in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t GetClusterClosingNodeNum() const;

                    /**
                     * 设置Number of nodes being shut down in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ClusterClosingNodeNum Number of nodes being shut down in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetClusterClosingNodeNum(const int64_t& _clusterClosingNodeNum);

                    /**
                     * 判断参数 ClusterClosingNodeNum 是否已赋值
                     * @return ClusterClosingNodeNum 是否已赋值
                     */
                    bool ClusterClosingNodeNumHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable cluster deletion protection
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ClusterDeletionProtection Indicates whether to enable cluster deletion protection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool GetClusterDeletionProtection() const;

                    /**
                     * 设置Indicates whether to enable cluster deletion protection
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ClusterDeletionProtection Indicates whether to enable cluster deletion protection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetClusterDeletionProtection(const bool& _clusterDeletionProtection);

                    /**
                     * 判断参数 ClusterDeletionProtection 是否已赋值
                     * @return ClusterDeletionProtection 是否已赋值
                     */
                    bool ClusterDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Indicates whether the cluster is auditable
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ClusterAuditEnabled Indicates whether the cluster is auditable
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool GetClusterAuditEnabled() const;

                    /**
                     * 设置Indicates whether the cluster is auditable
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param ClusterAuditEnabled Indicates whether the cluster is auditable
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetClusterAuditEnabled(const bool& _clusterAuditEnabled);

                    /**
                     * 判断参数 ClusterAuditEnabled 是否已赋值
                     * @return ClusterAuditEnabled 是否已赋值
                     */
                    bool ClusterAuditEnabledHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster status
                     */
                    std::string m_clusterState;
                    bool m_clusterStateHasBeenSet;

                    /**
                     * Status of nodes in the cluster
                     */
                    std::string m_clusterInstanceState;
                    bool m_clusterInstanceStateHasBeenSet;

                    /**
                     * Indicates whether the monitoring service is enabled for the cluster
                     */
                    bool m_clusterBMonitor;
                    bool m_clusterBMonitorHasBeenSet;

                    /**
                     * Number of cluster nodes being created. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t m_clusterInitNodeNum;
                    bool m_clusterInitNodeNumHasBeenSet;

                    /**
                     * Number of running nodes in the cluster. "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t m_clusterRunningNodeNum;
                    bool m_clusterRunningNodeNumHasBeenSet;

                    /**
                     * Number of abnormal nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
                     */
                    int64_t m_clusterFailedNodeNum;
                    bool m_clusterFailedNodeNumHasBeenSet;

                    /**
                     * Number of shutdown nodes in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t m_clusterClosedNodeNum;
                    bool m_clusterClosedNodeNumHasBeenSet;

                    /**
                     * Number of nodes being shut down in the cluster.  "-1" indicates that the request to obtain the node status timed out. "-2" indicates that the request failed.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    int64_t m_clusterClosingNodeNum;
                    bool m_clusterClosingNodeNumHasBeenSet;

                    /**
                     * Indicates whether to enable cluster deletion protection
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_clusterDeletionProtection;
                    bool m_clusterDeletionProtectionHasBeenSet;

                    /**
                     * Indicates whether the cluster is auditable
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_clusterAuditEnabled;
                    bool m_clusterAuditEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERSTATUS_H_
