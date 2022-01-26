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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_WEBSOCKET_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_WEBSOCKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * WebSocket configuration.
                */
                class WebSocket : public AbstractModel
                {
                public:
                    WebSocket();
                    ~WebSocket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取WebSocket configuration switch, which can be `on` or `off`.
                     * @return Switch WebSocket configuration switch, which can be `on` or `off`.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置WebSocket configuration switch, which can be `on` or `off`.
                     * @param Switch WebSocket configuration switch, which can be `on` or `off`.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Sets timeout period in seconds. Maximum value: 65
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Timeout Sets timeout period in seconds. Maximum value: 65
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Sets timeout period in seconds. Maximum value: 65
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Timeout Sets timeout period in seconds. Maximum value: 65
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * WebSocket configuration switch, which can be `on` or `off`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Sets timeout period in seconds. Maximum value: 65
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_WEBSOCKET_H_
