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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * VoiceClone request structure.
                */
                class VoiceCloneRequest : public AbstractModel
                {
                public:
                    VoiceCloneRequest();
                    ~VoiceCloneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the SdkAppId of TRTC.
                     * @return SdkAppId Specifies the SdkAppId of TRTC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Specifies the SdkAppId of TRTC.
                     * @param _sdkAppId Specifies the SdkAppId of TRTC.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Sound clone name. only digits, letters, and underscores are allowed with a maximum of 36 characters.
                     * @return VoiceName Sound clone name. only digits, letters, and underscores are allowed with a maximum of 36 characters.
                     * 
                     */
                    std::string GetVoiceName() const;

                    /**
                     * 设置Sound clone name. only digits, letters, and underscores are allowed with a maximum of 36 characters.
                     * @param _voiceName Sound clone name. only digits, letters, and underscores are allowed with a maximum of 36 characters.
                     * 
                     */
                    void SetVoiceName(const std::string& _voiceName);

                    /**
                     * 判断参数 VoiceName 是否已赋值
                     * @return VoiceName 是否已赋值
                     * 
                     */
                    bool VoiceNameHasBeenSet() const;

                    /**
                     * 获取The reference audio for voice cloning must be a base64 string of a 16k mono wav file with length between 10–180 seconds.
                     * @return PromptAudio The reference audio for voice cloning must be a base64 string of a 16k mono wav file with length between 10–180 seconds.
                     * 
                     */
                    std::string GetPromptAudio() const;

                    /**
                     * 设置The reference audio for voice cloning must be a base64 string of a 16k mono wav file with length between 10–180 seconds.
                     * @param _promptAudio The reference audio for voice cloning must be a base64 string of a 16k mono wav file with length between 10–180 seconds.
                     * 
                     */
                    void SetPromptAudio(const std::string& _promptAudio);

                    /**
                     * 判断参数 PromptAudio 是否已赋值
                     * @return PromptAudio 是否已赋值
                     * 
                     */
                    bool PromptAudioHasBeenSet() const;

                    /**
                     * 获取API key for TTS.
                     * @return APIKey API key for TTS.
                     * @deprecated
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置API key for TTS.
                     * @param _aPIKey API key for TTS.
                     * @deprecated
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * @deprecated
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取Reference text for voice cloning. specifies the text corresponding to the reference audio.
                     * @return PromptText Reference text for voice cloning. specifies the text corresponding to the reference audio.
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置Reference text for voice cloning. specifies the text corresponding to the reference audio.
                     * @param _promptText Reference text for voice cloning. specifies the text corresponding to the reference audio.
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取TTS model: flow_01_turbo, flow_01_ex.
                     * @return Model TTS model: flow_01_turbo, flow_01_ex.
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置TTS model: flow_01_turbo, flow_01_ex.
                     * @param _model TTS model: flow_01_turbo, flow_01_ex.
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
                     * 获取Language parameter, empty by default. see: (ISO 639-1).
                     * @return Language Language parameter, empty by default. see: (ISO 639-1).
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Language parameter, empty by default. see: (ISO 639-1).
                     * @param _language Language parameter, empty by default. see: (ISO 639-1).
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                private:

                    /**
                     * Specifies the SdkAppId of TRTC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Sound clone name. only digits, letters, and underscores are allowed with a maximum of 36 characters.
                     */
                    std::string m_voiceName;
                    bool m_voiceNameHasBeenSet;

                    /**
                     * The reference audio for voice cloning must be a base64 string of a 16k mono wav file with length between 10–180 seconds.
                     */
                    std::string m_promptAudio;
                    bool m_promptAudioHasBeenSet;

                    /**
                     * API key for TTS.
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * Reference text for voice cloning. specifies the text corresponding to the reference audio.
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * TTS model: flow_01_turbo, flow_01_ex.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Language parameter, empty by default. see: (ISO 639-1).
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECLONEREQUEST_H_
