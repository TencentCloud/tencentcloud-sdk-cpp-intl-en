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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERRUNLOG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERRUNLOG_H_

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
                * AppTriggerRunLog
                */
                class AppTriggerRunLog : public AbstractModel
                {
                public:
                    AppTriggerRunLog();
                    ~AppTriggerRunLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Execution time</p>
                     * @return DurationMs <p>Execution time</p>
                     * 
                     */
                    std::string GetDurationMs() const;

                    /**
                     * 设置<p>Execution time</p>
                     * @param _durationMs <p>Execution time</p>
                     * 
                     */
                    void SetDurationMs(const std::string& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return EndTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _endTime <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_SCHEDULED</td> <td>1</td> <td>Scheduled trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_WEBHOOK</td> <td>2</td> <td>Webhook trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_MANUAL_RUN</td> <td>3</td> <td>Manual immediate execution</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_TEST_RUN</td> <td>4</td> <td>Test execution</td> </tr> </tbody> </table>
                     * @return FireType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_SCHEDULED</td> <td>1</td> <td>Scheduled trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_WEBHOOK</td> <td>2</td> <td>Webhook trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_MANUAL_RUN</td> <td>3</td> <td>Manual immediate execution</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_TEST_RUN</td> <td>4</td> <td>Test execution</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetFireType() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_SCHEDULED</td> <td>1</td> <td>Scheduled trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_WEBHOOK</td> <td>2</td> <td>Webhook trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_MANUAL_RUN</td> <td>3</td> <td>Manual immediate execution</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_TEST_RUN</td> <td>4</td> <td>Test execution</td> </tr> </tbody> </table>
                     * @param _fireType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_SCHEDULED</td> <td>1</td> <td>Scheduled trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_WEBHOOK</td> <td>2</td> <td>Webhook trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_MANUAL_RUN</td> <td>3</td> <td>Manual immediate execution</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_TEST_RUN</td> <td>4</td> <td>Test execution</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetFireType(const int64_t& _fireType);

                    /**
                     * 判断参数 FireType 是否已赋值
                     * @return FireType 是否已赋值
                     * 
                     */
                    bool FireTypeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger instance id</p>
                     * @return InstanceId <p>Trigger instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Trigger instance id</p>
                     * @param _instanceId <p>Trigger instance id</p>
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
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_NONE</td> <td>1</td> <td>Push notification not configured</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_WAITING</td> <td>2</td> <td>Pending</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_SUCCESS</td> <td>3</td> <td>Push successful</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_FAILED</td> <td>4</td> <td>Push failure</td> </tr> </tbody> </table>
                     * @return PushStatus <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_NONE</td> <td>1</td> <td>Push notification not configured</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_WAITING</td> <td>2</td> <td>Pending</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_SUCCESS</td> <td>3</td> <td>Push successful</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_FAILED</td> <td>4</td> <td>Push failure</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetPushStatus() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_NONE</td> <td>1</td> <td>Push notification not configured</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_WAITING</td> <td>2</td> <td>Pending</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_SUCCESS</td> <td>3</td> <td>Push successful</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_FAILED</td> <td>4</td> <td>Push failure</td> </tr> </tbody> </table>
                     * @param _pushStatus <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_NONE</td> <td>1</td> <td>Push notification not configured</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_WAITING</td> <td>2</td> <td>Pending</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_SUCCESS</td> <td>3</td> <td>Push successful</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_FAILED</td> <td>4</td> <td>Push failure</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetPushStatus(const int64_t& _pushStatus);

                    /**
                     * 判断参数 PushStatus 是否已赋值
                     * @return PushStatus 是否已赋值
                     * 
                     */
                    bool PushStatusHasBeenSet() const;

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
                     * 获取<p>Result Overview</p>
                     * @return ResultSummary <p>Result Overview</p>
                     * 
                     */
                    std::string GetResultSummary() const;

                    /**
                     * 设置<p>Result Overview</p>
                     * @param _resultSummary <p>Result Overview</p>
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
                     * 获取<p>Trigger time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * @return ScheduledFireTime <p>Trigger time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetScheduledFireTime() const;

                    /**
                     * 设置<p>Trigger time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * @param _scheduledFireTime <p>Trigger time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * 
                     */
                    void SetScheduledFireTime(const std::string& _scheduledFireTime);

                    /**
                     * 判断参数 ScheduledFireTime 是否已赋值
                     * @return ScheduledFireTime 是否已赋值
                     * 
                     */
                    bool ScheduledFireTimeHasBeenSet() const;

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
                     * 获取<p>Execution start time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * @return StartTime <p>Execution start time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Execution start time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * @param _startTime <p>Execution start time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failed final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled due to task pause/deletion/modification</td> </tr> </tbody> </table>
                     * @return Status <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failed final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled due to task pause/deletion/modification</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failed final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled due to task pause/deletion/modification</td> </tr> </tbody> </table>
                     * @param _status <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failed final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled due to task pause/deletion/modification</td> </tr> </tbody> </table>
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
                     * 获取<p>Whether it has been read</p>
                     * @return Unread <p>Whether it has been read</p>
                     * 
                     */
                    bool GetUnread() const;

                    /**
                     * 设置<p>Whether it has been read</p>
                     * @param _unread <p>Whether it has been read</p>
                     * 
                     */
                    void SetUnread(const bool& _unread);

                    /**
                     * 判断参数 Unread 是否已赋值
                     * @return Unread 是否已赋值
                     * 
                     */
                    bool UnreadHasBeenSet() const;

                    /**
                     * 获取<p>Visitor Id</p>
                     * @return UserId <p>Visitor Id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Visitor Id</p>
                     * @param _userId <p>Visitor Id</p>
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
                     * 获取<p>Workflow run id</p>
                     * @return WorkflowRunId <p>Workflow run id</p>
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置<p>Workflow run id</p>
                     * @param _workflowRunId <p>Workflow run id</p>
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
                     * <p>Session id</p>
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * <p>Execution time</p>
                     */
                    std::string m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>End time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_SCHEDULED</td> <td>1</td> <td>Scheduled trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_WEBHOOK</td> <td>2</td> <td>Webhook trigger</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_MANUAL_RUN</td> <td>3</td> <td>Manual immediate execution</td> </tr> <tr> <td>APP_TRIGGER_FIRE_TYPE_TEST_RUN</td> <td>4</td> <td>Test execution</td> </tr> </tbody> </table>
                     */
                    int64_t m_fireType;
                    bool m_fireTypeHasBeenSet;

                    /**
                     * <p>Trigger instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_NONE</td> <td>1</td> <td>Push notification not configured</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_WAITING</td> <td>2</td> <td>Pending</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_SUCCESS</td> <td>3</td> <td>Push successful</td> </tr> <tr> <td>TIMER_RUN_PUSH_STATUS_FAILED</td> <td>4</td> <td>Push failure</td> </tr> </tbody> </table>
                     */
                    int64_t m_pushStatus;
                    bool m_pushStatusHasBeenSet;

                    /**
                     * <p>Result code</p>
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * <p>Result Overview</p>
                     */
                    std::string m_resultSummary;
                    bool m_resultSummaryHasBeenSet;

                    /**
                     * <p>Single dialogue id</p>
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * <p>Trigger time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     */
                    std::string m_scheduledFireTime;
                    bool m_scheduledFireTimeHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Execution start time</p><p>Parameter format: YYYY:MM:DD hh:mm:ss</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>TIMER_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>TIMER_RUN_STATUS_PENDING</td> <td>1</td> <td>Waiting to execute</td> </tr> <tr> <td>TIMER_RUN_STATUS_RUNNING</td> <td>2</td> <td>Executing</td> </tr> <tr> <td>TIMER_RUN_STATUS_RETRY_WAIT</td> <td>3</td> <td>Wait for retry</td> </tr> <tr> <td>TIMER_RUN_STATUS_SUCCESS</td> <td>4</td> <td>Successful</td> </tr> <tr> <td>TIMER_RUN_STATUS_DEAD</td> <td>5</td> <td>Failed final state (retry exhausted / non-retriable)</td> </tr> <tr> <td>TIMER_RUN_STATUS_CANCELLED</td> <td>6</td> <td>Cancelled due to task pause/deletion/modification</td> </tr> </tbody> </table>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Trigger id</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * <p>Whether it has been read</p>
                     */
                    bool m_unread;
                    bool m_unreadHasBeenSet;

                    /**
                     * <p>Visitor Id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Workflow run id</p>
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERRUNLOG_H_
