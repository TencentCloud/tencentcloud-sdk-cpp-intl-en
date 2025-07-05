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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Label.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Overview of managed Prometheus agent
                */
                class PrometheusAgentOverview : public AbstractModel
                {
                public:
                    PrometheusAgentOverview();
                    ~PrometheusAgentOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Agent status. Valid values: 
`normal`
`abnormal`
                     * @return Status Agent status. Valid values: 
`normal`
`abnormal`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status. Valid values: 
`normal`
`abnormal`
                     * @param _status Agent status. Valid values: 
`normal`
`abnormal`
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
                     * 获取External labels
External labels, which will be attached to all metrics in this cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExternalLabels External labels
External labels, which will be attached to all metrics in this cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置External labels
External labels, which will be attached to all metrics in this cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _externalLabels External labels
External labels, which will be attached to all metrics in this cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                    /**
                     * 获取Cluster region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Cluster region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cluster region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Cluster region
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the VPC where the cluster resides
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId ID of the VPC where the cluster resides
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC where the cluster resides
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId ID of the VPC where the cluster resides
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Recorded information of failed operations, such as association.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedReason Recorded information of failed operations, such as association.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置Recorded information of failed operations, such as association.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failedReason Recorded information of failed operations, such as association.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取Agent name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Agent name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Agent name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Cluster type
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Agent status. Valid values: 
`normal`
`abnormal`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * External labels
External labels, which will be attached to all metrics in this cluster
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                    /**
                     * Cluster region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * ID of the VPC where the cluster resides
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Recorded information of failed operations, such as association.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * Agent name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENTOVERVIEW_H_
