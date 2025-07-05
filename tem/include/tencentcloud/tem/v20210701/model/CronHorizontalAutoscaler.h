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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/CronHorizontalAutoscalerSchedule.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Scheduled Scaling Policy
                */
                class CronHorizontalAutoscaler : public AbstractModel
                {
                public:
                    CronHorizontalAutoscaler();
                    ~CronHorizontalAutoscaler() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of a scheduled scaling policy
                     * @return Name Name of a scheduled scaling policy
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a scheduled scaling policy
                     * @param _name Name of a scheduled scaling policy
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Policy period
"* * *" indicates three ranges. The first is day, the second month, and the third week. The three parts are separated by spaces.
Examples:
* * * (every day)
* * 0-3 (every Sunday through Wednesday)
1,11,21 * * (1st, 11th, and 21st of every month)
                     * @return Period Policy period
"* * *" indicates three ranges. The first is day, the second month, and the third week. The three parts are separated by spaces.
Examples:
* * * (every day)
* * 0-3 (every Sunday through Wednesday)
1,11,21 * * (1st, 11th, and 21st of every month)
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Policy period
"* * *" indicates three ranges. The first is day, the second month, and the third week. The three parts are separated by spaces.
Examples:
* * * (every day)
* * 0-3 (every Sunday through Wednesday)
1,11,21 * * (1st, 11th, and 21st of every month)
                     * @param _period Policy period
"* * *" indicates three ranges. The first is day, the second month, and the third week. The three parts are separated by spaces.
Examples:
* * * (every day)
* * 0-3 (every Sunday through Wednesday)
1,11,21 * * (1st, 11th, and 21st of every month)
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Details of a scheduled scaling policy
                     * @return Schedules Details of a scheduled scaling policy
                     * 
                     */
                    std::vector<CronHorizontalAutoscalerSchedule> GetSchedules() const;

                    /**
                     * 设置Details of a scheduled scaling policy
                     * @param _schedules Details of a scheduled scaling policy
                     * 
                     */
                    void SetSchedules(const std::vector<CronHorizontalAutoscalerSchedule>& _schedules);

                    /**
                     * 判断参数 Schedules 是否已赋值
                     * @return Schedules 是否已赋值
                     * 
                     */
                    bool SchedulesHasBeenSet() const;

                    /**
                     * 获取Enabled or not
                     * @return Enabled Enabled or not
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Enabled or not
                     * @param _enabled Enabled or not
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Policy priority. The higher the value, the higher the priority. The minimum value is 0.
                     * @return Priority Policy priority. The higher the value, the higher the priority. The minimum value is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Policy priority. The higher the value, the higher the priority. The minimum value is 0.
                     * @param _priority Policy priority. The higher the value, the higher the priority. The minimum value is 0.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * Name of a scheduled scaling policy
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy period
"* * *" indicates three ranges. The first is day, the second month, and the third week. The three parts are separated by spaces.
Examples:
* * * (every day)
* * 0-3 (every Sunday through Wednesday)
1,11,21 * * (1st, 11th, and 21st of every month)
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Details of a scheduled scaling policy
                     */
                    std::vector<CronHorizontalAutoscalerSchedule> m_schedules;
                    bool m_schedulesHasBeenSet;

                    /**
                     * Enabled or not
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Policy priority. The higher the value, the higher the priority. The minimum value is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALER_H_
