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
                * Watermark period configuration.
                */
                class WatermarkCycleConfigForUpdate : public AbstractModel
                {
                public:
                    WatermarkCycleConfigForUpdate();
                    ~WatermarkCycleConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playback time point when the watermark first appears in the video. Unit: second.
                     * @return StartTime Playback time point when the watermark first appears in the video. Unit: second.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Playback time point when the watermark first appears in the video. Unit: second.
                     * @param _startTime Playback time point when the watermark first appears in the video. Unit: second.
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
                     * 获取Duration of watermark display within a watermark cycle, in seconds.
                     * @return DisplayDuration Duration of watermark display within a watermark cycle, in seconds.
                     * 
                     */
                    double GetDisplayDuration() const;

                    /**
                     * 设置Duration of watermark display within a watermark cycle, in seconds.
                     * @param _displayDuration Duration of watermark display within a watermark cycle, in seconds.
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
                     * 获取Duration of a watermark cycle, in seconds.
0 means a watermark lasts only one watermark cycle (displayed for DisplayDuration seconds in the entire video).
                     * @return CycleDuration Duration of a watermark cycle, in seconds.
0 means a watermark lasts only one watermark cycle (displayed for DisplayDuration seconds in the entire video).
                     * 
                     */
                    double GetCycleDuration() const;

                    /**
                     * 设置Duration of a watermark cycle, in seconds.
0 means a watermark lasts only one watermark cycle (displayed for DisplayDuration seconds in the entire video).
                     * @param _cycleDuration Duration of a watermark cycle, in seconds.
0 means a watermark lasts only one watermark cycle (displayed for DisplayDuration seconds in the entire video).
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
                     * Playback time point when the watermark first appears in the video. Unit: second.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Duration of watermark display within a watermark cycle, in seconds.
                     */
                    double m_displayDuration;
                    bool m_displayDurationHasBeenSet;

                    /**
                     * Duration of a watermark cycle, in seconds.
0 means a watermark lasts only one watermark cycle (displayed for DisplayDuration seconds in the entire video).
                     */
                    double m_cycleDuration;
                    bool m_cycleDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WATERMARKCYCLECONFIGFORUPDATE_H_
