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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIterationBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Running information of a single iteration of the built-in workflow
                */
                class InnerWorkflowTaskRunIteration : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRunIteration();
                    ~InnerWorkflowTaskRunIteration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Built-in flow running ID</p>
                     * @return WorkflowRunId <p>Built-in flow running ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Built-in flow running ID</p>
                     * @param _workflowRunId <p>Built-in flow running ID</p>
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

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
                     * 获取<p>Running state (for reference, see the workflow execution status enumeration)</p>
                     * @return RunState <p>Running state (for reference, see the workflow execution status enumeration)</p>
                     * 
                     */
                    std::string GetRunState() const;

                    /**
                     * 设置<p>Running state (for reference, see the workflow execution status enumeration)</p>
                     * @param _runState <p>Running state (for reference, see the workflow execution status enumeration)</p>
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
                     * @return WorkflowParams <p>Running parameter</p>
                     * 
                     */
                    std::string GetWorkflowParams() const;

                    /**
                     * 设置<p>Running parameter</p>
                     * @param _workflowParams <p>Running parameter</p>
                     * 
                     */
                    void SetWorkflowParams(const std::string& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

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

                    /**
                     * 获取<p>Task operation inside the built-in workflow</p>
                     * @return InnerTaskRun <p>Task operation inside the built-in workflow</p>
                     * 
                     */
                    InnerWorkflowTaskRunIterationBrief GetInnerTaskRun() const;

                    /**
                     * 设置<p>Task operation inside the built-in workflow</p>
                     * @param _innerTaskRun <p>Task operation inside the built-in workflow</p>
                     * 
                     */
                    void SetInnerTaskRun(const InnerWorkflowTaskRunIterationBrief& _innerTaskRun);

                    /**
                     * 判断参数 InnerTaskRun 是否已赋值
                     * @return InnerTaskRun 是否已赋值
                     * 
                     */
                    bool InnerTaskRunHasBeenSet() const;

                private:

                    /**
                     * <p>Built-in flow running ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

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
                     * <p>Running state (for reference, see the workflow execution status enumeration)</p>
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
                    std::string m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * <p>Error code</p>
                     */
                    std::string m_errorCodeString;
                    bool m_errorCodeStringHasBeenSet;

                    /**
                     * <p>Task operation inside the built-in workflow</p>
                     */
                    InnerWorkflowTaskRunIterationBrief m_innerTaskRun;
                    bool m_innerTaskRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUNITERATION_H_
