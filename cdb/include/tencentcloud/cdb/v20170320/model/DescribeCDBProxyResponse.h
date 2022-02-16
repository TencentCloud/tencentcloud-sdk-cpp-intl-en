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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BaseGroupInfo.h>
#include <tencentcloud/cdb/v20170320/model/Address.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeInfo.h>
#include <tencentcloud/cdb/v20170320/model/RWInfo.h>
#include <tencentcloud/cdb/v20170320/model/ConnectionPoolInfo.h>
#include <tencentcloud/cdb/v20170320/model/ProxyGroup.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCDBProxy response structure.
                */
                class DescribeCDBProxyResponse : public AbstractModel
                {
                public:
                    DescribeCDBProxyResponse();
                    ~DescribeCDBProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return BaseGroup Basic information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    BaseGroupInfo GetBaseGroup() const;

                    /**
                     * 判断参数 BaseGroup 是否已赋值
                     * @return BaseGroup 是否已赋值
                     */
                    bool BaseGroupHasBeenSet() const;

                    /**
                     * 获取Address information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Address Address information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    Address GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Node information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyNode Node information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    ProxyNodeInfo GetProxyNode() const;

                    /**
                     * 判断参数 ProxyNode 是否已赋值
                     * @return ProxyNode 是否已赋值
                     */
                    bool ProxyNodeHasBeenSet() const;

                    /**
                     * 获取Read/Write separation information
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return RWInstInfo Read/Write separation information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    RWInfo GetRWInstInfo() const;

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     */
                    bool RWInstInfoHasBeenSet() const;

                    /**
                     * 获取Connection pool information
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ConnectionPoolInfo Connection pool information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    ConnectionPoolInfo GetConnectionPoolInfo() const;

                    /**
                     * 判断参数 ConnectionPoolInfo 是否已赋值
                     * @return ConnectionPoolInfo 是否已赋值
                     */
                    bool ConnectionPoolInfoHasBeenSet() const;

                    /**
                     * 获取Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Count Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Proxy information
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return ProxyGroup Proxy information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<ProxyGroup> GetProxyGroup() const;

                    /**
                     * 判断参数 ProxyGroup 是否已赋值
                     * @return ProxyGroup 是否已赋值
                     */
                    bool ProxyGroupHasBeenSet() const;

                private:

                    /**
                     * Basic information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    BaseGroupInfo m_baseGroup;
                    bool m_baseGroupHasBeenSet;

                    /**
                     * Address information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Node information of the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    ProxyNodeInfo m_proxyNode;
                    bool m_proxyNodeHasBeenSet;

                    /**
                     * Read/Write separation information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    RWInfo m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                    /**
                     * Connection pool information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    ConnectionPoolInfo m_connectionPoolInfo;
                    bool m_connectionPoolInfoHasBeenSet;

                    /**
                     * Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Proxy information
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<ProxyGroup> m_proxyGroup;
                    bool m_proxyGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECDBPROXYRESPONSE_H_
