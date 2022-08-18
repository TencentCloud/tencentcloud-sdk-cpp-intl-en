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
                     * 获取The method to adjust the desired number of instances after the alarm is triggered. Value range: <br><li>CHANGE_IN_CAPACITY: Increase or decrease the desired number of instances </li><li>EXACT_CAPACITY: Adjust to the specified desired number of instances </li> <li>PERCENT_CHANGE_IN_CAPACITY: Adjust the desired number of instances by percentage </li>
                     * @return AdjustmentType The method to adjust the desired number of instances after the alarm is triggered. Value range: <br><li>CHANGE_IN_CAPACITY: Increase or decrease the desired number of instances </li><li>EXACT_CAPACITY: Adjust to the specified desired number of instances </li> <li>PERCENT_CHANGE_IN_CAPACITY: Adjust the desired number of instances by percentage </li>
                     */
                    std::string GetAdjustmentType() const;

                    /**
                     * 设置The method to adjust the desired number of instances after the alarm is triggered. Value range: <br><li>CHANGE_IN_CAPACITY: Increase or decrease the desired number of instances </li><li>EXACT_CAPACITY: Adjust to the specified desired number of instances </li> <li>PERCENT_CHANGE_IN_CAPACITY: Adjust the desired number of instances by percentage </li>
                     * @param AdjustmentType The method to adjust the desired number of instances after the alarm is triggered. Value range: <br><li>CHANGE_IN_CAPACITY: Increase or decrease the desired number of instances </li><li>EXACT_CAPACITY: Adjust to the specified desired number of instances </li> <li>PERCENT_CHANGE_IN_CAPACITY: Adjust the desired number of instances by percentage </li>
                     */
                    void SetAdjustmentType(const std::string& _adjustmentType);

                    /**
                     * 判断参数 AdjustmentType 是否已赋值
                     * @return AdjustmentType 是否已赋值
                     */
                    bool AdjustmentTypeHasBeenSet() const;

                    /**
                     * 获取The adjusted value of desired number of instances after the alarm is triggered. Value range: <br><li>When AdjustmentType is CHANGE_IN_CAPACITY, if AdjustmentValue is a positive value, some new instances will be added after the alarm is triggered, and if it is a negative value, some existing instances will be removed after the alarm is triggered </li> <li> When AdjustmentType is EXACT_CAPACITY, the value of AdjustmentValue is the desired number of instances after the alarm is triggered, which should be equal to or greater than 0 </li> <li> When AdjustmentType is PERCENT_CHANGE_IN_CAPACITY, if AdjusmentValue (in %) is a positive value, new instances will be added by percentage after the alarm is triggered; if it is a negative value, existing instances will be removed by percentage after the alarm is triggered.
                     * @return AdjustmentValue The adjusted value of desired number of instances after the alarm is triggered. Value range: <br><li>When AdjustmentType is CHANGE_IN_CAPACITY, if AdjustmentValue is a positive value, some new instances will be added after the alarm is triggered, and if it is a negative value, some existing instances will be removed after the alarm is triggered </li> <li> When AdjustmentType is EXACT_CAPACITY, the value of AdjustmentValue is the desired number of instances after the alarm is triggered, which should be equal to or greater than 0 </li> <li> When AdjustmentType is PERCENT_CHANGE_IN_CAPACITY, if AdjusmentValue (in %) is a positive value, new instances will be added by percentage after the alarm is triggered; if it is a negative value, existing instances will be removed by percentage after the alarm is triggered.
                     */
                    int64_t GetAdjustmentValue() const;

                    /**
                     * 设置The adjusted value of desired number of instances after the alarm is triggered. Value range: <br><li>When AdjustmentType is CHANGE_IN_CAPACITY, if AdjustmentValue is a positive value, some new instances will be added after the alarm is triggered, and if it is a negative value, some existing instances will be removed after the alarm is triggered </li> <li> When AdjustmentType is EXACT_CAPACITY, the value of AdjustmentValue is the desired number of instances after the alarm is triggered, which should be equal to or greater than 0 </li> <li> When AdjustmentType is PERCENT_CHANGE_IN_CAPACITY, if AdjusmentValue (in %) is a positive value, new instances will be added by percentage after the alarm is triggered; if it is a negative value, existing instances will be removed by percentage after the alarm is triggered.
                     * @param AdjustmentValue The adjusted value of desired number of instances after the alarm is triggered. Value range: <br><li>When AdjustmentType is CHANGE_IN_CAPACITY, if AdjustmentValue is a positive value, some new instances will be added after the alarm is triggered, and if it is a negative value, some existing instances will be removed after the alarm is triggered </li> <li> When AdjustmentType is EXACT_CAPACITY, the value of AdjustmentValue is the desired number of instances after the alarm is triggered, which should be equal to or greater than 0 </li> <li> When AdjustmentType is PERCENT_CHANGE_IN_CAPACITY, if AdjusmentValue (in %) is a positive value, new instances will be added by percentage after the alarm is triggered; if it is a negative value, existing instances will be removed by percentage after the alarm is triggered.
                     */
                    void SetAdjustmentValue(const int64_t& _adjustmentValue);

                    /**
                     * 判断参数 AdjustmentValue 是否已赋值
                     * @return AdjustmentValue 是否已赋值
                     */
                    bool AdjustmentValueHasBeenSet() const;

                    /**
                     * 获取Alarm monitoring metric.
                     * @return MetricAlarm Alarm monitoring metric.
                     */
                    MetricAlarm GetMetricAlarm() const;

                    /**
                     * 设置Alarm monitoring metric.
                     * @param MetricAlarm Alarm monitoring metric.
                     */
                    void SetMetricAlarm(const MetricAlarm& _metricAlarm);

                    /**
                     * 判断参数 MetricAlarm 是否已赋值
                     * @return MetricAlarm 是否已赋值
                     */
                    bool MetricAlarmHasBeenSet() const;

                    /**
                     * 获取Cooldown period in seconds. Default value: 300 seconds.
                     * @return Cooldown Cooldown period in seconds. Default value: 300 seconds.
                     */
                    uint64_t GetCooldown() const;

                    /**
                     * 设置Cooldown period in seconds. Default value: 300 seconds.
                     * @param Cooldown Cooldown period in seconds. Default value: 300 seconds.
                     */
                    void SetCooldown(const uint64_t& _cooldown);

                    /**
                     * 判断参数 Cooldown 是否已赋值
                     * @return Cooldown 是否已赋值
                     */
                    bool CooldownHasBeenSet() const;

                    /**
                     * 获取This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * @return NotificationUserGroupIds This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
                     * @param NotificationUserGroupIds This parameter is diused. Please use [CreateNotificationConfiguration](https://intl.cloud.tencent.com/document/api/377/33185?from_cn_redirect=1) instead.
Notification group ID, which is the set of user group IDs.
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
                     * Alarm trigger policy name.
                     */
                    std::string m_scalingPolicyName;
                    bool m_scalingPolicyNameHasBeenSet;

                    /**
                     * The method to adjust the desired number of instances after the alarm is triggered. Value range: <br><li>CHANGE_IN_CAPACITY: Increase or decrease the desired number of instances </li><li>EXACT_CAPACITY: Adjust to the specified desired number of instances </li> <li>PERCENT_CHANGE_IN_CAPACITY: Adjust the desired number of instances by percentage </li>
                     */
                    std::string m_adjustmentType;
                    bool m_adjustmentTypeHasBeenSet;

                    /**
                     * The adjusted value of desired number of instances after the alarm is triggered. Value range: <br><li>When AdjustmentType is CHANGE_IN_CAPACITY, if AdjustmentValue is a positive value, some new instances will be added after the alarm is triggered, and if it is a negative value, some existing instances will be removed after the alarm is triggered </li> <li> When AdjustmentType is EXACT_CAPACITY, the value of AdjustmentValue is the desired number of instances after the alarm is triggered, which should be equal to or greater than 0 </li> <li> When AdjustmentType is PERCENT_CHANGE_IN_CAPACITY, if AdjusmentValue (in %) is a positive value, new instances will be added by percentage after the alarm is triggered; if it is a negative value, existing instances will be removed by percentage after the alarm is triggered.
                     */
                    int64_t m_adjustmentValue;
                    bool m_adjustmentValueHasBeenSet;

                    /**
                     * Alarm monitoring metric.
                     */
                    MetricAlarm m_metricAlarm;
                    bool m_metricAlarmHasBeenSet;

                    /**
                     * Cooldown period in seconds. Default value: 300 seconds.
                     */
                    uint64_t m_cooldown;
                    bool m_cooldownHasBeenSet;

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
