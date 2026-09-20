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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AudioTransform.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio segment information on the audio track.
                */
                class AudioTrackItem : public AbstractModel
                {
                public:
                    AudioTrackItem();
                    ~AudioTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media material source of the audio clip, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source and access control (such as anti-leech) is enabled, the URL needs to carry access control parameters (such as an anti-leech signature).
                     * @return SourceMedia Media material source of the audio clip, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source and access control (such as anti-leech) is enabled, the URL needs to carry access control parameters (such as an anti-leech signature).
                     * 
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置Media material source of the audio clip, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source and access control (such as anti-leech) is enabled, the URL needs to carry access control parameters (such as an anti-leech signature).
                     * @param _sourceMedia Media material source of the audio clip, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source and access control (such as anti-leech) is enabled, the URL needs to carry access control parameters (such as an anti-leech signature).
                     * 
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     * 
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取The start time of the audio clip in the material file, in seconds. 0 means to capture from the start position of the material. Default value: 0.
                     * @return SourceMediaStartTime The start time of the audio clip in the material file, in seconds. 0 means to capture from the start position of the material. Default value: 0.
                     * 
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置The start time of the audio clip in the material file, in seconds. 0 means to capture from the start position of the material. Default value: 0.
                     * @param _sourceMediaStartTime The start time of the audio clip in the material file, in seconds. 0 means to capture from the start position of the material. Default value: 0.
                     * 
                     */
                    void SetSourceMediaStartTime(const double& _sourceMediaStartTime);

                    /**
                     * 判断参数 SourceMediaStartTime 是否已赋值
                     * @return SourceMediaStartTime 是否已赋值
                     * 
                     */
                    bool SourceMediaStartTimeHasBeenSet() const;

                    /**
                     * 获取Duration of the audio clip in seconds. Defaults to the length of the material itself, which means the entire material is captured.
                     * @return Duration Duration of the audio clip in seconds. Defaults to the length of the material itself, which means the entire material is captured.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Duration of the audio clip in seconds. Defaults to the length of the material itself, which means the entire material is captured.
                     * @param _duration Duration of the audio clip in seconds. Defaults to the length of the material itself, which means the entire material is captured.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Target duration of the audio clip in seconds.
<li>If TargetDuration is not specified or set to 0, it means the target duration is the same as Duration;</li>
<li>When TargetDuration is set to a value more than 0, the audio clip will be fast-forwarded or slowed down so that the duration of the output segment equals TargetDuration.</li>
                     * @return TargetDuration Target duration of the audio clip in seconds.
<li>If TargetDuration is not specified or set to 0, it means the target duration is the same as Duration;</li>
<li>When TargetDuration is set to a value more than 0, the audio clip will be fast-forwarded or slowed down so that the duration of the output segment equals TargetDuration.</li>
                     * 
                     */
                    double GetTargetDuration() const;

                    /**
                     * 设置Target duration of the audio clip in seconds.
<li>If TargetDuration is not specified or set to 0, it means the target duration is the same as Duration;</li>
<li>When TargetDuration is set to a value more than 0, the audio clip will be fast-forwarded or slowed down so that the duration of the output segment equals TargetDuration.</li>
                     * @param _targetDuration Target duration of the audio clip in seconds.
<li>If TargetDuration is not specified or set to 0, it means the target duration is the same as Duration;</li>
<li>When TargetDuration is set to a value more than 0, the audio clip will be fast-forwarded or slowed down so that the duration of the output segment equals TargetDuration.</li>
                     * 
                     */
                    void SetTargetDuration(const double& _targetDuration);

                    /**
                     * 判断参数 TargetDuration 是否已赋值
                     * @return TargetDuration 是否已赋值
                     * 
                     */
                    bool TargetDurationHasBeenSet() const;

                    /**
                     * 获取Operation performed on the audio clip, such as volume adjustment.
                     * @return AudioOperations Operation performed on the audio clip, such as volume adjustment.
                     * 
                     */
                    std::vector<AudioTransform> GetAudioOperations() const;

                    /**
                     * 设置Operation performed on the audio clip, such as volume adjustment.
                     * @param _audioOperations Operation performed on the audio clip, such as volume adjustment.
                     * 
                     */
                    void SetAudioOperations(const std::vector<AudioTransform>& _audioOperations);

                    /**
                     * 判断参数 AudioOperations 是否已赋值
                     * @return AudioOperations 是否已赋值
                     * 
                     */
                    bool AudioOperationsHasBeenSet() const;

                private:

                    /**
                     * Media material source of the audio clip, which can be:
<li>Media file ID for VOD;</li>
<li>Download URL of other media files.</li>
Note: When using the download URL of another media file as the material source and access control (such as anti-leech) is enabled, the URL needs to carry access control parameters (such as an anti-leech signature).
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * The start time of the audio clip in the material file, in seconds. 0 means to capture from the start position of the material. Default value: 0.
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * Duration of the audio clip in seconds. Defaults to the length of the material itself, which means the entire material is captured.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Target duration of the audio clip in seconds.
<li>If TargetDuration is not specified or set to 0, it means the target duration is the same as Duration;</li>
<li>When TargetDuration is set to a value more than 0, the audio clip will be fast-forwarded or slowed down so that the duration of the output segment equals TargetDuration.</li>
                     */
                    double m_targetDuration;
                    bool m_targetDurationHasBeenSet;

                    /**
                     * Operation performed on the audio clip, such as volume adjustment.
                     */
                    std::vector<AudioTransform> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_
