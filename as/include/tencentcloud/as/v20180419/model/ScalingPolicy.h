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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Alarm trigger policy.
                */
                class ScalingPolicy : public AbstractModel
                {
                public:
                    ScalingPolicy();
                    ~ScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param AutoScalingGroupId Auto scaling group ID.
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm trigger policy ID.
                     * @return AutoScalingPolicyId Alarm trigger policy ID.
                     */
                    std::string GetAutoScalingPolicyId() const;

                    /**
                     * 设置Alarm trigger policy ID.
                     * @param AutoScalingPolicyId Alarm trigger policy ID.
                     */
                    void SetAutoScalingPolicyId(const std::string& _autoScalingPolicyId);

                    /**
                     * 判断参数 AutoScalingPolicyId 是否已赋值
                     * @return AutoScalingPolicyId 是否已赋值
                     */
                    bool AutoScalingPolicyIdHasBeenSet() const;

                    /**
                     * 获取Scaling policy type. Valid values:
- `SIMPLE`: A simple policy.
- `TARGET_TRACKING`: A target tracking policy.
                     * @return ScalingPolicyType Scaling policy type. Valid values:
- `SIMPLE`: A simple policy.
- `TARGET_TRACKING`: A target tracking policy.
                     */
                    std::string GetScalingPolicyType() const;

                    /**
                     * 设置Scaling policy type. Valid values:
- `SIMPLE`: A simple policy.
- `TARGET_TRACKING`: A target tracking policy.
                     * @param ScalingPolicyType Scaling policy type. Valid values:
- `SIMPLE`: A simple policy.
- `TARGET_TRACKING`: A target tracking policy.
                     */
                    void SetScalingPolicyType(const std::string& _scalingPolicyType);

                    /**
                     * 判断参数 ScalingPolicyType 是否已赋值
                     * @return ScalingPolicyType 是否已赋值
                     */
                    bool ScalingPolicyTypeHasBeenSet() const;

                    /**
                     * 获取Alarm trigger policy name.
                     * @return ScalingPolicyName Alarm trigger policy name.
                     */
                    std::string GetScalingPolicyName() const;

                    /**
                     * 设置Alarm trigger policy name.
                     * @param ScalingPolicyName Alarm trigger policy name.
                     */
                    void SetScalingPolicyName(const std::string& _scalingPolicyName);

                    /**
                     * 判断参数 ScalingPolicyName 是否已赋值
                     * @return ScalingPolicyName 是否已赋值
                     */
                    bool ScalingPolicyNameHasBeenSet() const;

                    /**
                     * 获取The method to adjust the desired capacity after the alarm is triggered. It’s only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * @return AdjustmentType The method to adjust the desired capacity after the alarm is triggered. It’s only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置The method to adjust the desired capacity after the alarm is triggered. It’s only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     * @param AdjustmentType The method to adjust the desired capacity after the alarm is triggered. It’s only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     */
                    void SetAdjustmentType(const std::string& _adjustmentType);

                    /**
                     * 判断参数 AdjustmentType 是否已赋值
                     * @return AdjustmentType 是否已赋值
                     */
                    bool AdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取The adjusted value of desired capacity after the alarm is triggered. This parameter is only applicable to a simple policy.
                     * @return AdjustmentValue The adjusted value of desired capacity after the alarm is triggered. This parameter is only applicable to a simple policy.
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置The adjusted value of desired capacity after the alarm is triggered. This parameter is only applicable to a simple policy.
                     * @param AdjustmentValue The adjusted value of desired capacity after the alarm is triggered. This parameter is only applicable to a simple policy.
                     */
                    void SetAdjustmentValue(const int64_t& _adjustmentValue);

                    /**
                     * 判断参数 AdjustmentValue 是否已赋值
                     * @return AdjustmentValue 是否已赋值
                     */
                    bool AdjustmentValueHasBeenSet() const;

                    /**
                     * 获取Cooldown period. This parameter is only applicable to a simple policy.
                     * @return Cooldown Cooldown period. This parameter is only applicable to a simple policy.
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置Cooldown period. This parameter is only applicable to a simple policy.
                     * @param Cooldown Cooldown period. This parameter is only applicable to a simple policy.
                     */
                    void SetCooldown(const uint64_t& _cooldown);

                    /**
                     * 判断参数 Cooldown 是否已赋值
                     * @return Cooldown 是否已赋值
                     */
                    bool CooldownHasBeenSet() const;

                    /**
                     * 获取Alarm monitoring metrics of a simple policy.
                     * @return MetricAlarm Alarm monitoring metrics of a simple policy.
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置Alarm monitoring metrics of a simple policy.
                     * @param MetricAlarm Alarm monitoring metrics of a simple policy.
                     */
                    void SetMetricAlarm(const MetricAlarm& _metricAlarm);

                    /**
                     * 判断参数 MetricAlarm 是否已赋值
                     * @return MetricAlarm 是否已赋值
                     */
                    bool MetricAlarmHasBeenSet() const;

                    /**
                     * 获取Preset monitoring item. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>ASG_AVG_CPU_UTILIZATION: Average CPU utilization</li><li>ASG_AVG_LAN_TRAFFIC_OUT: Average private bandwidth out</li><li>ASG_AVG_LAN_TRAFFIC_IN: Average private bandwidth in</li><li>ASG_AVG_WAN_TRAFFIC_OUT: Average public bandwidth out</li><li>ASG_AVG_WAN_TRAFFIC_IN: Average public bandwidth in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PredefinedMetricType Preset monitoring item. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>ASG_AVG_CPU_UTILIZATION: Average CPU utilization</li><li>ASG_AVG_LAN_TRAFFIC_OUT: Average private bandwidth out</li><li>ASG_AVG_LAN_TRAFFIC_IN: Average private bandwidth in</li><li>ASG_AVG_WAN_TRAFFIC_OUT: Average public bandwidth out</li><li>ASG_AVG_WAN_TRAFFIC_IN: Average public bandwidth in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPredefinedMetricType() const;

                    /**
                     * 设置Preset monitoring item. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>ASG_AVG_CPU_UTILIZATION: Average CPU utilization</li><li>ASG_AVG_LAN_TRAFFIC_OUT: Average private bandwidth out</li><li>ASG_AVG_LAN_TRAFFIC_IN: Average private bandwidth in</li><li>ASG_AVG_WAN_TRAFFIC_OUT: Average public bandwidth out</li><li>ASG_AVG_WAN_TRAFFIC_IN: Average public bandwidth in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param PredefinedMetricType Preset monitoring item. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>ASG_AVG_CPU_UTILIZATION: Average CPU utilization</li><li>ASG_AVG_LAN_TRAFFIC_OUT: Average private bandwidth out</li><li>ASG_AVG_LAN_TRAFFIC_IN: Average private bandwidth in</li><li>ASG_AVG_WAN_TRAFFIC_OUT: Average public bandwidth out</li><li>ASG_AVG_WAN_TRAFFIC_IN: Average public bandwidth in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPredefinedMetricType(const std::string& _predefinedMetricType);

                    /**
                     * 判断参数 PredefinedMetricType 是否已赋值
                     * @return PredefinedMetricType 是否已赋值
                     */
                    bool PredefinedMetricTypeHasBeenSet() const;

                    /**
                     * 获取Target value. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value ranges: <br><li>`ASG_AVG_CPU_UTILIZATION` (in %): [1, 100)</li><li>`ASG_AVG_LAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_LAN_TRAFFIC_IN` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_IN` (in Mbps): >0</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetValue Target value. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value ranges: <br><li>`ASG_AVG_CPU_UTILIZATION` (in %): [1, 100)</li><li>`ASG_AVG_LAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_LAN_TRAFFIC_IN` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_IN` (in Mbps): >0</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTargetValue() const;

                    /**
                     * 设置Target value. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value ranges: <br><li>`ASG_AVG_CPU_UTILIZATION` (in %): [1, 100)</li><li>`ASG_AVG_LAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_LAN_TRAFFIC_IN` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_IN` (in Mbps): >0</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param TargetValue Target value. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value ranges: <br><li>`ASG_AVG_CPU_UTILIZATION` (in %): [1, 100)</li><li>`ASG_AVG_LAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_LAN_TRAFFIC_IN` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_IN` (in Mbps): >0</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTargetValue(const uint64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     */
                    bool TargetValueHasBeenSet() const;

                    /**
                     * 获取Instance warm-up period (in seconds). It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EstimatedInstanceWarmup Instance warm-up period (in seconds). It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEstimatedInstanceWarmup() const;

                    /**
                     * 设置Instance warm-up period (in seconds). It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param EstimatedInstanceWarmup Instance warm-up period (in seconds). It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEstimatedInstanceWarmup(const uint64_t& _estimatedInstanceWarmup);

                    /**
                     * 判断参数 EstimatedInstanceWarmup 是否已赋值
                     * @return EstimatedInstanceWarmup 是否已赋值
                     */
                    bool EstimatedInstanceWarmupHasBeenSet() const;

                    /**
                     * 获取Whether to disable scale-in. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>`true`: Scaling in is not allowed.</li><li>`false`: Allows both scale-out and scale-in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DisableScaleIn Whether to disable scale-in. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>`true`: Scaling in is not allowed.</li><li>`false`: Allows both scale-out and scale-in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetDisableScaleIn() const;

                    /**
                     * 设置Whether to disable scale-in. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>`true`: Scaling in is not allowed.</li><li>`false`: Allows both scale-out and scale-in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DisableScaleIn Whether to disable scale-in. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>`true`: Scaling in is not allowed.</li><li>`false`: Allows both scale-out and scale-in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDisableScaleIn(const bool& _disableScaleIn);

                    /**
                     * 判断参数 DisableScaleIn 是否已赋值
                     * @return DisableScaleIn 是否已赋值
                     */
                    bool DisableScaleInHasBeenSet() const;

                    /**
                     * 获取List of alarm monitoring metrics. This parameter is only applicable to a target tracking policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return MetricAlarms List of alarm monitoring metrics. This parameter is only applicable to a target tracking policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<MetricAlarm> GetMetricAlarms() const;

                    /**
                     * 设置List of alarm monitoring metrics. This parameter is only applicable to a target tracking policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param MetricAlarms List of alarm monitoring metrics. This parameter is only applicable to a target tracking policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMetricAlarms(const std::vector<MetricAlarm>& _metricAlarms);

                    /**
                     * 判断参数 MetricAlarms 是否已赋值
                     * @return MetricAlarms 是否已赋值
                     */
                    bool MetricAlarmsHasBeenSet() const;

                    /**
                     * 获取Notification group ID, which is the set of user group IDs.
                     * @return NotificationUserGroupIds Notification group ID, which is the set of user group IDs.
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置Notification group ID, which is the set of user group IDs.
                     * @param NotificationUserGroupIds Notification group ID, which is the set of user group IDs.
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Alarm trigger policy ID.
                     */
                    std::string m_autoScalingPolicyId;
                    bool m_autoScalingPolicyIdHasBeenSet;

                    /**
                     * Scaling policy type. Valid values:
- `SIMPLE`: A simple policy.
- `TARGET_TRACKING`: A target tracking policy.
                     */
                    std::string m_scalingPolicyType;
                    bool m_scalingPolicyTypeHasBeenSet;

                    /**
                     * Alarm trigger policy name.
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * The method to adjust the desired capacity after the alarm is triggered. It’s only available when `ScalingPolicyType` is `Simple`. Valid values: <br><li>`CHANGE_IN_CAPACITY`: Increase or decrease the desired capacity </li><li>`EXACT_CAPACITY`: Adjust to the specified desired capacity </li> <li>`PERCENT_CHANGE_IN_CAPACITY`: Adjust the desired capacity by percentage </li>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * The adjusted value of desired capacity after the alarm is triggered. This parameter is only applicable to a simple policy.
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * Cooldown period. This parameter is only applicable to a simple policy.
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

                    /**
                     * Alarm monitoring metrics of a simple policy.
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * Preset monitoring item. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>ASG_AVG_CPU_UTILIZATION: Average CPU utilization</li><li>ASG_AVG_LAN_TRAFFIC_OUT: Average private bandwidth out</li><li>ASG_AVG_LAN_TRAFFIC_IN: Average private bandwidth in</li><li>ASG_AVG_WAN_TRAFFIC_OUT: Average public bandwidth out</li><li>ASG_AVG_WAN_TRAFFIC_IN: Average public bandwidth in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_predefinedMetricType;
                    bool m_predefinedMetricTypeHasBeenSet;

                    /**
                     * Target value. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value ranges: <br><li>`ASG_AVG_CPU_UTILIZATION` (in %): [1, 100)</li><li>`ASG_AVG_LAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_LAN_TRAFFIC_IN` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_OUT` (in Mbps): >0</li><li>`ASG_AVG_WAN_TRAFFIC_IN` (in Mbps): >0</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                    /**
                     * Instance warm-up period (in seconds). It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Value range: 0-3600.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_estimatedInstanceWarmup;
                    bool m_estimatedInstanceWarmupHasBeenSet;

                    /**
                     * Whether to disable scale-in. It’s only available when `ScalingPolicyType` is `TARGET_TRACKING`. Valid values: <br><li>`true`: Scaling in is not allowed.</li><li>`false`: Allows both scale-out and scale-in</li>
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_disableScaleIn;
                    bool m_disableScaleInHasBeenSet;

                    /**
                     * List of alarm monitoring metrics. This parameter is only applicable to a target tracking policy.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<MetricAlarm> m_metricAlarms;
                    bool m_metricAlarmsHasBeenSet;

                    /**
                     * Notification group ID, which is the set of user group IDs.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALINGPOLICY_H_
