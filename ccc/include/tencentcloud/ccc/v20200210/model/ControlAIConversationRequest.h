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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CONTROLAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CONTROLAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ServerPushText.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
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
                     * 获取Specifies the session ID.
                     * @return SessionId Specifies the session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Specifies the session ID.
                     * @param _sessionId Specifies the session ID.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Control command. currently supports the following commands:.

-ServerPushText. specifies the text sent by the server to the AI robot. the AI robot will broadcast the text.
                     * @return Command Control command. currently supports the following commands:.

-ServerPushText. specifies the text sent by the server to the AI robot. the AI robot will broadcast the text.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Control command. currently supports the following commands:.

-ServerPushText. specifies the text sent by the server to the AI robot. the AI robot will broadcast the text.
                     * @param _command Control command. currently supports the following commands:.

-ServerPushText. specifies the text sent by the server to the AI robot. the AI robot will broadcast the text.
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
                     * 获取Specifies the server-sent broadcast text Command. required when Command is ServerPushText.
                     * @return ServerPushText Specifies the server-sent broadcast text Command. required when Command is ServerPushText.
                     * 
                     */
                    ServerPushText GetServerPushText() const;

                    /**
                     * 设置Specifies the server-sent broadcast text Command. required when Command is ServerPushText.
                     * @param _serverPushText Specifies the server-sent broadcast text Command. required when Command is ServerPushText.
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
                     * Specifies the session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Control command. currently supports the following commands:.

-ServerPushText. specifies the text sent by the server to the AI robot. the AI robot will broadcast the text.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Specifies the server-sent broadcast text Command. required when Command is ServerPushText.
                     */
                    ServerPushText m_serverPushText;
                    bool m_serverPushTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CONTROLAICONVERSATIONREQUEST_H_
