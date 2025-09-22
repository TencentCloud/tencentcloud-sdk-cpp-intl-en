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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASESUBTITLECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASESUBTITLECONFIG_H_

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
                * Intelligent erasure template subtitle configuration.
                */
                class SmartEraseSubtitleConfig : public AbstractModel
                {
                public:
                    SmartEraseSubtitleConfig();
                    ~SmartEraseSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the subtitle erasure method.
**Automatic erasing:** automatically identifies subtitle text content in videos through AI models and performs seamless erasure to generate new videos. frame interference and unique subtitle styles may cause certain missed or incorrect erasures, which can be handled through specified area erasure.
When using automatic erasure, if AutoAreas is not specified, the default region (lower middle of the frame) will be erased automatically. if AutoAreas is specified, it will change to erase the designated area.
**Specified area erasing:** if your subtitle position is fixed, directly specify the erasure area to decrease the chance of removal omission to the maximum extent.
When your choice is specified area erasure, please import at least one designated region in CustomAreas.
-Automated removal.
- specifies the custom specified area erasure.

                     * @return SubtitleEraseMethod Specifies the subtitle erasure method.
**Automatic erasing:** automatically identifies subtitle text content in videos through AI models and performs seamless erasure to generate new videos. frame interference and unique subtitle styles may cause certain missed or incorrect erasures, which can be handled through specified area erasure.
When using automatic erasure, if AutoAreas is not specified, the default region (lower middle of the frame) will be erased automatically. if AutoAreas is specified, it will change to erase the designated area.
**Specified area erasing:** if your subtitle position is fixed, directly specify the erasure area to decrease the chance of removal omission to the maximum extent.
When your choice is specified area erasure, please import at least one designated region in CustomAreas.
-Automated removal.
- specifies the custom specified area erasure.

                     * 
                     */
                    std::string GetSubtitleEraseMethod() const;

                    /**
                     * 设置Specifies the subtitle erasure method.
**Automatic erasing:** automatically identifies subtitle text content in videos through AI models and performs seamless erasure to generate new videos. frame interference and unique subtitle styles may cause certain missed or incorrect erasures, which can be handled through specified area erasure.
When using automatic erasure, if AutoAreas is not specified, the default region (lower middle of the frame) will be erased automatically. if AutoAreas is specified, it will change to erase the designated area.
**Specified area erasing:** if your subtitle position is fixed, directly specify the erasure area to decrease the chance of removal omission to the maximum extent.
When your choice is specified area erasure, please import at least one designated region in CustomAreas.
-Automated removal.
- specifies the custom specified area erasure.

                     * @param _subtitleEraseMethod Specifies the subtitle erasure method.
**Automatic erasing:** automatically identifies subtitle text content in videos through AI models and performs seamless erasure to generate new videos. frame interference and unique subtitle styles may cause certain missed or incorrect erasures, which can be handled through specified area erasure.
When using automatic erasure, if AutoAreas is not specified, the default region (lower middle of the frame) will be erased automatically. if AutoAreas is specified, it will change to erase the designated area.
**Specified area erasing:** if your subtitle position is fixed, directly specify the erasure area to decrease the chance of removal omission to the maximum extent.
When your choice is specified area erasure, please import at least one designated region in CustomAreas.
-Automated removal.
- specifies the custom specified area erasure.

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
                     * 获取Subtitle erasure model.
**Standard version (recommend):** if your subtitle style is standard, normally recommend choose this version for better effectiveness with seamless detail.
**Regional version:** if your subtitles have special styles such as italics, shadows, or motion effects, we recommend choosing the regional version for larger removal area, though the detail effect is not as good as the standard version.
-Specifies the standard model.
-area. specifies the regional model.
                     * @return SubtitleModel Subtitle erasure model.
**Standard version (recommend):** if your subtitle style is standard, normally recommend choose this version for better effectiveness with seamless detail.
**Regional version:** if your subtitles have special styles such as italics, shadows, or motion effects, we recommend choosing the regional version for larger removal area, though the detail effect is not as good as the standard version.
-Specifies the standard model.
-area. specifies the regional model.
                     * 
                     */
                    std::string GetSubtitleModel() const;

                    /**
                     * 设置Subtitle erasure model.
**Standard version (recommend):** if your subtitle style is standard, normally recommend choose this version for better effectiveness with seamless detail.
**Regional version:** if your subtitles have special styles such as italics, shadows, or motion effects, we recommend choosing the regional version for larger removal area, though the detail effect is not as good as the standard version.
-Specifies the standard model.
-area. specifies the regional model.
                     * @param _subtitleModel Subtitle erasure model.
**Standard version (recommend):** if your subtitle style is standard, normally recommend choose this version for better effectiveness with seamless detail.
**Regional version:** if your subtitles have special styles such as italics, shadows, or motion effects, we recommend choosing the regional version for larger removal area, though the detail effect is not as good as the standard version.
-Specifies the standard model.
-area. specifies the regional model.
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
                     * 获取Whether OCR subtitle extraction is enabled. default value: OFF.
Supports enabling OCR subtitle extraction only when SubtitleEraseMethod is set to auto. when enabled, it identifies the longest and most stable text area within the region as the subtitle area, then performs text extraction and removal.
-ON: enable.
-OFF. specifies the disabled state.
                     * @return OcrSwitch Whether OCR subtitle extraction is enabled. default value: OFF.
Supports enabling OCR subtitle extraction only when SubtitleEraseMethod is set to auto. when enabled, it identifies the longest and most stable text area within the region as the subtitle area, then performs text extraction and removal.
-ON: enable.
-OFF. specifies the disabled state.
                     * 
                     */
                    std::string GetOcrSwitch() const;

                    /**
                     * 设置Whether OCR subtitle extraction is enabled. default value: OFF.
Supports enabling OCR subtitle extraction only when SubtitleEraseMethod is set to auto. when enabled, it identifies the longest and most stable text area within the region as the subtitle area, then performs text extraction and removal.
-ON: enable.
-OFF. specifies the disabled state.
                     * @param _ocrSwitch Whether OCR subtitle extraction is enabled. default value: OFF.
Supports enabling OCR subtitle extraction only when SubtitleEraseMethod is set to auto. when enabled, it identifies the longest and most stable text area within the region as the subtitle area, then performs text extraction and removal.
-ON: enable.
-OFF. specifies the disabled state.
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
                     * 获取Subtitle language, for OCR guidance, default value zh_en. this parameter is valid only when OcrSwitch is ON.
-Chinese and english.
-multi other.
Other supported languages:.
Chinese, english, japanese, korean, spanish, french, german, portuguese, vietnamese, malay, russian, italian, dutch, swedish, finnish, danish, norwegian, hungarian, thai, hindi, arabic, indian-bengali, indian-gujarati, indian-kannada, indian-malayalam, indian-tamil, indian-telugu, slovenian, polish, catalan, bosnian, czech, estonian, croatian, punjabi, marathi, azerbaijani, indonesian, luxembourgish, lithuanian, latvian, maltese, slovak, turkish, kazakh, greek, irish, belarusian, khmer, tagalog, pashto, persian, tajik.


                     * @return SubtitleLang Subtitle language, for OCR guidance, default value zh_en. this parameter is valid only when OcrSwitch is ON.
-Chinese and english.
-multi other.
Other supported languages:.
Chinese, english, japanese, korean, spanish, french, german, portuguese, vietnamese, malay, russian, italian, dutch, swedish, finnish, danish, norwegian, hungarian, thai, hindi, arabic, indian-bengali, indian-gujarati, indian-kannada, indian-malayalam, indian-tamil, indian-telugu, slovenian, polish, catalan, bosnian, czech, estonian, croatian, punjabi, marathi, azerbaijani, indonesian, luxembourgish, lithuanian, latvian, maltese, slovak, turkish, kazakh, greek, irish, belarusian, khmer, tagalog, pashto, persian, tajik.


                     * 
                     */
                    std::string GetSubtitleLang() const;

                    /**
                     * 设置Subtitle language, for OCR guidance, default value zh_en. this parameter is valid only when OcrSwitch is ON.
-Chinese and english.
-multi other.
Other supported languages:.
Chinese, english, japanese, korean, spanish, french, german, portuguese, vietnamese, malay, russian, italian, dutch, swedish, finnish, danish, norwegian, hungarian, thai, hindi, arabic, indian-bengali, indian-gujarati, indian-kannada, indian-malayalam, indian-tamil, indian-telugu, slovenian, polish, catalan, bosnian, czech, estonian, croatian, punjabi, marathi, azerbaijani, indonesian, luxembourgish, lithuanian, latvian, maltese, slovak, turkish, kazakh, greek, irish, belarusian, khmer, tagalog, pashto, persian, tajik.


                     * @param _subtitleLang Subtitle language, for OCR guidance, default value zh_en. this parameter is valid only when OcrSwitch is ON.
-Chinese and english.
-multi other.
Other supported languages:.
Chinese, english, japanese, korean, spanish, french, german, portuguese, vietnamese, malay, russian, italian, dutch, swedish, finnish, danish, norwegian, hungarian, thai, hindi, arabic, indian-bengali, indian-gujarati, indian-kannada, indian-malayalam, indian-tamil, indian-telugu, slovenian, polish, catalan, bosnian, czech, estonian, croatian, punjabi, marathi, azerbaijani, indonesian, luxembourgish, lithuanian, latvian, maltese, slovak, turkish, kazakh, greek, irish, belarusian, khmer, tagalog, pashto, persian, tajik.


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
                     * 获取Specifies the subtitle file format. default value: vtt. this parameter is valid only when OcrSwitch is set to ON.
-srt format.
-vtt: WebVTT format.
                     * @return SubtitleFormat Specifies the subtitle file format. default value: vtt. this parameter is valid only when OcrSwitch is set to ON.
-srt format.
-vtt: WebVTT format.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Specifies the subtitle file format. default value: vtt. this parameter is valid only when OcrSwitch is set to ON.
-srt format.
-vtt: WebVTT format.
                     * @param _subtitleFormat Specifies the subtitle file format. default value: vtt. this parameter is valid only when OcrSwitch is set to ON.
-srt format.
-vtt: WebVTT format.
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
                     * 获取Specifies whether to enable subtitle translation. default value: OFF. this parameter is valid only when OcrSwitch is set to ON.
-ON: enable.
-OFF. specifies the disabled state.
                     * @return TransSwitch Specifies whether to enable subtitle translation. default value: OFF. this parameter is valid only when OcrSwitch is set to ON.
-ON: enable.
-OFF. specifies the disabled state.
                     * 
                     */
                    std::string GetTransSwitch() const;

                    /**
                     * 设置Specifies whether to enable subtitle translation. default value: OFF. this parameter is valid only when OcrSwitch is set to ON.
-ON: enable.
-OFF. specifies the disabled state.
                     * @param _transSwitch Specifies whether to enable subtitle translation. default value: OFF. this parameter is valid only when OcrSwitch is set to ON.
-ON: enable.
-OFF. specifies the disabled state.
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
                     * 获取Subtitle target language. default value: en. this parameter is valid only when TransSwitch is set to ON.
Supported languages:.
Simplified chinese.
Specifies the language. valid values: en (english).
Ja: japanese.
Ko: korean.
Fr: french.
es: spanish.
It: italian.
de: german.
tr: turkish.
Ru: russian.
pt: portuguese.
Vi: vietnamese.
id: indonesian.
ms: malay.
Th: thai.
Ar: arabic.
hi: Hindi
                     * @return TransDstLang Subtitle target language. default value: en. this parameter is valid only when TransSwitch is set to ON.
Supported languages:.
Simplified chinese.
Specifies the language. valid values: en (english).
Ja: japanese.
Ko: korean.
Fr: french.
es: spanish.
It: italian.
de: german.
tr: turkish.
Ru: russian.
pt: portuguese.
Vi: vietnamese.
id: indonesian.
ms: malay.
Th: thai.
Ar: arabic.
hi: Hindi
                     * 
                     */
                    std::string GetTransDstLang() const;

                    /**
                     * 设置Subtitle target language. default value: en. this parameter is valid only when TransSwitch is set to ON.
Supported languages:.
Simplified chinese.
Specifies the language. valid values: en (english).
Ja: japanese.
Ko: korean.
Fr: french.
es: spanish.
It: italian.
de: german.
tr: turkish.
Ru: russian.
pt: portuguese.
Vi: vietnamese.
id: indonesian.
ms: malay.
Th: thai.
Ar: arabic.
hi: Hindi
                     * @param _transDstLang Subtitle target language. default value: en. this parameter is valid only when TransSwitch is set to ON.
Supported languages:.
Simplified chinese.
Specifies the language. valid values: en (english).
Ja: japanese.
Ko: korean.
Fr: french.
es: spanish.
It: italian.
de: german.
tr: turkish.
Ru: russian.
pt: portuguese.
Vi: vietnamese.
id: indonesian.
ms: malay.
Th: thai.
Ar: arabic.
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
                     * 获取Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom. for template modification, input [] to clean up the region. the template region information remains unchanged if not imported.
                     * @return AutoAreas Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom. for template modification, input [] to clean up the region. the template region information remains unchanged if not imported.
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom. for template modification, input [] to clean up the region. the template region information remains unchanged if not imported.
                     * @param _autoAreas Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom. for template modification, input [] to clean up the region. the template region information remains unchanged if not imported.
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
                     * 获取Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
Note: when modifying the template, pass [] to clear the region. the template region information remains unchanged if not passed.
                     * @return CustomAreas Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
Note: when modifying the template, pass [] to clear the region. the template region information remains unchanged if not passed.
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
Note: when modifying the template, pass [] to clear the region. the template region information remains unchanged if not passed.
                     * @param _customAreas Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
Note: when modifying the template, pass [] to clear the region. the template region information remains unchanged if not passed.
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
                     * Specifies the subtitle erasure method.
**Automatic erasing:** automatically identifies subtitle text content in videos through AI models and performs seamless erasure to generate new videos. frame interference and unique subtitle styles may cause certain missed or incorrect erasures, which can be handled through specified area erasure.
When using automatic erasure, if AutoAreas is not specified, the default region (lower middle of the frame) will be erased automatically. if AutoAreas is specified, it will change to erase the designated area.
**Specified area erasing:** if your subtitle position is fixed, directly specify the erasure area to decrease the chance of removal omission to the maximum extent.
When your choice is specified area erasure, please import at least one designated region in CustomAreas.
-Automated removal.
- specifies the custom specified area erasure.

                     */
                    std::string m_subtitleEraseMethod;
                    bool m_subtitleEraseMethodHasBeenSet;

                    /**
                     * Subtitle erasure model.
**Standard version (recommend):** if your subtitle style is standard, normally recommend choose this version for better effectiveness with seamless detail.
**Regional version:** if your subtitles have special styles such as italics, shadows, or motion effects, we recommend choosing the regional version for larger removal area, though the detail effect is not as good as the standard version.
-Specifies the standard model.
-area. specifies the regional model.
                     */
                    std::string m_subtitleModel;
                    bool m_subtitleModelHasBeenSet;

                    /**
                     * Whether OCR subtitle extraction is enabled. default value: OFF.
Supports enabling OCR subtitle extraction only when SubtitleEraseMethod is set to auto. when enabled, it identifies the longest and most stable text area within the region as the subtitle area, then performs text extraction and removal.
-ON: enable.
-OFF. specifies the disabled state.
                     */
                    std::string m_ocrSwitch;
                    bool m_ocrSwitchHasBeenSet;

                    /**
                     * Subtitle language, for OCR guidance, default value zh_en. this parameter is valid only when OcrSwitch is ON.
-Chinese and english.
-multi other.
Other supported languages:.
Chinese, english, japanese, korean, spanish, french, german, portuguese, vietnamese, malay, russian, italian, dutch, swedish, finnish, danish, norwegian, hungarian, thai, hindi, arabic, indian-bengali, indian-gujarati, indian-kannada, indian-malayalam, indian-tamil, indian-telugu, slovenian, polish, catalan, bosnian, czech, estonian, croatian, punjabi, marathi, azerbaijani, indonesian, luxembourgish, lithuanian, latvian, maltese, slovak, turkish, kazakh, greek, irish, belarusian, khmer, tagalog, pashto, persian, tajik.


                     */
                    std::string m_subtitleLang;
                    bool m_subtitleLangHasBeenSet;

                    /**
                     * Specifies the subtitle file format. default value: vtt. this parameter is valid only when OcrSwitch is set to ON.
-srt format.
-vtt: WebVTT format.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Specifies whether to enable subtitle translation. default value: OFF. this parameter is valid only when OcrSwitch is set to ON.
-ON: enable.
-OFF. specifies the disabled state.
                     */
                    std::string m_transSwitch;
                    bool m_transSwitchHasBeenSet;

                    /**
                     * Subtitle target language. default value: en. this parameter is valid only when TransSwitch is set to ON.
Supported languages:.
Simplified chinese.
Specifies the language. valid values: en (english).
Ja: japanese.
Ko: korean.
Fr: french.
es: spanish.
It: italian.
de: german.
tr: turkish.
Ru: russian.
pt: portuguese.
Vi: vietnamese.
id: indonesian.
ms: malay.
Th: thai.
Ar: arabic.
hi: Hindi
                     */
                    std::string m_transDstLang;
                    bool m_transDstLangHasBeenSet;

                    /**
                     * Specifies automatic removal of a custom region.
Specifies the use of an AI model to automatically detect and erase existing targets in the specified region.
Note that this parameter will not take effect when the removal method is custom. for template modification, input [] to clean up the region. the template region information remains unchanged if not imported.
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * Specifies erasure of a custom region.
Detects and directly performs removal within a specified time range for the selected region.
Note: when modifying the template, pass [] to clear the region. the template region information remains unchanged if not passed.
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASESUBTITLECONFIG_H_
