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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Scheduled scaling task.
                */
                class CronScaleJob : public AbstractModel
                {
                public:
                    CronScaleJob();
                    ~CronScaleJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron expression, which identifies the task execution time, and is accurate to minutes.
                     * @return Schedule Cron expression, which identifies the task execution time, and is accurate to minutes.
                     * 
                     */
                    std::string GetSchedule() const;

                    /**
                     * 设置Cron expression, which identifies the task execution time, and is accurate to minutes.
                     * @param _schedule Cron expression, which identifies the task execution time, and is accurate to minutes.
                     * 
                     */
                    void SetSchedule(const std::string& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取Scheduled task name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Scheduled task name.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Scheduled task name.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Scheduled task name.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of target instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetReplicas Number of target instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置Number of target instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetReplicas Number of target instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取Minimum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinReplicas Minimum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置Minimum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minReplicas Minimum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取Maximum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxReplicas Maximum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxReplicas Maximum target.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Exception periods, defined by Cron expressions, during which tasks are not executed. Up to 3 Cron expressions are supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExcludeDates Exception periods, defined by Cron expressions, during which tasks are not executed. Up to 3 Cron expressions are supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetExcludeDates() const;

                    /**
                     * 设置Exception periods, defined by Cron expressions, during which tasks are not executed. Up to 3 Cron expressions are supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _excludeDates Exception periods, defined by Cron expressions, during which tasks are not executed. Up to 3 Cron expressions are supported.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExcludeDates(const std::vector<std::string>& _excludeDates);

                    /**
                     * 判断参数 ExcludeDates 是否已赋值
                     * @return ExcludeDates 是否已赋值
                     * 
                     */
                    bool ExcludeDatesHasBeenSet() const;

                private:

                    /**
                     * Cron expression, which identifies the task execution time, and is accurate to minutes.
                     */
                    std::string m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * Scheduled task name.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of target instances.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * Minimum target.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * Maximum target.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Exception periods, defined by Cron expressions, during which tasks are not executed. Up to 3 Cron expressions are supported.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_excludeDates;
                    bool m_excludeDatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CRONSCALEJOB_H_
