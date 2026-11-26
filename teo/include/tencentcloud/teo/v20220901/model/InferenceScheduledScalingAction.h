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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Scheduled scaling action configuration for edge reasoning, for description of a specific scheduled scaling action.
                */
                class InferenceScheduledScalingAction : public AbstractModel
                {
                public:
                    InferenceScheduledScalingAction();
                    ~InferenceScheduledScalingAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron expression for description of the trigger time of a scheduled scaling action. It uses the standard 5-field cron format: minute hour date month week. The second and year fields are not supported.
                     * @return CronExpression Cron expression for description of the trigger time of a scheduled scaling action. It uses the standard 5-field cron format: minute hour date month week. The second and year fields are not supported.
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置Cron expression for description of the trigger time of a scheduled scaling action. It uses the standard 5-field cron format: minute hour date month week. The second and year fields are not supported.
                     * @param _cronExpression Cron expression for description of the trigger time of a scheduled scaling action. It uses the standard 5-field cron format: minute hour date month week. The second and year fields are not supported.
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                    /**
                     * 获取Minimum number of instances required for the inference service after this scheduled scaling action is hit. If multiple scheduled scaling actions are hit at the same time within the same estimation window, use the maximum MinInstanceCount.
                     * @return MinInstanceCount Minimum number of instances required for the inference service after this scheduled scaling action is hit. If multiple scheduled scaling actions are hit at the same time within the same estimation window, use the maximum MinInstanceCount.
                     * 
                     */
                    int64_t GetMinInstanceCount() const;

                    /**
                     * 设置Minimum number of instances required for the inference service after this scheduled scaling action is hit. If multiple scheduled scaling actions are hit at the same time within the same estimation window, use the maximum MinInstanceCount.
                     * @param _minInstanceCount Minimum number of instances required for the inference service after this scheduled scaling action is hit. If multiple scheduled scaling actions are hit at the same time within the same estimation window, use the maximum MinInstanceCount.
                     * 
                     */
                    void SetMinInstanceCount(const int64_t& _minInstanceCount);

                    /**
                     * 判断参数 MinInstanceCount 是否已赋值
                     * @return MinInstanceCount 是否已赋值
                     * 
                     */
                    bool MinInstanceCountHasBeenSet() const;

                private:

                    /**
                     * Cron expression for description of the trigger time of a scheduled scaling action. It uses the standard 5-field cron format: minute hour date month week. The second and year fields are not supported.
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * Minimum number of instances required for the inference service after this scheduled scaling action is hit. If multiple scheduled scaling actions are hit at the same time within the same estimation window, use the maximum MinInstanceCount.
                     */
                    int64_t m_minInstanceCount;
                    bool m_minInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_
