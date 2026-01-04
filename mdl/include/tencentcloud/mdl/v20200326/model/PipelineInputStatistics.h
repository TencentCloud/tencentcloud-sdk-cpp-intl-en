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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSTATISTICS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/VideoPipelineInputStatistics.h>
#include <tencentcloud/mdl/v20200326/model/AudioPipelineInputStatistics.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Pipeline input statistics.
                */
                class PipelineInputStatistics : public AbstractModel
                {
                public:
                    PipelineInputStatistics();
                    ~PipelineInputStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data timestamp in seconds.
                     * @return Timestamp Data timestamp in seconds.
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置Data timestamp in seconds.
                     * @param _timestamp Data timestamp in seconds.
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Input bandwidth in bps.
                     * @return NetworkIn Input bandwidth in bps.
                     * 
                     */
                    uint64_t GetNetworkIn() const;

                    /**
                     * 设置Input bandwidth in bps.
                     * @param _networkIn Input bandwidth in bps.
                     * 
                     */
                    void SetNetworkIn(const uint64_t& _networkIn);

                    /**
                     * 判断参数 NetworkIn 是否已赋值
                     * @return NetworkIn 是否已赋值
                     * 
                     */
                    bool NetworkInHasBeenSet() const;

                    /**
                     * 获取Video information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input video.
For other inputs, the quantity is 1.
                     * @return Video Video information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input video.
For other inputs, the quantity is 1.
                     * 
                     */
                    std::vector<VideoPipelineInputStatistics> GetVideo() const;

                    /**
                     * 设置Video information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input video.
For other inputs, the quantity is 1.
                     * @param _video Video information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input video.
For other inputs, the quantity is 1.
                     * 
                     */
                    void SetVideo(const std::vector<VideoPipelineInputStatistics>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取Audio information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input audio.
For other inputs, the quantity is 1.
                     * @return Audio Audio information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input audio.
For other inputs, the quantity is 1.
                     * 
                     */
                    std::vector<AudioPipelineInputStatistics> GetAudio() const;

                    /**
                     * 设置Audio information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input audio.
For other inputs, the quantity is 1.
                     * @param _audio Audio information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input audio.
For other inputs, the quantity is 1.
                     * 
                     */
                    void SetAudio(const std::vector<AudioPipelineInputStatistics>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取Session ID
                     * @return SessionId Session ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID
                     * @param _sessionId Session ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Rtt time, in milliseconds
                     * @return RTT Rtt time, in milliseconds
                     * 
                     */
                    int64_t GetRTT() const;

                    /**
                     * 设置Rtt time, in milliseconds
                     * @param _rTT Rtt time, in milliseconds
                     * 
                     */
                    void SetRTT(const int64_t& _rTT);

                    /**
                     * 判断参数 RTT 是否已赋值
                     * @return RTT 是否已赋值
                     * 
                     */
                    bool RTTHasBeenSet() const;

                    /**
                     * 获取Is the Network parameter valid? 0 indicates invalid, 1 indicates valid
                     * @return NetworkValid Is the Network parameter valid? 0 indicates invalid, 1 indicates valid
                     * 
                     */
                    int64_t GetNetworkValid() const;

                    /**
                     * 设置Is the Network parameter valid? 0 indicates invalid, 1 indicates valid
                     * @param _networkValid Is the Network parameter valid? 0 indicates invalid, 1 indicates valid
                     * 
                     */
                    void SetNetworkValid(const int64_t& _networkValid);

                    /**
                     * 判断参数 NetworkValid 是否已赋值
                     * @return NetworkValid 是否已赋值
                     * 
                     */
                    bool NetworkValidHasBeenSet() const;

                private:

                    /**
                     * Data timestamp in seconds.
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Input bandwidth in bps.
                     */
                    uint64_t m_networkIn;
                    bool m_networkInHasBeenSet;

                    /**
                     * Video information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input video.
For other inputs, the quantity is 1.
                     */
                    std::vector<VideoPipelineInputStatistics> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Audio information array.
For `rtp/udp` input, the quantity is the number of `Pid` of the input audio.
For other inputs, the quantity is 1.
                     */
                    std::vector<AudioPipelineInputStatistics> m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * Session ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Rtt time, in milliseconds
                     */
                    int64_t m_rTT;
                    bool m_rTTHasBeenSet;

                    /**
                     * Is the Network parameter valid? 0 indicates invalid, 1 indicates valid
                     */
                    int64_t m_networkValid;
                    bool m_networkValidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSTATISTICS_H_
