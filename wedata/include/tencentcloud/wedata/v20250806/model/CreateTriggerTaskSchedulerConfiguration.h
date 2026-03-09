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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKSCHEDULERCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKSCHEDULERCONFIGURATION_H_

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
                * Create task scheduling configuration info.
                */
                class CreateTriggerTaskSchedulerConfiguration : public AbstractModel
                {
                public:
                    CreateTriggerTaskSchedulerConfiguration();
                    ~CreateTriggerTaskSchedulerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task array of upstream dependency.
                     * @return UpstreamDependencyConfigList Task array of upstream dependency.
                     * 
                     */
                    std::vector<DependencyTriggerTaskBrief> GetUpstreamDependencyConfigList() const;

                    /**
                     * 设置Task array of upstream dependency.
                     * @param _upstreamDependencyConfigList Task array of upstream dependency.
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
                     * 获取Task scheduling priority. execution priority: 4 (high), 5 (medium), 6 (low). default: 6.
                     * @return RunPriorityType Task scheduling priority. execution priority: 4 (high), 5 (medium), 6 (low). default: 6.
                     * 
                     */
                    int64_t GetRunPriorityType() const;

                    /**
                     * 设置Task scheduling priority. execution priority: 4 (high), 5 (medium), 6 (low). default: 6.
                     * @param _runPriorityType Task scheduling priority. execution priority: 4 (high), 5 (medium), 6 (low). default: 6.
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
                     * @return RetryWaitMinute Retry policy retry wait time, in minutes: default: 5.
                     * 
                     */
                    int64_t GetRetryWaitMinute() const;

                    /**
                     * 设置Retry policy retry wait time, in minutes: default: 5.
                     * @param _retryWaitMinute Retry policy retry wait time, in minutes: default: 5.
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
                     * @return MaxRetryNumber Retry policy maximum attempts. default: 4.
                     * 
                     */
                    int64_t GetMaxRetryNumber() const;

                    /**
                     * 设置Retry policy maximum attempts. default: 4.
                     * @param _maxRetryNumber Retry policy maximum attempts. default: 4.
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
                     * @return ExecutionTTLMinute Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
                     * 
                     */
                    int64_t GetExecutionTTLMinute() const;

                    /**
                     * 设置Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
                     * @param _executionTTLMinute Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
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
                     * @return WaitExecutionTotalTTLMinute Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
                     * 
                     */
                    int64_t GetWaitExecutionTotalTTLMinute() const;

                    /**
                     * 设置Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
                     * @param _waitExecutionTotalTTLMinute Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
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
                     * 获取Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running, but allows rerun or replenishment after failed running. NONE does not allow rerun or replenishment after successful or failed running.
                     * @return AllowRedoType Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running, but allows rerun or replenishment after failed running. NONE does not allow rerun or replenishment after successful or failed running.
                     * 
                     */
                    std::string GetAllowRedoType() const;

                    /**
                     * 设置Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running, but allows rerun or replenishment after failed running. NONE does not allow rerun or replenishment after successful or failed running.
                     * @param _allowRedoType Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running, but allows rerun or replenishment after failed running. NONE does not allow rerun or replenishment after successful or failed running.
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
                     * @return ParamTaskOutList Output parameter array.
                     * 
                     */
                    std::vector<OutTaskParameter> GetParamTaskOutList() const;

                    /**
                     * 设置Output parameter array.
                     * @param _paramTaskOutList Output parameter array.
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
                     * @return ParamTaskInList Input parameter array.
                     * 
                     */
                    std::vector<InTaskParameter> GetParamTaskInList() const;

                    /**
                     * 设置Input parameter array.
                     * @param _paramTaskInList Input parameter array.
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
                     * @return TaskOutputRegistryList Output registration.
                     * 
                     */
                    std::vector<TaskDataRegistry> GetTaskOutputRegistryList() const;

                    /**
                     * 设置Output registration.
                     * @param _taskOutputRegistryList Output registration.
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
                     * Task array of upstream dependency.
                     */
                    std::vector<DependencyTriggerTaskBrief> m_upstreamDependencyConfigList;
                    bool m_upstreamDependencyConfigListHasBeenSet;

                    /**
                     * Task scheduling priority. execution priority: 4 (high), 5 (medium), 6 (low). default: 6.
                     */
                    int64_t m_runPriorityType;
                    bool m_runPriorityTypeHasBeenSet;

                    /**
                     * Retry policy retry wait time, in minutes: default: 5.
                     */
                    int64_t m_retryWaitMinute;
                    bool m_retryWaitMinuteHasBeenSet;

                    /**
                     * Retry policy maximum attempts. default: 4.
                     */
                    int64_t m_maxRetryNumber;
                    bool m_maxRetryNumberHasBeenSet;

                    /**
                     * Timeout handling strategy runtime timeout (unit: minutes) defaults to -1.
                     */
                    int64_t m_executionTTLMinute;
                    bool m_executionTTLMinuteHasBeenSet;

                    /**
                     * Timeout handling strategy wait duration timeout (unit: minutes) defaults to -1.
                     */
                    int64_t m_waitExecutionTotalTTLMinute;
                    bool m_waitExecutionTotalTTLMinuteHasBeenSet;

                    /**
                     * Rerun & replenishment configuration, defaults to ALL. ALL allows rerun or replenishment after successful or failed running. FAILURE does not allow rerun or replenishment after successful running, but allows rerun or replenishment after failed running. NONE does not allow rerun or replenishment after successful or failed running.
                     */
                    std::string m_allowRedoType;
                    bool m_allowRedoTypeHasBeenSet;

                    /**
                     * Output parameter array.
                     */
                    std::vector<OutTaskParameter> m_paramTaskOutList;
                    bool m_paramTaskOutListHasBeenSet;

                    /**
                     * Input parameter array.
                     */
                    std::vector<InTaskParameter> m_paramTaskInList;
                    bool m_paramTaskInListHasBeenSet;

                    /**
                     * Output registration.
                     */
                    std::vector<TaskDataRegistry> m_taskOutputRegistryList;
                    bool m_taskOutputRegistryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKSCHEDULERCONFIGURATION_H_
