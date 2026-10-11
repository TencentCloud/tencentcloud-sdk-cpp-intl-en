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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_

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
                * Outcome of a single operation. Shared by RunWorkflow / RerunWorkflowRun / KillWorkflowRun: RunWorkflow — WorkflowId / WorkflowName have values, WorkflowRunId is empty. RerunWorkflowRun — WorkflowId / WorkflowName / WorkflowRunId all have values. KillWorkflowRun — WorkflowId / WorkflowName / WorkflowRunId all have values.
                */
                class RunActionBrief : public AbstractModel
                {
                public:
                    RunActionBrief();
                    ~RunActionBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name.
                     * @return WorkflowName Workflow name.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
                     * @param _workflowName Workflow name.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Operation action ID, used to trace the specific executed action.
                     * @return RunActionId Operation action ID, used to trace the specific executed action.
                     * 
                     */
                    std::string GetRunActionId() const;

                    /**
                     * 设置Operation action ID, used to trace the specific executed action.
                     * @param _runActionId Operation action ID, used to trace the specific executed action.
                     * 
                     */
                    void SetRunActionId(const std::string& _runActionId);

                    /**
                     * 判断参数 RunActionId 是否已赋值
                     * @return RunActionId 是否已赋值
                     * 
                     */
                    bool RunActionIdHasBeenSet() const;

                    /**
                     * 获取Failure error message. When the operation fails, a specific error description is returned.
                     * @return ErrorMessage Failure error message. When the operation fails, a specific error description is returned.
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Failure error message. When the operation fails, a specific error description is returned.
                     * @param _errorMessage Failure error message. When the operation fails, a specific error description is returned.
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Operation status. `true` indicates success, and `false` indicates failure.
                     * @return OpStatus Operation status. `true` indicates success, and `false` indicates failure.
                     * 
                     */
                    bool GetOpStatus() const;

                    /**
                     * 设置Operation status. `true` indicates success, and `false` indicates failure.
                     * @param _opStatus Operation status. `true` indicates success, and `false` indicates failure.
                     * 
                     */
                    void SetOpStatus(const bool& _opStatus);

                    /**
                     * 判断参数 OpStatus 是否已赋值
                     * @return OpStatus 是否已赋值
                     * 
                     */
                    bool OpStatusHasBeenSet() const;

                    /**
                     * 获取Workflow running ID. In rerun/termination scenarios, the operated running ID is returned. It is empty in the run workflow scenario.
                     * @return WorkflowRunId Workflow running ID. In rerun/termination scenarios, the operated running ID is returned. It is empty in the run workflow scenario.
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置Workflow running ID. In rerun/termination scenarios, the operated running ID is returned. It is empty in the run workflow scenario.
                     * @param _workflowRunId Workflow running ID. In rerun/termination scenarios, the operated running ID is returned. It is empty in the run workflow scenario.
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                private:

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Operation action ID, used to trace the specific executed action.
                     */
                    std::string m_runActionId;
                    bool m_runActionIdHasBeenSet;

                    /**
                     * Failure error message. When the operation fails, a specific error description is returned.
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Operation status. `true` indicates success, and `false` indicates failure.
                     */
                    bool m_opStatus;
                    bool m_opStatusHasBeenSet;

                    /**
                     * Workflow running ID. In rerun/termination scenarios, the operated running ID is returned. It is empty in the run workflow scenario.
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_RUNACTIONBRIEF_H_
