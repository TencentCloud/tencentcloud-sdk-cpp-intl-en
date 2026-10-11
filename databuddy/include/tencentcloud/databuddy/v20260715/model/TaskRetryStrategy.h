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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Task retry policy
                */
                class TaskRetryStrategy : public AbstractModel
                {
                public:
                    TaskRetryStrategy();
                    ~TaskRetryStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum retry count. Default value: 3.
                     * @return MaxRetryTimes Maximum retry count. Default value: 3.
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置Maximum retry count. Default value: 3.
                     * @param _maxRetryTimes Maximum retry count. Default value: 3.
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取Waiting time between retries. Default value: 5
                     * @return RetryBetweenWaitTime Waiting time between retries. Default value: 5
                     * 
                     */
                    int64_t GetRetryBetweenWaitTime() const;

                    /**
                     * 设置Waiting time between retries. Default value: 5
                     * @param _retryBetweenWaitTime Waiting time between retries. Default value: 5
                     * 
                     */
                    void SetRetryBetweenWaitTime(const int64_t& _retryBetweenWaitTime);

                    /**
                     * 判断参数 RetryBetweenWaitTime 是否已赋值
                     * @return RetryBetweenWaitTime 是否已赋值
                     * 
                     */
                    bool RetryBetweenWaitTimeHasBeenSet() const;

                    /**
                     * 获取Time unit to wait between retries
ms: MILLISECOND second: SECOND minute (default): MINUTE hour: HOUR
                     * @return RetryBetweenWaitTimeUnit Time unit to wait between retries
ms: MILLISECOND second: SECOND minute (default): MINUTE hour: HOUR
                     * 
                     */
                    std::string GetRetryBetweenWaitTimeUnit() const;

                    /**
                     * 设置Time unit to wait between retries
ms: MILLISECOND second: SECOND minute (default): MINUTE hour: HOUR
                     * @param _retryBetweenWaitTimeUnit Time unit to wait between retries
ms: MILLISECOND second: SECOND minute (default): MINUTE hour: HOUR
                     * 
                     */
                    void SetRetryBetweenWaitTimeUnit(const std::string& _retryBetweenWaitTimeUnit);

                    /**
                     * 判断参数 RetryBetweenWaitTimeUnit 是否已赋值
                     * @return RetryBetweenWaitTimeUnit 是否已赋值
                     * 
                     */
                    bool RetryBetweenWaitTimeUnitHasBeenSet() const;

                    /**
                     * 获取Retry switch when task running fails. true by default.
                     * @return TaskRunFailureRetrySwitch Retry switch when task running fails. true by default.
                     * 
                     */
                    bool GetTaskRunFailureRetrySwitch() const;

                    /**
                     * 设置Retry switch when task running fails. true by default.
                     * @param _taskRunFailureRetrySwitch Retry switch when task running fails. true by default.
                     * 
                     */
                    void SetTaskRunFailureRetrySwitch(const bool& _taskRunFailureRetrySwitch);

                    /**
                     * 判断参数 TaskRunFailureRetrySwitch 是否已赋值
                     * @return TaskRunFailureRetrySwitch 是否已赋值
                     * 
                     */
                    bool TaskRunFailureRetrySwitchHasBeenSet() const;

                    /**
                     * 获取Retry switch for task timeout, false by default
                     * @return TaskRunTimeoutRetrySwitch Retry switch for task timeout, false by default
                     * 
                     */
                    bool GetTaskRunTimeoutRetrySwitch() const;

                    /**
                     * 设置Retry switch for task timeout, false by default
                     * @param _taskRunTimeoutRetrySwitch Retry switch for task timeout, false by default
                     * 
                     */
                    void SetTaskRunTimeoutRetrySwitch(const bool& _taskRunTimeoutRetrySwitch);

                    /**
                     * 判断参数 TaskRunTimeoutRetrySwitch 是否已赋值
                     * @return TaskRunTimeoutRetrySwitch 是否已赋值
                     * 
                     */
                    bool TaskRunTimeoutRetrySwitchHasBeenSet() const;

                private:

                    /**
                     * Maximum retry count. Default value: 3.
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * Waiting time between retries. Default value: 5
                     */
                    int64_t m_retryBetweenWaitTime;
                    bool m_retryBetweenWaitTimeHasBeenSet;

                    /**
                     * Time unit to wait between retries
ms: MILLISECOND second: SECOND minute (default): MINUTE hour: HOUR
                     */
                    std::string m_retryBetweenWaitTimeUnit;
                    bool m_retryBetweenWaitTimeUnitHasBeenSet;

                    /**
                     * Retry switch when task running fails. true by default.
                     */
                    bool m_taskRunFailureRetrySwitch;
                    bool m_taskRunFailureRetrySwitchHasBeenSet;

                    /**
                     * Retry switch for task timeout, false by default
                     */
                    bool m_taskRunTimeoutRetrySwitch;
                    bool m_taskRunTimeoutRetrySwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRETRYSTRATEGY_H_
