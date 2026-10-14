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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/RTMPAddressDestination.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Query the output RTMP configuration message.
                */
                class DescribeOutputRTMPSettings : public AbstractModel
                {
                public:
                    DescribeOutputRTMPSettings();
                    ~DescribeOutputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Idle timeout period.
                     * @return IdleTimeout Idle timeout period.
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置Idle timeout period.
                     * @param _idleTimeout Idle timeout period.
                     * 
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Chunk size.
                     * @return ChunkSize Chunk size.
                     * 
                     */
                    int64_t GetChunkSize() const;

                    /**
                     * 设置Chunk size.
                     * @param _chunkSize Chunk size.
                     * 
                     */
                    void SetChunkSize(const int64_t& _chunkSize);

                    /**
                     * 判断参数 ChunkSize 是否已赋值
                     * @return ChunkSize 是否已赋值
                     * 
                     */
                    bool ChunkSizeHasBeenSet() const;

                    /**
                     * 获取List of target address information for RTMP repush.
                     * @return Destinations List of target address information for RTMP repush.
                     * 
                     */
                    std::vector<RTMPAddressDestination> GetDestinations() const;

                    /**
                     * 设置List of target address information for RTMP repush.
                     * @param _destinations List of target address information for RTMP repush.
                     * 
                     */
                    void SetDestinations(const std::vector<RTMPAddressDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                private:

                    /**
                     * Idle timeout period.
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * Chunk size.
                     */
                    int64_t m_chunkSize;
                    bool m_chunkSizeHasBeenSet;

                    /**
                     * List of target address information for RTMP repush.
                     */
                    std::vector<RTMPAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_
