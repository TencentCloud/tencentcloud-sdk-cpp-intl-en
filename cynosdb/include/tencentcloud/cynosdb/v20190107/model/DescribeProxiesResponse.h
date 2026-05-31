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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyNodeInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeProxies response structure.
                */
                class DescribeProxiesResponse : public AbstractModel
                {
                public:
                    DescribeProxiesResponse();
                    ~DescribeProxiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of Database Proxy Groups</p>
                     * @return TotalCount <p>Number of Database Proxy Groups</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Database Proxy Group list</p>
                     * @return ProxyGroupInfos <p>Database Proxy Group list</p>
                     * 
                     */
                    std::vector<ProxyGroupInfo> GetProxyGroupInfos() const;

                    /**
                     * 判断参数 ProxyGroupInfos 是否已赋值
                     * @return ProxyGroupInfos 是否已赋值
                     * 
                     */
                    bool ProxyGroupInfosHasBeenSet() const;

                    /**
                     * 获取<p>database proxy node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyNodeInfos <p>database proxy node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNodeInfos() const;

                    /**
                     * 判断参数 ProxyNodeInfos 是否已赋值
                     * @return ProxyNodeInfos 是否已赋值
                     * 
                     */
                    bool ProxyNodeInfosHasBeenSet() const;

                    /**
                     * 获取<p>sql automatic forwarding</p>
                     * @return ColumnStoreProxyForward <p>sql automatic forwarding</p>
                     * 
                     */
                    std::string GetColumnStoreProxyForward() const;

                    /**
                     * 判断参数 ColumnStoreProxyForward 是否已赋值
                     * @return ColumnStoreProxyForward 是否已赋值
                     * 
                     */
                    bool ColumnStoreProxyForwardHasBeenSet() const;

                private:

                    /**
                     * <p>Number of Database Proxy Groups</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Database Proxy Group list</p>
                     */
                    std::vector<ProxyGroupInfo> m_proxyGroupInfos;
                    bool m_proxyGroupInfosHasBeenSet;

                    /**
                     * <p>database proxy node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyNodeInfo> m_proxyNodeInfos;
                    bool m_proxyNodeInfosHasBeenSet;

                    /**
                     * <p>sql automatic forwarding</p>
                     */
                    std::string m_columnStoreProxyForward;
                    bool m_columnStoreProxyForwardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_
