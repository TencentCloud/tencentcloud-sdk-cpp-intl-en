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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DependencyTriggerTaskBrief.h>
#include <tencentcloud/wedata/v20250806/model/OutTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/InTaskParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskDataRegistry.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task scheduling configuration information.
                */
                class TriggerTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    TriggerTaskSchedulerConfiguration();
                    ~TriggerTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Upstream dependency array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamDependencyConfigList Upstream dependency array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DependencyTriggerTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置Upstream dependency array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamDependencyConfigList Upstream dependency array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamDependencyConfigList(const std::vector<DependencyTriggerTaskBrief>& _upstreamDependencyConfigList);

                    /**
                     * 判断参数 UpstreamDependencyConfigList 是否已赋值
                     * @return UpstreamDependencyConfigList 是否已赋值
                     * 
                     */
                    bool UpstreamDependencyConfigListHasBeenSet() const;

                    /**
                     * 获取Task scheduling priority. execution priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunPriorityType Task scheduling priority. execution priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置Task scheduling priority. execution priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runPriorityType Task scheduling priority. execution priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunPriorityType(const int64_t& _runPriorityType);

                    /**
                     * 判断参数 RunPriorityType 是否已赋值
                     * @return RunPriorityType 是否已赋值
                     * 
                     */
                    bool RunPriorityTypeHasBeenSet() const;

                    /**
                     * 获取Retry policy retry wait time, in minutes: default: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetryWaitMinute Retry policy retry wait time, in minutes: default: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置Retry policy retry wait time, in minutes: default: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retryWaitMinute Retry policy retry wait time, in minutes: default: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetryWaitMinute(const int64_t& _retryWaitMinute);

                    /**
                     * 判断参数 RetryWaitMinute 是否已赋值
                     * @return RetryWaitMinute 是否已赋值
                     * 
                     */
                    bool RetryWaitMinuteHasBeenSet() const;

                    /**
                     * 获取Retry policy maximum attempts. default: 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxRetryNumber Retry policy maximum attempts. default: 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置Retry policy maximum attempts. default: 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxRetryNumber Retry policy maximum attempts. default: 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRetryNumber(const int64_t& _maxRetryNumber);

                    /**
                     * 判断参数 MaxRetryNumber 是否已赋值
                     * @return MaxRetryNumber 是否已赋值
                     * 
                     */
                    bool MaxRetryNumberHasBeenSet() const;

                    /**
                     * 获取Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutionTTLMinute Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executionTTLMinute Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutionTTLMinute(const int64_t& _executionTTLMinute);

                    /**
                     * 判断参数 ExecutionTTLMinute 是否已赋值
                     * @return ExecutionTTLMinute 是否已赋值
                     * 
                     */
                    bool ExecutionTTLMinuteHasBeenSet() const;

                    /**
                     * 获取Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WaitExecutionTotalTTLMinute Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _waitExecutionTotalTTLMinute Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWaitExecutionTotalTTLMinute(const int64_t& _waitExecutionTotalTTLMinute);

                    /**
                     * 判断参数 WaitExecutionTotalTTLMinute 是否已赋值
                     * @return WaitExecutionTotalTTLMinute 是否已赋值
                     * 
                     */
                    bool WaitExecutionTotalTTLMinuteHasBeenSet() const;

                    /**
                     * 获取Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running but allows after failed running. NONE does not allow rerun or replenishment after either successful or failed running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowRedoType Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running but allows after failed running. NONE does not allow rerun or replenishment after either successful or failed running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running but allows after failed running. NONE does not allow rerun or replenishment after either successful or failed running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowRedoType Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running but allows after failed running. NONE does not allow rerun or replenishment after either successful or failed running.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowRedoType(const std::string& _allowRedoType);

                    /**
                     * 判断参数 AllowRedoType 是否已赋值
                     * @return AllowRedoType 是否已赋值
                     * 
                     */
                    bool AllowRedoTypeHasBeenSet() const;

                    /**
                     * 获取Output parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamTaskOutList Output parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置Output parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramTaskOutList Output parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamTaskOutList(const std::vector<OutTaskParameter>& _paramTaskOutList);

                    /**
                     * 判断参数 ParamTaskOutList 是否已赋值
                     * @return ParamTaskOutList 是否已赋值
                     * 
                     */
                    bool ParamTaskOutListHasBeenSet() const;

                    /**
                     * 获取Input parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamTaskInList Input parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置Input parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramTaskInList Input parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParamTaskInList(const std::vector<InTaskParameter>& _paramTaskInList);

                    /**
                     * 判断参数 ParamTaskInList 是否已赋值
                     * @return ParamTaskInList 是否已赋值
                     * 
                     */
                    bool ParamTaskInListHasBeenSet() const;

                    /**
                     * 获取Output registration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskOutputRegistryList Output registration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置Output registration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskOutputRegistryList Output registration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskOutputRegistryList(const std::vector<TaskDataRegistry>& _taskOutputRegistryList);

                    /**
                     * 判断参数 TaskOutputRegistryList 是否已赋值
                     * @return TaskOutputRegistryList 是否已赋值
                     * 
                     */
                    bool TaskOutputRegistryListHasBeenSet() const;

                private:

                    /**
                     * Upstream dependency array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DependencyTriggerTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * Task scheduling priority. execution priority. valid values: 4 (high), 5 (medium), 6 (low). default: 6.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * Retry policy retry wait time, in minutes: default: 5.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * Retry policy maximum attempts. default: 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running but allows after failed running. NONE does not allow rerun or replenishment after either successful or failed running.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * Output parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * Input parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * Output registration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKSCHEDULERCONFIGURATION_H_
