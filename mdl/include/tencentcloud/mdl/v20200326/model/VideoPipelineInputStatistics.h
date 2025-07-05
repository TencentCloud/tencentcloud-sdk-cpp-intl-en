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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOPIPELINEINPUTSTATISTICS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOPIPELINEINPUTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Pipeline input video statistics.
                */
                class VideoPipelineInputStatistics : public AbstractModel
                {
                public:
                    VideoPipelineInputStatistics();
                    ~VideoPipelineInputStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video FPS.
                     * @return Fps Video FPS.
                     * 
                     */
                    uint64_t GetFps() const;

                    /**
                     * 设置Video FPS.
                     * @param _fps Video FPS.
                     * 
                     */
                    void SetFps(const uint64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取Video bitrate in bps.
                     * @return Rate Video bitrate in bps.
                     * 
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置Video bitrate in bps.
                     * @param _rate Video bitrate in bps.
                     * 
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Video `Pid`, which is available only if the input is `rtp/udp`.
                     * @return Pid Video `Pid`, which is available only if the input is `rtp/udp`.
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置Video `Pid`, which is available only if the input is `rtp/udp`.
                     * @param _pid Video `Pid`, which is available only if the input is `rtp/udp`.
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * Video FPS.
                     */
                    uint64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * Video bitrate in bps.
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Video `Pid`, which is available only if the input is `rtp/udp`.
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_VIDEOPIPELINEINPUTSTATISTICS_H_
