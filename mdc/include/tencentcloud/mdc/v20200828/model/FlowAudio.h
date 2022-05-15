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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWAUDIO_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWAUDIO_H_

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
                * The audio data of the flow.
                */
                class FlowAudio : public AbstractModel
                {
                public:
                    FlowAudio();
                    ~FlowAudio() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The frame rate.
                     * @return Fps The frame rate.
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置The frame rate.
                     * @param Fps The frame rate.
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取The bitrate (bps).
                     * @return Rate The bitrate (bps).
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置The bitrate (bps).
                     * @param Rate The bitrate (bps).
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取The audio PID.
                     * @return Pid The audio PID.
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置The audio PID.
                     * @param Pid The audio PID.
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

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
                     * The audio PID.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWAUDIO_H_
