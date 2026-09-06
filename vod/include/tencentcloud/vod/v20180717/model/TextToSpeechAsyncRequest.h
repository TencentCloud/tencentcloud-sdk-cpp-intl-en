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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncOutputOption.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * TextToSpeechAsync request structure.
                */
                class TextToSpeechAsyncRequest : public AbstractModel
                {
                public:
                    TextToSpeechAsyncRequest();
                    ~TextToSpeechAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Text to convert to speech.</p>
                     * @return Text <p>Text to convert to speech.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text to convert to speech.</p>
                     * @param _text <p>Text to convert to speech.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Voice ID.</p>
                     * @return VoiceId <p>Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID.</p>
                     * @param _voiceId <p>Voice ID.</p>
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
                     * 获取<p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * @return SubAppId <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * @param _subAppId <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * @return LanguageBoost <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * 
                     */
                    std::string GetLanguageBoost() const;

                    /**
                     * 设置<p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * @param _languageBoost <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     * 
                     */
                    void SetLanguageBoost(const std::string& _languageBoost);

                    /**
                     * 判断参数 LanguageBoost 是否已赋值
                     * @return LanguageBoost 是否已赋值
                     * 
                     */
                    bool LanguageBoostHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters for text-to-speech (async). Fields supported by ExtParam:</p><ul><li>model (string): Synthesis model. Options: minimax-speech-2.8-hd, minimax-speech-2.8-turbo, minimax-speech-2.6-hd, minimax-speech-2.6-turbo, minimax-speech-02-hd, minimax-speech-02-turbo. Default: minimax-speech-2.8-hd.</li><li>text_lang (string): Text language, for example zh / en. Synonymous with the input parameter LanguageBoost. If both are passed, ExtParam takes precedence.</li><li>audio_setting (object): Audio output and voice type fine-tuning parameters. Note: For the async API, speaking rate, volume, pitch, and emotion are all under audio_setting, different from the voice_setting of the synchronous API. Optional fields:<ul><li>speed (float): Speaking rate, [0.5, 2.0]. Default: 1.0.</li><li>vol (float): Volume, (0, 10]. Default: 1.0.</li><li>pitch (int): Pitch, [-12, 12]. Default: 0.</li><li>emotion (string): Emotion. Options: happy, sad, angry, fearful, disgusted, surprised, calm, fluent, whisper.</li><li>sample_rate (int): Sampling rate. Options: 8000, 16000, 22050, 24000, 32000, 44100. Default: 16000.</li><li>format (string): Audio format. Options: mp3, wav. Default: wav.</li><li>duration (float): Target duration in seconds.</li><li>cut_silence (bool): Whether to trim silent segments.</li></ul></li></ul>
                     * @return ExtParam <p>Extended parameters for text-to-speech (async). Fields supported by ExtParam:</p><ul><li>model (string): Synthesis model. Options: minimax-speech-2.8-hd, minimax-speech-2.8-turbo, minimax-speech-2.6-hd, minimax-speech-2.6-turbo, minimax-speech-02-hd, minimax-speech-02-turbo. Default: minimax-speech-2.8-hd.</li><li>text_lang (string): Text language, for example zh / en. Synonymous with the input parameter LanguageBoost. If both are passed, ExtParam takes precedence.</li><li>audio_setting (object): Audio output and voice type fine-tuning parameters. Note: For the async API, speaking rate, volume, pitch, and emotion are all under audio_setting, different from the voice_setting of the synchronous API. Optional fields:<ul><li>speed (float): Speaking rate, [0.5, 2.0]. Default: 1.0.</li><li>vol (float): Volume, (0, 10]. Default: 1.0.</li><li>pitch (int): Pitch, [-12, 12]. Default: 0.</li><li>emotion (string): Emotion. Options: happy, sad, angry, fearful, disgusted, surprised, calm, fluent, whisper.</li><li>sample_rate (int): Sampling rate. Options: 8000, 16000, 22050, 24000, 32000, 44100. Default: 16000.</li><li>format (string): Audio format. Options: mp3, wav. Default: wav.</li><li>duration (float): Target duration in seconds.</li><li>cut_silence (bool): Whether to trim silent segments.</li></ul></li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters for text-to-speech (async). Fields supported by ExtParam:</p><ul><li>model (string): Synthesis model. Options: minimax-speech-2.8-hd, minimax-speech-2.8-turbo, minimax-speech-2.6-hd, minimax-speech-2.6-turbo, minimax-speech-02-hd, minimax-speech-02-turbo. Default: minimax-speech-2.8-hd.</li><li>text_lang (string): Text language, for example zh / en. Synonymous with the input parameter LanguageBoost. If both are passed, ExtParam takes precedence.</li><li>audio_setting (object): Audio output and voice type fine-tuning parameters. Note: For the async API, speaking rate, volume, pitch, and emotion are all under audio_setting, different from the voice_setting of the synchronous API. Optional fields:<ul><li>speed (float): Speaking rate, [0.5, 2.0]. Default: 1.0.</li><li>vol (float): Volume, (0, 10]. Default: 1.0.</li><li>pitch (int): Pitch, [-12, 12]. Default: 0.</li><li>emotion (string): Emotion. Options: happy, sad, angry, fearful, disgusted, surprised, calm, fluent, whisper.</li><li>sample_rate (int): Sampling rate. Options: 8000, 16000, 22050, 24000, 32000, 44100. Default: 16000.</li><li>format (string): Audio format. Options: mp3, wav. Default: wav.</li><li>duration (float): Target duration in seconds.</li><li>cut_silence (bool): Whether to trim silent segments.</li></ul></li></ul>
                     * @param _extParam <p>Extended parameters for text-to-speech (async). Fields supported by ExtParam:</p><ul><li>model (string): Synthesis model. Options: minimax-speech-2.8-hd, minimax-speech-2.8-turbo, minimax-speech-2.6-hd, minimax-speech-2.6-turbo, minimax-speech-02-hd, minimax-speech-02-turbo. Default: minimax-speech-2.8-hd.</li><li>text_lang (string): Text language, for example zh / en. Synonymous with the input parameter LanguageBoost. If both are passed, ExtParam takes precedence.</li><li>audio_setting (object): Audio output and voice type fine-tuning parameters. Note: For the async API, speaking rate, volume, pitch, and emotion are all under audio_setting, different from the voice_setting of the synchronous API. Optional fields:<ul><li>speed (float): Speaking rate, [0.5, 2.0]. Default: 1.0.</li><li>vol (float): Volume, (0, 10]. Default: 1.0.</li><li>pitch (int): Pitch, [-12, 12]. Default: 0.</li><li>emotion (string): Emotion. Options: happy, sad, angry, fearful, disgusted, surprised, calm, fluent, whisper.</li><li>sample_rate (int): Sampling rate. Options: 8000, 16000, 22050, 24000, 32000, 44100. Default: 16000.</li><li>format (string): Audio format. Options: mp3, wav. Default: wav.</li><li>duration (float): Target duration in seconds.</li><li>cut_silence (bool): Whether to trim silent segments.</li></ul></li></ul>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                    /**
                     * 获取<p>Output parameters.</p><p>Specifies the output format, etc. The default output audio url.</p>
                     * @return Output <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio url.</p>
                     * 
                     */
                    TextToSpeechAsyncOutputOption GetOutput() const;

                    /**
                     * 设置<p>Output parameters.</p><p>Specifies the output format, etc. The default output audio url.</p>
                     * @param _output <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio url.</p>
                     * 
                     */
                    void SetOutput(const TextToSpeechAsyncOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * @return SessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * @param _sessionId <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>Text to convert to speech.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>VOD application ID. For customers who activate on-demand services on or after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications, whether in the default application or a newly created application.</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p>Extended parameters for text-to-speech (async). Fields supported by ExtParam:</p><ul><li>model (string): Synthesis model. Options: minimax-speech-2.8-hd, minimax-speech-2.8-turbo, minimax-speech-2.6-hd, minimax-speech-2.6-turbo, minimax-speech-02-hd, minimax-speech-02-turbo. Default: minimax-speech-2.8-hd.</li><li>text_lang (string): Text language, for example zh / en. Synonymous with the input parameter LanguageBoost. If both are passed, ExtParam takes precedence.</li><li>audio_setting (object): Audio output and voice type fine-tuning parameters. Note: For the async API, speaking rate, volume, pitch, and emotion are all under audio_setting, different from the voice_setting of the synchronous API. Optional fields:<ul><li>speed (float): Speaking rate, [0.5, 2.0]. Default: 1.0.</li><li>vol (float): Volume, (0, 10]. Default: 1.0.</li><li>pitch (int): Pitch, [-12, 12]. Default: 0.</li><li>emotion (string): Emotion. Options: happy, sad, angry, fearful, disgusted, surprised, calm, fluent, whisper.</li><li>sample_rate (int): Sampling rate. Options: 8000, 16000, 22050, 24000, 32000, 44100. Default: 16000.</li><li>format (string): Audio format. Options: mp3, wav. Default: wav.</li><li>duration (float): Target duration in seconds.</li><li>cut_silence (bool): Whether to trim silent segments.</li></ul></li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                    /**
                     * <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio url.</p>
                     */
                    TextToSpeechAsyncOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Identifies the source context. This is used to pass user request information. The value of this field will be returned in callbacks and task flow status change callbacks. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identification Code for Task Deduplication. If a request with the same identification code has been sent within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, it indicates no deduplication.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
