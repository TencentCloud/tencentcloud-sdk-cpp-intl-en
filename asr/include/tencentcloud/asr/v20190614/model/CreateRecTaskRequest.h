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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * CreateRecTask request structure.
                */
                class CreateRecTaskRequest : public AbstractModel
                {
                public:
                    CreateRecTaskRequest();
                    ~CreateRecTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine model type.
Each recognition engine adopts a specific billing plan. Engines marked with "large model version" adopt the large model billing plan. For product billing instructions, [click here] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1).


Note: If you want to recognize telecommunication audio but find that a 16k engine is required, you can use a 16k engine as described below for recognition. However, ** the 16k engines are not trained for recognizing telecommunication audio. Therefore, the recognition results cannot be guaranteed. You need to check whether the recognition results can be used. **

Engines for general scenarios:
** Note: Use 16k engines for scenarios other than telecommunication. **
** 16k_zh_large: ** Engine (large model version) for Mandarin, Chinese dialects, and English. This engine supports recognizing audio in Chinese, English, and [various Chinese dialects] (https://intl.cloud.tencent.com/document/product/1093/35682?from_cn_redirect=1). It has a large number of parameters, enhanced performance, and greatly improved recognition accuracy for low-quality audio with loud noise, too much echo, low voice volume, or faint voices. [Click here] (https://console.cloud.tencent.com/asr/demonstrate) to compare the recognition performance of the 16k_zh engine and this one.
** 16k_multi_lang: ** Engine (large model version) for multiple languages. This engine supports recognizing audio in English, Japanese, Korean, Arabic, Filipino, French, Hindi, Indonesian, Malay, Portuguese, Spanish, Thai, Turkish, Vietnamese, and German (sentence-level or paragraph-level).
** 16k_zh-PY: ** Engine for Chinese, English, and Cantonese. The engine supports recognizing audio in Mandarin, English, and Cantonese at the same time.
** 16k_ms: ** Engine for Malay.
** 16k_id: ** Engine for Indonesian.
** 16k_th: ** Engine for Thai.
                     * @return EngineModelType Engine model type.
Each recognition engine adopts a specific billing plan. Engines marked with "large model version" adopt the large model billing plan. For product billing instructions, [click here] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1).


Note: If you want to recognize telecommunication audio but find that a 16k engine is required, you can use a 16k engine as described below for recognition. However, ** the 16k engines are not trained for recognizing telecommunication audio. Therefore, the recognition results cannot be guaranteed. You need to check whether the recognition results can be used. **

Engines for general scenarios:
** Note: Use 16k engines for scenarios other than telecommunication. **
** 16k_zh_large: ** Engine (large model version) for Mandarin, Chinese dialects, and English. This engine supports recognizing audio in Chinese, English, and [various Chinese dialects] (https://intl.cloud.tencent.com/document/product/1093/35682?from_cn_redirect=1). It has a large number of parameters, enhanced performance, and greatly improved recognition accuracy for low-quality audio with loud noise, too much echo, low voice volume, or faint voices. [Click here] (https://console.cloud.tencent.com/asr/demonstrate) to compare the recognition performance of the 16k_zh engine and this one.
** 16k_multi_lang: ** Engine (large model version) for multiple languages. This engine supports recognizing audio in English, Japanese, Korean, Arabic, Filipino, French, Hindi, Indonesian, Malay, Portuguese, Spanish, Thai, Turkish, Vietnamese, and German (sentence-level or paragraph-level).
** 16k_zh-PY: ** Engine for Chinese, English, and Cantonese. The engine supports recognizing audio in Mandarin, English, and Cantonese at the same time.
** 16k_ms: ** Engine for Malay.
** 16k_id: ** Engine for Indonesian.
** 16k_th: ** Engine for Thai.
                     * 
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置Engine model type.
Each recognition engine adopts a specific billing plan. Engines marked with "large model version" adopt the large model billing plan. For product billing instructions, [click here] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1).


Note: If you want to recognize telecommunication audio but find that a 16k engine is required, you can use a 16k engine as described below for recognition. However, ** the 16k engines are not trained for recognizing telecommunication audio. Therefore, the recognition results cannot be guaranteed. You need to check whether the recognition results can be used. **

Engines for general scenarios:
** Note: Use 16k engines for scenarios other than telecommunication. **
** 16k_zh_large: ** Engine (large model version) for Mandarin, Chinese dialects, and English. This engine supports recognizing audio in Chinese, English, and [various Chinese dialects] (https://intl.cloud.tencent.com/document/product/1093/35682?from_cn_redirect=1). It has a large number of parameters, enhanced performance, and greatly improved recognition accuracy for low-quality audio with loud noise, too much echo, low voice volume, or faint voices. [Click here] (https://console.cloud.tencent.com/asr/demonstrate) to compare the recognition performance of the 16k_zh engine and this one.
** 16k_multi_lang: ** Engine (large model version) for multiple languages. This engine supports recognizing audio in English, Japanese, Korean, Arabic, Filipino, French, Hindi, Indonesian, Malay, Portuguese, Spanish, Thai, Turkish, Vietnamese, and German (sentence-level or paragraph-level).
** 16k_zh-PY: ** Engine for Chinese, English, and Cantonese. The engine supports recognizing audio in Mandarin, English, and Cantonese at the same time.
** 16k_ms: ** Engine for Malay.
** 16k_id: ** Engine for Indonesian.
** 16k_th: ** Engine for Thai.
                     * @param _engineModelType Engine model type.
Each recognition engine adopts a specific billing plan. Engines marked with "large model version" adopt the large model billing plan. For product billing instructions, [click here] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1).


Note: If you want to recognize telecommunication audio but find that a 16k engine is required, you can use a 16k engine as described below for recognition. However, ** the 16k engines are not trained for recognizing telecommunication audio. Therefore, the recognition results cannot be guaranteed. You need to check whether the recognition results can be used. **

Engines for general scenarios:
** Note: Use 16k engines for scenarios other than telecommunication. **
** 16k_zh_large: ** Engine (large model version) for Mandarin, Chinese dialects, and English. This engine supports recognizing audio in Chinese, English, and [various Chinese dialects] (https://intl.cloud.tencent.com/document/product/1093/35682?from_cn_redirect=1). It has a large number of parameters, enhanced performance, and greatly improved recognition accuracy for low-quality audio with loud noise, too much echo, low voice volume, or faint voices. [Click here] (https://console.cloud.tencent.com/asr/demonstrate) to compare the recognition performance of the 16k_zh engine and this one.
** 16k_multi_lang: ** Engine (large model version) for multiple languages. This engine supports recognizing audio in English, Japanese, Korean, Arabic, Filipino, French, Hindi, Indonesian, Malay, Portuguese, Spanish, Thai, Turkish, Vietnamese, and German (sentence-level or paragraph-level).
** 16k_zh-PY: ** Engine for Chinese, English, and Cantonese. The engine supports recognizing audio in Mandarin, English, and Cantonese at the same time.
** 16k_ms: ** Engine for Malay.
** 16k_id: ** Engine for Indonesian.
** 16k_th: ** Engine for Thai.
                     * 
                     */
                    void SetEngineModelType(const std::string& _engineModelType);

                    /**
                     * 判断参数 EngineModelType 是否已赋值
                     * @return EngineModelType 是否已赋值
                     * 
                     */
                    bool EngineModelTypeHasBeenSet() const;

                    /**
                     * 获取Number of recognition channels.
1: Mono. (16k engines only support mono. ** Do no t** set to stereo.)
2: Stereo. (Stereo is supported only for 8k engines, and the two channels should correspond to the respective communication parties.)

Note:
16k engines: Only support mono. ** ChannelNum should be set to 1 **.
8k engines: Support both mono and stereo. ** It is recommended to set ChannelNum to 2 (indicating stereo) **. Stereo can physically distinguish speakers to avoid recognition mistakes caused by overlapping speech. It can provide the best speaker separation and recognition effects. Once stereo is set, the speakers are automatically separated. ** You do not need to enable the speaker separation feature **. You can use the default values for related parameters (** SpeakerDiarization and SpeakerNumber **). For speakerId in the returned ResultDetail, the value 0 represents the left channel, and the value 1 represents the right channel.
                     * @return ChannelNum Number of recognition channels.
1: Mono. (16k engines only support mono. ** Do no t** set to stereo.)
2: Stereo. (Stereo is supported only for 8k engines, and the two channels should correspond to the respective communication parties.)

Note:
16k engines: Only support mono. ** ChannelNum should be set to 1 **.
8k engines: Support both mono and stereo. ** It is recommended to set ChannelNum to 2 (indicating stereo) **. Stereo can physically distinguish speakers to avoid recognition mistakes caused by overlapping speech. It can provide the best speaker separation and recognition effects. Once stereo is set, the speakers are automatically separated. ** You do not need to enable the speaker separation feature **. You can use the default values for related parameters (** SpeakerDiarization and SpeakerNumber **). For speakerId in the returned ResultDetail, the value 0 represents the left channel, and the value 1 represents the right channel.
                     * 
                     */
                    uint64_t GetChannelNum() const;

                    /**
                     * 设置Number of recognition channels.
1: Mono. (16k engines only support mono. ** Do no t** set to stereo.)
2: Stereo. (Stereo is supported only for 8k engines, and the two channels should correspond to the respective communication parties.)

Note:
16k engines: Only support mono. ** ChannelNum should be set to 1 **.
8k engines: Support both mono and stereo. ** It is recommended to set ChannelNum to 2 (indicating stereo) **. Stereo can physically distinguish speakers to avoid recognition mistakes caused by overlapping speech. It can provide the best speaker separation and recognition effects. Once stereo is set, the speakers are automatically separated. ** You do not need to enable the speaker separation feature **. You can use the default values for related parameters (** SpeakerDiarization and SpeakerNumber **). For speakerId in the returned ResultDetail, the value 0 represents the left channel, and the value 1 represents the right channel.
                     * @param _channelNum Number of recognition channels.
1: Mono. (16k engines only support mono. ** Do no t** set to stereo.)
2: Stereo. (Stereo is supported only for 8k engines, and the two channels should correspond to the respective communication parties.)

Note:
16k engines: Only support mono. ** ChannelNum should be set to 1 **.
8k engines: Support both mono and stereo. ** It is recommended to set ChannelNum to 2 (indicating stereo) **. Stereo can physically distinguish speakers to avoid recognition mistakes caused by overlapping speech. It can provide the best speaker separation and recognition effects. Once stereo is set, the speakers are automatically separated. ** You do not need to enable the speaker separation feature **. You can use the default values for related parameters (** SpeakerDiarization and SpeakerNumber **). For speakerId in the returned ResultDetail, the value 0 represents the left channel, and the value 1 represents the right channel.
                     * 
                     */
                    void SetChannelNum(const uint64_t& _channelNum);

                    /**
                     * 判断参数 ChannelNum 是否已赋值
                     * @return ChannelNum 是否已赋值
                     * 
                     */
                    bool ChannelNumHasBeenSet() const;

                    /**
                     * 获取Format of the returned recognition result.
0: The basic recognition result (containing only valid voice timestamps but no word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail)).
1: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps and speech speed value but ** no punctuation **).
2: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **).
3: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by punctuation. ** This format applies to subtitle scenarios **.
4: ** [Value-added paid feature] ** The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by NLP semantics. ** This format applies to scenarios such as meeting and court record transcription ** and is supported only for 8k_zh and 16k_zh engines.
5: ** [Value-added paid feature] ** Basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The oral-to-written transcription result is also output, which has excluded modal particles and consecutive identical words, optimized expressions, and corrected speech mistakes. ** This format applies to scenarios of generating minutes for online and offline meetings** and is supported only for 8k_zh and 16k_zh engines.

Notes:
If this parameter is set to 4, make sure that a [semantics-based segmentation resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 4, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
If this parameter is set to 5, make sure that an [oral-to-written resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 5, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
                     * @return ResTextFormat Format of the returned recognition result.
0: The basic recognition result (containing only valid voice timestamps but no word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail)).
1: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps and speech speed value but ** no punctuation **).
2: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **).
3: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by punctuation. ** This format applies to subtitle scenarios **.
4: ** [Value-added paid feature] ** The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by NLP semantics. ** This format applies to scenarios such as meeting and court record transcription ** and is supported only for 8k_zh and 16k_zh engines.
5: ** [Value-added paid feature] ** Basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The oral-to-written transcription result is also output, which has excluded modal particles and consecutive identical words, optimized expressions, and corrected speech mistakes. ** This format applies to scenarios of generating minutes for online and offline meetings** and is supported only for 8k_zh and 16k_zh engines.

Notes:
If this parameter is set to 4, make sure that a [semantics-based segmentation resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 4, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
If this parameter is set to 5, make sure that an [oral-to-written resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 5, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
                     * 
                     */
                    uint64_t GetResTextFormat() const;

                    /**
                     * 设置Format of the returned recognition result.
0: The basic recognition result (containing only valid voice timestamps but no word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail)).
1: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps and speech speed value but ** no punctuation **).
2: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **).
3: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by punctuation. ** This format applies to subtitle scenarios **.
4: ** [Value-added paid feature] ** The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by NLP semantics. ** This format applies to scenarios such as meeting and court record transcription ** and is supported only for 8k_zh and 16k_zh engines.
5: ** [Value-added paid feature] ** Basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The oral-to-written transcription result is also output, which has excluded modal particles and consecutive identical words, optimized expressions, and corrected speech mistakes. ** This format applies to scenarios of generating minutes for online and offline meetings** and is supported only for 8k_zh and 16k_zh engines.

Notes:
If this parameter is set to 4, make sure that a [semantics-based segmentation resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 4, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
If this parameter is set to 5, make sure that an [oral-to-written resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 5, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
                     * @param _resTextFormat Format of the returned recognition result.
0: The basic recognition result (containing only valid voice timestamps but no word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail)).
1: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps and speech speed value but ** no punctuation **).
2: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **).
3: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by punctuation. ** This format applies to subtitle scenarios **.
4: ** [Value-added paid feature] ** The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by NLP semantics. ** This format applies to scenarios such as meeting and court record transcription ** and is supported only for 8k_zh and 16k_zh engines.
5: ** [Value-added paid feature] ** Basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The oral-to-written transcription result is also output, which has excluded modal particles and consecutive identical words, optimized expressions, and corrected speech mistakes. ** This format applies to scenarios of generating minutes for online and offline meetings** and is supported only for 8k_zh and 16k_zh engines.

Notes:
If this parameter is set to 4, make sure that a [semantics-based segmentation resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 4, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
If this parameter is set to 5, make sure that an [oral-to-written resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 5, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
                     * 
                     */
                    void SetResTextFormat(const uint64_t& _resTextFormat);

                    /**
                     * 判断参数 ResTextFormat 是否已赋值
                     * @return ResTextFormat 是否已赋值
                     * 
                     */
                    bool ResTextFormatHasBeenSet() const;

                    /**
                     * 获取Audio source.
0: Audio URL.
1: Local audio file (body of the POST request).
                     * @return SourceType Audio source.
0: Audio URL.
1: Local audio file (body of the POST request).
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Audio source.
0: Audio URL.
1: Local audio file (body of the POST request).
                     * @param _sourceType Audio source.
0: Audio URL.
1: Local audio file (body of the POST request).
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Audio file Base64 code.
** This parameter is required if SourceType is set to 1. Otherwise, it can be left blank. **

Note: The audio data size cannot exceed 5 MB.
                     * @return Data Audio file Base64 code.
** This parameter is required if SourceType is set to 1. Otherwise, it can be left blank. **

Note: The audio data size cannot exceed 5 MB.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置Audio file Base64 code.
** This parameter is required if SourceType is set to 1. Otherwise, it can be left blank. **

Note: The audio data size cannot exceed 5 MB.
                     * @param _data Audio file Base64 code.
** This parameter is required if SourceType is set to 1. Otherwise, it can be left blank. **

Note: The audio data size cannot exceed 5 MB.
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Data length (before Base64 encoding).
                     * @return DataLen Data length (before Base64 encoding).
                     * 
                     */
                    uint64_t GetDataLen() const;

                    /**
                     * 设置Data length (before Base64 encoding).
                     * @param _dataLen Data length (before Base64 encoding).
                     * 
                     */
                    void SetDataLen(const uint64_t& _dataLen);

                    /**
                     * 判断参数 DataLen 是否已赋值
                     * @return DataLen 是否已赋值
                     * 
                     */
                    bool DataLenHasBeenSet() const;

                    /**
                     * 获取Audio URL. (The audio should be downloadable via a public network browser.)
** This parameter is required if SourceType is set to 0. Otherwise, it can be left blank. **

Notes:
1. Make sure that the total audio duration of recording files does not exceed 5 hours. Otherwise, recognition may fail.
2. Pay attention to file download to avoid download failure.
                     * @return Url Audio URL. (The audio should be downloadable via a public network browser.)
** This parameter is required if SourceType is set to 0. Otherwise, it can be left blank. **

Notes:
1. Make sure that the total audio duration of recording files does not exceed 5 hours. Otherwise, recognition may fail.
2. Pay attention to file download to avoid download failure.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Audio URL. (The audio should be downloadable via a public network browser.)
** This parameter is required if SourceType is set to 0. Otherwise, it can be left blank. **

Notes:
1. Make sure that the total audio duration of recording files does not exceed 5 hours. Otherwise, recognition may fail.
2. Pay attention to file download to avoid download failure.
                     * @param _url Audio URL. (The audio should be downloadable via a public network browser.)
** This parameter is required if SourceType is set to 0. Otherwise, it can be left blank. **

Notes:
1. Make sure that the total audio duration of recording files does not exceed 5 hours. Otherwise, recognition may fail.
2. Pay attention to file download to avoid download failure.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Callback URL

User-defined service URL for receiving recognition results.
For the callback format and content, see [Callback Description] (https://intl.cloud.tencent.com/document/product/1093/52632?from_cn_redirect=1).

Notes:

- If you use the polling method to obtain recognition results, this parameter is not required.
- It is recommended to include your business ID and other information in the callback URL for handling business logic.
                     * @return CallbackUrl Callback URL

User-defined service URL for receiving recognition results.
For the callback format and content, see [Callback Description] (https://intl.cloud.tencent.com/document/product/1093/52632?from_cn_redirect=1).

Notes:

- If you use the polling method to obtain recognition results, this parameter is not required.
- It is recommended to include your business ID and other information in the callback URL for handling business logic.
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置Callback URL

User-defined service URL for receiving recognition results.
For the callback format and content, see [Callback Description] (https://intl.cloud.tencent.com/document/product/1093/52632?from_cn_redirect=1).

Notes:

- If you use the polling method to obtain recognition results, this parameter is not required.
- It is recommended to include your business ID and other information in the callback URL for handling business logic.
                     * @param _callbackUrl Callback URL

User-defined service URL for receiving recognition results.
For the callback format and content, see [Callback Description] (https://intl.cloud.tencent.com/document/product/1093/52632?from_cn_redirect=1).

Notes:

- If you use the polling method to obtain recognition results, this parameter is not required.
- It is recommended to include your business ID and other information in the callback URL for handling business logic.
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取Whether to enable speaker separation.
0: Disable.
1: Enable. (This value is supported only for the following engines: 8k_zh, 16k_zh, 16k_ms, 16k_en, 16k_id, 16k_zh_large, and 16k_zh_dialect. ChannelNum should be set to 1.)
The default value is 0.

Note:
If an 8k engine is used and ChannelNum is set to 2 (stereo), use the default values for corresponding parameters as stated in the ** ChannelNum ** parameter description.
                     * @return SpeakerDiarization Whether to enable speaker separation.
0: Disable.
1: Enable. (This value is supported only for the following engines: 8k_zh, 16k_zh, 16k_ms, 16k_en, 16k_id, 16k_zh_large, and 16k_zh_dialect. ChannelNum should be set to 1.)
The default value is 0.

Note:
If an 8k engine is used and ChannelNum is set to 2 (stereo), use the default values for corresponding parameters as stated in the ** ChannelNum ** parameter description.
                     * 
                     */
                    int64_t GetSpeakerDiarization() const;

                    /**
                     * 设置Whether to enable speaker separation.
0: Disable.
1: Enable. (This value is supported only for the following engines: 8k_zh, 16k_zh, 16k_ms, 16k_en, 16k_id, 16k_zh_large, and 16k_zh_dialect. ChannelNum should be set to 1.)
The default value is 0.

Note:
If an 8k engine is used and ChannelNum is set to 2 (stereo), use the default values for corresponding parameters as stated in the ** ChannelNum ** parameter description.
                     * @param _speakerDiarization Whether to enable speaker separation.
0: Disable.
1: Enable. (This value is supported only for the following engines: 8k_zh, 16k_zh, 16k_ms, 16k_en, 16k_id, 16k_zh_large, and 16k_zh_dialect. ChannelNum should be set to 1.)
The default value is 0.

Note:
If an 8k engine is used and ChannelNum is set to 2 (stereo), use the default values for corresponding parameters as stated in the ** ChannelNum ** parameter description.
                     * 
                     */
                    void SetSpeakerDiarization(const int64_t& _speakerDiarization);

                    /**
                     * 判断参数 SpeakerDiarization 是否已赋值
                     * @return SpeakerDiarization 是否已赋值
                     * 
                     */
                    bool SpeakerDiarizationHasBeenSet() const;

                    /**
                     * 获取Number of speakers to be separated.
** Speaker separation must be enabled. Otherwise, this parameter does not take effect. ** Value range: 0-10.
0: Automatic separation. (Up to 20 speakers can be separated.)
1-10: Specify the number of speakers.
The default value is 0.
                     * @return SpeakerNumber Number of speakers to be separated.
** Speaker separation must be enabled. Otherwise, this parameter does not take effect. ** Value range: 0-10.
0: Automatic separation. (Up to 20 speakers can be separated.)
1-10: Specify the number of speakers.
The default value is 0.
                     * 
                     */
                    int64_t GetSpeakerNumber() const;

                    /**
                     * 设置Number of speakers to be separated.
** Speaker separation must be enabled. Otherwise, this parameter does not take effect. ** Value range: 0-10.
0: Automatic separation. (Up to 20 speakers can be separated.)
1-10: Specify the number of speakers.
The default value is 0.
                     * @param _speakerNumber Number of speakers to be separated.
** Speaker separation must be enabled. Otherwise, this parameter does not take effect. ** Value range: 0-10.
0: Automatic separation. (Up to 20 speakers can be separated.)
1-10: Specify the number of speakers.
The default value is 0.
                     * 
                     */
                    void SetSpeakerNumber(const int64_t& _speakerNumber);

                    /**
                     * 判断参数 SpeakerNumber 是否已赋值
                     * @return SpeakerNumber 是否已赋值
                     * 
                     */
                    bool SpeakerNumberHasBeenSet() const;

                    /**
                     * 获取This service is not available.
                     * @return HotwordId This service is not available.
                     * 
                     */
                    std::string GetHotwordId() const;

                    /**
                     * 设置This service is not available.
                     * @param _hotwordId This service is not available.
                     * 
                     */
                    void SetHotwordId(const std::string& _hotwordId);

                    /**
                     * 判断参数 HotwordId 是否已赋值
                     * @return HotwordId 是否已赋值
                     * 
                     */
                    bool HotwordIdHasBeenSet() const;

                    /**
                     * 获取This service is not available.
                     * @return ReinforceHotword This service is not available.
                     * @deprecated
                     */
                    int64_t GetReinforceHotword() const;

                    /**
                     * 设置This service is not available.
                     * @param _reinforceHotword This service is not available.
                     * @deprecated
                     */
                    void SetReinforceHotword(const int64_t& _reinforceHotword);

                    /**
                     * 判断参数 ReinforceHotword 是否已赋值
                     * @return ReinforceHotword 是否已赋值
                     * @deprecated
                     */
                    bool ReinforceHotwordHasBeenSet() const;

                    /**
                     * 获取This service is not available.
                     * @return CustomizationId This service is not available.
                     * 
                     */
                    std::string GetCustomizationId() const;

                    /**
                     * 设置This service is not available.
                     * @param _customizationId This service is not available.
                     * 
                     */
                    void SetCustomizationId(const std::string& _customizationId);

                    /**
                     * 判断参数 CustomizationId 是否已赋值
                     * @return CustomizationId 是否已赋值
                     * 
                     */
                    bool CustomizationIdHasBeenSet() const;

                    /**
                     * 获取This service is not available.
                     * @return EmotionRecognition This service is not available.
                     * 
                     */
                    int64_t GetEmotionRecognition() const;

                    /**
                     * 设置This service is not available.
                     * @param _emotionRecognition This service is not available.
                     * 
                     */
                    void SetEmotionRecognition(const int64_t& _emotionRecognition);

                    /**
                     * 判断参数 EmotionRecognition 是否已赋值
                     * @return EmotionRecognition 是否已赋值
                     * 
                     */
                    bool EmotionRecognitionHasBeenSet() const;

                    /**
                     * 获取Emotional energy value.
The value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
0: Disable.
1: Enable.
The default value is 0.
                     * @return EmotionalEnergy Emotional energy value.
The value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
0: Disable.
1: Enable.
The default value is 0.
                     * 
                     */
                    int64_t GetEmotionalEnergy() const;

                    /**
                     * 设置Emotional energy value.
The value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
0: Disable.
1: Enable.
The default value is 0.
                     * @param _emotionalEnergy Emotional energy value.
The value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
0: Disable.
1: Enable.
The default value is 0.
                     * 
                     */
                    void SetEmotionalEnergy(const int64_t& _emotionalEnergy);

                    /**
                     * 判断参数 EmotionalEnergy 是否已赋值
                     * @return EmotionalEnergy 是否已赋值
                     * 
                     */
                    bool EmotionalEnergyHasBeenSet() const;

                    /**
                     * 获取Intelligent conversion into Arabic numerals (supported only for engines for recognizing audio in Mandarin).
0: Do not convert, but directly output Chinese numerals.
1: Intelligently convert into Arabic numerals based on the scenario.
3: Enable conversion for math-related letters.
The default value is 1.
                     * @return ConvertNumMode Intelligent conversion into Arabic numerals (supported only for engines for recognizing audio in Mandarin).
0: Do not convert, but directly output Chinese numerals.
1: Intelligently convert into Arabic numerals based on the scenario.
3: Enable conversion for math-related letters.
The default value is 1.
                     * 
                     */
                    int64_t GetConvertNumMode() const;

                    /**
                     * 设置Intelligent conversion into Arabic numerals (supported only for engines for recognizing audio in Mandarin).
0: Do not convert, but directly output Chinese numerals.
1: Intelligently convert into Arabic numerals based on the scenario.
3: Enable conversion for math-related letters.
The default value is 1.
                     * @param _convertNumMode Intelligent conversion into Arabic numerals (supported only for engines for recognizing audio in Mandarin).
0: Do not convert, but directly output Chinese numerals.
1: Intelligently convert into Arabic numerals based on the scenario.
3: Enable conversion for math-related letters.
The default value is 1.
                     * 
                     */
                    void SetConvertNumMode(const int64_t& _convertNumMode);

                    /**
                     * 判断参数 ConvertNumMode 是否已赋值
                     * @return ConvertNumMode 是否已赋值
                     * 
                     */
                    bool ConvertNumModeHasBeenSet() const;

                    /**
                     * 获取Dirty word filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out dirty words.
1: Filter out dirty words.
2: Replace dirty words with *.
The default value is 0.
                     * @return FilterDirty Dirty word filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out dirty words.
1: Filter out dirty words.
2: Replace dirty words with *.
The default value is 0.
                     * 
                     */
                    int64_t GetFilterDirty() const;

                    /**
                     * 设置Dirty word filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out dirty words.
1: Filter out dirty words.
2: Replace dirty words with *.
The default value is 0.
                     * @param _filterDirty Dirty word filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out dirty words.
1: Filter out dirty words.
2: Replace dirty words with *.
The default value is 0.
                     * 
                     */
                    void SetFilterDirty(const int64_t& _filterDirty);

                    /**
                     * 判断参数 FilterDirty 是否已赋值
                     * @return FilterDirty 是否已赋值
                     * 
                     */
                    bool FilterDirtyHasBeenSet() const;

                    /**
                     * 获取Punctuation filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out punctuation.
1: Filter out sentence-ending punctuation.
2: Filter out all punctuation.
The default value is 0.
                     * @return FilterPunc Punctuation filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out punctuation.
1: Filter out sentence-ending punctuation.
2: Filter out all punctuation.
The default value is 0.
                     * 
                     */
                    int64_t GetFilterPunc() const;

                    /**
                     * 设置Punctuation filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out punctuation.
1: Filter out sentence-ending punctuation.
2: Filter out all punctuation.
The default value is 0.
                     * @param _filterPunc Punctuation filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out punctuation.
1: Filter out sentence-ending punctuation.
2: Filter out all punctuation.
The default value is 0.
                     * 
                     */
                    void SetFilterPunc(const int64_t& _filterPunc);

                    /**
                     * 判断参数 FilterPunc 是否已赋值
                     * @return FilterPunc 是否已赋值
                     * 
                     */
                    bool FilterPuncHasBeenSet() const;

                    /**
                     * 获取Modal particle filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out modal particles.
1: Filter out specified modal particles.
2: Filter out all modal particles.
The default value is 0.
                     * @return FilterModal Modal particle filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out modal particles.
1: Filter out specified modal particles.
2: Filter out all modal particles.
The default value is 0.
                     * 
                     */
                    int64_t GetFilterModal() const;

                    /**
                     * 设置Modal particle filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out modal particles.
1: Filter out specified modal particles.
2: Filter out all modal particles.
The default value is 0.
                     * @param _filterModal Modal particle filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out modal particles.
1: Filter out specified modal particles.
2: Filter out all modal particles.
The default value is 0.
                     * 
                     */
                    void SetFilterModal(const int64_t& _filterModal);

                    /**
                     * 判断参数 FilterModal 是否已赋值
                     * @return FilterModal 是否已赋值
                     * 
                     */
                    bool FilterModalHasBeenSet() const;

                    /**
                     * 获取The maximum number of characters per line (supported only for engines for recognizing audio in Mandarin). A punctuation mark is added if this limit is reached.
** This parameter can control the maximum number of characters per line, which applies to subtitle generation scenarios. ** Value range: [6,40].
0: Disable this feature.
The default value is 0.

Note: To enable this feature, ResTextFormat should be set to 3. The recognition result can be obtained from FinalSentence by parsing the list in the returned ResultDetail.
                     * @return SentenceMaxLength The maximum number of characters per line (supported only for engines for recognizing audio in Mandarin). A punctuation mark is added if this limit is reached.
** This parameter can control the maximum number of characters per line, which applies to subtitle generation scenarios. ** Value range: [6,40].
0: Disable this feature.
The default value is 0.

Note: To enable this feature, ResTextFormat should be set to 3. The recognition result can be obtained from FinalSentence by parsing the list in the returned ResultDetail.
                     * 
                     */
                    int64_t GetSentenceMaxLength() const;

                    /**
                     * 设置The maximum number of characters per line (supported only for engines for recognizing audio in Mandarin). A punctuation mark is added if this limit is reached.
** This parameter can control the maximum number of characters per line, which applies to subtitle generation scenarios. ** Value range: [6,40].
0: Disable this feature.
The default value is 0.

Note: To enable this feature, ResTextFormat should be set to 3. The recognition result can be obtained from FinalSentence by parsing the list in the returned ResultDetail.
                     * @param _sentenceMaxLength The maximum number of characters per line (supported only for engines for recognizing audio in Mandarin). A punctuation mark is added if this limit is reached.
** This parameter can control the maximum number of characters per line, which applies to subtitle generation scenarios. ** Value range: [6,40].
0: Disable this feature.
The default value is 0.

Note: To enable this feature, ResTextFormat should be set to 3. The recognition result can be obtained from FinalSentence by parsing the list in the returned ResultDetail.
                     * 
                     */
                    void SetSentenceMaxLength(const int64_t& _sentenceMaxLength);

                    /**
                     * 判断参数 SentenceMaxLength 是否已赋值
                     * @return SentenceMaxLength 是否已赋值
                     * 
                     */
                    bool SentenceMaxLengthHasBeenSet() const;

                    /**
                     * 获取Additional parameter. ** (This parameter is meaningless. Ignore it.) **
                     * @return Extra Additional parameter. ** (This parameter is meaningless. Ignore it.) **
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置Additional parameter. ** (This parameter is meaningless. Ignore it.) **
                     * @param _extra Additional parameter. ** (This parameter is meaningless. Ignore it.) **
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取Temporary term list. This parameter is used to improve the recognition accuracy.

- Restrictions for individual terms: The format is "term|weight". Each term can contain no more than 30 characters (or 10 Chinese characters. The weight can be in the range of [1-11] or 100. For example, "Tencent Cloud|5" or "ASR|11".

- Restrictions for the temporary term list: Multiple terms are separated by commas. The list can contain up to 128 terms. For example, "Tencent Cloud|10, Audio Recognition|5, ASR|11".

- Difference between hotword_id (term list) and hotword_list (temporary term list):

    - hotword_id: Term list. You need to create a term list in the console or by using the API first and obtain the term list ID.

    - hotword_list: Temporary term list. You can directly enter the ID of the temporary term list each time you initiate a request. The temporary term list is not retained on the cloud. This parameter applies to users with a massive number of terms.

Notes:

- If both hotword_id and hotword_list are specified, hotword_list will take effect first.

- When the weight of a term is set to 11, this term becomes a super term. It is recommended that the weight is set to 11 only for critical and necessary terms. The overall accuracy will be affected if the weight is set to 11 for too many terms.

- When the weight of a term is set to 100, the term enhancement feature is enabled to replace homophones of this term. (This feature is supported only for 8k_zh and 16k_zh engines.) For example, if you configure "mizhi 1|100", the recognized word "mizhi 2", which is a homophone of "mizhi 2", will be forcibly replaced with "mizhi 2". It is recommended that you enable this feature based on the actual needs. You can set the weight to 100 for only critical and necessary terms. The overall accuracy will be affected if the weight is set to 100 for too many terms.
                     * @return HotwordList Temporary term list. This parameter is used to improve the recognition accuracy.

- Restrictions for individual terms: The format is "term|weight". Each term can contain no more than 30 characters (or 10 Chinese characters. The weight can be in the range of [1-11] or 100. For example, "Tencent Cloud|5" or "ASR|11".

- Restrictions for the temporary term list: Multiple terms are separated by commas. The list can contain up to 128 terms. For example, "Tencent Cloud|10, Audio Recognition|5, ASR|11".

- Difference between hotword_id (term list) and hotword_list (temporary term list):

    - hotword_id: Term list. You need to create a term list in the console or by using the API first and obtain the term list ID.

    - hotword_list: Temporary term list. You can directly enter the ID of the temporary term list each time you initiate a request. The temporary term list is not retained on the cloud. This parameter applies to users with a massive number of terms.

Notes:

- If both hotword_id and hotword_list are specified, hotword_list will take effect first.

- When the weight of a term is set to 11, this term becomes a super term. It is recommended that the weight is set to 11 only for critical and necessary terms. The overall accuracy will be affected if the weight is set to 11 for too many terms.

- When the weight of a term is set to 100, the term enhancement feature is enabled to replace homophones of this term. (This feature is supported only for 8k_zh and 16k_zh engines.) For example, if you configure "mizhi 1|100", the recognized word "mizhi 2", which is a homophone of "mizhi 2", will be forcibly replaced with "mizhi 2". It is recommended that you enable this feature based on the actual needs. You can set the weight to 100 for only critical and necessary terms. The overall accuracy will be affected if the weight is set to 100 for too many terms.
                     * 
                     */
                    std::string GetHotwordList() const;

                    /**
                     * 设置Temporary term list. This parameter is used to improve the recognition accuracy.

- Restrictions for individual terms: The format is "term|weight". Each term can contain no more than 30 characters (or 10 Chinese characters. The weight can be in the range of [1-11] or 100. For example, "Tencent Cloud|5" or "ASR|11".

- Restrictions for the temporary term list: Multiple terms are separated by commas. The list can contain up to 128 terms. For example, "Tencent Cloud|10, Audio Recognition|5, ASR|11".

- Difference between hotword_id (term list) and hotword_list (temporary term list):

    - hotword_id: Term list. You need to create a term list in the console or by using the API first and obtain the term list ID.

    - hotword_list: Temporary term list. You can directly enter the ID of the temporary term list each time you initiate a request. The temporary term list is not retained on the cloud. This parameter applies to users with a massive number of terms.

Notes:

- If both hotword_id and hotword_list are specified, hotword_list will take effect first.

- When the weight of a term is set to 11, this term becomes a super term. It is recommended that the weight is set to 11 only for critical and necessary terms. The overall accuracy will be affected if the weight is set to 11 for too many terms.

- When the weight of a term is set to 100, the term enhancement feature is enabled to replace homophones of this term. (This feature is supported only for 8k_zh and 16k_zh engines.) For example, if you configure "mizhi 1|100", the recognized word "mizhi 2", which is a homophone of "mizhi 2", will be forcibly replaced with "mizhi 2". It is recommended that you enable this feature based on the actual needs. You can set the weight to 100 for only critical and necessary terms. The overall accuracy will be affected if the weight is set to 100 for too many terms.
                     * @param _hotwordList Temporary term list. This parameter is used to improve the recognition accuracy.

- Restrictions for individual terms: The format is "term|weight". Each term can contain no more than 30 characters (or 10 Chinese characters. The weight can be in the range of [1-11] or 100. For example, "Tencent Cloud|5" or "ASR|11".

- Restrictions for the temporary term list: Multiple terms are separated by commas. The list can contain up to 128 terms. For example, "Tencent Cloud|10, Audio Recognition|5, ASR|11".

- Difference between hotword_id (term list) and hotword_list (temporary term list):

    - hotword_id: Term list. You need to create a term list in the console or by using the API first and obtain the term list ID.

    - hotword_list: Temporary term list. You can directly enter the ID of the temporary term list each time you initiate a request. The temporary term list is not retained on the cloud. This parameter applies to users with a massive number of terms.

Notes:

- If both hotword_id and hotword_list are specified, hotword_list will take effect first.

- When the weight of a term is set to 11, this term becomes a super term. It is recommended that the weight is set to 11 only for critical and necessary terms. The overall accuracy will be affected if the weight is set to 11 for too many terms.

- When the weight of a term is set to 100, the term enhancement feature is enabled to replace homophones of this term. (This feature is supported only for 8k_zh and 16k_zh engines.) For example, if you configure "mizhi 1|100", the recognized word "mizhi 2", which is a homophone of "mizhi 2", will be forcibly replaced with "mizhi 2". It is recommended that you enable this feature based on the actual needs. You can set the weight to 100 for only critical and necessary terms. The overall accuracy will be affected if the weight is set to 100 for too many terms.
                     * 
                     */
                    void SetHotwordList(const std::string& _hotwordList);

                    /**
                     * 判断参数 HotwordList 是否已赋值
                     * @return HotwordList 是否已赋值
                     * 
                     */
                    bool HotwordListHasBeenSet() const;

                    /**
                     * 获取List of keyword IDs for recognition. This parameter is left blank by default, indicating that no keyword is recognized. You can enter up to 10 IDs.

                     * @return KeyWordLibIdList List of keyword IDs for recognition. This parameter is left blank by default, indicating that no keyword is recognized. You can enter up to 10 IDs.

                     * 
                     */
                    std::vector<std::string> GetKeyWordLibIdList() const;

                    /**
                     * 设置List of keyword IDs for recognition. This parameter is left blank by default, indicating that no keyword is recognized. You can enter up to 10 IDs.

                     * @param _keyWordLibIdList List of keyword IDs for recognition. This parameter is left blank by default, indicating that no keyword is recognized. You can enter up to 10 IDs.

                     * 
                     */
                    void SetKeyWordLibIdList(const std::vector<std::string>& _keyWordLibIdList);

                    /**
                     * 判断参数 KeyWordLibIdList 是否已赋值
                     * @return KeyWordLibIdList 是否已赋值
                     * 
                     */
                    bool KeyWordLibIdListHasBeenSet() const;

                private:

                    /**
                     * Engine model type.
Each recognition engine adopts a specific billing plan. Engines marked with "large model version" adopt the large model billing plan. For product billing instructions, [click here] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1).


Note: If you want to recognize telecommunication audio but find that a 16k engine is required, you can use a 16k engine as described below for recognition. However, ** the 16k engines are not trained for recognizing telecommunication audio. Therefore, the recognition results cannot be guaranteed. You need to check whether the recognition results can be used. **

Engines for general scenarios:
** Note: Use 16k engines for scenarios other than telecommunication. **
** 16k_zh_large: ** Engine (large model version) for Mandarin, Chinese dialects, and English. This engine supports recognizing audio in Chinese, English, and [various Chinese dialects] (https://intl.cloud.tencent.com/document/product/1093/35682?from_cn_redirect=1). It has a large number of parameters, enhanced performance, and greatly improved recognition accuracy for low-quality audio with loud noise, too much echo, low voice volume, or faint voices. [Click here] (https://console.cloud.tencent.com/asr/demonstrate) to compare the recognition performance of the 16k_zh engine and this one.
** 16k_multi_lang: ** Engine (large model version) for multiple languages. This engine supports recognizing audio in English, Japanese, Korean, Arabic, Filipino, French, Hindi, Indonesian, Malay, Portuguese, Spanish, Thai, Turkish, Vietnamese, and German (sentence-level or paragraph-level).
** 16k_zh-PY: ** Engine for Chinese, English, and Cantonese. The engine supports recognizing audio in Mandarin, English, and Cantonese at the same time.
** 16k_ms: ** Engine for Malay.
** 16k_id: ** Engine for Indonesian.
** 16k_th: ** Engine for Thai.
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * Number of recognition channels.
1: Mono. (16k engines only support mono. ** Do no t** set to stereo.)
2: Stereo. (Stereo is supported only for 8k engines, and the two channels should correspond to the respective communication parties.)

Note:
16k engines: Only support mono. ** ChannelNum should be set to 1 **.
8k engines: Support both mono and stereo. ** It is recommended to set ChannelNum to 2 (indicating stereo) **. Stereo can physically distinguish speakers to avoid recognition mistakes caused by overlapping speech. It can provide the best speaker separation and recognition effects. Once stereo is set, the speakers are automatically separated. ** You do not need to enable the speaker separation feature **. You can use the default values for related parameters (** SpeakerDiarization and SpeakerNumber **). For speakerId in the returned ResultDetail, the value 0 represents the left channel, and the value 1 represents the right channel.
                     */
                    uint64_t m_channelNum;
                    bool m_channelNumHasBeenSet;

                    /**
                     * Format of the returned recognition result.
0: The basic recognition result (containing only valid voice timestamps but no word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail)).
1: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps and speech speed value but ** no punctuation **).
2: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **).
3: The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by punctuation. ** This format applies to subtitle scenarios **.
4: ** [Value-added paid feature] ** The basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The recognition results are segmented by NLP semantics. ** This format applies to scenarios such as meeting and court record transcription ** and is supported only for 8k_zh and 16k_zh engines.
5: ** [Value-added paid feature] ** Basic recognition result and word-level [detailed recognition result] (https://intl.cloud.tencent.com/document/api/1093/37824?from_cn_redirect=1#SentenceDetail) (containing word-level timestamps, speech speed value, and ** punctuation **). The oral-to-written transcription result is also output, which has excluded modal particles and consecutive identical words, optimized expressions, and corrected speech mistakes. ** This format applies to scenarios of generating minutes for online and offline meetings** and is supported only for 8k_zh and 16k_zh engines.

Notes:
If this parameter is set to 4, make sure that a [semantics-based segmentation resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 4, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
If this parameter is set to 5, make sure that an [oral-to-written resource package] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#97ae4aa0-29a0-4066-9f07-ccaf8856a16b) is purchased for your account or that your account has enabled post-payment. ** If post-payment is enabled and this parameter is set to 5, [automatic billing] (https://intl.cloud.tencent.com/document/product/1093/35686?from_cn_redirect=1#d912167d-ffd5-41a9-8b1c-2e89845a6852) will apply **.
                     */
                    uint64_t m_resTextFormat;
                    bool m_resTextFormatHasBeenSet;

                    /**
                     * Audio source.
0: Audio URL.
1: Local audio file (body of the POST request).
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Audio file Base64 code.
** This parameter is required if SourceType is set to 1. Otherwise, it can be left blank. **

Note: The audio data size cannot exceed 5 MB.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Data length (before Base64 encoding).
                     */
                    uint64_t m_dataLen;
                    bool m_dataLenHasBeenSet;

                    /**
                     * Audio URL. (The audio should be downloadable via a public network browser.)
** This parameter is required if SourceType is set to 0. Otherwise, it can be left blank. **

Notes:
1. Make sure that the total audio duration of recording files does not exceed 5 hours. Otherwise, recognition may fail.
2. Pay attention to file download to avoid download failure.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Callback URL

User-defined service URL for receiving recognition results.
For the callback format and content, see [Callback Description] (https://intl.cloud.tencent.com/document/product/1093/52632?from_cn_redirect=1).

Notes:

- If you use the polling method to obtain recognition results, this parameter is not required.
- It is recommended to include your business ID and other information in the callback URL for handling business logic.
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * Whether to enable speaker separation.
0: Disable.
1: Enable. (This value is supported only for the following engines: 8k_zh, 16k_zh, 16k_ms, 16k_en, 16k_id, 16k_zh_large, and 16k_zh_dialect. ChannelNum should be set to 1.)
The default value is 0.

Note:
If an 8k engine is used and ChannelNum is set to 2 (stereo), use the default values for corresponding parameters as stated in the ** ChannelNum ** parameter description.
                     */
                    int64_t m_speakerDiarization;
                    bool m_speakerDiarizationHasBeenSet;

                    /**
                     * Number of speakers to be separated.
** Speaker separation must be enabled. Otherwise, this parameter does not take effect. ** Value range: 0-10.
0: Automatic separation. (Up to 20 speakers can be separated.)
1-10: Specify the number of speakers.
The default value is 0.
                     */
                    int64_t m_speakerNumber;
                    bool m_speakerNumberHasBeenSet;

                    /**
                     * This service is not available.
                     */
                    std::string m_hotwordId;
                    bool m_hotwordIdHasBeenSet;

                    /**
                     * This service is not available.
                     */
                    int64_t m_reinforceHotword;
                    bool m_reinforceHotwordHasBeenSet;

                    /**
                     * This service is not available.
                     */
                    std::string m_customizationId;
                    bool m_customizationIdHasBeenSet;

                    /**
                     * This service is not available.
                     */
                    int64_t m_emotionRecognition;
                    bool m_emotionRecognitionHasBeenSet;

                    /**
                     * Emotional energy value.
The value is the result of dividing the sound volume in dB by 10. Value range: [1,10]. The higher the value, the stronger the emotion.
0: Disable.
1: Enable.
The default value is 0.
                     */
                    int64_t m_emotionalEnergy;
                    bool m_emotionalEnergyHasBeenSet;

                    /**
                     * Intelligent conversion into Arabic numerals (supported only for engines for recognizing audio in Mandarin).
0: Do not convert, but directly output Chinese numerals.
1: Intelligently convert into Arabic numerals based on the scenario.
3: Enable conversion for math-related letters.
The default value is 1.
                     */
                    int64_t m_convertNumMode;
                    bool m_convertNumModeHasBeenSet;

                    /**
                     * Dirty word filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out dirty words.
1: Filter out dirty words.
2: Replace dirty words with *.
The default value is 0.
                     */
                    int64_t m_filterDirty;
                    bool m_filterDirtyHasBeenSet;

                    /**
                     * Punctuation filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out punctuation.
1: Filter out sentence-ending punctuation.
2: Filter out all punctuation.
The default value is 0.
                     */
                    int64_t m_filterPunc;
                    bool m_filterPuncHasBeenSet;

                    /**
                     * Modal particle filtering (supported only for engines for recognizing audio in Mandarin).
0: Do not filter out modal particles.
1: Filter out specified modal particles.
2: Filter out all modal particles.
The default value is 0.
                     */
                    int64_t m_filterModal;
                    bool m_filterModalHasBeenSet;

                    /**
                     * The maximum number of characters per line (supported only for engines for recognizing audio in Mandarin). A punctuation mark is added if this limit is reached.
** This parameter can control the maximum number of characters per line, which applies to subtitle generation scenarios. ** Value range: [6,40].
0: Disable this feature.
The default value is 0.

Note: To enable this feature, ResTextFormat should be set to 3. The recognition result can be obtained from FinalSentence by parsing the list in the returned ResultDetail.
                     */
                    int64_t m_sentenceMaxLength;
                    bool m_sentenceMaxLengthHasBeenSet;

                    /**
                     * Additional parameter. ** (This parameter is meaningless. Ignore it.) **
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * Temporary term list. This parameter is used to improve the recognition accuracy.

- Restrictions for individual terms: The format is "term|weight". Each term can contain no more than 30 characters (or 10 Chinese characters. The weight can be in the range of [1-11] or 100. For example, "Tencent Cloud|5" or "ASR|11".

- Restrictions for the temporary term list: Multiple terms are separated by commas. The list can contain up to 128 terms. For example, "Tencent Cloud|10, Audio Recognition|5, ASR|11".

- Difference between hotword_id (term list) and hotword_list (temporary term list):

    - hotword_id: Term list. You need to create a term list in the console or by using the API first and obtain the term list ID.

    - hotword_list: Temporary term list. You can directly enter the ID of the temporary term list each time you initiate a request. The temporary term list is not retained on the cloud. This parameter applies to users with a massive number of terms.

Notes:

- If both hotword_id and hotword_list are specified, hotword_list will take effect first.

- When the weight of a term is set to 11, this term becomes a super term. It is recommended that the weight is set to 11 only for critical and necessary terms. The overall accuracy will be affected if the weight is set to 11 for too many terms.

- When the weight of a term is set to 100, the term enhancement feature is enabled to replace homophones of this term. (This feature is supported only for 8k_zh and 16k_zh engines.) For example, if you configure "mizhi 1|100", the recognized word "mizhi 2", which is a homophone of "mizhi 2", will be forcibly replaced with "mizhi 2". It is recommended that you enable this feature based on the actual needs. You can set the weight to 100 for only critical and necessary terms. The overall accuracy will be affected if the weight is set to 100 for too many terms.
                     */
                    std::string m_hotwordList;
                    bool m_hotwordListHasBeenSet;

                    /**
                     * List of keyword IDs for recognition. This parameter is left blank by default, indicating that no keyword is recognized. You can enter up to 10 IDs.

                     */
                    std::vector<std::string> m_keyWordLibIdList;
                    bool m_keyWordLibIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_CREATERECTASKREQUEST_H_
