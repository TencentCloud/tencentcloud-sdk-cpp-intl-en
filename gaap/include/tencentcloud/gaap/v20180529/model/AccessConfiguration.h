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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * List of acceleration regions in a connection group, including acceleration regions and their bandwidth and concurrence configuration.
                */
                class AccessConfiguration : public AbstractModel
                {
                public:
                    AccessConfiguration();
                    ~AccessConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Acceleration region.
                     * @return AccessRegion Acceleration region.
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Acceleration region.
                     * @param AccessRegion Acceleration region.
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth upper limit in Mbps.
                     * @return Bandwidth Connection bandwidth upper limit in Mbps.
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Connection bandwidth upper limit in Mbps.
                     * @param Bandwidth Connection bandwidth upper limit in Mbps.
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Concurrent connection upper limit in 10,000 connections, which indicates the allowed number of concurrently online connections.
                     * @return Concurrent Concurrent connection upper limit in 10,000 connections, which indicates the allowed number of concurrently online connections.
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置Concurrent connection upper limit in 10,000 connections, which indicates the allowed number of concurrently online connections.
                     * @param Concurrent Concurrent connection upper limit in 10,000 connections, which indicates the allowed number of concurrently online connections.
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     */
                    bool ConcurrentHasBeenSet() const;

                private:

                    /**
                     * Acceleration region.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Connection bandwidth upper limit in Mbps.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Concurrent connection upper limit in 10,000 connections, which indicates the allowed number of concurrently online connections.
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_
