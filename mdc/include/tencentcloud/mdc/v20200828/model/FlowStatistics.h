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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowVideo.h>
#include <tencentcloud/mdc/v20200828/model/FlowAudio.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Stream stats.
                */
                class FlowStatistics : public AbstractModel
                {
                public:
                    FlowStatistics();
                    ~FlowStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
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
                     * 获取Peer IP.
                     * @return ClientIp Peer IP.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Peer IP.
                     * @param _clientIp Peer IP.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

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
                     * 获取Video data.
                     * @return Video Video data.
                     * 
                     */
                    std::vector<FlowVideo> GetVideo() const;

                    /**
                     * 设置Video data.
                     * @param _video Video data.
                     * 
                     */
                    void SetVideo(const std::vector<FlowVideo>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取Audio data.
                     * @return Audio Audio data.
                     * 
                     */
                    std::vector<FlowAudio> GetAudio() const;

                    /**
                     * 设置Audio data.
                     * @param _audio Audio data.
                     * 
                     */
                    void SetAudio(const std::vector<FlowAudio>& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                private:

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Peer IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * Total bandwidth.
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * Video data.
                     */
                    std::vector<FlowVideo> m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * Audio data.
                     */
                    std::vector<FlowAudio> m_audio;
                    bool m_audioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICS_H_
