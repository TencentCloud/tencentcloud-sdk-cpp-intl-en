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
                     * 获取<p>Subtitle erasure method.<br><strong>Automatic erasing:</strong> Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.<br>When using automatic erasing, if you do not specify AutoAreas, the default region (lower middle part of the frame) will be erased automatically. If AutoAreas is specified, the designated region will be erased instead.<br><strong>Specified area erasure:</strong> If your subtitle position is fixed, it is recommended to directly specify the erasure area to minimize missed erasures.<br>When choosing specified area erasure, please input at least one designated region in CustomAreas.</p><ul><li>auto: Automatic erasing</li><li>custom: Specified area erasure</li></ul>
                     * @return SubtitleEraseMethod <p>Subtitle erasure method.<br><strong>Automatic erasing:</strong> Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.<br>When using automatic erasing, if you do not specify AutoAreas, the default region (lower middle part of the frame) will be erased automatically. If AutoAreas is specified, the designated region will be erased instead.<br><strong>Specified area erasure:</strong> If your subtitle position is fixed, it is recommended to directly specify the erasure area to minimize missed erasures.<br>When choosing specified area erasure, please input at least one designated region in CustomAreas.</p><ul><li>auto: Automatic erasing</li><li>custom: Specified area erasure</li></ul>
                     * 
                     */
                    std::string GetSubtitleEraseMethod() const;

                    /**
                     * 设置<p>Subtitle erasure method.<br><strong>Automatic erasing:</strong> Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.<br>When using automatic erasing, if you do not specify AutoAreas, the default region (lower middle part of the frame) will be erased automatically. If AutoAreas is specified, the designated region will be erased instead.<br><strong>Specified area erasure:</strong> If your subtitle position is fixed, it is recommended to directly specify the erasure area to minimize missed erasures.<br>When choosing specified area erasure, please input at least one designated region in CustomAreas.</p><ul><li>auto: Automatic erasing</li><li>custom: Specified area erasure</li></ul>
                     * @param _subtitleEraseMethod <p>Subtitle erasure method.<br><strong>Automatic erasing:</strong> Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.<br>When using automatic erasing, if you do not specify AutoAreas, the default region (lower middle part of the frame) will be erased automatically. If AutoAreas is specified, the designated region will be erased instead.<br><strong>Specified area erasure:</strong> If your subtitle position is fixed, it is recommended to directly specify the erasure area to minimize missed erasures.<br>When choosing specified area erasure, please input at least one designated region in CustomAreas.</p><ul><li>auto: Automatic erasing</li><li>custom: Specified area erasure</li></ul>
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
                     * 获取<p>Subtitle erasure model.<br><strong>Standard version (recommended):</strong> If your subtitles have a standard style, it is usually recommended to select this version for better effectiveness in seamless detail removal.<br><strong>Area edition:</strong> If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.</p><ul><li>standard Standard model</li><li>area Regional model</li></ul>
                     * @return SubtitleModel <p>Subtitle erasure model.<br><strong>Standard version (recommended):</strong> If your subtitles have a standard style, it is usually recommended to select this version for better effectiveness in seamless detail removal.<br><strong>Area edition:</strong> If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.</p><ul><li>standard Standard model</li><li>area Regional model</li></ul>
                     * 
                     */
                    std::string GetSubtitleModel() const;

                    /**
                     * 设置<p>Subtitle erasure model.<br><strong>Standard version (recommended):</strong> If your subtitles have a standard style, it is usually recommended to select this version for better effectiveness in seamless detail removal.<br><strong>Area edition:</strong> If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.</p><ul><li>standard Standard model</li><li>area Regional model</li></ul>
                     * @param _subtitleModel <p>Subtitle erasure model.<br><strong>Standard version (recommended):</strong> If your subtitles have a standard style, it is usually recommended to select this version for better effectiveness in seamless detail removal.<br><strong>Area edition:</strong> If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.</p><ul><li>standard Standard model</li><li>area Regional model</li></ul>
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
                     * 获取<p>Whether OCR subtitle extraction is enabled. The default value is OFF.<br>OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.</p><ul><li>ON Enable</li><li>OFF Disable</li></ul>
                     * @return OcrSwitch <p>Whether OCR subtitle extraction is enabled. The default value is OFF.<br>OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.</p><ul><li>ON Enable</li><li>OFF Disable</li></ul>
                     * 
                     */
                    std::string GetOcrSwitch() const;

                    /**
                     * 设置<p>Whether OCR subtitle extraction is enabled. The default value is OFF.<br>OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.</p><ul><li>ON Enable</li><li>OFF Disable</li></ul>
                     * @param _ocrSwitch <p>Whether OCR subtitle extraction is enabled. The default value is OFF.<br>OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.</p><ul><li>ON Enable</li><li>OFF Disable</li></ul>
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
                     * 获取<p>Subtitle language, used to guide OCR recognition, default value is zh_en. This parameter is valid only when OcrSwitch is "ON".</p><ul><li>zh_en Chinese and English</li><li>multi other<br>The following languages are supported for recognition:<br>Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Bengali, Gujarati, Kannada, Malayalam, Tamil, Telugu, Slovenian, Polish, Catalan, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan</li></ul>
                     * @return SubtitleLang <p>Subtitle language, used to guide OCR recognition, default value is zh_en. This parameter is valid only when OcrSwitch is "ON".</p><ul><li>zh_en Chinese and English</li><li>multi other<br>The following languages are supported for recognition:<br>Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Bengali, Gujarati, Kannada, Malayalam, Tamil, Telugu, Slovenian, Polish, Catalan, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan</li></ul>
                     * 
                     */
                    std::string GetSubtitleLang() const;

                    /**
                     * 设置<p>Subtitle language, used to guide OCR recognition, default value is zh_en. This parameter is valid only when OcrSwitch is "ON".</p><ul><li>zh_en Chinese and English</li><li>multi other<br>The following languages are supported for recognition:<br>Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Bengali, Gujarati, Kannada, Malayalam, Tamil, Telugu, Slovenian, Polish, Catalan, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan</li></ul>
                     * @param _subtitleLang <p>Subtitle language, used to guide OCR recognition, default value is zh_en. This parameter is valid only when OcrSwitch is "ON".</p><ul><li>zh_en Chinese and English</li><li>multi other<br>The following languages are supported for recognition:<br>Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Bengali, Gujarati, Kannada, Malayalam, Tamil, Telugu, Slovenian, Polish, Catalan, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan</li></ul>
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
                     * 获取<p>Subtitle file format. Default value is vtt. This parameter is valid only when OcrSwitch takes value "ON".</p><ul><li>srt srt format</li><li>vtt WebVTT format</li><li>When SubtitleEmbedId is filled, it can take value empty string, which means no subtitle file is output.</li></ul>
                     * @return SubtitleFormat <p>Subtitle file format. Default value is vtt. This parameter is valid only when OcrSwitch takes value "ON".</p><ul><li>srt srt format</li><li>vtt WebVTT format</li><li>When SubtitleEmbedId is filled, it can take value empty string, which means no subtitle file is output.</li></ul>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>Subtitle file format. Default value is vtt. This parameter is valid only when OcrSwitch takes value "ON".</p><ul><li>srt srt format</li><li>vtt WebVTT format</li><li>When SubtitleEmbedId is filled, it can take value empty string, which means no subtitle file is output.</li></ul>
                     * @param _subtitleFormat <p>Subtitle file format. Default value is vtt. This parameter is valid only when OcrSwitch takes value "ON".</p><ul><li>srt srt format</li><li>vtt WebVTT format</li><li>When SubtitleEmbedId is filled, it can take value empty string, which means no subtitle file is output.</li></ul>
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
                     * 获取<p>Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to "ON".</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @return TransSwitch <p>Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to "ON".</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * 
                     */
                    std::string GetTransSwitch() const;

                    /**
                     * 设置<p>Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to "ON".</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @param _transSwitch <p>Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to "ON".</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
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
                     * 获取<p>The target language for subtitle translation defaults to en. This parameter is valid only when TransSwitch is set to "ON".<br>The following languages are currently supported:<br>zh: Simplified Chinese<br>en: English<br>ja: Japanese<br>ko: Korean<br>fr: French<br>es: Spanish<br>it: Italian<br>de: German<br>tr: Turkish<br>ru: Russian<br>pt: Portuguese<br>vi: Vietnamese<br>id: Indonesian<br>ms: Malay<br>th: Thai<br>ar: Arabic<br>hi: Hindi</p>
                     * @return TransDstLang <p>The target language for subtitle translation defaults to en. This parameter is valid only when TransSwitch is set to "ON".<br>The following languages are currently supported:<br>zh: Simplified Chinese<br>en: English<br>ja: Japanese<br>ko: Korean<br>fr: French<br>es: Spanish<br>it: Italian<br>de: German<br>tr: Turkish<br>ru: Russian<br>pt: Portuguese<br>vi: Vietnamese<br>id: Indonesian<br>ms: Malay<br>th: Thai<br>ar: Arabic<br>hi: Hindi</p>
                     * 
                     */
                    std::string GetTransDstLang() const;

                    /**
                     * 设置<p>The target language for subtitle translation defaults to en. This parameter is valid only when TransSwitch is set to "ON".<br>The following languages are currently supported:<br>zh: Simplified Chinese<br>en: English<br>ja: Japanese<br>ko: Korean<br>fr: French<br>es: Spanish<br>it: Italian<br>de: German<br>tr: Turkish<br>ru: Russian<br>pt: Portuguese<br>vi: Vietnamese<br>id: Indonesian<br>ms: Malay<br>th: Thai<br>ar: Arabic<br>hi: Hindi</p>
                     * @param _transDstLang <p>The target language for subtitle translation defaults to en. This parameter is valid only when TransSwitch is set to "ON".<br>The following languages are currently supported:<br>zh: Simplified Chinese<br>en: English<br>ja: Japanese<br>ko: Korean<br>fr: French<br>es: Spanish<br>it: Italian<br>de: German<br>tr: Turkish<br>ru: Russian<br>pt: Portuguese<br>vi: Vietnamese<br>id: Indonesian<br>ms: Malay<br>th: Thai<br>ar: Arabic<br>hi: Hindi</p>
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
                     * 获取<p>Automatically erase custom regions.<br>For selected regions, use the AI model to automatically detect and erase existing targets.<br>Note: When the erase method is set to custom, this parameter will not take effect. To modify the template, input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * @return AutoAreas <p>Automatically erase custom regions.<br>For selected regions, use the AI model to automatically detect and erase existing targets.<br>Note: When the erase method is set to custom, this parameter will not take effect. To modify the template, input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * 
                     */
                    std::vector<EraseArea> GetAutoAreas() const;

                    /**
                     * 设置<p>Automatically erase custom regions.<br>For selected regions, use the AI model to automatically detect and erase existing targets.<br>Note: When the erase method is set to custom, this parameter will not take effect. To modify the template, input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     * @param _autoAreas <p>Automatically erase custom regions.<br>For selected regions, use the AI model to automatically detect and erase existing targets.<br>Note: When the erase method is set to custom, this parameter will not take effect. To modify the template, input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
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
                     * 获取<p>Designate the removal of custom regions.<br>For specified regions, directly perform erasure without detection and recognition within a selected time range.<br>Note: When modifying the template, import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * @return CustomAreas <p>Designate the removal of custom regions.<br>For specified regions, directly perform erasure without detection and recognition within a selected time range.<br>Note: When modifying the template, import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * 
                     */
                    std::vector<EraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置<p>Designate the removal of custom regions.<br>For specified regions, directly perform erasure without detection and recognition within a selected time range.<br>Note: When modifying the template, import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * @param _customAreas <p>Designate the removal of custom regions.<br>For specified regions, directly perform erasure without detection and recognition within a selected time range.<br>Note: When modifying the template, import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     * 
                     */
                    void SetCustomAreas(const std::vector<EraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle suppression template id. Only allowed to fill in when OCR translation is enabled.</p>
                     * @return SubtitleEmbedId <p>Subtitle suppression template id. Only allowed to fill in when OCR translation is enabled.</p>
                     * 
                     */
                    uint64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>Subtitle suppression template id. Only allowed to fill in when OCR translation is enabled.</p>
                     * @param _subtitleEmbedId <p>Subtitle suppression template id. Only allowed to fill in when OCR translation is enabled.</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const uint64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>Suppression configuration, enabled by default, compresses subtitles back to their original position. It can be filled only when OCR translation is turned on. A value of 0 indicates disabled suppression.</p>
                     * @return UseOriginalPos <p>Suppression configuration, enabled by default, compresses subtitles back to their original position. It can be filled only when OCR translation is turned on. A value of 0 indicates disabled suppression.</p>
                     * 
                     */
                    int64_t GetUseOriginalPos() const;

                    /**
                     * 设置<p>Suppression configuration, enabled by default, compresses subtitles back to their original position. It can be filled only when OCR translation is turned on. A value of 0 indicates disabled suppression.</p>
                     * @param _useOriginalPos <p>Suppression configuration, enabled by default, compresses subtitles back to their original position. It can be filled only when OCR translation is turned on. A value of 0 indicates disabled suppression.</p>
                     * 
                     */
                    void SetUseOriginalPos(const int64_t& _useOriginalPos);

                    /**
                     * 判断参数 UseOriginalPos 是否已赋值
                     * @return UseOriginalPos 是否已赋值
                     * 
                     */
                    bool UseOriginalPosHasBeenSet() const;

                    /**
                     * 获取<p>Suppression configuration, enabled by default. After being turned on, the original subtitle font size is used. It can only be filled when OCR translation is enabled. Setting it to 0 means non-use of the original font size.</p>
                     * @return UseOriginalSize <p>Suppression configuration, enabled by default. After being turned on, the original subtitle font size is used. It can only be filled when OCR translation is enabled. Setting it to 0 means non-use of the original font size.</p>
                     * 
                     */
                    int64_t GetUseOriginalSize() const;

                    /**
                     * 设置<p>Suppression configuration, enabled by default. After being turned on, the original subtitle font size is used. It can only be filled when OCR translation is enabled. Setting it to 0 means non-use of the original font size.</p>
                     * @param _useOriginalSize <p>Suppression configuration, enabled by default. After being turned on, the original subtitle font size is used. It can only be filled when OCR translation is enabled. Setting it to 0 means non-use of the original font size.</p>
                     * 
                     */
                    void SetUseOriginalSize(const int64_t& _useOriginalSize);

                    /**
                     * 判断参数 UseOriginalSize 是否已赋值
                     * @return UseOriginalSize 是否已赋值
                     * 
                     */
                    bool UseOriginalSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Subtitle erasure method.<br><strong>Automatic erasing:</strong> Video subtitles are automatically recognized using an AI model and are erased without traces to generate a new video. However, missed or incorrect erasing may occur due to image interference and special subtitle styles. In this case, you can specify the erasing area.<br>When using automatic erasing, if you do not specify AutoAreas, the default region (lower middle part of the frame) will be erased automatically. If AutoAreas is specified, the designated region will be erased instead.<br><strong>Specified area erasure:</strong> If your subtitle position is fixed, it is recommended to directly specify the erasure area to minimize missed erasures.<br>When choosing specified area erasure, please input at least one designated region in CustomAreas.</p><ul><li>auto: Automatic erasing</li><li>custom: Specified area erasure</li></ul>
                     */
                    std::string m_subtitleEraseMethod;
                    bool m_subtitleEraseMethodHasBeenSet;

                    /**
                     * <p>Subtitle erasure model.<br><strong>Standard version (recommended):</strong> If your subtitles have a standard style, it is usually recommended to select this version for better effectiveness in seamless detail removal.<br><strong>Area edition:</strong> If the subtitles have special styles, such as calligraphy, shadow, or motion effects, you are recommended to select this edition to ensure a larger erasing area. However, the erasing effect in the details is not as good as the standard edition.</p><ul><li>standard Standard model</li><li>area Regional model</li></ul>
                     */
                    std::string m_subtitleModel;
                    bool m_subtitleModelHasBeenSet;

                    /**
                     * <p>Whether OCR subtitle extraction is enabled. The default value is OFF.<br>OCR subtitle extraction is supported if and only if SubtitleEraseMethod is set to auto. When enabled, it identifies the text region that appears most persistently and stably within the automatic erasing area as the subtitle area. The text within the subtitle area is extracted and erased.</p><ul><li>ON Enable</li><li>OFF Disable</li></ul>
                     */
                    std::string m_ocrSwitch;
                    bool m_ocrSwitchHasBeenSet;

                    /**
                     * <p>Subtitle language, used to guide OCR recognition, default value is zh_en. This parameter is valid only when OcrSwitch is "ON".</p><ul><li>zh_en Chinese and English</li><li>multi other<br>The following languages are supported for recognition:<br>Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, Hindi, Arabic, Bengali, Gujarati, Kannada, Malayalam, Tamil, Telugu, Slovenian, Polish, Catalan, Bosnia, Czech, Estonian, Croatian, Punjabi, Marathi, Azerbaijan, Indonesian, Luxembourg, Lithuanian, Latvian, Malta, Slovak, Turkish, Kazakh, Greek, Irish, Belarus, Khmer, Tagalog, Pashto, Persian, Tajikistan</li></ul>
                     */
                    std::string m_subtitleLang;
                    bool m_subtitleLangHasBeenSet;

                    /**
                     * <p>Subtitle file format. Default value is vtt. This parameter is valid only when OcrSwitch takes value "ON".</p><ul><li>srt srt format</li><li>vtt WebVTT format</li><li>When SubtitleEmbedId is filled, it can take value empty string, which means no subtitle file is output.</li></ul>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>Whether to enable subtitle translation. The default value is OFF. This parameter is valid only when OcrSwitch is set to "ON".</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     */
                    std::string m_transSwitch;
                    bool m_transSwitchHasBeenSet;

                    /**
                     * <p>The target language for subtitle translation defaults to en. This parameter is valid only when TransSwitch is set to "ON".<br>The following languages are currently supported:<br>zh: Simplified Chinese<br>en: English<br>ja: Japanese<br>ko: Korean<br>fr: French<br>es: Spanish<br>it: Italian<br>de: German<br>tr: Turkish<br>ru: Russian<br>pt: Portuguese<br>vi: Vietnamese<br>id: Indonesian<br>ms: Malay<br>th: Thai<br>ar: Arabic<br>hi: Hindi</p>
                     */
                    std::string m_transDstLang;
                    bool m_transDstLangHasBeenSet;

                    /**
                     * <p>Automatically erase custom regions.<br>For selected regions, use the AI model to automatically detect and erase existing targets.<br>Note: When the erase method is set to custom, this parameter will not take effect. To modify the template, input [] for region cleanup. If not provided, the template region information remains unchanged.</p>
                     */
                    std::vector<EraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * <p>Designate the removal of custom regions.<br>For specified regions, directly perform erasure without detection and recognition within a selected time range.<br>Note: When modifying the template, import [] to clear regions. The template region information remains unchanged if not imported.</p>
                     */
                    std::vector<EraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                    /**
                     * <p>Subtitle suppression template id. Only allowed to fill in when OCR translation is enabled.</p>
                     */
                    uint64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>Suppression configuration, enabled by default, compresses subtitles back to their original position. It can be filled only when OCR translation is turned on. A value of 0 indicates disabled suppression.</p>
                     */
                    int64_t m_useOriginalPos;
                    bool m_useOriginalPosHasBeenSet;

                    /**
                     * <p>Suppression configuration, enabled by default. After being turned on, the original subtitle font size is used. It can only be filled when OCR translation is enabled. Setting it to 0 means non-use of the original font size.</p>
                     */
                    int64_t m_useOriginalSize;
                    bool m_useOriginalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASESUBTITLECONFIG_H_
