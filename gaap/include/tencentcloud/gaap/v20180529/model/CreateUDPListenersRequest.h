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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_

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
                * CreateUDPListeners request structure.
                */
                class CreateUDPListenersRequest : public AbstractModel
                {
                public:
                    CreateUDPListenersRequest();
                    ~CreateUDPListenersRequest() = default;
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
                     * 获取List of listener ports
                     * @return Ports List of listener ports
                     */
                    std::vector<uint64_t> GetPorts() const;

                    /**
                     * 设置List of listener ports
                     * @param Ports List of listener ports
                     */
                    void SetPorts(const std::vector<uint64_t>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     * @return Scheduler Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     * @param Scheduler Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取Origin server type of listeners, which supports IP or DOMAIN type.
                     * @return RealServerType Origin server type of listeners, which supports IP or DOMAIN type.
                     */
                    std::string GetRealServerType() const;

                    /**
                     * 设置Origin server type of listeners, which supports IP or DOMAIN type.
                     * @param RealServerType Origin server type of listeners, which supports IP or DOMAIN type.
                     */
                    void SetRealServerType(const std::string& _realServerType);

                    /**
                     * 判断参数 RealServerType 是否已赋值
                     * @return RealServerType 是否已赋值
                     */
                    bool RealServerTypeHasBeenSet() const;

                    /**
                     * 获取Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return ProxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param ProxyId Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @return GroupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     * @param GroupId Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * @return RealServerPorts List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     */
                    std::vector<uint64_t> GetRealServerPorts() const;

                    /**
                     * 设置List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     * @param RealServerPorts List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     */
                    void SetRealServerPorts(const std::vector<uint64_t>& _realServerPorts);

                    /**
                     * 判断参数 RealServerPorts 是否已赋值
                     * @return RealServerPorts 是否已赋值
                     */
                    bool RealServerPortsHasBeenSet() const;

                private:

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * List of listener ports
                     */
                    std::vector<uint64_t> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * Origin server scheduling policy of listeners, which supports round robin (rr), weighted round robin (wrr), and least connections (lc).
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * Origin server type of listeners, which supports IP or DOMAIN type.
                     */
                    std::string m_realServerType;
                    bool m_realServerTypeHasBeenSet;

                    /**
                     * Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * List of origin server ports, which only supports the listeners of version 1.0 and connection group.
                     */
                    std::vector<uint64_t> m_realServerPorts;
                    bool m_realServerPortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEUDPLISTENERSREQUEST_H_
