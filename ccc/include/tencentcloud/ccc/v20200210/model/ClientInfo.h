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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Terminal information of the logged-in agent.
                */
                class ClientInfo : public AbstractModel
                {
                public:
                    ClientInfo();
                    ~ClientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Endpoint type for login. "Web" means Web workbench. "WeChatMiniProgram" refers to wechat mini program.
                     * @return ClientType Endpoint type for login. "Web" means Web workbench. "WeChatMiniProgram" refers to wechat mini program.
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置Endpoint type for login. "Web" means Web workbench. "WeChatMiniProgram" refers to wechat mini program.
                     * @param _clientType Endpoint type for login. "Web" means Web workbench. "WeChatMiniProgram" refers to wechat mini program.
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取Whether the currently logged-in endpoint is in the foreground. if the endpoint is Web, the value is true. if the endpoint is WeChatMiniProgram, true indicates the wechat mini program is open, and false indicates it is in the background.
                     * @return IsConnected Whether the currently logged-in endpoint is in the foreground. if the endpoint is Web, the value is true. if the endpoint is WeChatMiniProgram, true indicates the wechat mini program is open, and false indicates it is in the background.
                     * 
                     */
                    bool GetIsConnected() const;

                    /**
                     * 设置Whether the currently logged-in endpoint is in the foreground. if the endpoint is Web, the value is true. if the endpoint is WeChatMiniProgram, true indicates the wechat mini program is open, and false indicates it is in the background.
                     * @param _isConnected Whether the currently logged-in endpoint is in the foreground. if the endpoint is Web, the value is true. if the endpoint is WeChatMiniProgram, true indicates the wechat mini program is open, and false indicates it is in the background.
                     * 
                     */
                    void SetIsConnected(const bool& _isConnected);

                    /**
                     * 判断参数 IsConnected 是否已赋值
                     * @return IsConnected 是否已赋值
                     * 
                     */
                    bool IsConnectedHasBeenSet() const;

                private:

                    /**
                     * Endpoint type for login. "Web" means Web workbench. "WeChatMiniProgram" refers to wechat mini program.
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * Whether the currently logged-in endpoint is in the foreground. if the endpoint is Web, the value is true. if the endpoint is WeChatMiniProgram, true indicates the wechat mini program is open, and false indicates it is in the background.
                     */
                    bool m_isConnected;
                    bool m_isConnectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CLIENTINFO_H_
