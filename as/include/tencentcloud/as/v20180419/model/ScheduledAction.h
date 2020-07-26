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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * This describes the information of a scheduled task.
                */
                class ScheduledAction : public AbstractModel
                {
                public:
                    ScheduledAction();
                    ~ScheduledAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduled task ID.
                     * @return ScheduledActionId Scheduled task ID.
                     */
                    std::string GetScheduledActionId() const;

                    /**
                     * 设置Scheduled task ID.
                     * @param ScheduledActionId Scheduled task ID.
                     */
                    void SetScheduledActionId(const std::string& _scheduledActionId);

                    /**
                     * 判断参数 ScheduledActionId 是否已赋值
                     * @return ScheduledActionId 是否已赋值
                     */
                    bool ScheduledActionIdHasBeenSet() const;

                    /**
                     * 获取Scheduled task name.
                     * @return ScheduledActionName Scheduled task name.
                     */
                    std::string GetScheduledActionName() const;

                    /**
                     * 设置Scheduled task name.
                     * @param ScheduledActionName Scheduled task name.
                     */
                    void SetScheduledActionName(const std::string& _scheduledActionName);

                    /**
                     * 判断参数 ScheduledActionName 是否已赋值
                     * @return ScheduledActionName 是否已赋值
                     */
                    bool ScheduledActionNameHasBeenSet() const;

                    /**
                     * 获取ID of the auto scaling group where the scheduled task is located.
                     * @return AutoScalingGroupId ID of the auto scaling group where the scheduled task is located.
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置ID of the auto scaling group where the scheduled task is located.
                     * @param AutoScalingGroupId ID of the auto scaling group where the scheduled task is located.
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Start time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @return StartTime Start time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @param StartTime Start time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Repeating mode of the scheduled task.
                     * @return Recurrence Repeating mode of the scheduled task.
                     */
                    std::string GetRecurrence() const;

                    /**
                     * 设置Repeating mode of the scheduled task.
                     * @param Recurrence Repeating mode of the scheduled task.
                     */
                    void SetRecurrence(const std::string& _recurrence);

                    /**
                     * 判断参数 Recurrence 是否已赋值
                     * @return Recurrence 是否已赋值
                     */
                    bool RecurrenceHasBeenSet() const;

                    /**
                     * 获取End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @return EndTime End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     * @param EndTime End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances set by the scheduled task.
                     * @return MaxSize Maximum number of instances set by the scheduled task.
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Maximum number of instances set by the scheduled task.
                     * @param MaxSize Maximum number of instances set by the scheduled task.
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取Desired number of instances set by the scheduled task.
                     * @return DesiredCapacity Desired number of instances set by the scheduled task.
                     */
                    uint64_t GetDesiredCapacity() const;

                    /**
                     * 设置Desired number of instances set by the scheduled task.
                     * @param DesiredCapacity Desired number of instances set by the scheduled task.
                     */
                    void SetDesiredCapacity(const uint64_t& _desiredCapacity);

                    /**
                     * 判断参数 DesiredCapacity 是否已赋值
                     * @return DesiredCapacity 是否已赋值
                     */
                    bool DesiredCapacityHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances set by the scheduled task.
                     * @return MinSize Minimum number of instances set by the scheduled task.
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置Minimum number of instances set by the scheduled task.
                     * @param MinSize Minimum number of instances set by the scheduled task.
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Creation time of the scheduled task. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @return CreatedTime Creation time of the scheduled task. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the scheduled task. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     * @param CreatedTime Creation time of the scheduled task. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * Scheduled task ID.
                     */
                    std::string m_scheduledActionId;
                    bool m_scheduledActionIdHasBeenSet;

                    /**
                     * Scheduled task name.
                     */
                    std::string m_scheduledActionName;
                    bool m_scheduledActionNameHasBeenSet;

                    /**
                     * ID of the auto scaling group where the scheduled task is located.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * Start time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Repeating mode of the scheduled task.
                     */
                    std::string m_recurrence;
                    bool m_recurrenceHasBeenSet;

                    /**
                     * End time of the scheduled task. The value is in `Beijing time` (UTC+8) in the format of `YYYY-MM-DDThh:mm:ss+08:00` according to the `ISO8601` standard.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Maximum number of instances set by the scheduled task.
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Desired number of instances set by the scheduled task.
                     */
                    uint64_t m_desiredCapacity;
                    bool m_desiredCapacityHasBeenSet;

                    /**
                     * Minimum number of instances set by the scheduled task.
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Creation time of the scheduled task. The value is in `UTC time` in the format of `YYYY-MM-DDThh:mm:ssZ` according to the `ISO8601` standard.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCHEDULEDACTION_H_
