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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_

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
                * Brief running information of tasks in an iteration of the built-in workflow
                */
                class InnerWorkflowTaskRunIterationBrief : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRunIterationBrief();
                    ~InnerWorkflowTaskRunIterationBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task running ID</p>
                     * @return WorkflowTaskRunId <p>Task running ID</p>
                     * 
                     */
                    std::string GetWorkflowTaskRunId() const;

                    /**
                     * 设置<p>Task running ID</p>
                     * @param _workflowTaskRunId <p>Task running ID</p>
                     * 
                     */
                    void SetWorkflowTaskRunId(const std::string& _workflowTaskRunId);

                    /**
                     * 判断参数 WorkflowTaskRunId 是否已赋值
                     * @return WorkflowTaskRunId 是否已赋值
                     * 
                     */
                    bool WorkflowTaskRunIdHasBeenSet() const;

                    /**
                     * 获取<p>Iteration serial number</p>
                     * @return IterationIndex <p>Iteration serial number</p>
                     * 
                     */
                    std::string GetIterationIndex() const;

                    /**
                     * 设置<p>Iteration serial number</p>
                     * @param _iterationIndex <p>Iteration serial number</p>
                     * 
                     */
                    void SetIterationIndex(const std::string& _iterationIndex);

                    /**
                     * 判断参数 IterationIndex 是否已赋值
                     * @return IterationIndex 是否已赋值
                     * 
                     */
                    bool IterationIndexHasBeenSet() const;

                    /**
                     * 获取<p>Start time in milliseconds.</p>
                     * @return RunStartTime <p>Start time in milliseconds.</p>
                     * 
                     */
                    std::string GetRunStartTime() const;

                    /**
                     * 设置<p>Start time in milliseconds.</p>
                     * @param _runStartTime <p>Start time in milliseconds.</p>
                     * 
                     */
                    void SetRunStartTime(const std::string& _runStartTime);

                    /**
                     * 判断参数 RunStartTime 是否已赋值
                     * @return RunStartTime 是否已赋值
                     * 
                     */
                    bool RunStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running end time, unit: timestamp in milliseconds</p>
                     * @return RunEndTime <p>Running end time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    std::string GetRunEndTime() const;

                    /**
                     * 设置<p>Running end time, unit: timestamp in milliseconds</p>
                     * @param _runEndTime <p>Running end time, unit: timestamp in milliseconds</p>
                     * 
                     */
                    void SetRunEndTime(const std::string& _runEndTime);

                    /**
                     * 判断参数 RunEndTime 是否已赋值
                     * @return RunEndTime 是否已赋值
                     * 
                     */
                    bool RunEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running state</p>
                     * @return RunState <p>Running state</p>
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>Running state</p>
                     * @param _runState <p>Running state</p>
                     * 
                     */
                    void SetRunState(const std::string& _runState);

                    /**
                     * 判断参数 RunState 是否已赋值
                     * @return RunState 是否已赋值
                     * 
                     */
                    bool RunStateHasBeenSet() const;

                    /**
                     * 获取<p>Running time, unit: seconds</p>
                     * @return RunCostTime <p>Running time, unit: seconds</p>
                     * 
                     */
                    std::string GetRunCostTime() const;

                    /**
                     * 设置<p>Running time, unit: seconds</p>
                     * @param _runCostTime <p>Running time, unit: seconds</p>
                     * 
                     */
                    void SetRunCostTime(const std::string& _runCostTime);

                    /**
                     * 判断参数 RunCostTime 是否已赋值
                     * @return RunCostTime 是否已赋值
                     * 
                     */
                    bool RunCostTimeHasBeenSet() const;

                    /**
                     * 获取<p>Running parameter</p>
                     * @return TaskParams <p>Running parameter</p>
                     * 
                     */
                    std::string GetTaskParams() const;

                    /**
                     * 设置<p>Running parameter</p>
                     * @param _taskParams <p>Running parameter</p>
                     * 
                     */
                    void SetTaskParams(const std::string& _taskParams);

                    /**
                     * 判断参数 TaskParams 是否已赋值
                     * @return TaskParams 是否已赋值
                     * 
                     */
                    bool TaskParamsHasBeenSet() const;

                    /**
                     * 获取<p>Error code</p>
                     * @return ErrorCodeString <p>Error code</p>
                     * 
                     */
                    std::string GetErrorCodeString() const;

                    /**
                     * 设置<p>Error code</p>
                     * @param _errorCodeString <p>Error code</p>
                     * 
                     */
                    void SetErrorCodeString(const std::string& _errorCodeString);

                    /**
                     * 判断参数 ErrorCodeString 是否已赋值
                     * @return ErrorCodeString 是否已赋值
                     * 
                     */
                    bool ErrorCodeStringHasBeenSet() const;

                private:

                    /**
                     * <p>Task running ID</p>
                     */
                    std::string m_workflowTaskRunId;
                    bool m_workflowTaskRunIdHasBeenSet;

                    /**
                     * <p>Iteration serial number</p>
                     */
                    std::string m_iterationIndex;
                    bool m_iterationIndexHasBeenSet;

                    /**
                     * <p>Start time in milliseconds.</p>
                     */
                    std::string m_runStartTime;
                    bool m_runStartTimeHasBeenSet;

                    /**
                     * <p>Running end time, unit: timestamp in milliseconds</p>
                     */
                    std::string m_runEndTime;
                    bool m_runEndTimeHasBeenSet;

                    /**
                     * <p>Running state</p>
                     */
                    std::string m_runState;
                    bool m_runStateHasBeenSet;

                    /**
                     * <p>Running time, unit: seconds</p>
                     */
                    std::string m_runCostTime;
                    bool m_runCostTimeHasBeenSet;

                    /**
                     * <p>Running parameter</p>
                     */
                    std::string m_taskParams;
                    bool m_taskParamsHasBeenSet;

                    /**
                     * <p>Error code</p>
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATIONBRIEF_H_
