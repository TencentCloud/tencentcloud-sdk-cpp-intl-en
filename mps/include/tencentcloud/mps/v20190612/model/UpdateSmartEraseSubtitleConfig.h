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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASESUBTITLECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASESUBTITLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>
#include <tencentcloud/mps/v20190612/model/EraseTimeArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle removal configuration for the smart erasing template.
                */
                class UpdateSmartEraseSubtitleConfig : public AbstractModel
                {
                public:
                    UpdateSmartEraseSubtitleConfig();
                    ~UpdateSmartEraseSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When using automatic erasing, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
-auto erasing
- custom: specified area erasing.

                     * @return SubtitleEraseMethod Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When using automatic erasing, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
-auto erasing
- custom: specified area erasing.

                     * 
                     */
                    std::string GetSubtitleEraseMethod() const;

                    /**
                     * 设置Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When using automatic erasing, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
-auto erasing
- custom: specified area erasing.

                     * @param _subtitleEraseMethod Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When using automatic erasing, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
-auto erasing
- custom: specified area erasing.

                     * 
                     */
                    void SetSubtitleEraseMethod(const std::string& _subtitleEraseMethod);

                    /**
                     * 判断参数 SubtitleEraseMethod 是否已赋值
                     * @return SubtitleEraseMethod 是否已赋值
                     * 
                     */
                    bool SubtitleEraseMethodHasBeenSet() const;

                    /**
                     * 获取Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, it is usually recommended to select this version for better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * @return SubtitleModel Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, it is usually recommended to select this version for better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * 
                     */
                    std::string GetSubtitleModel() const;

                    /**
                     * 设置Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, it is usually recommended to select this version for better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * @param _subtitleModel Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, it is usually recommended to select this version for better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * 
                     */
                    void SetSubtitleModel(const std::string& _subtitleModel);

                    /**
                     * 判断参数 SubtitleModel 是否已赋值
                     * @return SubtitleModel 是否已赋值
                     * 
                     */
                    bool SubtitleModelHasBeenSet() const;

                    /**
                     * 获取Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported only when SubtitleEraseMethod is set to auto. Once enabled, it identifies the text region that appears longest and most stably within the automated erasing area as the subtitle area. The text in the subtitle area is extracted and erased.
-ON
-OFF: disabled.
                     * @return OcrSwitch Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported only when SubtitleEraseMethod is set to auto. Once enabled, it identifies the text region that appears longest and most stably within the automated erasing area as the subtitle area. The text in the subtitle area is extracted and erased.
-ON
-OFF: disabled.
                     * 
                     */
                    std::string GetOcrSwitch() const;

                    /**
                     * 设置Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported only when SubtitleEraseMethod is set to auto. Once enabled, it identifies the text region that appears longest and most stably within the automated erasing area as the subtitle area. The text in the subtitle area is extracted and erased.
-ON
-OFF: disabled.
                     * @param _ocrSwitch Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported only when SubtitleEraseMethod is set to auto. Once enabled, it identifies the text region that appears longest and most stably within the automated erasing area as the subtitle area. The text in the subtitle area is extracted and erased.
-ON
-OFF: disabled.
                     * 
                     */
                    void SetOcrSwitch(const std::string& _ocrSwitch);

                    /**
                     * 判断参数 OcrSwitch 是否已赋值
                     * @return OcrSwitch 是否已赋值
                     * 
                     */
                    bool OcrSwitchHasBeenSet() const;

                    /**
                     * 获取Subtitle language, used for guiding OCR recognition, default value zh_en; this parameter is valid only when OcrSwitch is "ON".
- zh_en: Chinese and English
- multi: others
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Indian Bengali, Indian Gujarati, Indian Kannada, Indian Malayalam, Indian Tamil, Indian Telugu, Slovenian, Polish, Catalonia, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan


                     * @return SubtitleLang Subtitle language, used for guiding OCR recognition, default value zh_en; this parameter is valid only when OcrSwitch is "ON".
- zh_en: Chinese and English
- multi: others
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Indian Bengali, Indian Gujarati, Indian Kannada, Indian Malayalam, Indian Tamil, Indian Telugu, Slovenian, Polish, Catalonia, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan


                     * 
                     */
                    std::string GetSubtitleLang() const;

                    /**
                     * 设置Subtitle language, used for guiding OCR recognition, default value zh_en; this parameter is valid only when OcrSwitch is "ON".
- zh_en: Chinese and English
- multi: others
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Indian Bengali, Indian Gujarati, Indian Kannada, Indian Malayalam, Indian Tamil, Indian Telugu, Slovenian, Polish, Catalonia, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan


                     * @param _subtitleLang Subtitle language, used for guiding OCR recognition, default value zh_en; this parameter is valid only when OcrSwitch is "ON".
- zh_en: Chinese and English
- multi: others
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Indian Bengali, Indian Gujarati, Indian Kannada, Indian Malayalam, Indian Tamil, Indian Telugu, Slovenian, Polish, Catalonia, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan


                     * 
                     */
                    void SetSubtitleLang(const std::string& _subtitleLang);

                    /**
                     * 判断参数 SubtitleLang 是否已赋值
                     * @return SubtitleLang 是否已赋值
                     * 
                     */
                    bool SubtitleLangHasBeenSet() const;

                    /**
                     * 获取Subtitle file format, default value vtt; this parameter is valid only when OcrSwitch is "ON".
- srt: SRT format
- vtt: WebVTT format.
                     * @return SubtitleFormat Subtitle file format, default value vtt; this parameter is valid only when OcrSwitch is "ON".
- srt: SRT format
- vtt: WebVTT format.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Subtitle file format, default value vtt; this parameter is valid only when OcrSwitch is "ON".
- srt: SRT format
- vtt: WebVTT format.
                     * @param _subtitleFormat Subtitle file format, default value vtt; this parameter is valid only when OcrSwitch is "ON".
- srt: SRT format
- vtt: WebVTT format.
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取Whether to enable subtitle translation, default value is OFF. This parameter is valid only when OcrSwitch is "ON".
-ON
-OFF: disabled.
                     * @return TransSwitch Whether to enable subtitle translation, default value is OFF. This parameter is valid only when OcrSwitch is "ON".
-ON
-OFF: disabled.
                     * 
                     */
                    std::string GetTransSwitch() const;

                    /**
                     * 设置Whether to enable subtitle translation, default value is OFF. This parameter is valid only when OcrSwitch is "ON".
-ON
-OFF: disabled.
                     * @param _transSwitch Whether to enable subtitle translation, default value is OFF. This parameter is valid only when OcrSwitch is "ON".
-ON
-OFF: disabled.
                     * 
                     */
                    void SetTransSwitch(const std::string& _transSwitch);

                    /**
                     * 判断参数 TransSwitch 是否已赋值
                     * @return TransSwitch 是否已赋值
                     * 
                     */
                    bool TransSwitchHasBeenSet() const;

                    /**
                     * 获取Subtitle target language, default value en; this parameter is valid only when TransSwitch is "ON".
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
                     * @return TransDstLang Subtitle target language, default value en; this parameter is valid only when TransSwitch is "ON".
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
                     * 
                     */
                    std::string GetTransDstLang() const;

                    /**
                     * 设置Subtitle target language, default value en; this parameter is valid only when TransSwitch is "ON".
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
                     * @param _transDstLang Subtitle target language, default value en; this parameter is valid only when TransSwitch is "ON".
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
                     * 
                     */
                    void SetTransDstLang(const std::string& _transDstLang);

                    /**
                     * 判断参数 TransDstLang 是否已赋值
                     * @return TransDstLang 是否已赋值
                     * 
                     */
                    bool TransDstLangHasBeenSet() const;

                    /**
                     * 获取Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return AutoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _autoAreas Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    void SetAutoAreas(const std::vector<EraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return CustomAreas Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _customAreas Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    void SetCustomAreas(const std::vector<EraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                private:

                    /**
                     * Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When using automatic erasing, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
-auto erasing
- custom: specified area erasing.

                     */
                    std::string m_subtitleEraseMethod;
                    bool m_subtitleEraseMethodHasBeenSet;

                    /**
                     * Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, it is usually recommended to select this version for better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     */
                    std::string m_subtitleModel;
                    bool m_subtitleModelHasBeenSet;

                    /**
                     * Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported only when SubtitleEraseMethod is set to auto. Once enabled, it identifies the text region that appears longest and most stably within the automated erasing area as the subtitle area. The text in the subtitle area is extracted and erased.
-ON
-OFF: disabled.
                     */
                    std::string m_ocrSwitch;
                    bool m_ocrSwitchHasBeenSet;

                    /**
                     * Subtitle language, used for guiding OCR recognition, default value zh_en; this parameter is valid only when OcrSwitch is "ON".
- zh_en: Chinese and English
- multi: others
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Indian Bengali, Indian Gujarati, Indian Kannada, Indian Malayalam, Indian Tamil, Indian Telugu, Slovenian, Polish, Catalonia, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan


                     */
                    std::string m_subtitleLang;
                    bool m_subtitleLangHasBeenSet;

                    /**
                     * Subtitle file format, default value vtt; this parameter is valid only when OcrSwitch is "ON".
- srt: SRT format
- vtt: WebVTT format.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Whether to enable subtitle translation, default value is OFF. This parameter is valid only when OcrSwitch is "ON".
-ON
-OFF: disabled.
                     */
                    std::string m_transSwitch;
                    bool m_transSwitchHasBeenSet;

                    /**
                     * Subtitle target language, default value en; this parameter is valid only when TransSwitch is "ON".
Supported languages:
zh: Simplified Chinese
en: English
ja: Japanese
ko: Korean
fr: French
es: Spanish
it: Italian
de: German
tr: Turkish
ru: Russian
pt: Portuguese
vi: Vietnamese
id: Indonesian
ms: Malay
th: Thai
ar: Arabic
hi: Hindi
                     */
                    std::string m_transDstLang;
                    bool m_transDstLangHasBeenSet;

                    /**
                     * Custom area for automatic erasing.
For the specified area, AI models are used to automatically detect and erase the target objects.
Note: When the erasing method is set to custom, this parameter is invalid. When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Specify the custom region for erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASESUBTITLECONFIG_H_
