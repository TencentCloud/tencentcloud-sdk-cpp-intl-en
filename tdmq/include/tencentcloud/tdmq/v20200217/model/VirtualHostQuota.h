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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_

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
                * 
                */
                class VirtualHostQuota : public AbstractModel
                {
                public:
                    VirtualHostQuota();
                    ~VirtualHostQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return MaxVirtualHost 
                     * 
                     */
                    int64_t GetMaxVirtualHost() const;

                    /**
                     * 设置
                     * @param _maxVirtualHost 
                     * 
                     */
                    void SetMaxVirtualHost(const int64_t& _maxVirtualHost);

                    /**
                     * 判断参数 MaxVirtualHost 是否已赋值
                     * @return MaxVirtualHost 是否已赋值
                     * 
                     */
                    bool MaxVirtualHostHasBeenSet() const;

                    /**
                     * 获取Number of created vhosts.
                     * @return UsedVirtualHost Number of created vhosts.
                     * 
                     */
                    int64_t GetUsedVirtualHost() const;

                    /**
                     * 设置Number of created vhosts.
                     * @param _usedVirtualHost Number of created vhosts.
                     * 
                     */
                    void SetUsedVirtualHost(const int64_t& _usedVirtualHost);

                    /**
                     * 判断参数 UsedVirtualHost 是否已赋值
                     * @return UsedVirtualHost 是否已赋值
                     * 
                     */
                    bool UsedVirtualHostHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum number of connections allowed per vhost.
                     * @return MaxConnectionPerVhost Specifies the maximum number of connections allowed per vhost.
                     * 
                     */
                    int64_t GetMaxConnectionPerVhost() const;

                    /**
                     * 设置Specifies the maximum number of connections allowed per vhost.
                     * @param _maxConnectionPerVhost Specifies the maximum number of connections allowed per vhost.
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
                     * 获取Specifies the maximum number of switches allowed in one vhost.
                     * @return MaxExchangePerVhost Specifies the maximum number of switches allowed in one vhost.
                     * 
                     */
                    int64_t GetMaxExchangePerVhost() const;

                    /**
                     * 设置Specifies the maximum number of switches allowed in one vhost.
                     * @param _maxExchangePerVhost Specifies the maximum number of switches allowed in one vhost.
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
                     * 获取Specifies the maximum number of queue machines allowed in one vhost.
                     * @return MaxQueuePerVhost Specifies the maximum number of queue machines allowed in one vhost.
                     * 
                     */
                    int64_t GetMaxQueuePerVhost() const;

                    /**
                     * 设置Specifies the maximum number of queue machines allowed in one vhost.
                     * @param _maxQueuePerVhost Specifies the maximum number of queue machines allowed in one vhost.
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
                     * 
                     */
                    int64_t m_maxVirtualHost;
                    bool m_maxVirtualHostHasBeenSet;

                    /**
                     * Number of created vhosts.
                     */
                    int64_t m_usedVirtualHost;
                    bool m_usedVirtualHostHasBeenSet;

                    /**
                     * Specifies the maximum number of connections allowed per vhost.
                     */
                    int64_t m_maxConnectionPerVhost;
                    bool m_maxConnectionPerVhostHasBeenSet;

                    /**
                     * Specifies the maximum number of switches allowed in one vhost.
                     */
                    int64_t m_maxExchangePerVhost;
                    bool m_maxExchangePerVhostHasBeenSet;

                    /**
                     * Specifies the maximum number of queue machines allowed in one vhost.
                     */
                    int64_t m_maxQueuePerVhost;
                    bool m_maxQueuePerVhostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VIRTUALHOSTQUOTA_H_
