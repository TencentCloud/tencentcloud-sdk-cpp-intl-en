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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAINFO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowMediaVideo.h>
#include <tencentcloud/mdc/v20200828/model/FlowMediaAudio.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Media data in the transport stream.
                */
                class FlowMediaInfo : public AbstractModel
                {
                public:
                    FlowMediaInfo();
                    ~FlowMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp in seconds.
                     * @return Timestamp Timestamp in seconds.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp in seconds.
                     * @param _timestamp Timestamp in seconds.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Total bandwidth.
                     * @return Network Total bandwidth.
                     * 
                     */
                    int64_t GetNetwork() const;

                    /**
                     * 设置Total bandwidth.
                     * @param _network Total bandwidth.
                     * 
                     */
                    void SetNetwork(const int64_t& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取Video data of the transport stream.
                     * @return Video Video data of the transport stream.
                     * 
                     */
                    std::vector<FlowMediaVideo> GetVideo() const;

                    /**
                     * 设置Video data of the transport stream.
                     * @param _video Video data of the transport stream.
                     * 
                     */
                    void SetVideo(const std::vector<FlowMediaVideo>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取Audio data of the transport stream.
                     * @return Audio Audio data of the transport stream.
                     * 
                     */
                    std::vector<FlowMediaAudio> GetAudio() const;

                    /**
                     * 设置Audio data of the transport stream.
                     * @param _audio Audio data of the transport stream.
                     * 
                     */
                    void SetAudio(const std::vector<FlowMediaAudio>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取Flag of the same push.
                     * @return SessionId Flag of the same push.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Flag of the same push.
                     * @param _sessionId Flag of the same push.
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
                     * 获取Client IP.
                     * @return ClientIp Client IP.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP.
                     * @param _clientIp Client IP.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                private:

                    /**
                     * Timestamp in seconds.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Total bandwidth.
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * Video data of the transport stream.
                     */
                    std::vector<FlowMediaVideo> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Audio data of the transport stream.
                     */
                    std::vector<FlowMediaAudio> m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * Flag of the same push.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Client IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAINFO_H_
