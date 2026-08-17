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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_

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
                * DescribeBandwidthRange response structure.
                */
                class DescribeBandwidthRangeResponse : public AbstractModel
                {
                public:
                    DescribeBandwidthRangeResponse();
                    ~DescribeBandwidthRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Standard bandwidth. The bandwidth allocated by the system to each node when purchasing instances.</p>Measurement unit: MB/s.
                     * @return BaseBandwidth <p>Standard bandwidth. The bandwidth allocated by the system to each node when purchasing instances.</p>Measurement unit: MB/s.
                     * 
                     */
                    int64_t GetBaseBandwidth() const;

                    /**
                     * 判断参数 BaseBandwidth 是否已赋值
                     * @return BaseBandwidth 是否已赋值
                     * 
                     */
                    bool BaseBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Refers to the additional bandwidth of the instance. When the standard bandwidth cannot meet needs, users can manually add bandwidth.</p><ul><li>When read-only replicas are enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([number of read-only replicas, 1]). Shard quantity in standard architecture = 1.</li><li>When read-only replicas are not enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. Shard quantity in standard architecture = 1.</li></ul>Unit: MB/s.
                     * @return AddBandwidth <p>Refers to the additional bandwidth of the instance. When the standard bandwidth cannot meet needs, users can manually add bandwidth.</p><ul><li>When read-only replicas are enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([number of read-only replicas, 1]). Shard quantity in standard architecture = 1.</li><li>When read-only replicas are not enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. Shard quantity in standard architecture = 1.</li></ul>Unit: MB/s.
                     * 
                     */
                    int64_t GetAddBandwidth() const;

                    /**
                     * 判断参数 AddBandwidth 是否已赋值
                     * @return AddBandwidth 是否已赋值
                     * 
                     */
                    bool AddBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Minimum set for additional bandwidth.</p> Unit: MB/s.
                     * @return MinAddBandwidth <p>Minimum set for additional bandwidth.</p> Unit: MB/s.
                     * 
                     */
                    int64_t GetMinAddBandwidth() const;

                    /**
                     * 判断参数 MinAddBandwidth 是否已赋值
                     * @return MinAddBandwidth 是否已赋值
                     * 
                     */
                    bool MinAddBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>Set upper limit for additional bandwidth.</p> Measurement unit: MB/s.
                     * @return MaxAddBandwidth <p>Set upper limit for additional bandwidth.</p> Measurement unit: MB/s.
                     * 
                     */
                    int64_t GetMaxAddBandwidth() const;

                    /**
                     * 判断参数 MaxAddBandwidth 是否已赋值
                     * @return MaxAddBandwidth 是否已赋值
                     * 
                     */
                    bool MaxAddBandwidthHasBeenSet() const;

                private:

                    /**
                     * <p>Standard bandwidth. The bandwidth allocated by the system to each node when purchasing instances.</p>Measurement unit: MB/s.
                     */
                    int64_t m_baseBandwidth;
                    bool m_baseBandwidthHasBeenSet;

                    /**
                     * <p>Refers to the additional bandwidth of the instance. When the standard bandwidth cannot meet needs, users can manually add bandwidth.</p><ul><li>When read-only replicas are enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([number of read-only replicas, 1]). Shard quantity in standard architecture = 1.</li><li>When read-only replicas are not enabled, total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. Shard quantity in standard architecture = 1.</li></ul>Unit: MB/s.
                     */
                    int64_t m_addBandwidth;
                    bool m_addBandwidthHasBeenSet;

                    /**
                     * <p>Minimum set for additional bandwidth.</p> Unit: MB/s.
                     */
                    int64_t m_minAddBandwidth;
                    bool m_minAddBandwidthHasBeenSet;

                    /**
                     * <p>Set upper limit for additional bandwidth.</p> Measurement unit: MB/s.
                     */
                    int64_t m_maxAddBandwidth;
                    bool m_maxAddBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_
