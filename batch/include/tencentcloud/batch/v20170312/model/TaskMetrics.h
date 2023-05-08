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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_TASKMETRICS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_TASKMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Task statistical metrics
                */
                class TaskMetrics : public AbstractModel
                {
                public:
                    TaskMetrics();
                    ~TaskMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of submitted tasks
                     * @return SubmittedCount Number of submitted tasks
                     */
                    int64_t GetSubmittedCount() const;

                    /**
                     * 设置Number of submitted tasks
                     * @param SubmittedCount Number of submitted tasks
                     */
                    void SetSubmittedCount(const int64_t& _submittedCount);

                    /**
                     * 判断参数 SubmittedCount 是否已赋值
                     * @return SubmittedCount 是否已赋值
                     */
                    bool SubmittedCountHasBeenSet() const;

                    /**
                     * 获取Number of pending tasks
                     * @return PendingCount Number of pending tasks
                     */
                    int64_t GetPendingCount() const;

                    /**
                     * 设置Number of pending tasks
                     * @param PendingCount Number of pending tasks
                     */
                    void SetPendingCount(const int64_t& _pendingCount);

                    /**
                     * 判断参数 PendingCount 是否已赋值
                     * @return PendingCount 是否已赋值
                     */
                    bool PendingCountHasBeenSet() const;

                    /**
                     * 获取Number of Runnable tasks
                     * @return RunnableCount Number of Runnable tasks
                     */
                    int64_t GetRunnableCount() const;

                    /**
                     * 设置Number of Runnable tasks
                     * @param RunnableCount Number of Runnable tasks
                     */
                    void SetRunnableCount(const int64_t& _runnableCount);

                    /**
                     * 判断参数 RunnableCount 是否已赋值
                     * @return RunnableCount 是否已赋值
                     */
                    bool RunnableCountHasBeenSet() const;

                    /**
                     * 获取Number of starting tasks
                     * @return StartingCount Number of starting tasks
                     */
                    int64_t GetStartingCount() const;

                    /**
                     * 设置Number of starting tasks
                     * @param StartingCount Number of starting tasks
                     */
                    void SetStartingCount(const int64_t& _startingCount);

                    /**
                     * 判断参数 StartingCount 是否已赋值
                     * @return StartingCount 是否已赋值
                     */
                    bool StartingCountHasBeenSet() const;

                    /**
                     * 获取Number of running tasks
                     * @return RunningCount Number of running tasks
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置Number of running tasks
                     * @param RunningCount Number of running tasks
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取Number of successful tasks
                     * @return SucceedCount Number of successful tasks
                     */
                    int64_t GetSucceedCount() const;

                    /**
                     * 设置Number of successful tasks
                     * @param SucceedCount Number of successful tasks
                     */
                    void SetSucceedCount(const int64_t& _succeedCount);

                    /**
                     * 判断参数 SucceedCount 是否已赋值
                     * @return SucceedCount 是否已赋值
                     */
                    bool SucceedCountHasBeenSet() const;

                    /**
                     * 获取Number of failed and interrupted tasks
                     * @return FailedInterruptedCount Number of failed and interrupted tasks
                     */
                    int64_t GetFailedInterruptedCount() const;

                    /**
                     * 设置Number of failed and interrupted tasks
                     * @param FailedInterruptedCount Number of failed and interrupted tasks
                     */
                    void SetFailedInterruptedCount(const int64_t& _failedInterruptedCount);

                    /**
                     * 判断参数 FailedInterruptedCount 是否已赋值
                     * @return FailedInterruptedCount 是否已赋值
                     */
                    bool FailedInterruptedCountHasBeenSet() const;

                    /**
                     * 获取Failed count
                     * @return FailedCount Failed count
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置Failed count
                     * @param FailedCount Failed count
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     */
                    bool FailedCountHasBeenSet() const;

                private:

                    /**
                     * Number of submitted tasks
                     */
                    int64_t m_submittedCount;
                    bool m_submittedCountHasBeenSet;

                    /**
                     * Number of pending tasks
                     */
                    int64_t m_pendingCount;
                    bool m_pendingCountHasBeenSet;

                    /**
                     * Number of Runnable tasks
                     */
                    int64_t m_runnableCount;
                    bool m_runnableCountHasBeenSet;

                    /**
                     * Number of starting tasks
                     */
                    int64_t m_startingCount;
                    bool m_startingCountHasBeenSet;

                    /**
                     * Number of running tasks
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * Number of successful tasks
                     */
                    int64_t m_succeedCount;
                    bool m_succeedCountHasBeenSet;

                    /**
                     * Number of failed and interrupted tasks
                     */
                    int64_t m_failedInterruptedCount;
                    bool m_failedInterruptedCountHasBeenSet;

                    /**
                     * Failed count
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_TASKMETRICS_H_
