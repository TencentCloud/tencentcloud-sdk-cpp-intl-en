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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing task configuration
                */
                class DubbingConfig : public AbstractModel
                {
                public:
                    DubbingConfig();
                    ~DubbingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Dubbing type. Available values: FullAutoEmotionClone: fully automated high-emotion clone dubbing; RoleBasedSmartDubbing: intelligent dubbing by role; SingleVoice: specify a single voice type;</p>
                     * @return DubbingMode <p>Dubbing type. Available values: FullAutoEmotionClone: fully automated high-emotion clone dubbing; RoleBasedSmartDubbing: intelligent dubbing by role; SingleVoice: specify a single voice type;</p>
                     * 
                     */
                    std::string GetDubbingMode() const;

                    /**
                     * 设置<p>Dubbing type. Available values: FullAutoEmotionClone: fully automated high-emotion clone dubbing; RoleBasedSmartDubbing: intelligent dubbing by role; SingleVoice: specify a single voice type;</p>
                     * @param _dubbingMode <p>Dubbing type. Available values: FullAutoEmotionClone: fully automated high-emotion clone dubbing; RoleBasedSmartDubbing: intelligent dubbing by role; SingleVoice: specify a single voice type;</p>
                     * 
                     */
                    void SetDubbingMode(const std::string& _dubbingMode);

                    /**
                     * 判断参数 DubbingMode 是否已赋值
                     * @return DubbingMode 是否已赋值
                     * 
                     */
                    bool DubbingModeHasBeenSet() const;

                    /**
                     * 获取<p>Background sound volume, range: 0-100</p><p>Default value: 80</p>
                     * @return BackgroundVolume <p>Background sound volume, range: 0-100</p><p>Default value: 80</p>
                     * 
                     */
                    int64_t GetBackgroundVolume() const;

                    /**
                     * 设置<p>Background sound volume, range: 0-100</p><p>Default value: 80</p>
                     * @param _backgroundVolume <p>Background sound volume, range: 0-100</p><p>Default value: 80</p>
                     * 
                     */
                    void SetBackgroundVolume(const int64_t& _backgroundVolume);

                    /**
                     * 判断参数 BackgroundVolume 是否已赋值
                     * @return BackgroundVolume 是否已赋值
                     * 
                     */
                    bool BackgroundVolumeHasBeenSet() const;

                    /**
                     * 获取<p>Secondary fine-tuning switch. Available values: <br>ON: enable secondary fine-tuning; <br>OFF: disable secondary fine-tuning;</p><p>Default value: OFF</p><p>It can be set to ON only for RoleBasedSmartDubbing.</p>
                     * @return SecondaryTuning <p>Secondary fine-tuning switch. Available values: <br>ON: enable secondary fine-tuning; <br>OFF: disable secondary fine-tuning;</p><p>Default value: OFF</p><p>It can be set to ON only for RoleBasedSmartDubbing.</p>
                     * 
                     */
                    std::string GetSecondaryTuning() const;

                    /**
                     * 设置<p>Secondary fine-tuning switch. Available values: <br>ON: enable secondary fine-tuning; <br>OFF: disable secondary fine-tuning;</p><p>Default value: OFF</p><p>It can be set to ON only for RoleBasedSmartDubbing.</p>
                     * @param _secondaryTuning <p>Secondary fine-tuning switch. Available values: <br>ON: enable secondary fine-tuning; <br>OFF: disable secondary fine-tuning;</p><p>Default value: OFF</p><p>It can be set to ON only for RoleBasedSmartDubbing.</p>
                     * 
                     */
                    void SetSecondaryTuning(const std::string& _secondaryTuning);

                    /**
                     * 判断参数 SecondaryTuning 是否已赋值
                     * @return SecondaryTuning 是否已赋值
                     * 
                     */
                    bool SecondaryTuningHasBeenSet() const;

                    /**
                     * 获取<p>Specify voice tone</p><p>Valid only for SingleVoice and required for Create</p>
                     * @return VoiceId <p>Specify voice tone</p><p>Valid only for SingleVoice and required for Create</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Specify voice tone</p><p>Valid only for SingleVoice and required for Create</p>
                     * @param _voiceId <p>Specify voice tone</p><p>Valid only for SingleVoice and required for Create</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Dubbing version. Available values: v1, v2</p><p>Default value: v2</p><p>Only takes effect in FullAutoEmotionClone (fully automated high-emotion clone dubbing) mode</p>
                     * @return DubbingVersion <p>Dubbing version. Available values: v1, v2</p><p>Default value: v2</p><p>Only takes effect in FullAutoEmotionClone (fully automated high-emotion clone dubbing) mode</p>
                     * 
                     */
                    std::string GetDubbingVersion() const;

                    /**
                     * 设置<p>Dubbing version. Available values: v1, v2</p><p>Default value: v2</p><p>Only takes effect in FullAutoEmotionClone (fully automated high-emotion clone dubbing) mode</p>
                     * @param _dubbingVersion <p>Dubbing version. Available values: v1, v2</p><p>Default value: v2</p><p>Only takes effect in FullAutoEmotionClone (fully automated high-emotion clone dubbing) mode</p>
                     * 
                     */
                    void SetDubbingVersion(const std::string& _dubbingVersion);

                    /**
                     * 判断参数 DubbingVersion 是否已赋值
                     * @return DubbingVersion 是否已赋值
                     * 
                     */
                    bool DubbingVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Dubbing type. Available values: FullAutoEmotionClone: fully automated high-emotion clone dubbing; RoleBasedSmartDubbing: intelligent dubbing by role; SingleVoice: specify a single voice type;</p>
                     */
                    std::string m_dubbingMode;
                    bool m_dubbingModeHasBeenSet;

                    /**
                     * <p>Background sound volume, range: 0-100</p><p>Default value: 80</p>
                     */
                    int64_t m_backgroundVolume;
                    bool m_backgroundVolumeHasBeenSet;

                    /**
                     * <p>Secondary fine-tuning switch. Available values: <br>ON: enable secondary fine-tuning; <br>OFF: disable secondary fine-tuning;</p><p>Default value: OFF</p><p>It can be set to ON only for RoleBasedSmartDubbing.</p>
                     */
                    std::string m_secondaryTuning;
                    bool m_secondaryTuningHasBeenSet;

                    /**
                     * <p>Specify voice tone</p><p>Valid only for SingleVoice and required for Create</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Dubbing version. Available values: v1, v2</p><p>Default value: v2</p><p>Only takes effect in FullAutoEmotionClone (fully automated high-emotion clone dubbing) mode</p>
                     */
                    std::string m_dubbingVersion;
                    bool m_dubbingVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGCONFIG_H_
