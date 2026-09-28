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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RELATEDLISTENER_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RELATEDLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Listener information associated
                */
                class RelatedListener : public AbstractModel
                {
                public:
                    RelatedListener();
                    ~RelatedListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @param _listenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
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
                     * 获取Listener port.
                     * @return ListenerPort Listener port.
                     * 
                     */
                    int64_t GetListenerPort() const;

                    /**
                     * 设置Listener port.
                     * @param _listenerPort Listener port.
                     * 
                     */
                    void SetListenerPort(const int64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取Listener protocol.
                     * @return ListenerProtocol Listener protocol.
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 设置Listener protocol.
                     * @param _listenerProtocol Listener protocol.
                     * 
                     */
                    void SetListenerProtocol(const std::string& _listenerProtocol);

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                private:

                    /**
                     * Listener ID, format: lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener port.
                     */
                    int64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * Listener protocol.
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * CLB instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RELATEDLISTENER_H_
