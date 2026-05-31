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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ RabbitMQ vhost basic quota information.
                */
                class RabbitMQVHostBaseQuota : public AbstractModel
                {
                public:
                    RabbitMQVHostBaseQuota();
                    ~RabbitMQVHostBaseQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum number of connections allowed in each vhost.
                     * @return MaxConnectionPerVhost Maximum number of connections allowed in each vhost.
                     * 
                     */
                    int64_t GetMaxConnectionPerVhost() const;

                    /**
                     * 设置Maximum number of connections allowed in each vhost.
                     * @param _maxConnectionPerVhost Maximum number of connections allowed in each vhost.
                     * 
                     */
                    void SetMaxConnectionPerVhost(const int64_t& _maxConnectionPerVhost);

                    /**
                     * 判断参数 MaxConnectionPerVhost 是否已赋值
                     * @return MaxConnectionPerVhost 是否已赋值
                     * 
                     */
                    bool MaxConnectionPerVhostHasBeenSet() const;

                    /**
                     * 获取Maximum number of exchanges allowed in each vhost.
                     * @return MaxExchangePerVhost Maximum number of exchanges allowed in each vhost.
                     * 
                     */
                    int64_t GetMaxExchangePerVhost() const;

                    /**
                     * 设置Maximum number of exchanges allowed in each vhost.
                     * @param _maxExchangePerVhost Maximum number of exchanges allowed in each vhost.
                     * 
                     */
                    void SetMaxExchangePerVhost(const int64_t& _maxExchangePerVhost);

                    /**
                     * 判断参数 MaxExchangePerVhost 是否已赋值
                     * @return MaxExchangePerVhost 是否已赋值
                     * 
                     */
                    bool MaxExchangePerVhostHasBeenSet() const;

                    /**
                     * 获取Maximum number of queues allowed in a single vhost.
                     * @return MaxQueuePerVhost Maximum number of queues allowed in a single vhost.
                     * 
                     */
                    int64_t GetMaxQueuePerVhost() const;

                    /**
                     * 设置Maximum number of queues allowed in a single vhost.
                     * @param _maxQueuePerVhost Maximum number of queues allowed in a single vhost.
                     * 
                     */
                    void SetMaxQueuePerVhost(const int64_t& _maxQueuePerVhost);

                    /**
                     * 判断参数 MaxQueuePerVhost 是否已赋值
                     * @return MaxQueuePerVhost 是否已赋值
                     * 
                     */
                    bool MaxQueuePerVhostHasBeenSet() const;

                private:

                    /**
                     * Maximum number of connections allowed in each vhost.
                     */
                    int64_t m_maxConnectionPerVhost;
                    bool m_maxConnectionPerVhostHasBeenSet;

                    /**
                     * Maximum number of exchanges allowed in each vhost.
                     */
                    int64_t m_maxExchangePerVhost;
                    bool m_maxExchangePerVhostHasBeenSet;

                    /**
                     * Maximum number of queues allowed in a single vhost.
                     */
                    int64_t m_maxQueuePerVhost;
                    bool m_maxQueuePerVhostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVHOSTBASEQUOTA_H_
