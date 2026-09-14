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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateForwardingPolicy request structure.
                */
                class CreateForwardingPolicyRequest : public AbstractModel
                {
                public:
                    CreateForwardingPolicyRequest();
                    ~CreateForwardingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Listener ID.</p>
                     * @return ListenerId <p>Listener ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener ID.</p>
                     * @param _listenerId <p>Listener ID.</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Domain name.</p><p>Parameter format: format, must meet the regular expression: ^(<a href="?:[a-z0-9-]{0,61}[a-z0-9]">a-z0-9</a>?.)+[a-z]{2,}$</p><p>Input limit: length range is 1-80.</p>
                     * @return Host <p>Domain name.</p><p>Parameter format: format, must meet the regular expression: ^(<a href="?:[a-z0-9-]{0,61}[a-z0-9]">a-z0-9</a>?.)+[a-z]{2,}$</p><p>Input limit: length range is 1-80.</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Domain name.</p><p>Parameter format: format, must meet the regular expression: ^(<a href="?:[a-z0-9-]{0,61}[a-z0-9]">a-z0-9</a>?.)+[a-z]{2,}$</p><p>Input limit: length range is 1-80.</p>
                     * @param _host <p>Domain name.</p><p>Parameter format: format, must meet the regular expression: ^(<a href="?:[a-z0-9-]{0,61}[a-z0-9]">a-z0-9</a>?.)+[a-z]{2,}$</p><p>Input limit: length range is 1-80.</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Listener ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Domain name.</p><p>Parameter format: format, must meet the regular expression: ^(<a href="?:[a-z0-9-]{0,61}[a-z0-9]">a-z0-9</a>?.)+[a-z]{2,}$</p><p>Input limit: length range is 1-80.</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGPOLICYREQUEST_H_
