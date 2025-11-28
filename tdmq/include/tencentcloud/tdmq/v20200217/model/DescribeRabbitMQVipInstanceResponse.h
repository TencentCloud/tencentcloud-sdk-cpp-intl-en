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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterSpecInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterAccessInfo.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterWhiteListInfo.h>
#include <tencentcloud/tdmq/v20200217/model/VirtualHostQuota.h>
#include <tencentcloud/tdmq/v20200217/model/ExchangeQuota.h>
#include <tencentcloud/tdmq/v20200217/model/QueueQuota.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQUserQuota.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQVipInstance response structure.
                */
                class DescribeRabbitMQVipInstanceResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQVipInstanceResponse();
                    ~DescribeRabbitMQVipInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return ClusterInfo 
                     * 
                     */
                    RabbitMQClusterInfo GetClusterInfo() const;

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ClusterSpecInfo 
                     * 
                     */
                    RabbitMQClusterSpecInfo GetClusterSpecInfo() const;

                    /**
                     * 判断参数 ClusterSpecInfo 是否已赋值
                     * @return ClusterSpecInfo 是否已赋值
                     * 
                     */
                    bool ClusterSpecInfoHasBeenSet() const;

                    /**
                     * 获取Cluster network information.
                     * @return ClusterNetInfo Cluster network information.
                     * 
                     */
                    RabbitMQClusterAccessInfo GetClusterNetInfo() const;

                    /**
                     * 判断参数 ClusterNetInfo 是否已赋值
                     * @return ClusterNetInfo 是否已赋值
                     * 
                     */
                    bool ClusterNetInfoHasBeenSet() const;

                    /**
                     * 获取Cluster allowlist.
                     * @return ClusterWhiteListInfo Cluster allowlist.
                     * 
                     */
                    RabbitMQClusterWhiteListInfo GetClusterWhiteListInfo() const;

                    /**
                     * 判断参数 ClusterWhiteListInfo 是否已赋值
                     * @return ClusterWhiteListInfo 是否已赋值
                     * 
                     */
                    bool ClusterWhiteListInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return VirtualHostQuota 
                     * 
                     */
                    VirtualHostQuota GetVirtualHostQuota() const;

                    /**
                     * 判断参数 VirtualHostQuota 是否已赋值
                     * @return VirtualHostQuota 是否已赋值
                     * 
                     */
                    bool VirtualHostQuotaHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExchangeQuota 
                     * 
                     */
                    ExchangeQuota GetExchangeQuota() const;

                    /**
                     * 判断参数 ExchangeQuota 是否已赋值
                     * @return ExchangeQuota 是否已赋值
                     * 
                     */
                    bool ExchangeQuotaHasBeenSet() const;

                    /**
                     * 获取
                     * @return QueueQuota 
                     * 
                     */
                    QueueQuota GetQueueQuota() const;

                    /**
                     * 判断参数 QueueQuota 是否已赋值
                     * @return QueueQuota 是否已赋值
                     * 
                     */
                    bool QueueQuotaHasBeenSet() const;

                    /**
                     * 获取User quota information.
                     * @return UserQuota User quota information.
                     * 
                     */
                    RabbitMQUserQuota GetUserQuota() const;

                    /**
                     * 判断参数 UserQuota 是否已赋值
                     * @return UserQuota 是否已赋值
                     * 
                     */
                    bool UserQuotaHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    RabbitMQClusterInfo m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 
                     */
                    RabbitMQClusterSpecInfo m_clusterSpecInfo;
                    bool m_clusterSpecInfoHasBeenSet;

                    /**
                     * Cluster network information.
                     */
                    RabbitMQClusterAccessInfo m_clusterNetInfo;
                    bool m_clusterNetInfoHasBeenSet;

                    /**
                     * Cluster allowlist.
                     */
                    RabbitMQClusterWhiteListInfo m_clusterWhiteListInfo;
                    bool m_clusterWhiteListInfoHasBeenSet;

                    /**
                     * 
                     */
                    VirtualHostQuota m_virtualHostQuota;
                    bool m_virtualHostQuotaHasBeenSet;

                    /**
                     * 
                     */
                    ExchangeQuota m_exchangeQuota;
                    bool m_exchangeQuotaHasBeenSet;

                    /**
                     * 
                     */
                    QueueQuota m_queueQuota;
                    bool m_queueQuotaHasBeenSet;

                    /**
                     * User quota information.
                     */
                    RabbitMQUserQuota m_userQuota;
                    bool m_userQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQVIPINSTANCERESPONSE_H_
