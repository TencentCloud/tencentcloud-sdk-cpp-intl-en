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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Video scene configuration (reservation)
                */
                class VideoSceneInfo : public AbstractModel
                {
                public:
                    VideoSceneInfo();
                    ~VideoSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Analysis interval (seconds): trigger an analysis every few seconds (sliding step length)</p>
                     * @return Interval <p>Analysis interval (seconds): trigger an analysis every few seconds (sliding step length)</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>Analysis interval (seconds): trigger an analysis every few seconds (sliding step length)</p>
                     * @param _interval <p>Analysis interval (seconds): trigger an analysis every few seconds (sliding step length)</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Analysis segment duration (seconds): length of the video window fed into the model at a time, range [5, 12800]</p>
                     * @return Duration <p>Analysis segment duration (seconds): length of the video window fed into the model at a time, range [5, 12800]</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>Analysis segment duration (seconds): length of the video window fed into the model at a time, range [5, 12800]</p>
                     * @param _duration <p>Analysis segment duration (seconds): length of the video window fed into the model at a time, range [5, 12800]</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>Frame sampling rate. Default value: 1. Value range: [0.1, 1]. One frame is sampled every 1/Fps seconds and sent to the model.</p>
                     * @return Fps <p>Frame sampling rate. Default value: 1. Value range: [0.1, 1]. One frame is sampled every 1/Fps seconds and sent to the model.</p>
                     * 
                     */
                    double GetFps() const;

                    /**
                     * 设置<p>Frame sampling rate. Default value: 1. Value range: [0.1, 1]. One frame is sampled every 1/Fps seconds and sent to the model.</p>
                     * @param _fps <p>Frame sampling rate. Default value: 1. Value range: [0.1, 1]. One frame is sampled every 1/Fps seconds and sent to the model.</p>
                     * 
                     */
                    void SetFps(const double& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * <p>Analysis interval (seconds): trigger an analysis every few seconds (sliding step length)</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Analysis segment duration (seconds): length of the video window fed into the model at a time, range [5, 12800]</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>Frame sampling rate. Default value: 1. Value range: [0.1, 1]. One frame is sampled every 1/Fps seconds and sent to the model.</p>
                     */
                    double m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_
