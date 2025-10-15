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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYSTRATEGYTASK_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYSTRATEGYTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Dependency configuration policy.
                */
                class DependencyStrategyTask : public AbstractModel
                {
                public:
                    DependencyStrategyTask();
                    ~DependencyStrategyTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Wait upstream task instance policy: EXECUTING (execute); WAITING (wait).

                     * @return PollingNullStrategy Wait upstream task instance policy: EXECUTING (execute); WAITING (wait).

                     * 
                     */
                    std::string GetPollingNullStrategy() const;

                    /**
                     * 设置Wait upstream task instance policy: EXECUTING (execute); WAITING (wait).

                     * @param _pollingNullStrategy Wait upstream task instance policy: EXECUTING (execute); WAITING (wait).

                     * 
                     */
                    void SetPollingNullStrategy(const std::string& _pollingNullStrategy);

                    /**
                     * 判断参数 PollingNullStrategy 是否已赋值
                     * @return PollingNullStrategy 是否已赋值
                     * 
                     */
                    bool PollingNullStrategyHasBeenSet() const;

                    /**
                     * 获取This field is required only when PollingNullStrategy is set to EXECUTING.
Type: List

NOT_EXIST (default) - In cases where minute depends on minute / hour depends on hour, the parent instance does not fall within the scheduling time range of the downstream instance.

PARENT_EXPIRED - The parent instance failed.

PARENT_TIMEOUT - The parent instance timed out.

If any of the above conditions are met, the dependency check for that parent task instance is considered satisfied. In all other cases, the system must wait for the parent instance.
                     * @return TaskDependencyExecutingStrategies This field is required only when PollingNullStrategy is set to EXECUTING.
Type: List

NOT_EXIST (default) - In cases where minute depends on minute / hour depends on hour, the parent instance does not fall within the scheduling time range of the downstream instance.

PARENT_EXPIRED - The parent instance failed.

PARENT_TIMEOUT - The parent instance timed out.

If any of the above conditions are met, the dependency check for that parent task instance is considered satisfied. In all other cases, the system must wait for the parent instance.
                     * 
                     */
                    std::vector<std::string> GetTaskDependencyExecutingStrategies() const;

                    /**
                     * 设置This field is required only when PollingNullStrategy is set to EXECUTING.
Type: List

NOT_EXIST (default) - In cases where minute depends on minute / hour depends on hour, the parent instance does not fall within the scheduling time range of the downstream instance.

PARENT_EXPIRED - The parent instance failed.

PARENT_TIMEOUT - The parent instance timed out.

If any of the above conditions are met, the dependency check for that parent task instance is considered satisfied. In all other cases, the system must wait for the parent instance.
                     * @param _taskDependencyExecutingStrategies This field is required only when PollingNullStrategy is set to EXECUTING.
Type: List

NOT_EXIST (default) - In cases where minute depends on minute / hour depends on hour, the parent instance does not fall within the scheduling time range of the downstream instance.

PARENT_EXPIRED - The parent instance failed.

PARENT_TIMEOUT - The parent instance timed out.

If any of the above conditions are met, the dependency check for that parent task instance is considered satisfied. In all other cases, the system must wait for the parent instance.
                     * 
                     */
                    void SetTaskDependencyExecutingStrategies(const std::vector<std::string>& _taskDependencyExecutingStrategies);

                    /**
                     * 判断参数 TaskDependencyExecutingStrategies 是否已赋值
                     * @return TaskDependencyExecutingStrategies 是否已赋值
                     * 
                     */
                    bool TaskDependencyExecutingStrategiesHasBeenSet() const;

                    /**
                     * 获取This field is required only when TaskDependencyExecutingStrategies includes PARENT_TIMEOUT.
Specifies the timeout duration (in minutes) for the downstream task's dependency on the parent instance execution.
                     * @return TaskDependencyExecutingTimeoutValue This field is required only when TaskDependencyExecutingStrategies includes PARENT_TIMEOUT.
Specifies the timeout duration (in minutes) for the downstream task's dependency on the parent instance execution.
                     * 
                     */
                    int64_t GetTaskDependencyExecutingTimeoutValue() const;

                    /**
                     * 设置This field is required only when TaskDependencyExecutingStrategies includes PARENT_TIMEOUT.
Specifies the timeout duration (in minutes) for the downstream task's dependency on the parent instance execution.
                     * @param _taskDependencyExecutingTimeoutValue This field is required only when TaskDependencyExecutingStrategies includes PARENT_TIMEOUT.
Specifies the timeout duration (in minutes) for the downstream task's dependency on the parent instance execution.
                     * 
                     */
                    void SetTaskDependencyExecutingTimeoutValue(const int64_t& _taskDependencyExecutingTimeoutValue);

                    /**
                     * 判断参数 TaskDependencyExecutingTimeoutValue 是否已赋值
                     * @return TaskDependencyExecutingTimeoutValue 是否已赋值
                     * 
                     */
                    bool TaskDependencyExecutingTimeoutValueHasBeenSet() const;

                private:

                    /**
                     * Wait upstream task instance policy: EXECUTING (execute); WAITING (wait).

                     */
                    std::string m_pollingNullStrategy;
                    bool m_pollingNullStrategyHasBeenSet;

                    /**
                     * This field is required only when PollingNullStrategy is set to EXECUTING.
Type: List

NOT_EXIST (default) - In cases where minute depends on minute / hour depends on hour, the parent instance does not fall within the scheduling time range of the downstream instance.

PARENT_EXPIRED - The parent instance failed.

PARENT_TIMEOUT - The parent instance timed out.

If any of the above conditions are met, the dependency check for that parent task instance is considered satisfied. In all other cases, the system must wait for the parent instance.
                     */
                    std::vector<std::string> m_taskDependencyExecutingStrategies;
                    bool m_taskDependencyExecutingStrategiesHasBeenSet;

                    /**
                     * This field is required only when TaskDependencyExecutingStrategies includes PARENT_TIMEOUT.
Specifies the timeout duration (in minutes) for the downstream task's dependency on the parent instance execution.
                     */
                    int64_t m_taskDependencyExecutingTimeoutValue;
                    bool m_taskDependencyExecutingTimeoutValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DEPENDENCYSTRATEGYTASK_H_
