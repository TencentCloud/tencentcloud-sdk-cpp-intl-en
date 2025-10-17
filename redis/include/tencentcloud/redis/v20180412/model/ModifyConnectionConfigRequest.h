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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyConnectionConfig request structure.
                */
                class ModifyConnectionConfigRequest : public AbstractModel
                {
                public:
                    ModifyConnectionConfigRequest();
                    ~ModifyConnectionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Additional bandwidth, in MB, which should be greater than 0.
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * @return Bandwidth Additional bandwidth, in MB, which should be greater than 0.
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Additional bandwidth, in MB, which should be greater than 0.
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * @param _bandwidth Additional bandwidth, in MB, which should be greater than 0.
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Total number of connections per shard.
- When read-only replicas are not enabled, the lower limit is 10,000 and the upper limit is 40,000.
- When read-only replicas are enabled, the lower limit is 10,000, and the upper limit is calculated as follows: 10,000 x (Number of read-only replicas + 3).
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * @return ClientLimit Total number of connections per shard.
- When read-only replicas are not enabled, the lower limit is 10,000 and the upper limit is 40,000.
- When read-only replicas are enabled, the lower limit is 10,000, and the upper limit is calculated as follows: 10,000 x (Number of read-only replicas + 3).
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置Total number of connections per shard.
- When read-only replicas are not enabled, the lower limit is 10,000 and the upper limit is 40,000.
- When read-only replicas are enabled, the lower limit is 10,000, and the upper limit is calculated as follows: 10,000 x (Number of read-only replicas + 3).
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * @param _clientLimit Total number of connections per shard.
- When read-only replicas are not enabled, the lower limit is 10,000 and the upper limit is 40,000.
- When read-only replicas are enabled, the lower limit is 10,000, and the upper limit is calculated as follows: 10,000 x (Number of read-only replicas + 3).
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Additional bandwidth, in MB, which should be greater than 0.
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Total number of connections per shard.
- When read-only replicas are not enabled, the lower limit is 10,000 and the upper limit is 40,000.
- When read-only replicas are enabled, the lower limit is 10,000, and the upper limit is calculated as follows: 10,000 x (Number of read-only replicas + 3).
**Note**: The Bandwidth and ClientLimit parameters cannot be empty simultaneously. You should select at least one of them for configuration.
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYCONNECTIONCONFIGREQUEST_H_
