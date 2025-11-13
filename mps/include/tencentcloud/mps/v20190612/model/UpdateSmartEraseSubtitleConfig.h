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
When automatic erasing is used, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
- auto: automatic erasing.
- custom: specified area erasing.

                     * @return SubtitleEraseMethod Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When automatic erasing is used, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
- auto: automatic erasing.
- custom: specified area erasing.

                     * 
                     */
                    std::string GetSubtitleEraseMethod() const;

                    /**
                     * 设置Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When automatic erasing is used, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
- auto: automatic erasing.
- custom: specified area erasing.

                     * @param _subtitleEraseMethod Subtitle erasing method.
**Automatic erasing:** Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.
When automatic erasing is used, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
- auto: automatic erasing.
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
**Standard edition (recommended):** For standard subtitle styles, you are recommended to select this edition to ensure better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * @return SubtitleModel Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, you are recommended to select this edition to ensure better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * 
                     */
                    std::string GetSubtitleModel() const;

                    /**
                     * 设置Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, you are recommended to select this edition to ensure better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     * @param _subtitleModel Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, you are recommended to select this edition to ensure better traceless effects in the details.
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
OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When OCR subtitle extraction is enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.
- ON: enabled.
-OFF: disabled.
                     * @return OcrSwitch Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When OCR subtitle extraction is enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.
- ON: enabled.
-OFF: disabled.
                     * 
                     */
                    std::string GetOcrSwitch() const;

                    /**
                     * 设置Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When OCR subtitle extraction is enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.
- ON: enabled.
-OFF: disabled.
                     * @param _ocrSwitch Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When OCR subtitle extraction is enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.
- ON: enabled.
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
                     * 获取Subtitle language, which is used to guide OCR recognition. The default value is zh_en. This parameter is valid only when OcrSwitch is set to ON.
- zh_en: Chinese and English.
- multi: others.
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, India-Bengali, India-Gujarati, India-Kannada, India-Malayalam, India-Tamil, India-Telugu, Slovenian, Polish, Catalan, Bosnian, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijani, Indonesian, Luxembourgish, Lithuanian, Latvian, Maltese, Slovak, Turkish, Kazakh, Greek, Irish, Belarusian, Khmer, Tagalog, Pashto, Persian, and Tajik.

                     * @return SubtitleLang Subtitle language, which is used to guide OCR recognition. The default value is zh_en. This parameter is valid only when OcrSwitch is set to ON.
- zh_en: Chinese and English.
- multi: others.
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, India-Bengali, India-Gujarati, India-Kannada, India-Malayalam, India-Tamil, India-Telugu, Slovenian, Polish, Catalan, Bosnian, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijani, Indonesian, Luxembourgish, Lithuanian, Latvian, Maltese, Slovak, Turkish, Kazakh, Greek, Irish, Belarusian, Khmer, Tagalog, Pashto, Persian, and Tajik.

                     * 
                     */
                    std::string GetSubtitleLang() const;

                    /**
                     * 设置Subtitle language, which is used to guide OCR recognition. The default value is zh_en. This parameter is valid only when OcrSwitch is set to ON.
- zh_en: Chinese and English.
- multi: others.
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, India-Bengali, India-Gujarati, India-Kannada, India-Malayalam, India-Tamil, India-Telugu, Slovenian, Polish, Catalan, Bosnian, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijani, Indonesian, Luxembourgish, Lithuanian, Latvian, Maltese, Slovak, Turkish, Kazakh, Greek, Irish, Belarusian, Khmer, Tagalog, Pashto, Persian, and Tajik.

                     * @param _subtitleLang Subtitle language, which is used to guide OCR recognition. The default value is zh_en. This parameter is valid only when OcrSwitch is set to ON.
- zh_en: Chinese and English.
- multi: others.
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, India-Bengali, India-Gujarati, India-Kannada, India-Malayalam, India-Tamil, India-Telugu, Slovenian, Polish, Catalan, Bosnian, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijani, Indonesian, Luxembourgish, Lithuanian, Latvian, Maltese, Slovak, Turkish, Kazakh, Greek, Irish, Belarusian, Khmer, Tagalog, Pashto, Persian, and Tajik.

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
                     * 获取Subtitle file format. The default value is vtt. This parameter is valid only when OcrSwitch is set to ON.
- srt: SRT format.
- vtt: WebVTT format.
                     * @return SubtitleFormat Subtitle file format. The default value is vtt. This parameter is valid only when OcrSwitch is set to ON.
- srt: SRT format.
- vtt: WebVTT format.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Subtitle file format. The default value is vtt. This parameter is valid only when OcrSwitch is set to ON.
- srt: SRT format.
- vtt: WebVTT format.
                     * @param _subtitleFormat Subtitle file format. The default value is vtt. This parameter is valid only when OcrSwitch is set to ON.
- srt: SRT format.
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
                     * 获取Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to ON.
- ON: enabled.
- OFF: disabled.
                     * @return TransSwitch Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to ON.
- ON: enabled.
- OFF: disabled.
                     * 
                     */
                    std::string GetTransSwitch() const;

                    /**
                     * 设置Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to ON.
- ON: enabled.
- OFF: disabled.
                     * @param _transSwitch Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to ON.
- ON: enabled.
- OFF: disabled.
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
                     * 获取Target language for Subtitle translation. The default value is en. This parameter is valid only when TransSwitch is set to ON.
Currently, the following languages are supported:
zh: Simplified Chinese.
en: English.
ja: Japanese.
ko: Korean.
fr: French.
es: Spanish.
it: Italian.
de: German.
tr: Turkish.
ru: Russian.
pt: Portuguese.
vi: Vietnamese.
id: Indonesian.
ms: Malay.
th: Thai.
ar: Arabic.
hi: Hindi.
                     * @return TransDstLang Target language for Subtitle translation. The default value is en. This parameter is valid only when TransSwitch is set to ON.
Currently, the following languages are supported:
zh: Simplified Chinese.
en: English.
ja: Japanese.
ko: Korean.
fr: French.
es: Spanish.
it: Italian.
de: German.
tr: Turkish.
ru: Russian.
pt: Portuguese.
vi: Vietnamese.
id: Indonesian.
ms: Malay.
th: Thai.
ar: Arabic.
hi: Hindi.
                     * 
                     */
                    std::string GetTransDstLang() const;

                    /**
                     * 设置Target language for Subtitle translation. The default value is en. This parameter is valid only when TransSwitch is set to ON.
Currently, the following languages are supported:
zh: Simplified Chinese.
en: English.
ja: Japanese.
ko: Korean.
fr: French.
es: Spanish.
it: Italian.
de: German.
tr: Turkish.
ru: Russian.
pt: Portuguese.
vi: Vietnamese.
id: Indonesian.
ms: Malay.
th: Thai.
ar: Arabic.
hi: Hindi.
                     * @param _transDstLang Target language for Subtitle translation. The default value is en. This parameter is valid only when TransSwitch is set to ON.
Currently, the following languages are supported:
zh: Simplified Chinese.
en: English.
ja: Japanese.
ko: Korean.
fr: French.
es: Spanish.
it: Italian.
de: German.
tr: Turkish.
ru: Russian.
pt: Portuguese.
vi: Vietnamese.
id: Indonesian.
ms: Malay.
th: Thai.
ar: Arabic.
hi: Hindi.
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
                     * 获取Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @return CustomAreas Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Custom area for specified area erasing.
For the specified area, erase the target objects directly without detection and recognition within a selected time period.
Note: When a template is modified, input [] for the erasing area; if this parameter is unspecified, the template area information will remain unchanged.
                     * @param _customAreas Custom area for specified area erasing.
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
When automatic erasing is used, if AutoAreas is not specified, the default area (lower middle part of the image) will be erased automatically. If AutoAreas is specified, the specified area will be erased automatically.
**Specified area erasing:** If the subtitle position is relatively fixed, you are recommended to specify the erasing area directly to minimize missed erasing.
When you choose specified area erasing, specify at least one area for CustomAreas.
- auto: automatic erasing.
- custom: specified area erasing.

                     */
                    std::string m_subtitleEraseMethod;
                    bool m_subtitleEraseMethodHasBeenSet;

                    /**
                     * Subtitle erasing model.
**Standard edition (recommended):** For standard subtitle styles, you are recommended to select this edition to ensure better traceless effects in the details.
**Area edition:** If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.
- standard: standard edition.
- area: area edition.
                     */
                    std::string m_subtitleModel;
                    bool m_subtitleModelHasBeenSet;

                    /**
                     * Whether to enable OCR subtitle extraction. The default value is OFF.
OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When OCR subtitle extraction is enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.
- ON: enabled.
-OFF: disabled.
                     */
                    std::string m_ocrSwitch;
                    bool m_ocrSwitchHasBeenSet;

                    /**
                     * Subtitle language, which is used to guide OCR recognition. The default value is zh_en. This parameter is valid only when OcrSwitch is set to ON.
- zh_en: Chinese and English.
- multi: others.
The following are other languages supported for recognition:
Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, India-Bengali, India-Gujarati, India-Kannada, India-Malayalam, India-Tamil, India-Telugu, Slovenian, Polish, Catalan, Bosnian, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijani, Indonesian, Luxembourgish, Lithuanian, Latvian, Maltese, Slovak, Turkish, Kazakh, Greek, Irish, Belarusian, Khmer, Tagalog, Pashto, Persian, and Tajik.

                     */
                    std::string m_subtitleLang;
                    bool m_subtitleLangHasBeenSet;

                    /**
                     * Subtitle file format. The default value is vtt. This parameter is valid only when OcrSwitch is set to ON.
- srt: SRT format.
- vtt: WebVTT format.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to ON.
- ON: enabled.
- OFF: disabled.
                     */
                    std::string m_transSwitch;
                    bool m_transSwitchHasBeenSet;

                    /**
                     * Target language for Subtitle translation. The default value is en. This parameter is valid only when TransSwitch is set to ON.
Currently, the following languages are supported:
zh: Simplified Chinese.
en: English.
ja: Japanese.
ko: Korean.
fr: French.
es: Spanish.
it: Italian.
de: German.
tr: Turkish.
ru: Russian.
pt: Portuguese.
vi: Vietnamese.
id: Indonesian.
ms: Malay.
th: Thai.
ar: Arabic.
hi: Hindi.
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
                     * Custom area for specified area erasing.
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
