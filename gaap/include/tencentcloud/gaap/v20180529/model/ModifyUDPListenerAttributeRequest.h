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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYUDPLISTENERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYUDPLISTENERATTRIBUTEREQUEST_H_

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
                * ModifyUDPListenerAttribute request structure.
                */
                class ModifyUDPListenerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyUDPListenerAttributeRequest();
                    ~ModifyUDPListenerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param ListenerId Listener ID
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

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
                     * 获取Origin server scheduling policy of listeners
                     * @return Scheduler Origin server scheduling policy of listeners
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置Origin server scheduling policy of listeners
                     * @param Scheduler Origin server scheduling policy of listeners
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     */
                    bool SchedulerHasBeenSet() const;

                private:

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Connection group ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Connection ID; Either `ProxyId` or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Listener name
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Origin server scheduling policy of listeners
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYUDPLISTENERATTRIBUTEREQUEST_H_
