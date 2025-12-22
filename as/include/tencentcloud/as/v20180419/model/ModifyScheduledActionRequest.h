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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyScheduledAction request structure.
                */
                class ModifyScheduledActionRequest : public AbstractModel
                {
                public:
                    ModifyScheduledActionRequest();
                    ~ModifyScheduledActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scheduled task ID that needs modification. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * @return ScheduledActionId Scheduled task ID that needs modification. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * 
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置Scheduled task ID that needs modification. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * @param _scheduledActionId Scheduled task ID that needs modification. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     * 
                     */
                    void SetScheduledActionId(const std::string& _scheduledActionId);

                    /**
                     * 判断参数 ScheduledActionId 是否已赋值
                     * @return ScheduledActionId 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdHasBeenSet() const;

                    /**
                     * 获取Scheduled task name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 60 bytes and must be unique in an auto scaling group.
                     * @return ScheduledActionName Scheduled task name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 60 bytes and must be unique in an auto scaling group.
                     * 
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置Scheduled task name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 60 bytes and must be unique in an auto scaling group.
                     * @param _scheduledActionName Scheduled task name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 60 bytes and must be unique in an auto scaling group.
                     * 
                     */
                    void SetScheduledActionName(const std::string& _scheduledActionName);

                    /**
                     * 判断参数 ScheduledActionName 是否已赋值
                     * @return ScheduledActionName 是否已赋值
                     * 
                     */
                    bool ScheduledActionNameHasBeenSet() const;

                    /**
                     * 获取The maximum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @return MaxSize The maximum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置The maximum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @param _maxSize The maximum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取The minimum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @return MinSize The minimum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置The minimum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @param _minSize The minimum number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取The desired number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @return DesiredCapacity The desired number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置The desired number of instances set for the auto scaling group when the scheduled task is triggered.
                     * @param _desiredCapacity The desired number of instances set for the auto scaling group when the scheduled task is triggered.
                     * 
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     * 
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Initial triggered time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @return StartTime Initial triggered time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Initial triggered time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @param _startTime Initial triggered time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard. <br>This parameter and `Recurrence` need to be specified at the same time. After the end time, the scheduled task will no longer take effect.
                     * @return EndTime End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard. <br>This parameter and `Recurrence` need to be specified at the same time. After the end time, the scheduled task will no longer take effect.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard. <br>This parameter and `Recurrence` need to be specified at the same time. After the end time, the scheduled task will no longer take effect.
                     * @param _endTime End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard. <br>This parameter and `Recurrence` need to be specified at the same time. After the end time, the scheduled task will no longer take effect.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The repeating mode of the scheduled task. follows the standard Cron format. the Recurrence parameter limits (https://intl.cloud.tencent.com/document/product/377/88119?from_cn_redirect=1) consist of 5 fields separated by space, with the structure: minute, hr, date, month, week. this parameter must be simultaneously specified with `EndTime`.
                     * @return Recurrence The repeating mode of the scheduled task. follows the standard Cron format. the Recurrence parameter limits (https://intl.cloud.tencent.com/document/product/377/88119?from_cn_redirect=1) consist of 5 fields separated by space, with the structure: minute, hr, date, month, week. this parameter must be simultaneously specified with `EndTime`.
                     * 
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置The repeating mode of the scheduled task. follows the standard Cron format. the Recurrence parameter limits (https://intl.cloud.tencent.com/document/product/377/88119?from_cn_redirect=1) consist of 5 fields separated by space, with the structure: minute, hr, date, month, week. this parameter must be simultaneously specified with `EndTime`.
                     * @param _recurrence The repeating mode of the scheduled task. follows the standard Cron format. the Recurrence parameter limits (https://intl.cloud.tencent.com/document/product/377/88119?from_cn_redirect=1) consist of 5 fields separated by space, with the structure: minute, hr, date, month, week. this parameter must be simultaneously specified with `EndTime`.
                     * 
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     * 
                     */
                    bool RecurrenceHasBeenSet() const;

                    /**
                     * 获取Disable update DesiredCapacity Indicates the DesiredCapacity is updated normally during scheduled task triggering.

Specifies whether the scheduled task triggers proactive modification of the DesiredCapacity when the value is True. DesiredCapacity may be modified by the minSize and maxSize mechanism.
The following cases assume that DisableUpdateDesiredCapacity is True:
- When scheduled task triggered, the original DesiredCapacity is 5. The scheduled task changes the minSize to 10, the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 5 is less than minSize 10, so the final new DesiredCapacity is 10.
- When scheduled task triggered, the original DesiredCapacity is 25. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 25 is greater than the maxSize 20, so the final new DesiredCapacity is 20.
- When scheduled task triggered, the original DesiredCapacity is 13. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect, and the DesiredCapacity is still 13.
                     * @return DisableUpdateDesiredCapacity Disable update DesiredCapacity Indicates the DesiredCapacity is updated normally during scheduled task triggering.

Specifies whether the scheduled task triggers proactive modification of the DesiredCapacity when the value is True. DesiredCapacity may be modified by the minSize and maxSize mechanism.
The following cases assume that DisableUpdateDesiredCapacity is True:
- When scheduled task triggered, the original DesiredCapacity is 5. The scheduled task changes the minSize to 10, the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 5 is less than minSize 10, so the final new DesiredCapacity is 10.
- When scheduled task triggered, the original DesiredCapacity is 25. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 25 is greater than the maxSize 20, so the final new DesiredCapacity is 20.
- When scheduled task triggered, the original DesiredCapacity is 13. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect, and the DesiredCapacity is still 13.
                     * 
                     */
                    bool GetDisableUpdateDesiredCapacity() const;

                    /**
                     * 设置Disable update DesiredCapacity Indicates the DesiredCapacity is updated normally during scheduled task triggering.

Specifies whether the scheduled task triggers proactive modification of the DesiredCapacity when the value is True. DesiredCapacity may be modified by the minSize and maxSize mechanism.
The following cases assume that DisableUpdateDesiredCapacity is True:
- When scheduled task triggered, the original DesiredCapacity is 5. The scheduled task changes the minSize to 10, the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 5 is less than minSize 10, so the final new DesiredCapacity is 10.
- When scheduled task triggered, the original DesiredCapacity is 25. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 25 is greater than the maxSize 20, so the final new DesiredCapacity is 20.
- When scheduled task triggered, the original DesiredCapacity is 13. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect, and the DesiredCapacity is still 13.
                     * @param _disableUpdateDesiredCapacity Disable update DesiredCapacity Indicates the DesiredCapacity is updated normally during scheduled task triggering.

Specifies whether the scheduled task triggers proactive modification of the DesiredCapacity when the value is True. DesiredCapacity may be modified by the minSize and maxSize mechanism.
The following cases assume that DisableUpdateDesiredCapacity is True:
- When scheduled task triggered, the original DesiredCapacity is 5. The scheduled task changes the minSize to 10, the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 5 is less than minSize 10, so the final new DesiredCapacity is 10.
- When scheduled task triggered, the original DesiredCapacity is 25. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 25 is greater than the maxSize 20, so the final new DesiredCapacity is 20.
- When scheduled task triggered, the original DesiredCapacity is 13. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect, and the DesiredCapacity is still 13.
                     * 
                     */
                    void SetDisableUpdateDesiredCapacity(const bool& _disableUpdateDesiredCapacity);

                    /**
                     * 判断参数 DisableUpdateDesiredCapacity 是否已赋值
                     * @return DisableUpdateDesiredCapacity 是否已赋值
                     * 
                     */
                    bool DisableUpdateDesiredCapacityHasBeenSet() const;

                private:

                    /**
                     * Scheduled task ID that needs modification. obtain the scheduled task ID by calling the api [DescribeScheduledActions](https://intl.cloud.tencent.com/document/api/377/20450?from_cn_redirect=1) and retrieving the ScheduledActionId from the returned information.
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                    /**
                     * Scheduled task name, which can only contain letters, numbers, underscores, hyphens ("-"), and decimal points with a maximum length of 60 bytes and must be unique in an auto scaling group.
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * The maximum number of instances set for the auto scaling group when the scheduled task is triggered.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * The minimum number of instances set for the auto scaling group when the scheduled task is triggered.
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * The desired number of instances set for the auto scaling group when the scheduled task is triggered.
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Initial triggered time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard. <br>This parameter and `Recurrence` need to be specified at the same time. After the end time, the scheduled task will no longer take effect.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The repeating mode of the scheduled task. follows the standard Cron format. the Recurrence parameter limits (https://intl.cloud.tencent.com/document/product/377/88119?from_cn_redirect=1) consist of 5 fields separated by space, with the structure: minute, hr, date, month, week. this parameter must be simultaneously specified with `EndTime`.
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                    /**
                     * Disable update DesiredCapacity Indicates the DesiredCapacity is updated normally during scheduled task triggering.

Specifies whether the scheduled task triggers proactive modification of the DesiredCapacity when the value is True. DesiredCapacity may be modified by the minSize and maxSize mechanism.
The following cases assume that DisableUpdateDesiredCapacity is True:
- When scheduled task triggered, the original DesiredCapacity is 5. The scheduled task changes the minSize to 10, the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 5 is less than minSize 10, so the final new DesiredCapacity is 10.
- When scheduled task triggered, the original DesiredCapacity is 25. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect. However, the original DesiredCapacity 25 is greater than the maxSize 20, so the final new DesiredCapacity is 20.
- When scheduled task triggered, the original DesiredCapacity is 13. The scheduled task changes the minSize to 10 and the maxSize to 20, and the DesiredCapacity to 15. Since the DesiredCapacity update is disabled, 15 does not take effect, and the DesiredCapacity is still 13.
                     */
                    bool m_disableUpdateDesiredCapacity;
                    bool m_disableUpdateDesiredCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYSCHEDULEDACTIONREQUEST_H_
