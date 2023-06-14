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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BaseGroupInfo.h>
#include <tencentcloud/cdb/v20170320/model/Address.h>
#include <tencentcloud/cdb/v20170320/model/ConnectionPoolInfo.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeInfo.h>
#include <tencentcloud/cdb/v20170320/model/RWInfos.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Database proxy group information
                */
                class ProxyGroups : public AbstractModel
                {
                public:
                    ProxyGroups();
                    ~ProxyGroups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Basic information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return BaseGroup Basic information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    BaseGroupInfo GetBaseGroup() const;

                    /**
                     * 设置Basic information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _baseGroup Basic information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetBaseGroup(const BaseGroupInfo& _baseGroup);

                    /**
                     * 判断参数 BaseGroup 是否已赋值
                     * @return BaseGroup 是否已赋值
                     * 
                     */
                    bool BaseGroupHasBeenSet() const;

                    /**
                     * 获取Address information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Address Address information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<Address> GetAddress() const;

                    /**
                     * 设置Address information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _address Address information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetAddress(const std::vector<Address>& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Connection pool information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ConnectionPoolInfo Connection pool information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    ConnectionPoolInfo GetConnectionPoolInfo() const;

                    /**
                     * 设置Connection pool information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _connectionPoolInfo Connection pool information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetConnectionPoolInfo(const ConnectionPoolInfo& _connectionPoolInfo);

                    /**
                     * 判断参数 ConnectionPoolInfo 是否已赋值
                     * @return ConnectionPoolInfo 是否已赋值
                     * 
                     */
                    bool ConnectionPoolInfoHasBeenSet() const;

                    /**
                     * 获取Node information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNode Node information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNode() const;

                    /**
                     * 设置Node information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _proxyNode Node information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetProxyNode(const std::vector<ProxyNodeInfo>& _proxyNode);

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     * 
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取Routing information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return RWInstInfo Routing information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    RWInfos GetRWInstInfo() const;

                    /**
                     * 设置Routing information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _rWInstInfo Routing information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetRWInstInfo(const RWInfos& _rWInstInfo);

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     * 
                     */
                    bool RWInstInfoHasBeenSet() const;

                private:

                    /**
                     * Basic information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    BaseGroupInfo m_baseGroup;
                    bool m_baseGroupHasBeenSet;

                    /**
                     * Address information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<Address> m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Connection pool information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    ConnectionPoolInfo m_connectionPoolInfo;
                    bool m_connectionPoolInfoHasBeenSet;

                    /**
                     * Node information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<ProxyNodeInfo> m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * Routing information of the proxy
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    RWInfos m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYGROUPS_H_
