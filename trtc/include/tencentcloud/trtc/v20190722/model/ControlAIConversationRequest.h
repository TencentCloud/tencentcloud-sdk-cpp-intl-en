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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/ServerPushText.h>
#include <tencentcloud/trtc/v20190722/model/InvokeLLM.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ControlAIConversation request structure.
                */
                class ControlAIConversationRequest : public AbstractModel
                {
                public:
                    ControlAIConversationRequest();
                    ~ControlAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task unique identifier.
                     * @return TaskId Task unique identifier.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task unique identifier.
                     * @param _taskId Task unique identifier.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Control command. currently supports the following commands: - ServerPushText: server sends text to the AI robot, and the AI robot will broadcast the text. - InvokeLLM: server sends text to the large model to trigger dialogue.
                     * @return Command Control command. currently supports the following commands: - ServerPushText: server sends text to the AI robot, and the AI robot will broadcast the text. - InvokeLLM: server sends text to the large model to trigger dialogue.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Control command. currently supports the following commands: - ServerPushText: server sends text to the AI robot, and the AI robot will broadcast the text. - InvokeLLM: server sends text to the large model to trigger dialogue.
                     * @param _command Control command. currently supports the following commands: - ServerPushText: server sends text to the AI robot, and the AI robot will broadcast the text. - InvokeLLM: server sends text to the large model to trigger dialogue.
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Server-Sent broadcast text Command. required when Command is ServerPushText.
                     * @return ServerPushText Server-Sent broadcast text Command. required when Command is ServerPushText.
                     * 
                     */
                    ServerPushText GetServerPushText() const;

                    /**
                     * 设置Server-Sent broadcast text Command. required when Command is ServerPushText.
                     * @param _serverPushText Server-Sent broadcast text Command. required when Command is ServerPushText.
                     * 
                     */
                    void SetServerPushText(const ServerPushText& _serverPushText);

                    /**
                     * 判断参数 ServerPushText 是否已赋值
                     * @return ServerPushText 是否已赋值
                     * 
                     */
                    bool ServerPushTextHasBeenSet() const;

                    /**
                     * 获取The server sends a Command to proactively request the large model. when Command is InvokeLLM, it sends the content request to the large model and adds X-Invoke-LLM="1" to the header.
                     * @return InvokeLLM The server sends a Command to proactively request the large model. when Command is InvokeLLM, it sends the content request to the large model and adds X-Invoke-LLM="1" to the header.
                     * 
                     */
                    InvokeLLM GetInvokeLLM() const;

                    /**
                     * 设置The server sends a Command to proactively request the large model. when Command is InvokeLLM, it sends the content request to the large model and adds X-Invoke-LLM="1" to the header.
                     * @param _invokeLLM The server sends a Command to proactively request the large model. when Command is InvokeLLM, it sends the content request to the large model and adds X-Invoke-LLM="1" to the header.
                     * 
                     */
                    void SetInvokeLLM(const InvokeLLM& _invokeLLM);

                    /**
                     * 判断参数 InvokeLLM 是否已赋值
                     * @return InvokeLLM 是否已赋值
                     * 
                     */
                    bool InvokeLLMHasBeenSet() const;

                private:

                    /**
                     * Task unique identifier.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Control command. currently supports the following commands: - ServerPushText: server sends text to the AI robot, and the AI robot will broadcast the text. - InvokeLLM: server sends text to the large model to trigger dialogue.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Server-Sent broadcast text Command. required when Command is ServerPushText.
                     */
                    ServerPushText m_serverPushText;
                    bool m_serverPushTextHasBeenSet;

                    /**
                     * The server sends a Command to proactively request the large model. when Command is InvokeLLM, it sends the content request to the large model and adds X-Invoke-LLM="1" to the header.
                     */
                    InvokeLLM m_invokeLLM;
                    bool m_invokeLLMHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_
