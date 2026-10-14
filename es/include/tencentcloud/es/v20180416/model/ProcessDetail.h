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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Task progress details
                */
                class ProcessDetail : public AbstractModel
                {
                public:
                    ProcessDetail();
                    ~ProcessDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of completed</p>
                     * @return Completed <p>Number of completed</p>
                     * 
                     */
                    int64_t GetCompleted() const;

                    /**
                     * 设置<p>Number of completed</p>
                     * @param _completed <p>Number of completed</p>
                     * 
                     */
                    void SetCompleted(const int64_t& _completed);

                    /**
                     * 判断参数 Completed 是否已赋值
                     * @return Completed 是否已赋值
                     * 
                     */
                    bool CompletedHasBeenSet() const;

                    /**
                     * 获取<p>Remaining quantity</p>
                     * @return Remain <p>Remaining quantity</p>
                     * 
                     */
                    int64_t GetRemain() const;

                    /**
                     * 设置<p>Remaining quantity</p>
                     * @param _remain <p>Remaining quantity</p>
                     * 
                     */
                    void SetRemain(const int64_t& _remain);

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取<p>Total quantity.</p>
                     * @return Total <p>Total quantity.</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>Total quantity.</p>
                     * @param _total <p>Total quantity.</p>
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Task type:<br>60: Restart task<br>70: Shard migration task<br>80: Node configuration modification task</p>
                     * @return TaskType <p>Task type:<br>60: Restart task<br>70: Shard migration task<br>80: Node configuration modification task</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>Task type:<br>60: Restart task<br>70: Shard migration task<br>80: Node configuration modification task</p>
                     * @param _taskType <p>Task type:<br>60: Restart task<br>70: Shard migration task<br>80: Node configuration modification task</p>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Estimated remaining time</p><p>Unit: seconds</p>
                     * @return EstimatedTimeRemaining <p>Estimated remaining time</p><p>Unit: seconds</p>
                     * 
                     */
                    int64_t GetEstimatedTimeRemaining() const;

                    /**
                     * 设置<p>Estimated remaining time</p><p>Unit: seconds</p>
                     * @param _estimatedTimeRemaining <p>Estimated remaining time</p><p>Unit: seconds</p>
                     * 
                     */
                    void SetEstimatedTimeRemaining(const int64_t& _estimatedTimeRemaining);

                    /**
                     * 判断参数 EstimatedTimeRemaining 是否已赋值
                     * @return EstimatedTimeRemaining 是否已赋值
                     * 
                     */
                    bool EstimatedTimeRemainingHasBeenSet() const;

                private:

                    /**
                     * <p>Number of completed</p>
                     */
                    int64_t m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * <p>Remaining quantity</p>
                     */
                    int64_t m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * <p>Total quantity.</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Task type:<br>60: Restart task<br>70: Shard migration task<br>80: Node configuration modification task</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Estimated remaining time</p><p>Unit: seconds</p>
                     */
                    int64_t m_estimatedTimeRemaining;
                    bool m_estimatedTimeRemainingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_PROCESSDETAIL_H_
