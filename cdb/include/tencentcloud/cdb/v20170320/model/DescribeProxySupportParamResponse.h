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
                     * 获取The supported maximum proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyVersion The supported maximum proxy version Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportPool Whether to support the connection pool Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PoolMin Minimum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PoolMax Maximum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportTransSplit Whether to support transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum proxy version supporting connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportPoolMinVersion Minimum proxy version supporting connection pool Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Minimum proxy version supporting transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportTransSplitMinVersion Minimum proxy version supporting transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether read-only mode is supported Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportReadOnly Whether read-only mode is supported Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportReadOnly() const;

                    /**
                     * 判断参数 SupportReadOnly 是否已赋值
                     * @return SupportReadOnly 是否已赋值
                     * 
                     */
                    bool SupportReadOnlyHasBeenSet() const;

                private:

                    /**
                     * The supported maximum proxy version Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyVersion;
                    bool m_proxyVersionHasBeenSet;

                    /**
                     * Whether to support the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportPool;
                    bool m_supportPoolHasBeenSet;

                    /**
                     * Minimum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_poolMin;
                    bool m_poolMinHasBeenSet;

                    /**
                     * Maximum connections in the connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_poolMax;
                    bool m_poolMaxHasBeenSet;

                    /**
                     * Whether to support transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportTransSplit;
                    bool m_supportTransSplitHasBeenSet;

                    /**
                     * Minimum proxy version supporting connection pool Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supportPoolMinVersion;
                    bool m_supportPoolMinVersionHasBeenSet;

                    /**
                     * Minimum proxy version supporting transaction splitting Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supportTransSplitMinVersion;
                    bool m_supportTransSplitMinVersionHasBeenSet;

                    /**
                     * Whether read-only mode is supported Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_supportReadOnly;
                    bool m_supportReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYSUPPORTPARAMRESPONSE_H_
