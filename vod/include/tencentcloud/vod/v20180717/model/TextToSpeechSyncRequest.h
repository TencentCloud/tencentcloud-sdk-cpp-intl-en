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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TextToSpeechSyncOutputOption.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * TextToSpeechSync request structure.
                */
                class TextToSpeechSyncRequest : public AbstractModel
                {
                public:
                    TextToSpeechSyncRequest();
                    ~TextToSpeechSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 bytes in length.</p>
                     * @return Text <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 bytes in length.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 bytes in length.</p>
                     * @param _text <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 bytes in length.</p>
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
                     * 获取<p>Voice Id. Fill in when synthesizing with a specified timbre. System, designed, and cloned timbres are supported.</p>
                     * @return VoiceId <p>Voice Id. Fill in when synthesizing with a specified timbre. System, designed, and cloned timbres are supported.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice Id. Fill in when synthesizing with a specified timbre. System, designed, and cloned timbres are supported.</p>
                     * @param _voiceId <p>Voice Id. Fill in when synthesizing with a specified timbre. System, designed, and cloned timbres are supported.</p>
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
                     * 获取<p>VOD application ID. Customers who activate on-demand services on or after December 25, 2023 must fill in this field with the application ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * @return SubAppId <p>VOD application ID. Customers who activate on-demand services on or after December 25, 2023 must fill in this field with the application ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<p>VOD application ID. Customers who activate on-demand services on or after December 25, 2023 must fill in this field with the application ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     * @param _subAppId <p>VOD application ID. Customers who activate on-demand services on or after December 25, 2023 must fill in this field with the application ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
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
                     * 获取<p>Output parameters.</p><p>Specifies the output format, etc. The default output audio format is URL.</p>
                     * @return Output <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio format is URL.</p>
                     * 
                     */
                    TextToSpeechSyncOutputOption GetOutput() const;

                    /**
                     * 设置<p>Output parameters.</p><p>Specifies the output format, etc. The default output audio format is URL.</p>
                     * @param _output <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio format is URL.</p>
                     * 
                     */
                    void SetOutput(const TextToSpeechSyncOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Synchronous speech synthesis expansion parameters. Fields supported by <code>ExtParam</code>:</p><ul>  <li><code>model</code> (string): Synthesis model. Options: <code>minimax-speech-2.8-hd</code>, <code>minimax-speech-2.8-turbo</code>, <code>minimax-speech-2.6-hd</code>, <code>minimax-speech-2.6-turbo</code>, <code>minimax-speech-02-hd</code>, <code>minimax-speech-02-turbo</code>. Default: <code>minimax-speech-2.8-hd</code>.</li>  <li><code>voice_setting</code> (object): Fine adjustment of voice type. Optional fields:    <ul>      <li><code>speed</code> (float): Speech speed, <code>[0.5, 2.0]</code>. Default: <code>1.0</code>.</li>      <li><code>vol</code> (float): Volume, <code>(0, 10]</code>. Default: <code>1.0</code>.</li>      <li><code>pitch</code> (int): Pitch, <code>[-12, 12]</code>. Default: <code>0</code>.</li>      <li><code>emotion</code> (string): Emotion. Options: <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>.</li>    </ul>  </li>  <li><code>audio_setting</code> (object): Audio output parameter. Optional fields:    <ul>      <li><code>sample_rate</code> (int): Sampling rate. Options: <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>. Default: <code>16000</code>.</li>      <li><code>format</code> (string): Audio format. Options: <code>mp3</code> / <code>wav</code>. Default: <code>wav</code>.</li>      <li><code>duration</code> (float): Target duration (seconds).</li>      <li><code>cut_silence</code> (bool): Whether to trim silence segments.</li>    </ul>  </li></ul>
                     * @return ExtParam <p>Synchronous speech synthesis expansion parameters. Fields supported by <code>ExtParam</code>:</p><ul>  <li><code>model</code> (string): Synthesis model. Options: <code>minimax-speech-2.8-hd</code>, <code>minimax-speech-2.8-turbo</code>, <code>minimax-speech-2.6-hd</code>, <code>minimax-speech-2.6-turbo</code>, <code>minimax-speech-02-hd</code>, <code>minimax-speech-02-turbo</code>. Default: <code>minimax-speech-2.8-hd</code>.</li>  <li><code>voice_setting</code> (object): Fine adjustment of voice type. Optional fields:    <ul>      <li><code>speed</code> (float): Speech speed, <code>[0.5, 2.0]</code>. Default: <code>1.0</code>.</li>      <li><code>vol</code> (float): Volume, <code>(0, 10]</code>. Default: <code>1.0</code>.</li>      <li><code>pitch</code> (int): Pitch, <code>[-12, 12]</code>. Default: <code>0</code>.</li>      <li><code>emotion</code> (string): Emotion. Options: <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>.</li>    </ul>  </li>  <li><code>audio_setting</code> (object): Audio output parameter. Optional fields:    <ul>      <li><code>sample_rate</code> (int): Sampling rate. Options: <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>. Default: <code>16000</code>.</li>      <li><code>format</code> (string): Audio format. Options: <code>mp3</code> / <code>wav</code>. Default: <code>wav</code>.</li>      <li><code>duration</code> (float): Target duration (seconds).</li>      <li><code>cut_silence</code> (bool): Whether to trim silence segments.</li>    </ul>  </li></ul>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Synchronous speech synthesis expansion parameters. Fields supported by <code>ExtParam</code>:</p><ul>  <li><code>model</code> (string): Synthesis model. Options: <code>minimax-speech-2.8-hd</code>, <code>minimax-speech-2.8-turbo</code>, <code>minimax-speech-2.6-hd</code>, <code>minimax-speech-2.6-turbo</code>, <code>minimax-speech-02-hd</code>, <code>minimax-speech-02-turbo</code>. Default: <code>minimax-speech-2.8-hd</code>.</li>  <li><code>voice_setting</code> (object): Fine adjustment of voice type. Optional fields:    <ul>      <li><code>speed</code> (float): Speech speed, <code>[0.5, 2.0]</code>. Default: <code>1.0</code>.</li>      <li><code>vol</code> (float): Volume, <code>(0, 10]</code>. Default: <code>1.0</code>.</li>      <li><code>pitch</code> (int): Pitch, <code>[-12, 12]</code>. Default: <code>0</code>.</li>      <li><code>emotion</code> (string): Emotion. Options: <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>.</li>    </ul>  </li>  <li><code>audio_setting</code> (object): Audio output parameter. Optional fields:    <ul>      <li><code>sample_rate</code> (int): Sampling rate. Options: <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>. Default: <code>16000</code>.</li>      <li><code>format</code> (string): Audio format. Options: <code>mp3</code> / <code>wav</code>. Default: <code>wav</code>.</li>      <li><code>duration</code> (float): Target duration (seconds).</li>      <li><code>cut_silence</code> (bool): Whether to trim silence segments.</li>    </ul>  </li></ul>
                     * @param _extParam <p>Synchronous speech synthesis expansion parameters. Fields supported by <code>ExtParam</code>:</p><ul>  <li><code>model</code> (string): Synthesis model. Options: <code>minimax-speech-2.8-hd</code>, <code>minimax-speech-2.8-turbo</code>, <code>minimax-speech-2.6-hd</code>, <code>minimax-speech-2.6-turbo</code>, <code>minimax-speech-02-hd</code>, <code>minimax-speech-02-turbo</code>. Default: <code>minimax-speech-2.8-hd</code>.</li>  <li><code>voice_setting</code> (object): Fine adjustment of voice type. Optional fields:    <ul>      <li><code>speed</code> (float): Speech speed, <code>[0.5, 2.0]</code>. Default: <code>1.0</code>.</li>      <li><code>vol</code> (float): Volume, <code>(0, 10]</code>. Default: <code>1.0</code>.</li>      <li><code>pitch</code> (int): Pitch, <code>[-12, 12]</code>. Default: <code>0</code>.</li>      <li><code>emotion</code> (string): Emotion. Options: <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>.</li>    </ul>  </li>  <li><code>audio_setting</code> (object): Audio output parameter. Optional fields:    <ul>      <li><code>sample_rate</code> (int): Sampling rate. Options: <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>. Default: <code>16000</code>.</li>      <li><code>format</code> (string): Audio format. Options: <code>mp3</code> / <code>wav</code>. Default: <code>wav</code>.</li>      <li><code>duration</code> (float): Target duration (seconds).</li>      <li><code>cut_silence</code> (bool): Whether to trim silence segments.</li>    </ul>  </li></ul>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 bytes in length.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Voice Id. Fill in when synthesizing with a specified timbre. System, designed, and cloned timbres are supported.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>VOD application ID. Customers who activate on-demand services on or after December 25, 2023 must fill in this field with the application ID when accessing resources in VOD applications, whether in the default application or a newly created application.</p>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Language enhancement, such as "zh" "en" "auto", default "auto"</p>
                     */
                    std::string m_languageBoost;
                    bool m_languageBoostHasBeenSet;

                    /**
                     * <p>Output parameters.</p><p>Specifies the output format, etc. The default output audio format is URL.</p>
                     */
                    TextToSpeechSyncOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Synchronous speech synthesis expansion parameters. Fields supported by <code>ExtParam</code>:</p><ul>  <li><code>model</code> (string): Synthesis model. Options: <code>minimax-speech-2.8-hd</code>, <code>minimax-speech-2.8-turbo</code>, <code>minimax-speech-2.6-hd</code>, <code>minimax-speech-2.6-turbo</code>, <code>minimax-speech-02-hd</code>, <code>minimax-speech-02-turbo</code>. Default: <code>minimax-speech-2.8-hd</code>.</li>  <li><code>voice_setting</code> (object): Fine adjustment of voice type. Optional fields:    <ul>      <li><code>speed</code> (float): Speech speed, <code>[0.5, 2.0]</code>. Default: <code>1.0</code>.</li>      <li><code>vol</code> (float): Volume, <code>(0, 10]</code>. Default: <code>1.0</code>.</li>      <li><code>pitch</code> (int): Pitch, <code>[-12, 12]</code>. Default: <code>0</code>.</li>      <li><code>emotion</code> (string): Emotion. Options: <code>happy</code> / <code>sad</code> / <code>angry</code> / <code>fearful</code> / <code>disgusted</code> / <code>surprised</code> / <code>calm</code> / <code>fluent</code> / <code>whisper</code>.</li>    </ul>  </li>  <li><code>audio_setting</code> (object): Audio output parameter. Optional fields:    <ul>      <li><code>sample_rate</code> (int): Sampling rate. Options: <code>8000</code> / <code>16000</code> / <code>22050</code> / <code>24000</code> / <code>32000</code> / <code>44100</code>. Default: <code>16000</code>.</li>      <li><code>format</code> (string): Audio format. Options: <code>mp3</code> / <code>wav</code>. Default: <code>wav</code>.</li>      <li><code>duration</code> (float): Target duration (seconds).</li>      <li><code>cut_silence</code> (bool): Whether to trim silence segments.</li>    </ul>  </li></ul>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCREQUEST_H_
