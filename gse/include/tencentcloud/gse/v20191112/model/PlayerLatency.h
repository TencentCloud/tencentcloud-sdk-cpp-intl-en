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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Player latency information
                */
                class PlayerLatency : public AbstractModel
                {
                public:
                    PlayerLatency();
                    ~PlayerLatency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PlayerId Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _playerId Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取Name of region corresponding to latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionIdentifier Name of region corresponding to latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionIdentifier() const;

                    /**
                     * 设置Name of region corresponding to latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _regionIdentifier Name of region corresponding to latency
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionIdentifier(const std::string& _regionIdentifier);

                    /**
                     * 判断参数 RegionIdentifier 是否已赋值
                     * @return RegionIdentifier 是否已赋值
                     * 
                     */
                    bool RegionIdentifierHasBeenSet() const;

                    /**
                     * 获取Latency in milliseconds
                     * @return LatencyInMilliseconds Latency in milliseconds
                     * 
                     */
                    uint64_t GetLatencyInMilliseconds() const;

                    /**
                     * 设置Latency in milliseconds
                     * @param _latencyInMilliseconds Latency in milliseconds
                     * 
                     */
                    void SetLatencyInMilliseconds(const uint64_t& _latencyInMilliseconds);

                    /**
                     * 判断参数 LatencyInMilliseconds 是否已赋值
                     * @return LatencyInMilliseconds 是否已赋值
                     * 
                     */
                    bool LatencyInMillisecondsHasBeenSet() const;

                private:

                    /**
                     * Player ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * Name of region corresponding to latency
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionIdentifier;
                    bool m_regionIdentifierHasBeenSet;

                    /**
                     * Latency in milliseconds
                     */
                    uint64_t m_latencyInMilliseconds;
                    bool m_latencyInMillisecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_PLAYERLATENCY_H_
