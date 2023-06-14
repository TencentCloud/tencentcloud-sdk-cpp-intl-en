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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerFleetCapacity.h>
#include <tencentcloud/gse/v20191112/model/TimerConfiguration.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Configurations of a scheduled scaling policy
                */
                class TimerScalingPolicy : public AbstractModel
                {
                public:
                    TimerScalingPolicy();
                    ~TimerScalingPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of the policy. When it’s filled in, the policy will be updated.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerId Unique ID of the policy. When it’s filled in, the policy will be updated.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置Unique ID of the policy. When it’s filled in, the policy will be updated.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerId Unique ID of the policy. When it’s filled in, the policy will be updated.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerName Scheduled scaling policy name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimerName() const;

                    /**
                     * 设置Scheduled scaling policy name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerName Scheduled scaling policy name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerName(const std::string& _timerName);

                    /**
                     * 判断参数 TimerName 是否已赋值
                     * @return TimerName 是否已赋值
                     * 
                     */
                    bool TimerNameHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy status. `0`: Undefined, `1`: Not started, 2: Activated, `3`: Stopped, `4`: Expired
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerStatus Scheduled scaling policy status. `0`: Undefined, `1`: Not started, 2: Activated, `3`: Stopped, `4`: Expired
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimerStatus() const;

                    /**
                     * 设置Scheduled scaling policy status. `0`: Undefined, `1`: Not started, 2: Activated, `3`: Stopped, `4`: Expired
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerStatus Scheduled scaling policy status. `0`: Undefined, `1`: Not started, 2: Activated, `3`: Stopped, `4`: Expired
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerStatus(const int64_t& _timerStatus);

                    /**
                     * 判断参数 TimerStatus 是否已赋值
                     * @return TimerStatus 是否已赋值
                     * 
                     */
                    bool TimerStatusHasBeenSet() const;

                    /**
                     * 获取The capacity configurations of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerFleetCapacity The capacity configurations of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TimerFleetCapacity GetTimerFleetCapacity() const;

                    /**
                     * 设置The capacity configurations of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerFleetCapacity The capacity configurations of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerFleetCapacity(const TimerFleetCapacity& _timerFleetCapacity);

                    /**
                     * 判断参数 TimerFleetCapacity 是否已赋值
                     * @return TimerFleetCapacity 是否已赋值
                     * 
                     */
                    bool TimerFleetCapacityHasBeenSet() const;

                    /**
                     * 获取The recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerConfiguration The recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    TimerConfiguration GetTimerConfiguration() const;

                    /**
                     * 设置The recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timerConfiguration The recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimerConfiguration(const TimerConfiguration& _timerConfiguration);

                    /**
                     * 判断参数 TimerConfiguration 是否已赋值
                     * @return TimerConfiguration 是否已赋值
                     * 
                     */
                    bool TimerConfigurationHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the policy. When it’s filled in, the policy will be updated.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * Scheduled scaling policy name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timerName;
                    bool m_timerNameHasBeenSet;

                    /**
                     * Scheduled scaling policy status. `0`: Undefined, `1`: Not started, 2: Activated, `3`: Stopped, `4`: Expired
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_timerStatus;
                    bool m_timerStatusHasBeenSet;

                    /**
                     * The capacity configurations of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TimerFleetCapacity m_timerFleetCapacity;
                    bool m_timerFleetCapacityHasBeenSet;

                    /**
                     * The recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TimerConfiguration m_timerConfiguration;
                    bool m_timerConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERSCALINGPOLICY_H_
