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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_

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
                * TextToSpeech request structure.
                */
                class TextToSpeechRequest : public AbstractModel
                {
                public:
                    TextToSpeechRequest();
                    ~TextToSpeechRequest() = default;
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
                     * 获取<p>Text language. This defaults to auto-identification if left blank.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * @return TextLang <p>Text language. This defaults to auto-identification if left blank.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>Text language. This defaults to auto-identification if left blank.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     * @param _textLang <p>Text language. This defaults to auto-identification if left blank.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
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
                     * 获取<p>Output parameters.</p>
                     * @return Output <p>Output parameters.</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>Output parameters.</p>
                     * @param _output <p>Output parameters.</p>
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
                     * 获取<p>Additional parameters, json string</p><p><strong>synExt</strong> Object Text To Speech extension parameters<br>   <strong>duration</strong> Float Synthetic audio duration in seconds. No throttling period by default. For example: 5.2<br>   <strong>format</strong> String Output audio format. Default is wav. Support wav and mp3.<br>   <strong>sampleRate</strong> Integer Synthetic audio sample rate. Default is 16000. Support [8000,16000,22050,24000,32000,44100]</p>
                     * @return ExtParam <p>Additional parameters, json string</p><p><strong>synExt</strong> Object Text To Speech extension parameters<br>   <strong>duration</strong> Float Synthetic audio duration in seconds. No throttling period by default. For example: 5.2<br>   <strong>format</strong> String Output audio format. Default is wav. Support wav and mp3.<br>   <strong>sampleRate</strong> Integer Synthetic audio sample rate. Default is 16000. Support [8000,16000,22050,24000,32000,44100]</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Additional parameters, json string</p><p><strong>synExt</strong> Object Text To Speech extension parameters<br>   <strong>duration</strong> Float Synthetic audio duration in seconds. No throttling period by default. For example: 5.2<br>   <strong>format</strong> String Output audio format. Default is wav. Support wav and mp3.<br>   <strong>sampleRate</strong> Integer Synthetic audio sample rate. Default is 16000. Support [8000,16000,22050,24000,32000,44100]</p>
                     * @param _extParam <p>Additional parameters, json string</p><p><strong>synExt</strong> Object Text To Speech extension parameters<br>   <strong>duration</strong> Float Synthetic audio duration in seconds. No throttling period by default. For example: 5.2<br>   <strong>format</strong> String Output audio format. Default is wav. Support wav and mp3.<br>   <strong>sampleRate</strong> Integer Synthetic audio sample rate. Default is 16000. Support [8000,16000,22050,24000,32000,44100]</p>
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
                     * <p>Text language. This defaults to auto-identification if left blank.<br>Supported languages:<br>zh    Chinese<br>en    English<br>ja    Japanese<br>de    German<br>fr    French<br>ko    Korean<br>ru    Russian<br>uk    Ukrainian<br>pt    Portuguese<br>it    Italian<br>es    Spanish<br>id    Indonesian<br>nl    Dutch<br>tr    Turkish<br>fil    Filipino<br>ms    Malay<br>el    Greek<br>fi    Finnish<br>hr    Croatian<br>sk    Slovak<br>pl    Polish<br>sv    Swedish<br>hi    Hindi<br>bg    Bulgarian<br>ro    Romanian<br>ar    Arabic<br>cs    Czech<br>da    Danish<br>ta    Tamil<br>hun    Hungarian<br>vi    Vietnamese<br>no    Norwegian<br>yue    Cantonese<br>th    Thai<br>he    Hebrew<br>ca    Catalan<br>nn    Nynorsk<br>af    Afrikaans<br>fa    Persian<br>sl    Slovenian</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>Output parameters.</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Additional parameters, json string</p><p><strong>synExt</strong> Object Text To Speech extension parameters<br>   <strong>duration</strong> Float Synthetic audio duration in seconds. No throttling period by default. For example: 5.2<br>   <strong>format</strong> String Output audio format. Default is wav. Support wav and mp3.<br>   <strong>sampleRate</strong> Integer Synthetic audio sample rate. Default is 16000. Support [8000,16000,22050,24000,32000,44100]</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHREQUEST_H_
