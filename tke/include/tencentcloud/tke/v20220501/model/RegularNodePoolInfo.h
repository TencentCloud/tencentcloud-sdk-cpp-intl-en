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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/NodeCountSummary.h>
#include <tencentcloud/tke/v20220501/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * General node pool information
                */
                class RegularNodePoolInfo : public AbstractModel
                {
                public:
                    RegularNodePoolInfo();
                    ~RegularNodePoolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LaunchConfigurationId configuration
                     * @return LaunchConfigurationId LaunchConfigurationId configuration
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置LaunchConfigurationId configuration
                     * @param _launchConfigurationId LaunchConfigurationId configuration
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Auto-scaling group ID
                     * @return AutoscalingGroupId Auto-scaling group ID
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置Auto-scaling group ID
                     * @param _autoscalingGroupId Auto-scaling group ID
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取NodeCountSummary node list
                     * @return NodeCountSummary NodeCountSummary node list
                     * 
                     */
                    NodeCountSummary GetNodeCountSummary() const;

                    /**
                     * 设置NodeCountSummary node list
                     * @param _nodeCountSummary NodeCountSummary node list
                     * 
                     */
                    void SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary);

                    /**
                     * 判断参数 NodeCountSummary 是否已赋值
                     * @return NodeCountSummary 是否已赋值
                     * 
                     */
                    bool NodeCountSummaryHasBeenSet() const;

                    /**
                     * 获取Status information
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoscalingGroupStatus Status information
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAutoscalingGroupStatus() const;

                    /**
                     * 设置Status information
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoscalingGroupStatus Status information
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoscalingGroupStatus(const std::string& _autoscalingGroupStatus);

                    /**
                     * 判断参数 AutoscalingGroupStatus 是否已赋值
                     * @return AutoscalingGroupStatus 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MaxNodesNum Maximum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置Maximum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _maxNodesNum Maximum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     * 
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MinNodesNum Minimum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置Minimum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _minNodesNum Minimum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     * 
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取Desired number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DesiredNodesNum Desired number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDesiredNodesNum() const;

                    /**
                     * 设置Desired number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _desiredNodesNum Desired number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDesiredNodesNum(const int64_t& _desiredNodesNum);

                    /**
                     * 判断参数 DesiredNodesNum 是否已赋值
                     * @return DesiredNodesNum 是否已赋值
                     * 
                     */
                    bool DesiredNodesNumHasBeenSet() const;

                    /**
                     * 获取Node pool osName
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NodePoolOs Node pool osName
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置Node pool osName
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _nodePoolOs Node pool osName
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     * 
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return InstanceAdvancedSettings Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _instanceAdvancedSettings Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                private:

                    /**
                     * LaunchConfigurationId configuration
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Auto-scaling group ID
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * NodeCountSummary node list
                     */
                    NodeCountSummary m_nodeCountSummary;
                    bool m_nodeCountSummaryHasBeenSet;

                    /**
                     * Status information
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_autoscalingGroupStatus;
                    bool m_autoscalingGroupStatusHasBeenSet;

                    /**
                     * Maximum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * Minimum number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * Desired number of nodes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_desiredNodesNum;
                    bool m_desiredNodesNumHasBeenSet;

                    /**
                     * Node pool osName
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * Node configuration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_REGULARNODEPOOLINFO_H_
