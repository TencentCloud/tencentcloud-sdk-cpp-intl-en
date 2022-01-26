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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMEUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMEUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Billable relaying and transcoding duration statistics
If the period queried is 1 day or shorter, the statistics returned are on a 5-minute basis. If the period queried is longer than 1 day, the statistics returned are on a daily basis.
                */
                class SdkAppIdTrtcMcuTranscodeTimeUsage : public AbstractModel
                {
                public:
                    SdkAppIdTrtcMcuTranscodeTimeUsage();
                    ~SdkAppIdTrtcMcuTranscodeTimeUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time point for the statistics. e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     * @return TimeKey Time point for the statistics. e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time point for the statistics. e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     * @param TimeKey Time point for the statistics. e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取Audio duration (s)
                     * @return AudioTime Audio duration (s)
                     */
                    uint64_t GetAudioTime() const;

                    /**
                     * 设置Audio duration (s)
                     * @param AudioTime Audio duration (s)
                     */
                    void SetAudioTime(const uint64_t& _audioTime);

                    /**
                     * 判断参数 AudioTime 是否已赋值
                     * @return AudioTime 是否已赋值
                     */
                    bool AudioTimeHasBeenSet() const;

                    /**
                     * 获取SD video duration (s)
                     * @return VideoTimeSd SD video duration (s)
                     */
                    uint64_t GetVideoTimeSd() const;

                    /**
                     * 设置SD video duration (s)
                     * @param VideoTimeSd SD video duration (s)
                     */
                    void SetVideoTimeSd(const uint64_t& _videoTimeSd);

                    /**
                     * 判断参数 VideoTimeSd 是否已赋值
                     * @return VideoTimeSd 是否已赋值
                     */
                    bool VideoTimeSdHasBeenSet() const;

                    /**
                     * 获取HD video duration (s)
                     * @return VideoTimeHd HD video duration (s)
                     */
                    uint64_t GetVideoTimeHd() const;

                    /**
                     * 设置HD video duration (s)
                     * @param VideoTimeHd HD video duration (s)
                     */
                    void SetVideoTimeHd(const uint64_t& _videoTimeHd);

                    /**
                     * 判断参数 VideoTimeHd 是否已赋值
                     * @return VideoTimeHd 是否已赋值
                     */
                    bool VideoTimeHdHasBeenSet() const;

                    /**
                     * 获取FHD video duration (s)
                     * @return VideoTimeFhd FHD video duration (s)
                     */
                    uint64_t GetVideoTimeFhd() const;

                    /**
                     * 设置FHD video duration (s)
                     * @param VideoTimeFhd FHD video duration (s)
                     */
                    void SetVideoTimeFhd(const uint64_t& _videoTimeFhd);

                    /**
                     * 判断参数 VideoTimeFhd 是否已赋值
                     * @return VideoTimeFhd 是否已赋值
                     */
                    bool VideoTimeFhdHasBeenSet() const;

                private:

                    /**
                     * Time point for the statistics. e.g., `2020-09-07` or `2020-09-07 00:05:05`
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Audio duration (s)
                     */
                    uint64_t m_audioTime;
                    bool m_audioTimeHasBeenSet;

                    /**
                     * SD video duration (s)
                     */
                    uint64_t m_videoTimeSd;
                    bool m_videoTimeSdHasBeenSet;

                    /**
                     * HD video duration (s)
                     */
                    uint64_t m_videoTimeHd;
                    bool m_videoTimeHdHasBeenSet;

                    /**
                     * FHD video duration (s)
                     */
                    uint64_t m_videoTimeFhd;
                    bool m_videoTimeFhdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMEUSAGE_H_
