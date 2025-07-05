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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAVIDEO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAVIDEO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The video data of a flow.
                */
                class FlowMediaVideo : public AbstractModel
                {
                public:
                    FlowMediaVideo();
                    ~FlowMediaVideo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The frame rate.
                     * @return Fps The frame rate.
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置The frame rate.
                     * @param _fps The frame rate.
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取The bitrate (bps).
                     * @return Rate The bitrate (bps).
                     * 
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置The bitrate (bps).
                     * @param _rate The bitrate (bps).
                     * 
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取The video PID.
                     * @return Pid The video PID.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置The video PID.
                     * @param _pid The video PID.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取The ID of a push session.
                     * @return SessionId The ID of a push session.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID of a push session.
                     * @param _sessionId The ID of a push session.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * The frame rate.
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * The bitrate (bps).
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * The video PID.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * The ID of a push session.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWMEDIAVIDEO_H_
