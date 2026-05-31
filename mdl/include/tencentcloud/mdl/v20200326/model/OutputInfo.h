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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/Scte35SettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/TimedMetadataSettingInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Output information.
                */
                class OutputInfo : public AbstractModel
                {
                public:
                    OutputInfo();
                    ~OutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output name.
                     * @return Name Output name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Output name.
                     * @param _name Output name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio transcoding template name array.
RTMP limit [0, 1], other limits [0, 20].
                     * @return AudioTemplateNames Audio transcoding template name array.
RTMP limit [0, 1], other limits [0, 20].
                     * 
                     */
                    std::vector<std::string> GetAudioTemplateNames() const;

                    /**
                     * 设置Audio transcoding template name array.
RTMP limit [0, 1], other limits [0, 20].
                     * @param _audioTemplateNames Audio transcoding template name array.
RTMP limit [0, 1], other limits [0, 20].
                     * 
                     */
                    void SetAudioTemplateNames(const std::vector<std::string>& _audioTemplateNames);

                    /**
                     * 判断参数 AudioTemplateNames 是否已赋值
                     * @return AudioTemplateNames 是否已赋值
                     * 
                     */
                    bool AudioTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Video transcoding template name array, with the maximum number of [0, 1].
                     * @return VideoTemplateNames Video transcoding template name array, with the maximum number of [0, 1].
                     * 
                     */
                    std::vector<std::string> GetVideoTemplateNames() const;

                    /**
                     * 设置Video transcoding template name array, with the maximum number of [0, 1].
                     * @param _videoTemplateNames Video transcoding template name array, with the maximum number of [0, 1].
                     * 
                     */
                    void SetVideoTemplateNames(const std::vector<std::string>& _videoTemplateNames);

                    /**
                     * 判断参数 VideoTemplateNames 是否已赋值
                     * @return VideoTemplateNames 是否已赋值
                     * 
                     */
                    bool VideoTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Scte-35 information configuration.
                     * @return Scte35Settings Scte-35 information configuration.
                     * 
                     */
                    Scte35SettingsInfo GetScte35Settings() const;

                    /**
                     * 设置Scte-35 information configuration.
                     * @param _scte35Settings Scte-35 information configuration.
                     * 
                     */
                    void SetScte35Settings(const Scte35SettingsInfo& _scte35Settings);

                    /**
                     * 判断参数 Scte35Settings 是否已赋值
                     * @return Scte35Settings 是否已赋值
                     * 
                     */
                    bool Scte35SettingsHasBeenSet() const;

                    /**
                     * 获取Audio/video transcoding template name array, with the maximum number of 1.
                     * @return AVTemplateNames Audio/video transcoding template name array, with the maximum number of 1.
                     * 
                     */
                    std::vector<std::string> GetAVTemplateNames() const;

                    /**
                     * 设置Audio/video transcoding template name array, with the maximum number of 1.
                     * @param _aVTemplateNames Audio/video transcoding template name array, with the maximum number of 1.
                     * 
                     */
                    void SetAVTemplateNames(const std::vector<std::string>& _aVTemplateNames);

                    /**
                     * 判断参数 AVTemplateNames 是否已赋值
                     * @return AVTemplateNames 是否已赋值
                     * 
                     */
                    bool AVTemplateNamesHasBeenSet() const;

                    /**
                     * 获取The used subtitle template is only valid for merge template.
                     * @return CaptionTemplateNames The used subtitle template is only valid for merge template.
                     * 
                     */
                    std::vector<std::string> GetCaptionTemplateNames() const;

                    /**
                     * 设置The used subtitle template is only valid for merge template.
                     * @param _captionTemplateNames The used subtitle template is only valid for merge template.
                     * 
                     */
                    void SetCaptionTemplateNames(const std::vector<std::string>& _captionTemplateNames);

                    /**
                     * 判断参数 CaptionTemplateNames 是否已赋值
                     * @return CaptionTemplateNames 是否已赋值
                     * 
                     */
                    bool CaptionTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Meta-information control configuration.
                     * @return TimedMetadataSettings Meta-information control configuration.
                     * 
                     */
                    TimedMetadataSettingInfo GetTimedMetadataSettings() const;

                    /**
                     * 设置Meta-information control configuration.
                     * @param _timedMetadataSettings Meta-information control configuration.
                     * 
                     */
                    void SetTimedMetadataSettings(const TimedMetadataSettingInfo& _timedMetadataSettings);

                    /**
                     * 判断参数 TimedMetadataSettings 是否已赋值
                     * @return TimedMetadataSettings 是否已赋值
                     * 
                     */
                    bool TimedMetadataSettingsHasBeenSet() const;

                    /**
                     * 获取Screenshot transcode template name array. Limit: 1.
                     * @return FrameCaptureTemplateNames Screenshot transcode template name array. Limit: 1.
                     * 
                     */
                    std::vector<std::string> GetFrameCaptureTemplateNames() const;

                    /**
                     * 设置Screenshot transcode template name array. Limit: 1.
                     * @param _frameCaptureTemplateNames Screenshot transcode template name array. Limit: 1.
                     * 
                     */
                    void SetFrameCaptureTemplateNames(const std::vector<std::string>& _frameCaptureTemplateNames);

                    /**
                     * 判断参数 FrameCaptureTemplateNames 是否已赋值
                     * @return FrameCaptureTemplateNames 是否已赋值
                     * 
                     */
                    bool FrameCaptureTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Modify the name of the sub-m3u8.
                     * @return NameModifier Modify the name of the sub-m3u8.
                     * 
                     */
                    std::string GetNameModifier() const;

                    /**
                     * 设置Modify the name of the sub-m3u8.
                     * @param _nameModifier Modify the name of the sub-m3u8.
                     * 
                     */
                    void SetNameModifier(const std::string& _nameModifier);

                    /**
                     * 判断参数 NameModifier 是否已赋值
                     * @return NameModifier 是否已赋值
                     * 
                     */
                    bool NameModifierHasBeenSet() const;

                private:

                    /**
                     * Output name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio transcoding template name array.
RTMP limit [0, 1], other limits [0, 20].
                     */
                    std::vector<std::string> m_audioTemplateNames;
                    bool m_audioTemplateNamesHasBeenSet;

                    /**
                     * Video transcoding template name array, with the maximum number of [0, 1].
                     */
                    std::vector<std::string> m_videoTemplateNames;
                    bool m_videoTemplateNamesHasBeenSet;

                    /**
                     * Scte-35 information configuration.
                     */
                    Scte35SettingsInfo m_scte35Settings;
                    bool m_scte35SettingsHasBeenSet;

                    /**
                     * Audio/video transcoding template name array, with the maximum number of 1.
                     */
                    std::vector<std::string> m_aVTemplateNames;
                    bool m_aVTemplateNamesHasBeenSet;

                    /**
                     * The used subtitle template is only valid for merge template.
                     */
                    std::vector<std::string> m_captionTemplateNames;
                    bool m_captionTemplateNamesHasBeenSet;

                    /**
                     * Meta-information control configuration.
                     */
                    TimedMetadataSettingInfo m_timedMetadataSettings;
                    bool m_timedMetadataSettingsHasBeenSet;

                    /**
                     * Screenshot transcode template name array. Limit: 1.
                     */
                    std::vector<std::string> m_frameCaptureTemplateNames;
                    bool m_frameCaptureTemplateNamesHasBeenSet;

                    /**
                     * Modify the name of the sub-m3u8.
                     */
                    std::string m_nameModifier;
                    bool m_nameModifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_OUTPUTINFO_H_
