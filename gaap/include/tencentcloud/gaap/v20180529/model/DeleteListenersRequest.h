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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_

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
                * DeleteListeners request structure.
                */
                class DeleteListenersRequest : public AbstractModel
                {
                public:
                    DeleteListenersRequest();
                    ~DeleteListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of listeners to be deleted
                     * @return ListenerIds ID list of listeners to be deleted
                     */
                    std::vector<std::string> GetListenerIds() const;

                    /**
                     * 设置ID list of listeners to be deleted
                     * @param ListenerIds ID list of listeners to be deleted
                     */
                    void SetListenerIds(const std::vector<std::string>& _listenerIds);

                    /**
                     * 判断参数 ListenerIds 是否已赋值
                     * @return ListenerIds 是否已赋值
                     */
                    bool ListenerIdsHasBeenSet() const;

                    /**
                     * 获取Whether to allow a forced deletion of listeners that have been bound to origin servers. 1: allowed; 0: not allow.
                     * @return Force Whether to allow a forced deletion of listeners that have been bound to origin servers. 1: allowed; 0: not allow.
                     */
                    uint64_t GetForce() const;

                    /**
                     * 设置Whether to allow a forced deletion of listeners that have been bound to origin servers. 1: allowed; 0: not allow.
                     * @param Force Whether to allow a forced deletion of listeners that have been bound to origin servers. 1: allowed; 0: not allow.
                     */
                    void SetForce(const uint64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取Connection group ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     * @return GroupId Connection group ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     * @param GroupId Connection group ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Connection ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     * @return ProxyId Connection ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     * @param ProxyId Connection ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * ID list of listeners to be deleted
                     */
                    std::vector<std::string> m_listenerIds;
                    bool m_listenerIdsHasBeenSet;

                    /**
                     * Whether to allow a forced deletion of listeners that have been bound to origin servers. 1: allowed; 0: not allow.
                     */
                    uint64_t m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * Connection group ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Connection ID; Either this parameter or `GroupId` must be set, but you cannot set both.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETELISTENERSREQUEST_H_
