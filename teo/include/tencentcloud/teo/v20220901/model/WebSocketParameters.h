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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WEBSOCKETPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WEBSOCKETPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * WebSocket configuration.
                */
                class WebSocketParameters : public AbstractModel
                {
                public:
                    WebSocketParameters();
                    ~WebSocketParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WebSocket timeout configuration switch. Valid values:
<li>on: Use Timeout as the WebSocket timeout period;</li>
<li>off: The platform still supports WebSocket connections, and the system default timeout period of 15 seconds is used.</li>
                     * @return Switch WebSocket timeout configuration switch. Valid values:
<li>on: Use Timeout as the WebSocket timeout period;</li>
<li>off: The platform still supports WebSocket connections, and the system default timeout period of 15 seconds is used.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置WebSocket timeout configuration switch. Valid values:
<li>on: Use Timeout as the WebSocket timeout period;</li>
<li>off: The platform still supports WebSocket connections, and the system default timeout period of 15 seconds is used.</li>
                     * @param _switch WebSocket timeout configuration switch. Valid values:
<li>on: Use Timeout as the WebSocket timeout period;</li>
<li>off: The platform still supports WebSocket connections, and the system default timeout period of 15 seconds is used.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Timeout period, in seconds. Maximum timeout time: 120 seconds.<br>Note: This field is required when Switch is on. Otherwise, it is ineffective.
                     * @return Timeout Timeout period, in seconds. Maximum timeout time: 120 seconds.<br>Note: This field is required when Switch is on. Otherwise, it is ineffective.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period, in seconds. Maximum timeout time: 120 seconds.<br>Note: This field is required when Switch is on. Otherwise, it is ineffective.
                     * @param _timeout Timeout period, in seconds. Maximum timeout time: 120 seconds.<br>Note: This field is required when Switch is on. Otherwise, it is ineffective.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * WebSocket timeout configuration switch. Valid values:
<li>on: Use Timeout as the WebSocket timeout period;</li>
<li>off: The platform still supports WebSocket connections, and the system default timeout period of 15 seconds is used.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Timeout period, in seconds. Maximum timeout time: 120 seconds.<br>Note: This field is required when Switch is on. Otherwise, it is ineffective.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBSOCKETPARAMETERS_H_
