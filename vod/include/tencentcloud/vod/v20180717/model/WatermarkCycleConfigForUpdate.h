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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Watermark cycle configuration.
                */
                class WatermarkCycleConfigForUpdate : public AbstractModel
                {
                public:
                    WatermarkCycleConfigForUpdate();
                    ~WatermarkCycleConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playback time point in seconds when a watermark appears in a video for the first time.
                     * @return StartTime Playback time point in seconds when a watermark appears in a video for the first time.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Playback time point in seconds when a watermark appears in a video for the first time.
                     * @param _startTime Playback time point in seconds when a watermark appears in a video for the first time.
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Display duration of a watermark in a watermark cycle in seconds.
                     * @return DisplayDuration Display duration of a watermark in a watermark cycle in seconds.
                     * 
                     */
                    double GetDisplayDuration() const;

                    /**
                     * 设置Display duration of a watermark in a watermark cycle in seconds.
                     * @param _displayDuration Display duration of a watermark in a watermark cycle in seconds.
                     * 
                     */
                    void SetDisplayDuration(const double& _displayDuration);

                    /**
                     * 判断参数 DisplayDuration 是否已赋值
                     * @return DisplayDuration 是否已赋值
                     * 
                     */
                    bool DisplayDurationHasBeenSet() const;

                    /**
                     * 获取Duration of a watermark cycle in seconds.
If 0 is entered, a watermark will last for only one cycle (i.e., visible for `DisplayDuration` seconds throughout the video).
                     * @return CycleDuration Duration of a watermark cycle in seconds.
If 0 is entered, a watermark will last for only one cycle (i.e., visible for `DisplayDuration` seconds throughout the video).
                     * 
                     */
                    double GetCycleDuration() const;

                    /**
                     * 设置Duration of a watermark cycle in seconds.
If 0 is entered, a watermark will last for only one cycle (i.e., visible for `DisplayDuration` seconds throughout the video).
                     * @param _cycleDuration Duration of a watermark cycle in seconds.
If 0 is entered, a watermark will last for only one cycle (i.e., visible for `DisplayDuration` seconds throughout the video).
                     * 
                     */
                    void SetCycleDuration(const double& _cycleDuration);

                    /**
                     * 判断参数 CycleDuration 是否已赋值
                     * @return CycleDuration 是否已赋值
                     * 
                     */
                    bool CycleDurationHasBeenSet() const;

                private:

                    /**
                     * Playback time point in seconds when a watermark appears in a video for the first time.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Display duration of a watermark in a watermark cycle in seconds.
                     */
                    double m_displayDuration;
                    bool m_displayDurationHasBeenSet;

                    /**
                     * Duration of a watermark cycle in seconds.
If 0 is entered, a watermark will last for only one cycle (i.e., visible for `DisplayDuration` seconds throughout the video).
                     */
                    double m_cycleDuration;
                    bool m_cycleDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_
