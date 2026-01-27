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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Reference.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ChatTranslations request structure.
                */
                class ChatTranslationsRequest : public AbstractModel
                {
                public:
                    ChatTranslationsRequest();
                    ~ChatTranslationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Model name. optional values include hunyuan-translation.
Please read the introduction in [the product overview](https://www.tencentcloud.com/document/product/1284/75277) for model descriptions.

Note:
Different models have different pricing. according to [the purchase guide](https://www.tencentcloud.com/document/product/1284/77186), call as needed.
                     * @return Model Model name. optional values include hunyuan-translation.
Please read the introduction in [the product overview](https://www.tencentcloud.com/document/product/1284/75277) for model descriptions.

Note:
Different models have different pricing. according to [the purchase guide](https://www.tencentcloud.com/document/product/1284/77186), call as needed.
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置Model name. optional values include hunyuan-translation.
Please read the introduction in [the product overview](https://www.tencentcloud.com/document/product/1284/75277) for model descriptions.

Note:
Different models have different pricing. according to [the purchase guide](https://www.tencentcloud.com/document/product/1284/77186), call as needed.
                     * @param _model Model name. optional values include hunyuan-translation.
Please read the introduction in [the product overview](https://www.tencentcloud.com/document/product/1284/75277) for model descriptions.

Note:
Different models have different pricing. according to [the purchase guide](https://www.tencentcloud.com/document/product/1284/77186), call as needed.
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
                     * 获取Streaming call switch.
Note:.
1. it defaults to non-streaming (false) when no value is passed.
2. for streaming calls, the results are incrementally returned via the SSE protocol (the return value is taken from Choices[n].Delta, and incremental data must be concatenated to obtain the complete result).
3. for non-streaming calls:.
The calling method is the same as an ordinary HTTP request.
The API response is time-consuming. if needed, set it to true for reduced latency.
Only return the final result once (return value takes the value from Choices[n].Message).

Note:.
When making an SDK call, streaming and non-streaming calls require **different ways** to obtain the return value. refer to the comments or sample code in the SDK (in the examples/hunyuan/v20230901/ directory of each language SDK code repository).
                     * @return Stream Streaming call switch.
Note:.
1. it defaults to non-streaming (false) when no value is passed.
2. for streaming calls, the results are incrementally returned via the SSE protocol (the return value is taken from Choices[n].Delta, and incremental data must be concatenated to obtain the complete result).
3. for non-streaming calls:.
The calling method is the same as an ordinary HTTP request.
The API response is time-consuming. if needed, set it to true for reduced latency.
Only return the final result once (return value takes the value from Choices[n].Message).

Note:.
When making an SDK call, streaming and non-streaming calls require **different ways** to obtain the return value. refer to the comments or sample code in the SDK (in the examples/hunyuan/v20230901/ directory of each language SDK code repository).
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置Streaming call switch.
Note:.
1. it defaults to non-streaming (false) when no value is passed.
2. for streaming calls, the results are incrementally returned via the SSE protocol (the return value is taken from Choices[n].Delta, and incremental data must be concatenated to obtain the complete result).
3. for non-streaming calls:.
The calling method is the same as an ordinary HTTP request.
The API response is time-consuming. if needed, set it to true for reduced latency.
Only return the final result once (return value takes the value from Choices[n].Message).

Note:.
When making an SDK call, streaming and non-streaming calls require **different ways** to obtain the return value. refer to the comments or sample code in the SDK (in the examples/hunyuan/v20230901/ directory of each language SDK code repository).
                     * @param _stream Streaming call switch.
Note:.
1. it defaults to non-streaming (false) when no value is passed.
2. for streaming calls, the results are incrementally returned via the SSE protocol (the return value is taken from Choices[n].Delta, and incremental data must be concatenated to obtain the complete result).
3. for non-streaming calls:.
The calling method is the same as an ordinary HTTP request.
The API response is time-consuming. if needed, set it to true for reduced latency.
Only return the final result once (return value takes the value from Choices[n].Message).

Note:.
When making an SDK call, streaming and non-streaming calls require **different ways** to obtain the return value. refer to the comments or sample code in the SDK (in the examples/hunyuan/v20230901/ directory of each language SDK code repository).
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取Text to be translated.
                     * @return Text Text to be translated.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text to be translated.
                     * @param _text Text to be translated.
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
                     * 获取Source language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * @return Source Source language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * @param _source Source language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Target language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * @return Target Target language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * @param _target Target language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Domain of the text to be translated, such as game plot.
                     * @return Field Domain of the text to be translated, such as game plot.
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置Domain of the text to be translated, such as game plot.
                     * @param _field Domain of the text to be translated, such as game plot.
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Reference example, up to 10.
                     * @return References Reference example, up to 10.
                     * 
                     */
                    std::vector<Reference> GetReferences() const;

                    /**
                     * 设置Reference example, up to 10.
                     * @param _references Reference example, up to 10.
                     * 
                     */
                    void SetReferences(const std::vector<Reference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                private:

                    /**
                     * Model name. optional values include hunyuan-translation.
Please read the introduction in [the product overview](https://www.tencentcloud.com/document/product/1284/75277) for model descriptions.

Note:
Different models have different pricing. according to [the purchase guide](https://www.tencentcloud.com/document/product/1284/77186), call as needed.
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Streaming call switch.
Note:.
1. it defaults to non-streaming (false) when no value is passed.
2. for streaming calls, the results are incrementally returned via the SSE protocol (the return value is taken from Choices[n].Delta, and incremental data must be concatenated to obtain the complete result).
3. for non-streaming calls:.
The calling method is the same as an ordinary HTTP request.
The API response is time-consuming. if needed, set it to true for reduced latency.
Only return the final result once (return value takes the value from Choices[n].Message).

Note:.
When making an SDK call, streaming and non-streaming calls require **different ways** to obtain the return value. refer to the comments or sample code in the SDK (in the examples/hunyuan/v20230901/ directory of each language SDK code repository).
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * Text to be translated.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Source language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Target language.
Supported language list:. 
Simplified chinese: zh, traditional chinese: zh-TR, cantonese: yue, english: en, french: fr, portuguese: pt, spanish: es, japanese: ja, turkish: TR, russian: ru, arabic: ar, korean: ko, thai: th, italian: it, german: de, vietnamese: vi, malay: ms, indonesian: id.
The following languages are supported only by the hunyuan-translation model:.
Filipino: fil, hindi: hi, polish: pl, czech: cs, dutch: nl, khmer: km, burmese: my, persian: fa, gujarati: gu, urdu: ur, telugu: te, marathi: mr, hebrew: he, bengali: bn, tamil: ta, ukrainian: uk, tibetan: bo, kazakh: kk, mongolian: mn, uyghur: ug.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Domain of the text to be translated, such as game plot.
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Reference example, up to 10.
                     */
                    std::vector<Reference> m_references;
                    bool m_referencesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATTRANSLATIONSREQUEST_H_
