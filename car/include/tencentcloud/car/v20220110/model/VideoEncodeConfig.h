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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_VIDEOENCODECONFIG_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_VIDEOENCODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Video encoding configuration.
                */
                class VideoEncodeConfig : public AbstractModel
                {
                public:
                    VideoEncodeConfig();
                    ~VideoEncodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Streaming GOP length, in seconds.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StreamPushGOPSeconds Streaming GOP length, in seconds.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStreamPushGOPSeconds() const;

                    /**
                     * 设置Streaming GOP length, in seconds.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _streamPushGOPSeconds Streaming GOP length, in seconds.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStreamPushGOPSeconds(const uint64_t& _streamPushGOPSeconds);

                    /**
                     * 判断参数 StreamPushGOPSeconds 是否已赋值
                     * @return StreamPushGOPSeconds 是否已赋值
                     * 
                     */
                    bool StreamPushGOPSecondsHasBeenSet() const;

                private:

                    /**
                     * Streaming GOP length, in seconds.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_streamPushGOPSeconds;
                    bool m_streamPushGOPSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_VIDEOENCODECONFIG_H_
