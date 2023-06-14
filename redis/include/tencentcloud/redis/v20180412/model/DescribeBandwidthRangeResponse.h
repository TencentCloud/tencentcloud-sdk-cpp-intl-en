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
                     * 获取Standard bandwidth, which is the bandwidth allocated by the system to each node when an instance is purchased.
                     * @return BaseBandwidth Standard bandwidth, which is the bandwidth allocated by the system to each node when an instance is purchased.
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
                     * 获取The additional bandwidth of the instance. If the standard bandwidth does not meet your needs, you can increase the bandwidth on your own. <ul><li>If read-only replica is enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([read-only replica quantity, 1]). The shard quantity in the standard architecture is 1. </li><li>If read-only replica is not enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. The shard quantity in the standard architecture is 1.</li></ul>
                     * @return AddBandwidth The additional bandwidth of the instance. If the standard bandwidth does not meet your needs, you can increase the bandwidth on your own. <ul><li>If read-only replica is enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([read-only replica quantity, 1]). The shard quantity in the standard architecture is 1. </li><li>If read-only replica is not enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. The shard quantity in the standard architecture is 1.</li></ul>
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
                     * 获取The lower limit for additional bandwidth
                     * @return MinAddBandwidth The lower limit for additional bandwidth
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
                     * 获取The upper limit for additional bandwidth
                     * @return MaxAddBandwidth The upper limit for additional bandwidth
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
                     * Standard bandwidth, which is the bandwidth allocated by the system to each node when an instance is purchased.
                     */
                    int64_t m_baseBandwidth;
                    bool m_baseBandwidthHasBeenSet;

                    /**
                     * The additional bandwidth of the instance. If the standard bandwidth does not meet your needs, you can increase the bandwidth on your own. <ul><li>If read-only replica is enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity * Max ([read-only replica quantity, 1]). The shard quantity in the standard architecture is 1. </li><li>If read-only replica is not enabled, the total instance bandwidth = additional bandwidth * shard quantity + standard bandwidth * shard quantity. The shard quantity in the standard architecture is 1.</li></ul>
                     */
                    int64_t m_addBandwidth;
                    bool m_addBandwidthHasBeenSet;

                    /**
                     * The lower limit for additional bandwidth
                     */
                    int64_t m_minAddBandwidth;
                    bool m_minAddBandwidthHasBeenSet;

                    /**
                     * The upper limit for additional bandwidth
                     */
                    int64_t m_maxAddBandwidth;
                    bool m_maxAddBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_
