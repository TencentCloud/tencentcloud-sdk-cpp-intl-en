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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoBackgroundInfo.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoWatermarkInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AIGC document-to-video input
                */
                class DocToVideoInput : public AbstractModel
                {
                public:
                    DocToVideoInput();
                    ~DocToVideoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Document link for video generation.</p><p>Supported document types: pdf, pptx, docx, png, jpg<br>Document count limit: 3<br>Document size limit: 10MB<br>Document page limit: 100</p>
                     * @return FileUrl <p>Document link for video generation.</p><p>Supported document types: pdf, pptx, docx, png, jpg<br>Document count limit: 3<br>Document size limit: 10MB<br>Document page limit: 100</p>
                     * 
                     */
                    std::vector<std::string> GetFileUrl() const;

                    /**
                     * 设置<p>Document link for video generation.</p><p>Supported document types: pdf, pptx, docx, png, jpg<br>Document count limit: 3<br>Document size limit: 10MB<br>Document page limit: 100</p>
                     * @param _fileUrl <p>Document link for video generation.</p><p>Supported document types: pdf, pptx, docx, png, jpg<br>Document count limit: 3<br>Document size limit: 10MB<br>Document page limit: 100</p>
                     * 
                     */
                    void SetFileUrl(const std::vector<std::string>& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>Prompt information for video generation.</p><p>Prompt length limit: 2,000 characters.</p>
                     * @return Prompt <p>Prompt information for video generation.</p><p>Prompt length limit: 2,000 characters.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt information for video generation.</p><p>Prompt length limit: 2,000 characters.</p>
                     * @param _prompt <p>Prompt information for video generation.</p><p>Prompt length limit: 2,000 characters.</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Document-to-video model name</p><p>Default value: Wand</p>
                     * @return ModelName <p>Document-to-video model name</p><p>Default value: Wand</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Document-to-video model name</p><p>Default value: Wand</p>
                     * @param _modelName <p>Document-to-video model name</p><p>Default value: Wand</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>Document-to-video model version number</p><p>Default value: 1.0</p>
                     * @return ModelVersion <p>Document-to-video model version number</p><p>Default value: 1.0</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Document-to-video model version number</p><p>Default value: 1.0</p>
                     * @param _modelVersion <p>Document-to-video model version number</p><p>Default value: 1.0</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>Aspect ratio of the generated video.</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li><li>1:1: 1:1</li></ul><p>Default value: 16:9</p>
                     * @return Ratio <p>Aspect ratio of the generated video.</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li><li>1:1: 1:1</li></ul><p>Default value: 16:9</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>Aspect ratio of the generated video.</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li><li>1:1: 1:1</li></ul><p>Default value: 16:9</p>
                     * @param _ratio <p>Aspect ratio of the generated video.</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li><li>1:1: 1:1</li></ul><p>Default value: 16:9</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>Language of the generated video.</p><p>Enumeration values: </p><ul><li>zh: Chinese</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li><li>ru: Russian</li><li>fr: French</li><li>es: Spanish</li><li>de: German</li></ul><p>Default value: zh</p>
                     * @return Language <p>Language of the generated video.</p><p>Enumeration values: </p><ul><li>zh: Chinese</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li><li>ru: Russian</li><li>fr: French</li><li>es: Spanish</li><li>de: German</li></ul><p>Default value: zh</p>
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置<p>Language of the generated video.</p><p>Enumeration values: </p><ul><li>zh: Chinese</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li><li>ru: Russian</li><li>fr: French</li><li>es: Spanish</li><li>de: German</li></ul><p>Default value: zh</p>
                     * @param _language <p>Language of the generated video.</p><p>Enumeration values: </p><ul><li>zh: Chinese</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li><li>ru: Russian</li><li>fr: French</li><li>es: Spanish</li><li>de: German</li></ul><p>Default value: zh</p>
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取<p>Video duration for reference.</p><p>This is not an exact duration; it serves as a reference for the LLM only.</p><p>Range: [15, 1200]</p><p>Unit: second</p>
                     * @return ReferenceDuration <p>Video duration for reference.</p><p>This is not an exact duration; it serves as a reference for the LLM only.</p><p>Range: [15, 1200]</p><p>Unit: second</p>
                     * 
                     */
                    int64_t GetReferenceDuration() const;

                    /**
                     * 设置<p>Video duration for reference.</p><p>This is not an exact duration; it serves as a reference for the LLM only.</p><p>Range: [15, 1200]</p><p>Unit: second</p>
                     * @param _referenceDuration <p>Video duration for reference.</p><p>This is not an exact duration; it serves as a reference for the LLM only.</p><p>Range: [15, 1200]</p><p>Unit: second</p>
                     * 
                     */
                    void SetReferenceDuration(const int64_t& _referenceDuration);

                    /**
                     * 判断参数 ReferenceDuration 是否已赋值
                     * @return ReferenceDuration 是否已赋值
                     * 
                     */
                    bool ReferenceDurationHasBeenSet() const;

                    /**
                     * 获取<p>Whether the AI dubbing feature is enabled.</p><p>Default value: false</p>
                     * @return EnableTTS <p>Whether the AI dubbing feature is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetEnableTTS() const;

                    /**
                     * 设置<p>Whether the AI dubbing feature is enabled.</p><p>Default value: false</p>
                     * @param _enableTTS <p>Whether the AI dubbing feature is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    void SetEnableTTS(const bool& _enableTTS);

                    /**
                     * 判断参数 EnableTTS 是否已赋值
                     * @return EnableTTS 是否已赋值
                     * 
                     */
                    bool EnableTTSHasBeenSet() const;

                    /**
                     * 获取<p>Voice ID. Valid only when AI dubbing feature is enabled.</p>
                     * @return VoiceId <p>Voice ID. Valid only when AI dubbing feature is enabled.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID. Valid only when AI dubbing feature is enabled.</p>
                     * @param _voiceId <p>Voice ID. Valid only when AI dubbing feature is enabled.</p>
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
                     * 获取<p>Whether PPTX high-fidelity clone mode is enabled.</p><p>When enabled, the content of the input PPTX document will be cloned as much as possible, but perfect cloning is not possible.<br>Animated effects cannot be cloned temporarily.</p><p>When enabled, ensure the input document contains at least one PPTX document.<br>If there are multiple PPTX documents, only the first document will be cloned with high fidelity.</p><p>Default value: false</p>
                     * @return PPTXFidelity <p>Whether PPTX high-fidelity clone mode is enabled.</p><p>When enabled, the content of the input PPTX document will be cloned as much as possible, but perfect cloning is not possible.<br>Animated effects cannot be cloned temporarily.</p><p>When enabled, ensure the input document contains at least one PPTX document.<br>If there are multiple PPTX documents, only the first document will be cloned with high fidelity.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetPPTXFidelity() const;

                    /**
                     * 设置<p>Whether PPTX high-fidelity clone mode is enabled.</p><p>When enabled, the content of the input PPTX document will be cloned as much as possible, but perfect cloning is not possible.<br>Animated effects cannot be cloned temporarily.</p><p>When enabled, ensure the input document contains at least one PPTX document.<br>If there are multiple PPTX documents, only the first document will be cloned with high fidelity.</p><p>Default value: false</p>
                     * @param _pPTXFidelity <p>Whether PPTX high-fidelity clone mode is enabled.</p><p>When enabled, the content of the input PPTX document will be cloned as much as possible, but perfect cloning is not possible.<br>Animated effects cannot be cloned temporarily.</p><p>When enabled, ensure the input document contains at least one PPTX document.<br>If there are multiple PPTX documents, only the first document will be cloned with high fidelity.</p><p>Default value: false</p>
                     * 
                     */
                    void SetPPTXFidelity(const bool& _pPTXFidelity);

                    /**
                     * 判断参数 PPTXFidelity 是否已赋值
                     * @return PPTXFidelity 是否已赋值
                     * 
                     */
                    bool PPTXFidelityHasBeenSet() const;

                    /**
                     * 获取<p>Video generation mode.</p><p>Enumeration values:</p><ul><li>stage: Generation mode upon confirmation</li><li>auto: End-to-end direct generation mode</li></ul>
                     * @return Mode <p>Video generation mode.</p><p>Enumeration values:</p><ul><li>stage: Generation mode upon confirmation</li><li>auto: End-to-end direct generation mode</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Video generation mode.</p><p>Enumeration values:</p><ul><li>stage: Generation mode upon confirmation</li><li>auto: End-to-end direct generation mode</li></ul>
                     * @param _mode <p>Video generation mode.</p><p>Enumeration values:</p><ul><li>stage: Generation mode upon confirmation</li><li>auto: End-to-end direct generation mode</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Background image information used to generate the video.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * @return Background <p>Background image information used to generate the video.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * 
                     */
                    DocToVideoBackgroundInfo GetBackground() const;

                    /**
                     * 设置<p>Background image information used to generate the video.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * @param _background <p>Background image information used to generate the video.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * 
                     */
                    void SetBackground(const DocToVideoBackgroundInfo& _background);

                    /**
                     * 判断参数 Background 是否已赋值
                     * @return Background 是否已赋值
                     * 
                     */
                    bool BackgroundHasBeenSet() const;

                    /**
                     * 获取<p>Watermark image information for video generation.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * @return Watermark <p>Watermark image information for video generation.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * 
                     */
                    DocToVideoWatermarkInfo GetWatermark() const;

                    /**
                     * 设置<p>Watermark image information for video generation.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * @param _watermark <p>Watermark image information for video generation.</p><p>It only takes effect when PreserveLayout is false.</p>
                     * 
                     */
                    void SetWatermark(const DocToVideoWatermarkInfo& _watermark);

                    /**
                     * 判断参数 Watermark 是否已赋值
                     * @return Watermark 是否已赋值
                     * 
                     */
                    bool WatermarkHasBeenSet() const;

                    /**
                     * 获取<p>Whether subtitle generation is enabled.</p><p>Default value: false</p>
                     * @return EnableCaption <p>Whether subtitle generation is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    bool GetEnableCaption() const;

                    /**
                     * 设置<p>Whether subtitle generation is enabled.</p><p>Default value: false</p>
                     * @param _enableCaption <p>Whether subtitle generation is enabled.</p><p>Default value: false</p>
                     * 
                     */
                    void SetEnableCaption(const bool& _enableCaption);

                    /**
                     * 判断参数 EnableCaption 是否已赋值
                     * @return EnableCaption 是否已赋值
                     * 
                     */
                    bool EnableCaptionHasBeenSet() const;

                private:

                    /**
                     * <p>Document link for video generation.</p><p>Supported document types: pdf, pptx, docx, png, jpg<br>Document count limit: 3<br>Document size limit: 10MB<br>Document page limit: 100</p>
                     */
                    std::vector<std::string> m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Prompt information for video generation.</p><p>Prompt length limit: 2,000 characters.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Document-to-video model name</p><p>Default value: Wand</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Document-to-video model version number</p><p>Default value: 1.0</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Aspect ratio of the generated video.</p><p>Enumeration values: </p><ul><li>16:9: 16:9</li><li>9:16: 9:16</li><li>1:1: 1:1</li></ul><p>Default value: 16:9</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>Language of the generated video.</p><p>Enumeration values: </p><ul><li>zh: Chinese</li><li>en: English</li><li>ja: Japanese</li><li>ko: Korean</li><li>ru: Russian</li><li>fr: French</li><li>es: Spanish</li><li>de: German</li></ul><p>Default value: zh</p>
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * <p>Video duration for reference.</p><p>This is not an exact duration; it serves as a reference for the LLM only.</p><p>Range: [15, 1200]</p><p>Unit: second</p>
                     */
                    int64_t m_referenceDuration;
                    bool m_referenceDurationHasBeenSet;

                    /**
                     * <p>Whether the AI dubbing feature is enabled.</p><p>Default value: false</p>
                     */
                    bool m_enableTTS;
                    bool m_enableTTSHasBeenSet;

                    /**
                     * <p>Voice ID. Valid only when AI dubbing feature is enabled.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Whether PPTX high-fidelity clone mode is enabled.</p><p>When enabled, the content of the input PPTX document will be cloned as much as possible, but perfect cloning is not possible.<br>Animated effects cannot be cloned temporarily.</p><p>When enabled, ensure the input document contains at least one PPTX document.<br>If there are multiple PPTX documents, only the first document will be cloned with high fidelity.</p><p>Default value: false</p>
                     */
                    bool m_pPTXFidelity;
                    bool m_pPTXFidelityHasBeenSet;

                    /**
                     * <p>Video generation mode.</p><p>Enumeration values:</p><ul><li>stage: Generation mode upon confirmation</li><li>auto: End-to-end direct generation mode</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Background image information used to generate the video.</p><p>It only takes effect when PreserveLayout is false.</p>
                     */
                    DocToVideoBackgroundInfo m_background;
                    bool m_backgroundHasBeenSet;

                    /**
                     * <p>Watermark image information for video generation.</p><p>It only takes effect when PreserveLayout is false.</p>
                     */
                    DocToVideoWatermarkInfo m_watermark;
                    bool m_watermarkHasBeenSet;

                    /**
                     * <p>Whether subtitle generation is enabled.</p><p>Default value: false</p>
                     */
                    bool m_enableCaption;
                    bool m_enableCaptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
