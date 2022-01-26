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
                * Audio segment information of audio track.
                */
                class AudioTrackItem : public AbstractModel
                {
                public:
                    AudioTrackItem();
                    ~AudioTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source of media material for audio segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     * @return SourceMedia Source of media material for audio segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     */
                    std::string GetSourceMedia() const;

                    /**
                     * 设置Source of media material for audio segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     * @param SourceMedia Source of media material for audio segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     */
                    void SetSourceMedia(const std::string& _sourceMedia);

                    /**
                     * 判断参数 SourceMedia 是否已赋值
                     * @return SourceMedia 是否已赋值
                     */
                    bool SourceMediaHasBeenSet() const;

                    /**
                     * 获取Start time of audio segment in material file in seconds. Default value: 0, which means to start capturing from the beginning position of the material.
                     * @return SourceMediaStartTime Start time of audio segment in material file in seconds. Default value: 0, which means to start capturing from the beginning position of the material.
                     */
                    double GetSourceMediaStartTime() const;

                    /**
                     * 设置Start time of audio segment in material file in seconds. Default value: 0, which means to start capturing from the beginning position of the material.
                     * @param SourceMediaStartTime Start time of audio segment in material file in seconds. Default value: 0, which means to start capturing from the beginning position of the material.
                     */
                    void SetSourceMediaStartTime(const double& _sourceMediaStartTime);

                    /**
                     * 判断参数 SourceMediaStartTime 是否已赋值
                     * @return SourceMediaStartTime 是否已赋值
                     */
                    bool SourceMediaStartTimeHasBeenSet() const;

                    /**
                     * 获取Audio segment duration in seconds. By default, the length of the material will be used, which means that the entire material will be captured.
                     * @return Duration Audio segment duration in seconds. By default, the length of the material will be used, which means that the entire material will be captured.
                     */
                    double GetDuration() const;

                    /**
                     * 设置Audio segment duration in seconds. By default, the length of the material will be used, which means that the entire material will be captured.
                     * @param Duration Audio segment duration in seconds. By default, the length of the material will be used, which means that the entire material will be captured.
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Operation on audio segment, such as volume adjustment.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioOperations Operation on audio segment, such as volume adjustment.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioTransform> GetAudioOperations() const;

                    /**
                     * 设置Operation on audio segment, such as volume adjustment.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AudioOperations Operation on audio segment, such as volume adjustment.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAudioOperations(const std::vector<AudioTransform>& _audioOperations);

                    /**
                     * 判断参数 AudioOperations 是否已赋值
                     * @return AudioOperations 是否已赋值
                     */
                    bool AudioOperationsHasBeenSet() const;

                private:

                    /**
                     * Source of media material for audio segment, which can be:
<li>ID of VOD media files</li>
<li>Download URL of other media files</li>
Note: when a download URL of other media files is used as the material source and access control (such as hotlink protection) is enabled, the URL needs to carry access control parameters (such as hotlink protection signature).
                     */
                    std::string m_sourceMedia;
                    bool m_sourceMediaHasBeenSet;

                    /**
                     * Start time of audio segment in material file in seconds. Default value: 0, which means to start capturing from the beginning position of the material.
                     */
                    double m_sourceMediaStartTime;
                    bool m_sourceMediaStartTimeHasBeenSet;

                    /**
                     * Audio segment duration in seconds. By default, the length of the material will be used, which means that the entire material will be captured.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Operation on audio segment, such as volume adjustment.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioTransform> m_audioOperations;
                    bool m_audioOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTRACKITEM_H_
