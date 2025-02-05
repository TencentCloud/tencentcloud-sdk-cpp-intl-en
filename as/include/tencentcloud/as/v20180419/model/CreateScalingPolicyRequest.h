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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/MetricAlarm.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CreateScalingPolicy request structure.
                */
                class CreateScalingPolicyRequest : public AbstractModel
                {
                public:
                    CreateScalingPolicyRequest();
                    ~CreateScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param _autoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm trigger policy name.
                     * @return ScalingPolicyName Alarm trigger policy name.
                     * 
                     */
                    std::string GetScalingPolicyName() const;

                    /**
                     * 设置Alarm trigger policy name.
                     * @param _scalingPolicyName Alarm trigger policy name.
                     * 
                     */
                    void SetScalingPolicyName(const std::string& _scalingPolicyName);

                    /**
                     * 判断参数 ScalingPolicyName 是否已赋值
                     * @return ScalingPolicyName 是否已赋值
                     * 
                     */
                    bool ScalingPolicyNameHasBeenSet() const;

                    /**
                     * 获取Scaling policy type. Valid values: <br><li>`SIMPLE` (default): A simple policy</li><li>`TARGET_TRACKING`: A target tracking policy</li>.
                     * @return ScalingPolicyType Scaling policy type. Valid values: <br><li>`SIMPLE` (default): A simple policy</li><li>`TARGET_TRACKING`: A target tracking policy</li>.
                     * 
                     */
                    std::string GetScalingPolicyType() const;

                    /**
                     * 设置Scaling policy type. Valid values: <br><li>`SIMPLE` (default): A simple policy</li><li>`TARGET_TRACKING`: A target tracking policy</li>.
                     * @param _scalingPolicyType Scaling policy type. Valid values: <br><li>`SIMPLE` (default): A simple policy</li><li>`TARGET_TRACKING`: A target tracking policy</li>.
                     * 
                     */
                    void SetScalingPolicyType(const std::string& _scalingPolicyType);

                    /**
                     * 判断参数 ScalingPolicyType 是否已赋值
                     * @return ScalingPolicyType 是否已赋值
                     * 
                     */
                    bool ScalingPolicyTypeHasBeenSet() const;

                    /**
                     * 获取The method to adjust the desired capacity after the alarm is triggered. It is only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * @return AdjustmentType The method to adjust the desired capacity after the alarm is triggered. It is only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * 
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置The method to adjust the desired capacity after the alarm is triggered. It is only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * @param _adjustmentType The method to adjust the desired capacity after the alarm is triggered. It is only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * 
                     */
                    void SetAdjustmentType(const std::string& _adjustmentType);

                    /**
                     * 判断参数 AdjustmentType 是否已赋值
                     * @return AdjustmentType 是否已赋值
                     * 
                     */
                    bool AdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取Adjustment value for the expected number of instances after an alarm is triggered, which is applicable only to simple policies.
<li>When AdjustmentType is set to CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances after the alarm is triggered, while a negative value indicates a decrease in the number of instances after the alarm is triggered.</li>
<li>When AdjustmentType is set to EXACT_CAPACITY, the value of AdjustmentValue indicates the new desired number of instances after the alarm is triggered. It should be greater than or equal to 0.</li>
<li>When AdjustmentType is set to PERCENT_CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances by a percentage after the alarm is triggered, while a negative value indicates a decrease in the number of instances by a percentage after the alarm is triggered. Unit: %.</li>
                     * @return AdjustmentValue Adjustment value for the expected number of instances after an alarm is triggered, which is applicable only to simple policies.
<li>When AdjustmentType is set to CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances after the alarm is triggered, while a negative value indicates a decrease in the number of instances after the alarm is triggered.</li>
<li>When AdjustmentType is set to EXACT_CAPACITY, the value of AdjustmentValue indicates the new desired number of instances after the alarm is triggered. It should be greater than or equal to 0.</li>
<li>When AdjustmentType is set to PERCENT_CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances by a percentage after the alarm is triggered, while a negative value indicates a decrease in the number of instances by a percentage after the alarm is triggered. Unit: %.</li>
                     * 
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置Adjustment value for the expected number of instances after an alarm is triggered, which is applicable only to simple policies.
<li>When AdjustmentType is set to CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances after the alarm is triggered, while a negative value indicates a decrease in the number of instances after the alarm is triggered.</li>
<li>When AdjustmentType is set to EXACT_CAPACITY, the value of AdjustmentValue indicates the new desired number of instances after the alarm is triggered. It should be greater than or equal to 0.</li>
<li>When AdjustmentType is set to PERCENT_CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances by a percentage after the alarm is triggered, while a negative value indicates a decrease in the number of instances by a percentage after the alarm is triggered. Unit: %.</li>
                     * @param _adjustmentValue Adjustment value for the expected number of instances after an alarm is triggered, which is applicable only to simple policies.
<li>When AdjustmentType is set to CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances after the alarm is triggered, while a negative value indicates a decrease in the number of instances after the alarm is triggered.</li>
<li>When AdjustmentType is set to EXACT_CAPACITY, the value of AdjustmentValue indicates the new desired number of instances after the alarm is triggered. It should be greater than or equal to 0.</li>
<li>When AdjustmentType is set to PERCENT_CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances by a percentage after the alarm is triggered, while a negative value indicates a decrease in the number of instances by a percentage after the alarm is triggered. Unit: %.</li>
                     * 
                     */
                    void SetAdjustmentValue(const int64_t& _adjustmentValue);

                    /**
                     * 判断参数 AdjustmentValue 是否已赋值
                     * @return AdjustmentValue 是否已赋值
                     * 
                     */
                    bool AdjustmentValueHasBeenSet() const;

                    /**
                     * 获取Cooldown period (in seconds). This parameter is only applicable to a simple policy. Default value: 300.
                     * @return Cooldown Cooldown period (in seconds). This parameter is only applicable to a simple policy. Default value: 300.
                     * 
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置Cooldown period (in seconds). This parameter is only applicable to a simple policy. Default value: 300.
                     * @param _cooldown Cooldown period (in seconds). This parameter is only applicable to a simple policy. Default value: 300.
                     * 
                     */
                    void SetCooldown(const uint64_t& _cooldown);

                    /**
                     * 判断参数 Cooldown 是否已赋值
                     * @return Cooldown 是否已赋值
                     * 
                     */
                    bool CooldownHasBeenSet() const;

                    /**
                     * 获取Alarm monitoring metric. It is only available when `ScalingPolicyType` is `Simple`.
                     * @return MetricAlarm Alarm monitoring metric. It is only available when `ScalingPolicyType` is `Simple`.
                     * 
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置Alarm monitoring metric. It is only available when `ScalingPolicyType` is `Simple`.
                     * @param _metricAlarm Alarm monitoring metric. It is only available when `ScalingPolicyType` is `Simple`.
                     * 
                     */
                    void SetMetricAlarm(const MetricAlarm& _metricAlarm);

                    /**
                     * 判断参数 MetricAlarm 是否已赋值
                     * @return MetricAlarm 是否已赋值
                     * 
                     */
                    bool MetricAlarmHasBeenSet() const;

                    /**
                     * 获取Predefined monitoring item, applicable only to target tracking policies. Valid values:
<li>ASG_AVG_CPU_UTILIZATION: average CPU utilization</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: average outbound private network bandwidth</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: average inbound private network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: average outbound public network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: average inbound public network bandwidth</li>
                     * @return PredefinedMetricType Predefined monitoring item, applicable only to target tracking policies. Valid values:
<li>ASG_AVG_CPU_UTILIZATION: average CPU utilization</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: average outbound private network bandwidth</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: average inbound private network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: average outbound public network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: average inbound public network bandwidth</li>
                     * 
                     */
                    std::string GetPredefinedMetricType() const;

                    /**
                     * 设置Predefined monitoring item, applicable only to target tracking policies. Valid values:
<li>ASG_AVG_CPU_UTILIZATION: average CPU utilization</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: average outbound private network bandwidth</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: average inbound private network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: average outbound public network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: average inbound public network bandwidth</li>
                     * @param _predefinedMetricType Predefined monitoring item, applicable only to target tracking policies. Valid values:
<li>ASG_AVG_CPU_UTILIZATION: average CPU utilization</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: average outbound private network bandwidth</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: average inbound private network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: average outbound public network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: average inbound public network bandwidth</li>
                     * 
                     */
                    void SetPredefinedMetricType(const std::string& _predefinedMetricType);

                    /**
                     * 判断参数 PredefinedMetricType 是否已赋值
                     * @return PredefinedMetricType 是否已赋值
                     * 
                     */
                    bool PredefinedMetricTypeHasBeenSet() const;

                    /**
                     * 获取Target value, which is applicable only to target tracking policies.
<li>ASG_AVG_CPU_UTILIZATION: value range: [1, 100); unit: %.</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
                     * @return TargetValue Target value, which is applicable only to target tracking policies.
<li>ASG_AVG_CPU_UTILIZATION: value range: [1, 100); unit: %.</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
                     * 
                     */
                    uint64_t GetTargetValue() const;

                    /**
                     * 设置Target value, which is applicable only to target tracking policies.
<li>ASG_AVG_CPU_UTILIZATION: value range: [1, 100); unit: %.</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
                     * @param _targetValue Target value, which is applicable only to target tracking policies.
<li>ASG_AVG_CPU_UTILIZATION: value range: [1, 100); unit: %.</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
                     * 
                     */
                    void SetTargetValue(const uint64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     * 
                     */
                    bool TargetValueHasBeenSet() const;

                    /**
                     * 获取Instance warm-up period (in seconds). It is only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600. Default value: 300.
                     * @return EstimatedInstanceWarmup Instance warm-up period (in seconds). It is only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600. Default value: 300.
                     * 
                     */
                    uint64_t GetEstimatedInstanceWarmup() const;

                    /**
                     * 设置Instance warm-up period (in seconds). It is only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600. Default value: 300.
                     * @param _estimatedInstanceWarmup Instance warm-up period (in seconds). It is only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600. Default value: 300.
                     * 
                     */
                    void SetEstimatedInstanceWarmup(const uint64_t& _estimatedInstanceWarmup);

                    /**
                     * 判断参数 EstimatedInstanceWarmup 是否已赋值
                     * @return EstimatedInstanceWarmup 是否已赋值
                     * 
                     */
                    bool EstimatedInstanceWarmupHasBeenSet() const;

                    /**
                     * 获取Whether to disable scale-in, which is applicable only to target tracking policies. Default value: false. Valid values:
<li>true: Target tracking policies trigger only scale-out.</li>
<li>false: Target tracking policies trigger both scale-out and scale-in.</li>
                     * @return DisableScaleIn Whether to disable scale-in, which is applicable only to target tracking policies. Default value: false. Valid values:
<li>true: Target tracking policies trigger only scale-out.</li>
<li>false: Target tracking policies trigger both scale-out and scale-in.</li>
                     * 
                     */
                    bool GetDisableScaleIn() const;

                    /**
                     * 设置Whether to disable scale-in, which is applicable only to target tracking policies. Default value: false. Valid values:
<li>true: Target tracking policies trigger only scale-out.</li>
<li>false: Target tracking policies trigger both scale-out and scale-in.</li>
                     * @param _disableScaleIn Whether to disable scale-in, which is applicable only to target tracking policies. Default value: false. Valid values:
<li>true: Target tracking policies trigger only scale-out.</li>
<li>false: Target tracking policies trigger both scale-out and scale-in.</li>
                     * 
                     */
                    void SetDisableScaleIn(const bool& _disableScaleIn);

                    /**
                     * 判断参数 DisableScaleIn 是否已赋值
                     * @return DisableScaleIn 是否已赋值
                     * 
                     */
                    bool DisableScaleInHasBeenSet() const;

                    /**
                     * 获取This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * @return NotificationUserGroupIds This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * @param _notificationUserGroupIds This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * 
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     * 
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Alarm trigger policy name.
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * Scaling policy type. Valid values: <br><li>`SIMPLE` (default): A simple policy</li><li>`TARGET_TRACKING`: A target tracking policy</li>.
                     */
                    std::string m_scalingPolicyType;
                    bool m_scalingPolicyTypeHasBeenSet;

                    /**
                     * The method to adjust the desired capacity after the alarm is triggered. It is only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * Adjustment value for the expected number of instances after an alarm is triggered, which is applicable only to simple policies.
<li>When AdjustmentType is set to CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances after the alarm is triggered, while a negative value indicates a decrease in the number of instances after the alarm is triggered.</li>
<li>When AdjustmentType is set to EXACT_CAPACITY, the value of AdjustmentValue indicates the new desired number of instances after the alarm is triggered. It should be greater than or equal to 0.</li>
<li>When AdjustmentType is set to PERCENT_CHANGE_IN_CAPACITY, a positive value of AdjustmentValue indicates an increase in the number of instances by a percentage after the alarm is triggered, while a negative value indicates a decrease in the number of instances by a percentage after the alarm is triggered. Unit: %.</li>
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * Cooldown period (in seconds). This parameter is only applicable to a simple policy. Default value: 300.
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

                    /**
                     * Alarm monitoring metric. It is only available when `ScalingPolicyType` is `Simple`.
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * Predefined monitoring item, applicable only to target tracking policies. Valid values:
<li>ASG_AVG_CPU_UTILIZATION: average CPU utilization</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: average outbound private network bandwidth</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: average inbound private network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: average outbound public network bandwidth</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: average inbound public network bandwidth</li>
                     */
                    std::string m_predefinedMetricType;
                    bool m_predefinedMetricTypeHasBeenSet;

                    /**
                     * Target value, which is applicable only to target tracking policies.
<li>ASG_AVG_CPU_UTILIZATION: value range: [1, 100); unit: %.</li>
<li>ASG_AVG_LAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_LAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_OUT: value range: > 0; unit: Mbps.</li>
<li>ASG_AVG_WAN_TRAFFIC_IN: value range: > 0; unit: Mbps.</li>
                     */
                    uint64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                    /**
                     * Instance warm-up period (in seconds). It is only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600. Default value: 300.
                     */
                    uint64_t m_estimatedInstanceWarmup;
                    bool m_estimatedInstanceWarmupHasBeenSet;

                    /**
                     * Whether to disable scale-in, which is applicable only to target tracking policies. Default value: false. Valid values:
<li>true: Target tracking policies trigger only scale-out.</li>
<li>false: Target tracking policies trigger both scale-out and scale-in.</li>
                     */
                    bool m_disableScaleIn;
                    bool m_disableScaleInHasBeenSet;

                    /**
                     * This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATESCALINGPOLICYREQUEST_H_
