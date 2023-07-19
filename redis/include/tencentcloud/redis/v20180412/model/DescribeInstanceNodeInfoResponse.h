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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ProxyNodes.h>
#include <tencentcloud/redis/v20180412/model/RedisNodes.h>
#include <tencentcloud/redis/v20180412/model/TendisNodes.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceNodeInfo response structure.
                */
                class DescribeInstanceNodeInfoResponse : public AbstractModel
                {
                public:
                    DescribeInstanceNodeInfoResponse();
                    ~DescribeInstanceNodeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of proxy nodes
                     * @return ProxyCount The number of proxy nodes
                     * 
                     */
                    int64_t GetProxyCount() const;

                    /**
                     * 判断参数 ProxyCount 是否已赋值
                     * @return ProxyCount 是否已赋值
                     * 
                     */
                    bool ProxyCountHasBeenSet() const;

                    /**
                     * 获取Proxy node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Proxy Proxy node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ProxyNodes> GetProxy() const;

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取The number of Redis nodes
                     * @return RedisCount The number of Redis nodes
                     * 
                     */
                    int64_t GetRedisCount() const;

                    /**
                     * 判断参数 RedisCount 是否已赋值
                     * @return RedisCount 是否已赋值
                     * 
                     */
                    bool RedisCountHasBeenSet() const;

                    /**
                     * 获取Redis node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Redis Redis node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RedisNodes> GetRedis() const;

                    /**
                     * 判断参数 Redis 是否已赋值
                     * @return Redis 是否已赋值
                     * 
                     */
                    bool RedisHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused.
                     * @return TendisCount This parameter has been disused.
                     * 
                     */
                    int64_t GetTendisCount() const;

                    /**
                     * 判断参数 TendisCount 是否已赋值
                     * @return TendisCount 是否已赋值
                     * 
                     */
                    bool TendisCountHasBeenSet() const;

                    /**
                     * 获取This parameter has been disused. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * @return Tendis This parameter has been disused. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TendisNodes> GetTendis() const;

                    /**
                     * 判断参数 Tendis 是否已赋值
                     * @return Tendis 是否已赋值
                     * 
                     */
                    bool TendisHasBeenSet() const;

                private:

                    /**
                     * The number of proxy nodes
                     */
                    int64_t m_proxyCount;
                    bool m_proxyCountHasBeenSet;

                    /**
                     * Proxy node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ProxyNodes> m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * The number of Redis nodes
                     */
                    int64_t m_redisCount;
                    bool m_redisCountHasBeenSet;

                    /**
                     * Redis node information 
Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RedisNodes> m_redis;
                    bool m_redisHasBeenSet;

                    /**
                     * This parameter has been disused.
                     */
                    int64_t m_tendisCount;
                    bool m_tendisCountHasBeenSet;

                    /**
                     * This parameter has been disused. 
Note:  This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TendisNodes> m_tendis;
                    bool m_tendisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCENODEINFORESPONSE_H_
