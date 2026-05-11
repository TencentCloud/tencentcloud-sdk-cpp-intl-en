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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingOutputOption.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SyncDubbing request structure.
                */
                class SyncDubbingRequest : public AbstractModel
                {
                public:
                    SyncDubbingRequest();
                    ~SyncDubbingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.</p>
                     * @return Text <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.</p>
                     * @param _text <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.</p>
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
                     * 获取<p>Text language. This defaults to Chinese if left empty.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * @return TextLang <p>Text language. This defaults to Chinese if left empty.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>Text language. This defaults to Chinese if left empty.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * @param _textLang <p>Text language. This defaults to Chinese if left empty.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * 
                     */
                    void SetTextLang(const std::string& _textLang);

                    /**
                     * 判断参数 TextLang 是否已赋值
                     * @return TextLang 是否已赋值
                     * 
                     */
                    bool TextLangHasBeenSet() const;

                    /**
                     * 获取<p>Voice ID. This is required for synthesis with a specific voice. System voice and voice cloning are supported.</p>
                     * @return VoiceId <p>Voice ID. This is required for synthesis with a specific voice. System voice and voice cloning are supported.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID. This is required for synthesis with a specific voice. System voice and voice cloning are supported.</p>
                     * @param _voiceId <p>Voice ID. This is required for synthesis with a specific voice. System voice and voice cloning are supported.</p>
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
                     * 获取<p>Base64-encoded audio for cloning.</p>
                     * @return AudioData <p>Base64-encoded audio for cloning.</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>Base64-encoded audio for cloning.</p>
                     * @param _audioData <p>Base64-encoded audio for cloning.</p>
                     * 
                     */
                    void SetAudioData(const std::string& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @return AudioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @param _audioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Cloning audio language. The default language is Chinese. <br>Supported languages are the same as those for TextLang.</p>
                     * @return AudioLang <p>Cloning audio language. The default language is Chinese. <br>Supported languages are the same as those for TextLang.</p>
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置<p>Cloning audio language. The default language is Chinese. <br>Supported languages are the same as those for TextLang.</p>
                     * @param _audioLang <p>Cloning audio language. The default language is Chinese. <br>Supported languages are the same as those for TextLang.</p>
                     * 
                     */
                    void SetAudioLang(const std::string& _audioLang);

                    /**
                     * 判断参数 AudioLang 是否已赋值
                     * @return AudioLang 是否已赋值
                     * 
                     */
                    bool AudioLangHasBeenSet() const;

                    /**
                     * 获取<p>Output parameters.</p><p>Specifies the output format, etc.</p>
                     * @return Output <p>Output parameters.</p><p>Specifies the output format, etc.</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>Output parameters.</p><p>Specifies the output format, etc.</p>
                     * @param _output <p>Output parameters.</p><p>Specifies the output format, etc.</p>
                     * 
                     */
                    void SetOutput(const SyncDubbingOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p><p>‑ synExt (Object): Speech synthesis extension parameter.<br>- duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>- sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br> pitch (Integer): -Pitch. Default value: 0 (original voice output). Valid values: [-12, 12].<br>‑ cloneExt (Object): Voice cloning extension parameter.<br>    - timeRanges (Float[][]): Specifies the time ranges for audio cloning. Default value: [[0, 20]]. Example: [[5.2, 10], [45, 59.8]].</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p><p>‑ synExt (Object): Speech synthesis extension parameter.<br>- duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>- sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br> pitch (Integer): -Pitch. Default value: 0 (original voice output). Valid values: [-12, 12].<br>‑ cloneExt (Object): Voice cloning extension parameter.<br>    - timeRanges (Float[][]): Specifies the time ranges for audio cloning. Default value: [[0, 20]]. Example: [[5.2, 10], [45, 59.8]].</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p><p>‑ synExt (Object): Speech synthesis extension parameter.<br>- duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>- sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br> pitch (Integer): -Pitch. Default value: 0 (original voice output). Valid values: [-12, 12].<br>‑ cloneExt (Object): Voice cloning extension parameter.<br>    - timeRanges (Float[][]): Specifies the time ranges for audio cloning. Default value: [[0, 20]]. Example: [[5.2, 10], [45, 59.8]].</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p><p>‑ synExt (Object): Speech synthesis extension parameter.<br>- duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>- sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br> pitch (Integer): -Pitch. Default value: 0 (original voice output). Valid values: [-12, 12].<br>‑ cloneExt (Object): Voice cloning extension parameter.<br>    - timeRanges (Float[][]): Specifies the time ranges for audio cloning. Default value: [[0, 20]]. Example: [[5.2, 10], [45, 59.8]].</p>
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
                     * <p>Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Text language. This defaults to Chinese if left empty.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>Voice ID. This is required for synthesis with a specific voice. System voice and voice cloning are supported.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Base64-encoded audio for cloning.</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Cloning audio language. The default language is Chinese. <br>Supported languages are the same as those for TextLang.</p>
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * <p>Output parameters.</p><p>Specifies the output format, etc.</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p><p>‑ synExt (Object): Speech synthesis extension parameter.<br>- duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>- sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br> pitch (Integer): -Pitch. Default value: 0 (original voice output). Valid values: [-12, 12].<br>‑ cloneExt (Object): Voice cloning extension parameter.<br>    - timeRanges (Float[][]): Specifies the time ranges for audio cloning. Default value: [[0, 20]]. Example: [[5.2, 10], [45, 59.8]].</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_
