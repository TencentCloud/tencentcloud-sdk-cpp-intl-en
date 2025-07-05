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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbitMQ cluster specification information.
                */
                class RabbitMQClusterSpecInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterSpecInfo();
                    ~RabbitMQClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the cluster specification name.
                     * @return SpecName Specifies the cluster specification name.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Specifies the cluster specification name.
                     * @param _specName Specifies the cluster specification name.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Max tps.
                     * @return MaxTps Max tps.
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Max tps.
                     * @param _maxTps Max tps.
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取Maximum number of queues.
                     * @return MaxQueueNum Maximum number of queues.
                     * 
                     */
                    uint64_t GetMaxQueueNum() const;

                    /**
                     * 设置Maximum number of queues.
                     * @param _maxQueueNum Maximum number of queues.
                     * 
                     */
                    void SetMaxQueueNum(const uint64_t& _maxQueueNum);

                    /**
                     * 判断参数 MaxQueueNum 是否已赋值
                     * @return MaxQueueNum 是否已赋值
                     * 
                     */
                    bool MaxQueueNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of exchanges.
                     * @return MaxExchangeNum Maximum number of exchanges.
                     * 
                     */
                    uint64_t GetMaxExchangeNum() const;

                    /**
                     * 设置Maximum number of exchanges.
                     * @param _maxExchangeNum Maximum number of exchanges.
                     * 
                     */
                    void SetMaxExchangeNum(const uint64_t& _maxExchangeNum);

                    /**
                     * 判断参数 MaxExchangeNum 是否已赋值
                     * @return MaxExchangeNum 是否已赋值
                     * 
                     */
                    bool MaxExchangeNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of vhosts.
                     * @return MaxVhostNum Maximum number of vhosts.
                     * 
                     */
                    uint64_t GetMaxVhostNum() const;

                    /**
                     * 设置Maximum number of vhosts.
                     * @param _maxVhostNum Maximum number of vhosts.
                     * 
                     */
                    void SetMaxVhostNum(const uint64_t& _maxVhostNum);

                    /**
                     * 判断参数 MaxVhostNum 是否已赋值
                     * @return MaxVhostNum 是否已赋值
                     * 
                     */
                    bool MaxVhostNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections.
                     * @return MaxConnNum Maximum number of connections.
                     * 
                     */
                    uint64_t GetMaxConnNum() const;

                    /**
                     * 设置Maximum number of connections.
                     * @param _maxConnNum Maximum number of connections.
                     * 
                     */
                    void SetMaxConnNum(const uint64_t& _maxConnNum);

                    /**
                     * 判断参数 MaxConnNum 是否已赋值
                     * @return MaxConnNum 是否已赋值
                     * 
                     */
                    bool MaxConnNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of users.
                     * @return MaxUserNum Maximum number of users.
                     * 
                     */
                    uint64_t GetMaxUserNum() const;

                    /**
                     * 设置Maximum number of users.
                     * @param _maxUserNum Maximum number of users.
                     * 
                     */
                    void SetMaxUserNum(const uint64_t& _maxUserNum);

                    /**
                     * 判断参数 MaxUserNum 是否已赋值
                     * @return MaxUserNum 是否已赋值
                     * 
                     */
                    bool MaxUserNumHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth. abandoned.
                     * @return MaxBandWidth Peak bandwidth. abandoned.
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth. abandoned.
                     * @param _maxBandWidth Peak bandwidth. abandoned.
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth. abandoned.
                     * @return PublicNetworkTps Public network bandwidth. abandoned.
                     * 
                     */
                    uint64_t GetPublicNetworkTps() const;

                    /**
                     * 设置Public network bandwidth. abandoned.
                     * @param _publicNetworkTps Public network bandwidth. abandoned.
                     * 
                     */
                    void SetPublicNetworkTps(const uint64_t& _publicNetworkTps);

                    /**
                     * 判断参数 PublicNetworkTps 是否已赋值
                     * @return PublicNetworkTps 是否已赋值
                     * 
                     */
                    bool PublicNetworkTpsHasBeenSet() const;

                private:

                    /**
                     * Specifies the cluster specification name.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Max tps.
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * Maximum number of queues.
                     */
                    uint64_t m_maxQueueNum;
                    bool m_maxQueueNumHasBeenSet;

                    /**
                     * Maximum number of exchanges.
                     */
                    uint64_t m_maxExchangeNum;
                    bool m_maxExchangeNumHasBeenSet;

                    /**
                     * Maximum number of vhosts.
                     */
                    uint64_t m_maxVhostNum;
                    bool m_maxVhostNumHasBeenSet;

                    /**
                     * Maximum number of connections.
                     */
                    uint64_t m_maxConnNum;
                    bool m_maxConnNumHasBeenSet;

                    /**
                     * Maximum number of users.
                     */
                    uint64_t m_maxUserNum;
                    bool m_maxUserNumHasBeenSet;

                    /**
                     * Peak bandwidth. abandoned.
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Public network bandwidth. abandoned.
                     */
                    uint64_t m_publicNetworkTps;
                    bool m_publicNetworkTpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERSPECINFO_H_
