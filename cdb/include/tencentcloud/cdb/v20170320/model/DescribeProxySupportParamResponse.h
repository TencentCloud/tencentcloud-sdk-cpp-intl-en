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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeProxySupportParam response structure.
                */
                class DescribeProxySupportParamResponse : public AbstractModel
                {
                public:
                    DescribeProxySupportParamResponse();
                    ~DescribeProxySupportParamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Proxy supports the maximum version
                     * @return ProxyVersion Proxy supports the maximum version
                     * 
                     */
                    std::string GetProxyVersion() const;

                    /**
                     * 判断参数 ProxyVersion 是否已赋值
                     * @return ProxyVersion 是否已赋值
                     * 
                     */
                    bool ProxyVersionHasBeenSet() const;

                    /**
                     * 获取Whether connection pool is supported
                     * @return SupportPool Whether connection pool is supported
                     * 
                     */
                    bool GetSupportPool() const;

                    /**
                     * 判断参数 SupportPool 是否已赋值
                     * @return SupportPool 是否已赋值
                     * 
                     */
                    bool SupportPoolHasBeenSet() const;

                    /**
                     * 获取Minimum value of the connection pool
                     * @return PoolMin Minimum value of the connection pool
                     * 
                     */
                    uint64_t GetPoolMin() const;

                    /**
                     * 判断参数 PoolMin 是否已赋值
                     * @return PoolMin 是否已赋值
                     * 
                     */
                    bool PoolMinHasBeenSet() const;

                    /**
                     * 获取Maximum value of connection pool
                     * @return PoolMax Maximum value of connection pool
                     * 
                     */
                    uint64_t GetPoolMax() const;

                    /**
                     * 判断参数 PoolMax 是否已赋值
                     * @return PoolMax 是否已赋值
                     * 
                     */
                    bool PoolMaxHasBeenSet() const;

                    /**
                     * 获取Whether transaction split is supported
                     * @return SupportTransSplit Whether transaction split is supported
                     * 
                     */
                    bool GetSupportTransSplit() const;

                    /**
                     * 判断参数 SupportTransSplit 是否已赋值
                     * @return SupportTransSplit 是否已赋值
                     * 
                     */
                    bool SupportTransSplitHasBeenSet() const;

                    /**
                     * 获取Minimum proxy version that supports connection pool
                     * @return SupportPoolMinVersion Minimum proxy version that supports connection pool
                     * 
                     */
                    std::string GetSupportPoolMinVersion() const;

                    /**
                     * 判断参数 SupportPoolMinVersion 是否已赋值
                     * @return SupportPoolMinVersion 是否已赋值
                     * 
                     */
                    bool SupportPoolMinVersionHasBeenSet() const;

                    /**
                     * 获取Minimum proxy version supporting transaction split
                     * @return SupportTransSplitMinVersion Minimum proxy version supporting transaction split
                     * 
                     */
                    std::string GetSupportTransSplitMinVersion() const;

                    /**
                     * 判断参数 SupportTransSplitMinVersion 是否已赋值
                     * @return SupportTransSplitMinVersion 是否已赋值
                     * 
                     */
                    bool SupportTransSplitMinVersionHasBeenSet() const;

                    /**
                     * 获取Whether setting as read-only is supported.
                     * @return SupportReadOnly Whether setting as read-only is supported.
                     * 
                     */
                    bool GetSupportReadOnly() const;

                    /**
                     * 判断参数 SupportReadOnly 是否已赋值
                     * @return SupportReadOnly 是否已赋值
                     * 
                     */
                    bool SupportReadOnlyHasBeenSet() const;

                    /**
                     * 获取Whether to automatically balance the load
                     * @return SupportAutoLoadBalance Whether to automatically balance the load
                     * 
                     */
                    bool GetSupportAutoLoadBalance() const;

                    /**
                     * 判断参数 SupportAutoLoadBalance 是否已赋值
                     * @return SupportAutoLoadBalance 是否已赋值
                     * 
                     */
                    bool SupportAutoLoadBalanceHasBeenSet() const;

                    /**
                     * 获取Whether support access mode
                     * @return SupportAccessMode Whether support access mode
                     * 
                     */
                    bool GetSupportAccessMode() const;

                    /**
                     * 判断参数 SupportAccessMode 是否已赋值
                     * @return SupportAccessMode 是否已赋值
                     * 
                     */
                    bool SupportAccessModeHasBeenSet() const;

                private:

                    /**
                     * Proxy supports the maximum version
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Whether connection pool is supported
                     */
                    bool m_supportPool;
                    bool m_supportPoolHasBeenSet;

                    /**
                     * Minimum value of the connection pool
                     */
                    uint64_t m_poolMin;
                    bool m_poolMinHasBeenSet;

                    /**
                     * Maximum value of connection pool
                     */
                    uint64_t m_poolMax;
                    bool m_poolMaxHasBeenSet;

                    /**
                     * Whether transaction split is supported
                     */
                    bool m_supportTransSplit;
                    bool m_supportTransSplitHasBeenSet;

                    /**
                     * Minimum proxy version that supports connection pool
                     */
                    std::string m_supportPoolMinVersion;
                    bool m_supportPoolMinVersionHasBeenSet;

                    /**
                     * Minimum proxy version supporting transaction split
                     */
                    std::string m_supportTransSplitMinVersion;
                    bool m_supportTransSplitMinVersionHasBeenSet;

                    /**
                     * Whether setting as read-only is supported.
                     */
                    bool m_supportReadOnly;
                    bool m_supportReadOnlyHasBeenSet;

                    /**
                     * Whether to automatically balance the load
                     */
                    bool m_supportAutoLoadBalance;
                    bool m_supportAutoLoadBalanceHasBeenSet;

                    /**
                     * Whether support access mode
                     */
                    bool m_supportAccessMode;
                    bool m_supportAccessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_
