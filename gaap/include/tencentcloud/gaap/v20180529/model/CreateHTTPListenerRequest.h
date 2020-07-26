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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateHTTPListener request structure.
                */
                class CreateHTTPListenerRequest : public AbstractModel
                {
                public:
                    CreateHTTPListenerRequest();
                    ~CreateHTTPListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener name
                     * @return ListenerName Listener name
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
                     * @param ListenerName Listener name
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     * @return Port Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     * @param Port Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     * @return ProxyId Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     * @param ProxyId Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * @return GroupId Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     * @param GroupId Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener port, which is based on the listeners of same transport layer protocol (TCP or UDP). The port must be unique.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Connection ID, which cannot be set together with `GroupId` at the same time. A listener will be created for the corresponding connection.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID, which cannot be set together with `ProxyId` at the same time. A listener will be created for the corresponding connection group.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEHTTPLISTENERREQUEST_H_
