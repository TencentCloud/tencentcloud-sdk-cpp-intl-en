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
                * Edge reasoning scheduled scaling action configuration for description of a specific scheduled scaling action.
                */
                class InferenceScheduledScalingAction : public AbstractModel
                {
                public:
                    InferenceScheduledScalingAction();
                    ~InferenceScheduledScalingAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron expression for description of scheduled scaling trigger time. Use 5-field standard cron format: minute hour date month week. No support for second and year fields.
                     * @return CronExpression Cron expression for description of scheduled scaling trigger time. Use 5-field standard cron format: minute hour date month week. No support for second and year fields.
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置Cron expression for description of scheduled scaling trigger time. Use 5-field standard cron format: minute hour date month week. No support for second and year fields.
                     * @param _cronExpression Cron expression for description of scheduled scaling trigger time. Use 5-field standard cron format: minute hour date month week. No support for second and year fields.
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
                     * 获取After hitting the scheduled scaling action, the minimum number of instances to which the inference service can be adjusted. If multiple scheduled scaling actions hit at the same time within the identical evaluation window, use the maximum MinInstanceCount.
                     * @return MinInstanceCount After hitting the scheduled scaling action, the minimum number of instances to which the inference service can be adjusted. If multiple scheduled scaling actions hit at the same time within the identical evaluation window, use the maximum MinInstanceCount.
                     * 
                     */
                    int64_t GetMinInstanceCount() const;

                    /**
                     * 设置After hitting the scheduled scaling action, the minimum number of instances to which the inference service can be adjusted. If multiple scheduled scaling actions hit at the same time within the identical evaluation window, use the maximum MinInstanceCount.
                     * @param _minInstanceCount After hitting the scheduled scaling action, the minimum number of instances to which the inference service can be adjusted. If multiple scheduled scaling actions hit at the same time within the identical evaluation window, use the maximum MinInstanceCount.
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
                     * Cron expression for description of scheduled scaling trigger time. Use 5-field standard cron format: minute hour date month week. No support for second and year fields.
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * After hitting the scheduled scaling action, the minimum number of instances to which the inference service can be adjusted. If multiple scheduled scaling actions hit at the same time within the identical evaluation window, use the maximum MinInstanceCount.
                     */
                    int64_t m_minInstanceCount;
                    bool m_minInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGACTION_H_
