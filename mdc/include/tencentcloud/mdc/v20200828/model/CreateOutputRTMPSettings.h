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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRTMPSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRTMPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputRtmpSettingsDestinations.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * RTMP configuration for creating the output of a media transmission stream.
                */
                class CreateOutputRTMPSettings : public AbstractModel
                {
                public:
                    CreateOutputRTMPSettings();
                    ~CreateOutputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target address for repost. You can enter 1 to 2 addresses.
                     * @return Destinations Target address for repost. You can enter 1 to 2 addresses.
                     * 
                     */
                    std::vector<CreateOutputRtmpSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置Target address for repost. You can enter 1 to 2 addresses.
                     * @param _destinations Target address for repost. You can enter 1 to 2 addresses.
                     * 
                     */
                    void SetDestinations(const std::vector<CreateOutputRtmpSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取Chunk size of RTMP, ranging from 4096 to 40960.
                     * @return ChunkSize Chunk size of RTMP, ranging from 4096 to 40960.
                     * 
                     */
                    int64_t GetChunkSize() const;

                    /**
                     * 设置Chunk size of RTMP, ranging from 4096 to 40960.
                     * @param _chunkSize Chunk size of RTMP, ranging from 4096 to 40960.
                     * 
                     */
                    void SetChunkSize(const int64_t& _chunkSize);

                    /**
                     * 判断参数 ChunkSize 是否已赋值
                     * @return ChunkSize 是否已赋值
                     * 
                     */
                    bool ChunkSizeHasBeenSet() const;

                private:

                    /**
                     * Target address for repost. You can enter 1 to 2 addresses.
                     */
                    std::vector<CreateOutputRtmpSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Chunk size of RTMP, ranging from 4096 to 40960.
                     */
                    int64_t m_chunkSize;
                    bool m_chunkSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTRTMPSETTINGS_H_
