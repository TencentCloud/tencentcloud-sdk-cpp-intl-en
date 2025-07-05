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
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Acceleration region.
                     * @param _accessRegion Acceleration region.
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth cap. Unit: Mbps.
                     * @return Bandwidth Connection bandwidth cap. Unit: Mbps.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Connection bandwidth cap. Unit: Mbps.
                     * @param _bandwidth Connection bandwidth cap. Unit: Mbps.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @return Concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @param _concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * 
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: `normal` (default), `cn2`
                     * @return NetworkType Network type. Valid values: `normal` (default), `cn2`
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type. Valid values: `normal` (default), `cn2`
                     * @param _networkType Network type. Valid values: `normal` (default), `cn2`
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                private:

                    /**
                     * Acceleration region.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Connection bandwidth cap. Unit: Mbps.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * Network type. Valid values: `normal` (default), `cn2`
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_ACCESSCONFIGURATION_H_
