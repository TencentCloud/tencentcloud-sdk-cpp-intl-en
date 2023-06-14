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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETOTALINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETOTALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Total usage of the transcoding service
                */
                class TranscodeTotalInfo : public AbstractModel
                {
                public:
                    TranscodeTotalInfo();
                    ~TranscodeTotalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Usage time (Beijing time)
Example: 2019-03-01 00:00:00
                     * @return Time Usage time (Beijing time)
Example: 2019-03-01 00:00:00
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Usage time (Beijing time)
Example: 2019-03-01 00:00:00
                     * @param _time Usage time (Beijing time)
Example: 2019-03-01 00:00:00
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Transcoding duration in minutes
                     * @return Duration Transcoding duration in minutes
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置Transcoding duration in minutes
                     * @param _duration Transcoding duration in minutes
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Codec, with modules
Examples:
`liveprocessor_H264`: live transcoding-H264
`liveprocessor_H265`: live transcoding-H265
`topspeed_H264`: top speed codec-H264
`topspeed_H265`: top speed codec-H265
                     * @return ModuleCodec Codec, with modules
Examples:
`liveprocessor_H264`: live transcoding-H264
`liveprocessor_H265`: live transcoding-H265
`topspeed_H264`: top speed codec-H264
`topspeed_H265`: top speed codec-H265
                     * 
                     */
                    std::string GetModuleCodec() const;

                    /**
                     * 设置Codec, with modules
Examples:
`liveprocessor_H264`: live transcoding-H264
`liveprocessor_H265`: live transcoding-H265
`topspeed_H264`: top speed codec-H264
`topspeed_H265`: top speed codec-H265
                     * @param _moduleCodec Codec, with modules
Examples:
`liveprocessor_H264`: live transcoding-H264
`liveprocessor_H265`: live transcoding-H265
`topspeed_H264`: top speed codec-H264
`topspeed_H265`: top speed codec-H265
                     * 
                     */
                    void SetModuleCodec(const std::string& _moduleCodec);

                    /**
                     * 判断参数 ModuleCodec 是否已赋值
                     * @return ModuleCodec 是否已赋值
                     * 
                     */
                    bool ModuleCodecHasBeenSet() const;

                    /**
                     * 获取Resolution
Example: 540*480
                     * @return Resolution Resolution
Example: 540*480
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置Resolution
Example: 540*480
                     * @param _resolution Resolution
Example: 540*480
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * Usage time (Beijing time)
Example: 2019-03-01 00:00:00
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Transcoding duration in minutes
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Codec, with modules
Examples:
`liveprocessor_H264`: live transcoding-H264
`liveprocessor_H265`: live transcoding-H265
`topspeed_H264`: top speed codec-H264
`topspeed_H265`: top speed codec-H265
                     */
                    std::string m_moduleCodec;
                    bool m_moduleCodecHasBeenSet;

                    /**
                     * Resolution
Example: 540*480
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSCODETOTALINFO_H_
