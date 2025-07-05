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
                * WebSocket configuration
                */
                class WebSocketParameters : public AbstractModel
                {
                public:
                    WebSocketParameters();
                    ~WebSocketParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable websocket connection timeout. values:.
<Li>On: use timeout as the websocket timeout;</li>.
<Li>Off: the platform still supports websocket connections, using the system default timeout of 15 seconds.</li>.
                     * @return Switch Whether to enable websocket connection timeout. values:.
<Li>On: use timeout as the websocket timeout;</li>.
<Li>Off: the platform still supports websocket connections, using the system default timeout of 15 seconds.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable websocket connection timeout. values:.
<Li>On: use timeout as the websocket timeout;</li>.
<Li>Off: the platform still supports websocket connections, using the system default timeout of 15 seconds.</li>.
                     * @param _switch Whether to enable websocket connection timeout. values:.
<Li>On: use timeout as the websocket timeout;</li>.
<Li>Off: the platform still supports websocket connections, using the system default timeout of 15 seconds.</li>.
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
                     * 获取Timeout, unit: seconds. maximum timeout is 120 seconds.<br>note: this field is required when switch is on; otherwise, this field will not take effect.
                     * @return Timeout Timeout, unit: seconds. maximum timeout is 120 seconds.<br>note: this field is required when switch is on; otherwise, this field will not take effect.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout, unit: seconds. maximum timeout is 120 seconds.<br>note: this field is required when switch is on; otherwise, this field will not take effect.
                     * @param _timeout Timeout, unit: seconds. maximum timeout is 120 seconds.<br>note: this field is required when switch is on; otherwise, this field will not take effect.
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
                     * Whether to enable websocket connection timeout. values:.
<Li>On: use timeout as the websocket timeout;</li>.
<Li>Off: the platform still supports websocket connections, using the system default timeout of 15 seconds.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Timeout, unit: seconds. maximum timeout is 120 seconds.<br>note: this field is required when switch is on; otherwise, this field will not take effect.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBSOCKETPARAMETERS_H_
