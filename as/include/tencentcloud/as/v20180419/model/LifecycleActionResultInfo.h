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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Result information of the lifecycle hook action
                */
                class LifecycleActionResultInfo : public AbstractModel
                {
                public:
                    LifecycleActionResultInfo();
                    ~LifecycleActionResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the lifecycle hook
                     * @return LifecycleHookId ID of the lifecycle hook
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置ID of the lifecycle hook
                     * @param _lifecycleHookId ID of the lifecycle hook
                     * 
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     * 
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取ID of the instance
                     * @return InstanceId ID of the instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance
                     * @param _instanceId ID of the instance
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
                     * 获取Execution task ID. You can query the result by using the [DescribeInvocations](https://intl.cloud.tencent.com/document/api/1340/52679?from_cn_redirect=1) API of TAT. 
                     * @return InvocationId Execution task ID. You can query the result by using the [DescribeInvocations](https://intl.cloud.tencent.com/document/api/1340/52679?from_cn_redirect=1) API of TAT. 
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution task ID. You can query the result by using the [DescribeInvocations](https://intl.cloud.tencent.com/document/api/1340/52679?from_cn_redirect=1) API of TAT. 
                     * @param _invocationId Execution task ID. You can query the result by using the [DescribeInvocations](https://intl.cloud.tencent.com/document/api/1340/52679?from_cn_redirect=1) API of TAT. 
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Result of command invocation,
<li>`SUCCESSFUL`: Successful command invocation. It does mean that the task is successfully. You can query the task result with the `InvocationId.</li>
<li>`FAILED`: Failed to invoke the command</li>
<li>`NONE`</li>
                     * @return InvokeCommandResult Result of command invocation,
<li>`SUCCESSFUL`: Successful command invocation. It does mean that the task is successfully. You can query the task result with the `InvocationId.</li>
<li>`FAILED`: Failed to invoke the command</li>
<li>`NONE`</li>
                     * 
                     */
                    std::string GetInvokeCommandResult() const;

                    /**
                     * 设置Result of command invocation,
<li>`SUCCESSFUL`: Successful command invocation. It does mean that the task is successfully. You can query the task result with the `InvocationId.</li>
<li>`FAILED`: Failed to invoke the command</li>
<li>`NONE`</li>
                     * @param _invokeCommandResult Result of command invocation,
<li>`SUCCESSFUL`: Successful command invocation. It does mean that the task is successfully. You can query the task result with the `InvocationId.</li>
<li>`FAILED`: Failed to invoke the command</li>
<li>`NONE`</li>
                     * 
                     */
                    void SetInvokeCommandResult(const std::string& _invokeCommandResult);

                    /**
                     * 判断参数 InvokeCommandResult 是否已赋值
                     * @return InvokeCommandResult 是否已赋值
                     * 
                     */
                    bool InvokeCommandResultHasBeenSet() const;

                    /**
                     * 获取Notification result, which indicates whether it is successful to notify CMQ/TDMQ.<br>
<li>SUCCESSFUL: It is successful to notify CMQ/TDMQ.</li>
<li>FAILED: It is failed to notify CMQ/TDMQ.</li>
<li>NONE</li>
                     * @return NotificationResult Notification result, which indicates whether it is successful to notify CMQ/TDMQ.<br>
<li>SUCCESSFUL: It is successful to notify CMQ/TDMQ.</li>
<li>FAILED: It is failed to notify CMQ/TDMQ.</li>
<li>NONE</li>
                     * 
                     */
                    std::string GetNotificationResult() const;

                    /**
                     * 设置Notification result, which indicates whether it is successful to notify CMQ/TDMQ.<br>
<li>SUCCESSFUL: It is successful to notify CMQ/TDMQ.</li>
<li>FAILED: It is failed to notify CMQ/TDMQ.</li>
<li>NONE</li>
                     * @param _notificationResult Notification result, which indicates whether it is successful to notify CMQ/TDMQ.<br>
<li>SUCCESSFUL: It is successful to notify CMQ/TDMQ.</li>
<li>FAILED: It is failed to notify CMQ/TDMQ.</li>
<li>NONE</li>
                     * 
                     */
                    void SetNotificationResult(const std::string& _notificationResult);

                    /**
                     * 判断参数 NotificationResult 是否已赋值
                     * @return NotificationResult 是否已赋值
                     * 
                     */
                    bool NotificationResultHasBeenSet() const;

                    /**
                     * 获取Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * @return LifecycleActionResult Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * 
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * @param _lifecycleActionResult Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * 
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     * 
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取Reason of the result <br>
<li>`HEARTBEAT_TIMEOUT`: Heartbeat timed out. The setting of `DefaultResult` is used.</li>
<li>`NOTIFICATION_FAILURE`: Failed to send the notification. The setting of `DefaultResult` is used.</li>
<li>`CALL_INTERFACE`: Calls the `CompleteLifecycleAction` to set the result</li>
<li>ANOTHER_ACTION_ABANDON: It has been set to `ABANDON` by another operation.</li>
<li>COMMAND_CALL_FAILURE: Failed to call the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_FINISH: Command completed</li>
<li>COMMAND_CALL_FAILURE: Failed to execute the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_RESULT_CHECK_FAILURE: Failed to check the command result. The DefaultResult is applied.</li>
                     * @return ResultReason Reason of the result <br>
<li>`HEARTBEAT_TIMEOUT`: Heartbeat timed out. The setting of `DefaultResult` is used.</li>
<li>`NOTIFICATION_FAILURE`: Failed to send the notification. The setting of `DefaultResult` is used.</li>
<li>`CALL_INTERFACE`: Calls the `CompleteLifecycleAction` to set the result</li>
<li>ANOTHER_ACTION_ABANDON: It has been set to `ABANDON` by another operation.</li>
<li>COMMAND_CALL_FAILURE: Failed to call the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_FINISH: Command completed</li>
<li>COMMAND_CALL_FAILURE: Failed to execute the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_RESULT_CHECK_FAILURE: Failed to check the command result. The DefaultResult is applied.</li>
                     * 
                     */
                    std::string GetResultReason() const;

                    /**
                     * 设置Reason of the result <br>
<li>`HEARTBEAT_TIMEOUT`: Heartbeat timed out. The setting of `DefaultResult` is used.</li>
<li>`NOTIFICATION_FAILURE`: Failed to send the notification. The setting of `DefaultResult` is used.</li>
<li>`CALL_INTERFACE`: Calls the `CompleteLifecycleAction` to set the result</li>
<li>ANOTHER_ACTION_ABANDON: It has been set to `ABANDON` by another operation.</li>
<li>COMMAND_CALL_FAILURE: Failed to call the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_FINISH: Command completed</li>
<li>COMMAND_CALL_FAILURE: Failed to execute the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_RESULT_CHECK_FAILURE: Failed to check the command result. The DefaultResult is applied.</li>
                     * @param _resultReason Reason of the result <br>
<li>`HEARTBEAT_TIMEOUT`: Heartbeat timed out. The setting of `DefaultResult` is used.</li>
<li>`NOTIFICATION_FAILURE`: Failed to send the notification. The setting of `DefaultResult` is used.</li>
<li>`CALL_INTERFACE`: Calls the `CompleteLifecycleAction` to set the result</li>
<li>ANOTHER_ACTION_ABANDON: It has been set to `ABANDON` by another operation.</li>
<li>COMMAND_CALL_FAILURE: Failed to call the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_FINISH: Command completed</li>
<li>COMMAND_CALL_FAILURE: Failed to execute the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_RESULT_CHECK_FAILURE: Failed to check the command result. The DefaultResult is applied.</li>
                     * 
                     */
                    void SetResultReason(const std::string& _resultReason);

                    /**
                     * 判断参数 ResultReason 是否已赋值
                     * @return ResultReason 是否已赋值
                     * 
                     */
                    bool ResultReasonHasBeenSet() const;

                private:

                    /**
                     * ID of the lifecycle hook
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * ID of the instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Execution task ID. You can query the result by using the [DescribeInvocations](https://intl.cloud.tencent.com/document/api/1340/52679?from_cn_redirect=1) API of TAT. 
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Result of command invocation,
<li>`SUCCESSFUL`: Successful command invocation. It does mean that the task is successfully. You can query the task result with the `InvocationId.</li>
<li>`FAILED`: Failed to invoke the command</li>
<li>`NONE`</li>
                     */
                    std::string m_invokeCommandResult;
                    bool m_invokeCommandResultHasBeenSet;

                    /**
                     * Notification result, which indicates whether it is successful to notify CMQ/TDMQ.<br>
<li>SUCCESSFUL: It is successful to notify CMQ/TDMQ.</li>
<li>FAILED: It is failed to notify CMQ/TDMQ.</li>
<li>NONE</li>
                     */
                    std::string m_notificationResult;
                    bool m_notificationResultHasBeenSet;

                    /**
                     * Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * Reason of the result <br>
<li>`HEARTBEAT_TIMEOUT`: Heartbeat timed out. The setting of `DefaultResult` is used.</li>
<li>`NOTIFICATION_FAILURE`: Failed to send the notification. The setting of `DefaultResult` is used.</li>
<li>`CALL_INTERFACE`: Calls the `CompleteLifecycleAction` to set the result</li>
<li>ANOTHER_ACTION_ABANDON: It has been set to `ABANDON` by another operation.</li>
<li>COMMAND_CALL_FAILURE: Failed to call the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_FINISH: Command completed</li>
<li>COMMAND_CALL_FAILURE: Failed to execute the command. The DefaultResult is applied.</li>
<li>COMMAND_EXEC_RESULT_CHECK_FAILURE: Failed to check the command result. The DefaultResult is applied.</li>
                     */
                    std::string m_resultReason;
                    bool m_resultReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
