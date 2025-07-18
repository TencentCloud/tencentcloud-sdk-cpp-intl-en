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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEUDPLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEUDPLISTENERSREQUEST_H_

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
                * DescribeUDPListeners request structure.
                */
                class DescribeUDPListenersRequest : public AbstractModel
                {
                public:
                    DescribeUDPListenersRequest();
                    ~DescribeUDPListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter condition that filters by connection ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * @return ProxyId Filter condition that filters by connection ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Filter condition that filters by connection ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * @param _proxyId Filter condition that filters by connection ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Filter condition. Exact query by listener IDs.
When ProxyId is specified, the listener will be checked whether it belongs to the connection.
When GroupId is specified, the listener will be checked whether it belongs to the connection group.
                     * @return ListenerId Filter condition. Exact query by listener IDs.
When ProxyId is specified, the listener will be checked whether it belongs to the connection.
When GroupId is specified, the listener will be checked whether it belongs to the connection group.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Filter condition. Exact query by listener IDs.
When ProxyId is specified, the listener will be checked whether it belongs to the connection.
When GroupId is specified, the listener will be checked whether it belongs to the connection group.
                     * @param _listenerId Filter condition. Exact query by listener IDs.
When ProxyId is specified, the listener will be checked whether it belongs to the connection.
When GroupId is specified, the listener will be checked whether it belongs to the connection group.
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
                     * 获取Filter condition. Exact query by listener names.
                     * @return ListenerName Filter condition. Exact query by listener names.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Filter condition. Exact query by listener names.
                     * @param _listenerName Filter condition. Exact query by listener names.
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Filter condition. Exact query by listener ports.
                     * @return Port Filter condition. Exact query by listener ports.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Filter condition. Exact query by listener ports.
                     * @param _port Filter condition. Exact query by listener ports.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Offset. The default value is 0.
                     * @return Offset Offset. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. The default value is 0.
                     * @param _offset Offset. The default value is 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Quantity limit. The default value is 20.
                     * @return Limit Quantity limit. The default value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity limit. The default value is 20.
                     * @param _limit Quantity limit. The default value is 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter condition that filters by connection group ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * @return GroupId Filter condition that filters by connection group ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Filter condition that filters by connection group ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * @param _groupId Filter condition that filters by connection group ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Filter condition. It supports fuzzy query by ports or listener names. This parameter cannot be used with `ListenerName` or `Port`.
                     * @return SearchValue Filter condition. It supports fuzzy query by ports or listener names. This parameter cannot be used with `ListenerName` or `Port`.
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Filter condition. It supports fuzzy query by ports or listener names. This parameter cannot be used with `ListenerName` or `Port`.
                     * @param _searchValue Filter condition. It supports fuzzy query by ports or listener names. This parameter cannot be used with `ListenerName` or `Port`.
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * Filter condition that filters by connection ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Filter condition. Exact query by listener IDs.
When ProxyId is specified, the listener will be checked whether it belongs to the connection.
When GroupId is specified, the listener will be checked whether it belongs to the connection group.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Filter condition. Exact query by listener names.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Filter condition. Exact query by listener ports.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Offset. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Quantity limit. The default value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter condition that filters by connection group ID. You must specify at least one filter condition (ProxyId/GroupId/ListenerId), but ProxyId and GroupId cannot be set at the same time.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Filter condition. It supports fuzzy query by ports or listener names. This parameter cannot be used with `ListenerName` or `Port`.
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEUDPLISTENERSREQUEST_H_
