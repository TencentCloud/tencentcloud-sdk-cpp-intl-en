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
                     * 获取Unique ID of the task
                     * @return TaskId Unique ID of the task
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique ID of the task
                     * @param _taskId Unique ID of the task
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
                     * 获取Control commands, currently supported commands are as follows:
- ServerPushText, the server sends text to the AI robot, and the AI robot will play the text
                     * @return Command Control commands, currently supported commands are as follows:
- ServerPushText, the server sends text to the AI robot, and the AI robot will play the text
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Control commands, currently supported commands are as follows:
- ServerPushText, the server sends text to the AI robot, and the AI robot will play the text
                     * @param _command Control commands, currently supported commands are as follows:
- ServerPushText, the server sends text to the AI robot, and the AI robot will play the text
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
                     * 获取The server sends a text broadcast command. This is required when Command is ServerPushText.
                     * @return ServerPushText The server sends a text broadcast command. This is required when Command is ServerPushText.
                     * 
                     */
                    ServerPushText GetServerPushText() const;

                    /**
                     * 设置The server sends a text broadcast command. This is required when Command is ServerPushText.
                     * @param _serverPushText The server sends a text broadcast command. This is required when Command is ServerPushText.
                     * 
                     */
                    void SetServerPushText(const ServerPushText& _serverPushText);

                    /**
                     * 判断参数 ServerPushText 是否已赋值
                     * @return ServerPushText 是否已赋值
                     * 
                     */
                    bool ServerPushTextHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the task
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Control commands, currently supported commands are as follows:
- ServerPushText, the server sends text to the AI robot, and the AI robot will play the text
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * The server sends a text broadcast command. This is required when Command is ServerPushText.
                     */
                    ServerPushText m_serverPushText;
                    bool m_serverPushTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CONTROLAICONVERSATIONREQUEST_H_
