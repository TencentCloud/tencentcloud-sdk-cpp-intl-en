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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * WebSocket configuration.
WebSocket is an ECDN feature. You can enable it in the ECDN domain name configuration.
                */
                class WebSocket : public AbstractModel
                {
                public:
                    WebSocket();
                    ~WebSocket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable WebSocket connection timeout. Values:
`on`: When it's enabled, the connection timeout can be configured.
`off`: When it's disabled, the connection timeout is set to 15 seconds by default.

                     * @return Switch Whether to enable WebSocket connection timeout. Values:
`on`: When it's enabled, the connection timeout can be configured.
`off`: When it's disabled, the connection timeout is set to 15 seconds by default.

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable WebSocket connection timeout. Values:
`on`: When it's enabled, the connection timeout can be configured.
`off`: When it's disabled, the connection timeout is set to 15 seconds by default.

                     * @param _switch Whether to enable WebSocket connection timeout. Values:
`on`: When it's enabled, the connection timeout can be configured.
`off`: When it's disabled, the connection timeout is set to 15 seconds by default.

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
                     * 获取Sets timeout period in seconds. Maximum value: 300
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Timeout Sets timeout period in seconds. Maximum value: 300
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Sets timeout period in seconds. Maximum value: 300
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timeout Sets timeout period in seconds. Maximum value: 300
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Whether to enable WebSocket connection timeout. Values:
`on`: When it's enabled, the connection timeout can be configured.
`off`: When it's disabled, the connection timeout is set to 15 seconds by default.

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Sets timeout period in seconds. Maximum value: 300
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_WEBSOCKET_H_
