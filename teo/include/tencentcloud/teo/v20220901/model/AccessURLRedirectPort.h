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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_

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
                * Access URL redirected destination port configuration parameter.
                */
                class AccessURLRedirectPort : public AbstractModel
                {
                public:
                    AccessURLRedirectPort();
                    ~AccessURLRedirectPort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Target port configuration</p><p>Enumeration values:</p><ul><li>FollowProtocol: Use the default port of the target protocol. The port is not explicitly specified in the redirect address. The target protocol uses its default port: 80 for HTTP and 443 for HTTPS.</li><li>FollowRequest: Follow the target port of the client request. If the request address explicitly carries a port, continue to use that port. If not, the redirect address does not carry a port.</li><li>Custom: Use the designated custom port.</li></ul>
                     * @return Action <p>Target port configuration</p><p>Enumeration values:</p><ul><li>FollowProtocol: Use the default port of the target protocol. The port is not explicitly specified in the redirect address. The target protocol uses its default port: 80 for HTTP and 443 for HTTPS.</li><li>FollowRequest: Follow the target port of the client request. If the request address explicitly carries a port, continue to use that port. If not, the redirect address does not carry a port.</li><li>Custom: Use the designated custom port.</li></ul>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>Target port configuration</p><p>Enumeration values:</p><ul><li>FollowProtocol: Use the default port of the target protocol. The port is not explicitly specified in the redirect address. The target protocol uses its default port: 80 for HTTP and 443 for HTTPS.</li><li>FollowRequest: Follow the target port of the client request. If the request address explicitly carries a port, continue to use that port. If not, the redirect address does not carry a port.</li><li>Custom: Use the designated custom port.</li></ul>
                     * @param _action <p>Target port configuration</p><p>Enumeration values:</p><ul><li>FollowProtocol: Use the default port of the target protocol. The port is not explicitly specified in the redirect address. The target protocol uses its default port: 80 for HTTP and 443 for HTTPS.</li><li>FollowRequest: Follow the target port of the client request. If the request address explicitly carries a port, continue to use that port. If not, the redirect address does not carry a port.</li><li>Custom: Use the designated custom port.</li></ul>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>Custom destination port.</p><p>Value range: [1, 65535]</p><p>Required when Action is Custom. It is ineffective when Action is FollowProtocol or FollowRequest.</p>
                     * @return Value <p>Custom destination port.</p><p>Value range: [1, 65535]</p><p>Required when Action is Custom. It is ineffective when Action is FollowProtocol or FollowRequest.</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>Custom destination port.</p><p>Value range: [1, 65535]</p><p>Required when Action is Custom. It is ineffective when Action is FollowProtocol or FollowRequest.</p>
                     * @param _value <p>Custom destination port.</p><p>Value range: [1, 65535]</p><p>Required when Action is Custom. It is ineffective when Action is FollowProtocol or FollowRequest.</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>Target port configuration</p><p>Enumeration values:</p><ul><li>FollowProtocol: Use the default port of the target protocol. The port is not explicitly specified in the redirect address. The target protocol uses its default port: 80 for HTTP and 443 for HTTPS.</li><li>FollowRequest: Follow the target port of the client request. If the request address explicitly carries a port, continue to use that port. If not, the redirect address does not carry a port.</li><li>Custom: Use the designated custom port.</li></ul>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Custom destination port.</p><p>Value range: [1, 65535]</p><p>Required when Action is Custom. It is ineffective when Action is FollowProtocol or FollowRequest.</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCESSURLREDIRECTPORT_H_
