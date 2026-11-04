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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERINSTANCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerInstance
                */
                class AppTriggerInstance : public AbstractModel
                {
                public:
                    AppTriggerInstance();
                    ~AppTriggerInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Application id</p>
                     * @return AppId <p>Application id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application id</p>
                     * @param _appId <p>Application id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Session id</p>
                     * @return ConversationId <p>Session id</p>
                     * 
                     */
                    std::string GetConversationId() const;

                    /**
                     * 设置<p>Session id</p>
                     * @param _conversationId <p>Session id</p>
                     * 
                     */
                    void SetConversationId(const std::string& _conversationId);

                    /**
                     * 判断参数 ConversationId 是否已赋值
                     * @return ConversationId 是否已赋值
                     * 
                     */
                    bool ConversationIdHasBeenSet() const;

                    /**
                     * 获取<p>Trigger creation time</p>
                     * @return CreatedAt <p>Trigger creation time</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Trigger creation time</p>
                     * @param _createdAt <p>Trigger creation time</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return FinishedAt <p>End time.</p>
                     * 
                     */
                    std::string GetFinishedAt() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _finishedAt <p>End time.</p>
                     * 
                     */
                    void SetFinishedAt(const std::string& _finishedAt);

                    /**
                     * 判断参数 FinishedAt 是否已赋值
                     * @return FinishedAt 是否已赋值
                     * 
                     */
                    bool FinishedAtHasBeenSet() const;

                    /**
                     * 获取<p>Trigger running instance id</p>
                     * @return InstanceId <p>Trigger running instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Trigger running instance id</p>
                     * @param _instanceId <p>Trigger running instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Request ID</p>
                     * @return RequestId <p>Request ID</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>Request ID</p>
                     * @param _requestId <p>Request ID</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>Result code</p>
                     * @return ResultCode <p>Result code</p>
                     * 
                     */
                    std::string GetResultCode() const;

                    /**
                     * 设置<p>Result code</p>
                     * @param _resultCode <p>Result code</p>
                     * 
                     */
                    void SetResultCode(const std::string& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>Result Summary</p>
                     * @return ResultSummary <p>Result Summary</p>
                     * 
                     */
                    std::string GetResultSummary() const;

                    /**
                     * 设置<p>Result Summary</p>
                     * @param _resultSummary <p>Result Summary</p>
                     * 
                     */
                    void SetResultSummary(const std::string& _resultSummary);

                    /**
                     * 判断参数 ResultSummary 是否已赋值
                     * @return ResultSummary 是否已赋值
                     * 
                     */
                    bool ResultSummaryHasBeenSet() const;

                    /**
                     * 获取<p>Single dialogue id</p>
                     * @return RunId <p>Single dialogue id</p>
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置<p>Single dialogue id</p>
                     * @param _runId <p>Single dialogue id</p>
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * @return Scope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * @param _scope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_APP_TRIGGER</td><td>1</td><td>Originates from an application trigger</td></tr></tbody></table>
                     * @return Source <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_APP_TRIGGER</td><td>1</td><td>Originates from an application trigger</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_APP_TRIGGER</td><td>1</td><td>Originates from an application trigger</td></tr></tbody></table>
                     * @param _source <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_APP_TRIGGER</td><td>1</td><td>Originates from an application trigger</td></tr></tbody></table>
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Trigger start execution time</p>
                     * @return StartedAt <p>Trigger start execution time</p>
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置<p>Trigger start execution time</p>
                     * @param _startedAt <p>Trigger start execution time</p>
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failure final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled by task pause/deletion/modification</td> </tr> </tbody> </table>
                     * @return Status <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failure final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled by task pause/deletion/modification</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failure final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled by task pause/deletion/modification</td> </tr> </tbody> </table>
                     * @param _status <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failure final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled by task pause/deletion/modification</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>TraceId, used for logging</p>
                     * @return TraceId <p>TraceId, used for logging</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>TraceId, used for logging</p>
                     * @param _traceId <p>TraceId, used for logging</p>
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>Trigger id</p>
                     * @return TriggerId <p>Trigger id</p>
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>Trigger id</p>
                     * @param _triggerId <p>Trigger id</p>
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取<p>Visitor ID</p>
                     * @return UserId <p>Visitor ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Visitor ID</p>
                     * @param _userId <p>Visitor ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>Workflow running ID</p>
                     * @return WorkflowRunId <p>Workflow running ID</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow running ID</p>
                     * @param _workflowRunId <p>Workflow running ID</p>
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
                     * <p>Application id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Session id</p>
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * <p>Trigger creation time</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    std::string m_finishedAt;
                    bool m_finishedAtHasBeenSet;

                    /**
                     * <p>Trigger running instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Request ID</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>Result code</p>
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * <p>Result Summary</p>
                     */
                    std::string m_resultSummary;
                    bool m_resultSummaryHasBeenSet;

                    /**
                     * <p>Single dialogue id</p>
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_INSTANCE_SOURCE_APP_TRIGGER</td><td>1</td><td>Originates from an application trigger</td></tr></tbody></table>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Trigger start execution time</p>
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failure final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled by task pause/deletion/modification</td> </tr> </tbody> </table>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>TraceId, used for logging</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>Trigger id</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>Visitor ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Workflow running ID</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERINSTANCE_H_
