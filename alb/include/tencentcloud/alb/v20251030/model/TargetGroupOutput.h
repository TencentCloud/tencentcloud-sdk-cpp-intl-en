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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPOUTPUT_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/HealthCheckConfig.h>
#include <tencentcloud/alb/v20251030/model/StickySessionConfig.h>
#include <tencentcloud/alb/v20251030/model/TagInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Brief information output parameters of the target group
                */
                class TargetGroupOutput : public AbstractModel
                {
                public:
                    TargetGroupOutput();
                    ~TargetGroupOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Health check configuration.
                     * @return HealthCheckConfig Health check configuration.
                     * 
                     */
                    HealthCheckConfig GetHealthCheckConfig() const;

                    /**
                     * 设置Health check configuration.
                     * @param _healthCheckConfig Health check configuration.
                     * 
                     */
                    void SetHealthCheckConfig(const HealthCheckConfig& _healthCheckConfig);

                    /**
                     * 判断参数 HealthCheckConfig 是否已赋值
                     * @return HealthCheckConfig 是否已赋值
                     * 
                     */
                    bool HealthCheckConfigHasBeenSet() const;

                    /**
                     * 获取Whether to enable long connections.
                     * @return KeepaliveEnabled Whether to enable long connections.
                     * 
                     */
                    bool GetKeepaliveEnabled() const;

                    /**
                     * 设置Whether to enable long connections.
                     * @param _keepaliveEnabled Whether to enable long connections.
                     * 
                     */
                    void SetKeepaliveEnabled(const bool& _keepaliveEnabled);

                    /**
                     * 判断参数 KeepaliveEnabled 是否已赋值
                     * @return KeepaliveEnabled 是否已赋值
                     * 
                     */
                    bool KeepaliveEnabledHasBeenSet() const;

                    /**
                     * 获取Backend service protocol type. Value:
- **HTTP** (default): support binding HTTP and HTTPS listeners
- **HTTPS**: support binding HTTPS listeners
- **GRPC**: support binding HTTPS listeners
- **GRPCS**: support binding HTTPS listeners
                     * @return Protocol Backend service protocol type. Value:
- **HTTP** (default): support binding HTTP and HTTPS listeners
- **HTTPS**: support binding HTTPS listeners
- **GRPC**: support binding HTTPS listeners
- **GRPCS**: support binding HTTPS listeners
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Backend service protocol type. Value:
- **HTTP** (default): support binding HTTP and HTTPS listeners
- **HTTPS**: support binding HTTPS listeners
- **GRPC**: support binding HTTPS listeners
- **GRPCS**: support binding HTTPS listeners
                     * @param _protocol Backend service protocol type. Value:
- **HTTP** (default): support binding HTTP and HTTPS listeners
- **HTTPS**: support binding HTTPS listeners
- **GRPC**: support binding HTTPS listeners
- **GRPCS**: support binding HTTPS listeners
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Number of load balancers associated with the target group.
                     * @return RelatedLoadBalancersCount Number of load balancers associated with the target group.
                     * 
                     */
                    int64_t GetRelatedLoadBalancersCount() const;

                    /**
                     * 设置Number of load balancers associated with the target group.
                     * @param _relatedLoadBalancersCount Number of load balancers associated with the target group.
                     * 
                     */
                    void SetRelatedLoadBalancersCount(const int64_t& _relatedLoadBalancersCount);

                    /**
                     * 判断参数 RelatedLoadBalancersCount 是否已赋值
                     * @return RelatedLoadBalancersCount 是否已赋值
                     * 
                     */
                    bool RelatedLoadBalancersCountHasBeenSet() const;

                    /**
                     * 获取Scheduling algorithm.
                     * @return SchedulerAlgorithm Scheduling algorithm.
                     * 
                     */
                    std::string GetSchedulerAlgorithm() const;

                    /**
                     * 设置Scheduling algorithm.
                     * @param _schedulerAlgorithm Scheduling algorithm.
                     * 
                     */
                    void SetSchedulerAlgorithm(const std::string& _schedulerAlgorithm);

                    /**
                     * 判断参数 SchedulerAlgorithm 是否已赋值
                     * @return SchedulerAlgorithm 是否已赋值
                     * 
                     */
                    bool SchedulerAlgorithmHasBeenSet() const;

                    /**
                     * 获取Session persistence configuration.
                     * @return StickySessionConfig Session persistence configuration.
                     * 
                     */
                    StickySessionConfig GetStickySessionConfig() const;

                    /**
                     * 设置Session persistence configuration.
                     * @param _stickySessionConfig Session persistence configuration.
                     * 
                     */
                    void SetStickySessionConfig(const StickySessionConfig& _stickySessionConfig);

                    /**
                     * 判断参数 StickySessionConfig 是否已赋值
                     * @return StickySessionConfig 是否已赋值
                     * 
                     */
                    bool StickySessionConfigHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * @return TargetGroupId Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * @param _targetGroupId Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取Target group name. Defaults to the target group ID. It contains 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * @return TargetGroupName Target group name. Defaults to the target group ID. It contains 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置Target group name. Defaults to the target group ID. It contains 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * @param _targetGroupName Target group name. Defaults to the target group ID. It contains 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取Status of the target group. Valid values:
- **Provisioning**: Under creation.
- **ProvisionFailed**: Creation failed.
- **Active**: Running.
- **Configuring**: configuration changing.
                     * @return TargetGroupStatus Status of the target group. Valid values:
- **Provisioning**: Under creation.
- **ProvisionFailed**: Creation failed.
- **Active**: Running.
- **Configuring**: configuration changing.
                     * 
                     */
                    std::string GetTargetGroupStatus() const;

                    /**
                     * 设置Status of the target group. Valid values:
- **Provisioning**: Under creation.
- **ProvisionFailed**: Creation failed.
- **Active**: Running.
- **Configuring**: configuration changing.
                     * @param _targetGroupStatus Status of the target group. Valid values:
- **Provisioning**: Under creation.
- **ProvisionFailed**: Creation failed.
- **Active**: Running.
- **Configuring**: configuration changing.
                     * 
                     */
                    void SetTargetGroupStatus(const std::string& _targetGroupStatus);

                    /**
                     * 判断参数 TargetGroupStatus 是否已赋值
                     * @return TargetGroupStatus 是否已赋值
                     * 
                     */
                    bool TargetGroupStatusHasBeenSet() const;

                    /**
                     * 获取Target group type. Valid values:
- **Instance**: Cvm server type or Eni type
                     * @return TargetType Target group type. Valid values:
- **Instance**: Cvm server type or Eni type
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Target group type. Valid values:
- **Instance**: Cvm server type or Eni type
                     * @param _targetType Target group type. Valid values:
- **Instance**: Cvm server type or Eni type
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Virtual Private Cloud (VPC) ID.
                     * @return VpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC) ID.
                     * @param _vpcId Virtual Private Cloud (VPC) ID.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Health check configuration.
                     */
                    HealthCheckConfig m_healthCheckConfig;
                    bool m_healthCheckConfigHasBeenSet;

                    /**
                     * Whether to enable long connections.
                     */
                    bool m_keepaliveEnabled;
                    bool m_keepaliveEnabledHasBeenSet;

                    /**
                     * Backend service protocol type. Value:
- **HTTP** (default): support binding HTTP and HTTPS listeners
- **HTTPS**: support binding HTTPS listeners
- **GRPC**: support binding HTTPS listeners
- **GRPCS**: support binding HTTPS listeners
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Number of load balancers associated with the target group.
                     */
                    int64_t m_relatedLoadBalancersCount;
                    bool m_relatedLoadBalancersCountHasBeenSet;

                    /**
                     * Scheduling algorithm.
                     */
                    std::string m_schedulerAlgorithm;
                    bool m_schedulerAlgorithmHasBeenSet;

                    /**
                     * Session persistence configuration.
                     */
                    StickySessionConfig m_stickySessionConfig;
                    bool m_stickySessionConfigHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Target group ID in the format of lbtg- followed by 8 alphanumeric characters.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Target group name. Defaults to the target group ID. It contains 1–255 characters, consisting of digits, upper- and lower-case letters, Chinese characters, half-width periods (.), underscores (_), and dashes (-).
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * Status of the target group. Valid values:
- **Provisioning**: Under creation.
- **ProvisionFailed**: Creation failed.
- **Active**: Running.
- **Configuring**: configuration changing.
                     */
                    std::string m_targetGroupStatus;
                    bool m_targetGroupStatusHasBeenSet;

                    /**
                     * Target group type. Valid values:
- **Instance**: Cvm server type or Eni type
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC) ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPOUTPUT_H_
