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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionUserInfoParams.h>
#include <tencentcloud/trtc/v20190722/model/TTSVoice.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Transcription TTS parameter
                */
                class TTSParam : public AbstractModel
                {
                public:
                    TTSParam();
                    ~TTSParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>TTS model</p>
                     * @return Model <p>TTS model</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>TTS model</p>
                     * @param _model <p>TTS model</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>TTS language must be in the TargetLang list of TranslationParam.</p>
                     * @return Language <p>TTS language must be in the TargetLang list of TranslationParam.</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>TTS language must be in the TargetLang list of TranslationParam.</p>
                     * @param _language <p>TTS language must be in the TargetLang list of TranslationParam.</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>The user requesting TTS playback. They must be on the subscription allowlist and not on the blocklist.</p>
                     * @return TargetUser <p>The user requesting TTS playback. They must be on the subscription allowlist and not on the blocklist.</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTargetUser() const;

                    /**
                     * 设置<p>The user requesting TTS playback. They must be on the subscription allowlist and not on the blocklist.</p>
                     * @param _targetUser <p>The user requesting TTS playback. They must be on the subscription allowlist and not on the blocklist.</p>
                     * 
                     */
                    void SetTargetUser(const TranscriptionUserInfoParams& _targetUser);

                    /**
                     * 判断参数 TargetUser 是否已赋值
                     * @return TargetUser 是否已赋值
                     * 
                     */
                    bool TargetUserHasBeenSet() const;

                    /**
                     * 获取<p>The robot user that pushes TTS audio back into the room.</p>
                     * @return TTSRobotUser <p>The robot user that pushes TTS audio back into the room.</p>
                     * 
                     */
                    TranscriptionUserInfoParams GetTTSRobotUser() const;

                    /**
                     * 设置<p>The robot user that pushes TTS audio back into the room.</p>
                     * @param _tTSRobotUser <p>The robot user that pushes TTS audio back into the room.</p>
                     * 
                     */
                    void SetTTSRobotUser(const TranscriptionUserInfoParams& _tTSRobotUser);

                    /**
                     * 判断参数 TTSRobotUser 是否已赋值
                     * @return TTSRobotUser 是否已赋值
                     * 
                     */
                    bool TTSRobotUserHasBeenSet() const;

                    /**
                     * 获取<p>TTS configuration parameters.</p>
                     * @return Voice <p>TTS configuration parameters.</p>
                     * 
                     */
                    TTSVoice GetVoice() const;

                    /**
                     * 设置<p>TTS configuration parameters.</p>
                     * @param _voice <p>TTS configuration parameters.</p>
                     * 
                     */
                    void SetVoice(const TTSVoice& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                private:

                    /**
                     * <p>TTS model</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>TTS language must be in the TargetLang list of TranslationParam.</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>The user requesting TTS playback. They must be on the subscription allowlist and not on the blocklist.</p>
                     */
                    TranscriptionUserInfoParams m_targetUser;
                    bool m_targetUserHasBeenSet;

                    /**
                     * <p>The robot user that pushes TTS audio back into the room.</p>
                     */
                    TranscriptionUserInfoParams m_tTSRobotUser;
                    bool m_tTSRobotUserHasBeenSet;

                    /**
                     * <p>TTS configuration parameters.</p>
                     */
                    TTSVoice m_voice;
                    bool m_voiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TTSPARAM_H_
