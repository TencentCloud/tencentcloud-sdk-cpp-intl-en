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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * dubbing task translation configuration
                */
                class DubbingSubtitleConfig : public AbstractModel
                {
                public:
                    DubbingSubtitleConfig();
                    ~DubbingSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subtitle source.</p><p>Enumeration values:</p><ul><li>OCR: OCR text recognition, recognizes text in video frames.</li><li>ASR: ASR speech recognition, recognizes voice dialogue in videos.</li><li>External: External subtitle file, provide the URL of the original/translated subtitles.</li></ul>
                     * @return SubtitleSource <p>Subtitle source.</p><p>Enumeration values:</p><ul><li>OCR: OCR text recognition, recognizes text in video frames.</li><li>ASR: ASR speech recognition, recognizes voice dialogue in videos.</li><li>External: External subtitle file, provide the URL of the original/translated subtitles.</li></ul>
                     * 
                     */
                    std::string GetSubtitleSource() const;

                    /**
                     * 设置<p>Subtitle source.</p><p>Enumeration values:</p><ul><li>OCR: OCR text recognition, recognizes text in video frames.</li><li>ASR: ASR speech recognition, recognizes voice dialogue in videos.</li><li>External: External subtitle file, provide the URL of the original/translated subtitles.</li></ul>
                     * @param _subtitleSource <p>Subtitle source.</p><p>Enumeration values:</p><ul><li>OCR: OCR text recognition, recognizes text in video frames.</li><li>ASR: ASR speech recognition, recognizes voice dialogue in videos.</li><li>External: External subtitle file, provide the URL of the original/translated subtitles.</li></ul>
                     * 
                     */
                    void SetSubtitleSource(const std::string& _subtitleSource);

                    /**
                     * 判断参数 SubtitleSource 是否已赋值
                     * @return SubtitleSource 是否已赋值
                     * 
                     */
                    bool SubtitleSourceHasBeenSet() const;

                    /**
                     * 获取<p>Use ASR to assist OCR.</p><p>Enumeration values:</p><ul><li>ON: Enable the use of ASR to assist OCR.</li><li>OFF: Disable the use of ASR to assist OCR.</li></ul><p>Default value: OFF</p><p>Can be set to ON only when SubtitleSource=OCR</p>
                     * @return AsrAssistOcr <p>Use ASR to assist OCR.</p><p>Enumeration values:</p><ul><li>ON: Enable the use of ASR to assist OCR.</li><li>OFF: Disable the use of ASR to assist OCR.</li></ul><p>Default value: OFF</p><p>Can be set to ON only when SubtitleSource=OCR</p>
                     * 
                     */
                    std::string GetAsrAssistOcr() const;

                    /**
                     * 设置<p>Use ASR to assist OCR.</p><p>Enumeration values:</p><ul><li>ON: Enable the use of ASR to assist OCR.</li><li>OFF: Disable the use of ASR to assist OCR.</li></ul><p>Default value: OFF</p><p>Can be set to ON only when SubtitleSource=OCR</p>
                     * @param _asrAssistOcr <p>Use ASR to assist OCR.</p><p>Enumeration values:</p><ul><li>ON: Enable the use of ASR to assist OCR.</li><li>OFF: Disable the use of ASR to assist OCR.</li></ul><p>Default value: OFF</p><p>Can be set to ON only when SubtitleSource=OCR</p>
                     * 
                     */
                    void SetAsrAssistOcr(const std::string& _asrAssistOcr);

                    /**
                     * 判断参数 AsrAssistOcr 是否已赋值
                     * @return AsrAssistOcr 是否已赋值
                     * 
                     */
                    bool AsrAssistOcrHasBeenSet() const;

                    /**
                     * 获取<p>Erase the original subtitle.</p><p>Enumeration values:</p><ul><li>ON: Erase the original subtitle.</li><li>OFF: Retain the original subtitle.</li></ul><p>Default value: OFF</p><p>Cannot be set to ON when SubtitleSource=External</p>
                     * @return EraseOriginalSubtitle <p>Erase the original subtitle.</p><p>Enumeration values:</p><ul><li>ON: Erase the original subtitle.</li><li>OFF: Retain the original subtitle.</li></ul><p>Default value: OFF</p><p>Cannot be set to ON when SubtitleSource=External</p>
                     * 
                     */
                    std::string GetEraseOriginalSubtitle() const;

                    /**
                     * 设置<p>Erase the original subtitle.</p><p>Enumeration values:</p><ul><li>ON: Erase the original subtitle.</li><li>OFF: Retain the original subtitle.</li></ul><p>Default value: OFF</p><p>Cannot be set to ON when SubtitleSource=External</p>
                     * @param _eraseOriginalSubtitle <p>Erase the original subtitle.</p><p>Enumeration values:</p><ul><li>ON: Erase the original subtitle.</li><li>OFF: Retain the original subtitle.</li></ul><p>Default value: OFF</p><p>Cannot be set to ON when SubtitleSource=External</p>
                     * 
                     */
                    void SetEraseOriginalSubtitle(const std::string& _eraseOriginalSubtitle);

                    /**
                     * 判断参数 EraseOriginalSubtitle 是否已赋值
                     * @return EraseOriginalSubtitle 是否已赋值
                     * 
                     */
                    bool EraseOriginalSubtitleHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle location information.</p>
                     * @return SelectingSubtitleAreasConfig <p>Subtitle location information.</p>
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置<p>Subtitle location information.</p>
                     * @param _selectingSubtitleAreasConfig <p>Subtitle location information.</p>
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Subtitle source.</p><p>Enumeration values:</p><ul><li>OCR: OCR text recognition, recognizes text in video frames.</li><li>ASR: ASR speech recognition, recognizes voice dialogue in videos.</li><li>External: External subtitle file, provide the URL of the original/translated subtitles.</li></ul>
                     */
                    std::string m_subtitleSource;
                    bool m_subtitleSourceHasBeenSet;

                    /**
                     * <p>Use ASR to assist OCR.</p><p>Enumeration values:</p><ul><li>ON: Enable the use of ASR to assist OCR.</li><li>OFF: Disable the use of ASR to assist OCR.</li></ul><p>Default value: OFF</p><p>Can be set to ON only when SubtitleSource=OCR</p>
                     */
                    std::string m_asrAssistOcr;
                    bool m_asrAssistOcrHasBeenSet;

                    /**
                     * <p>Erase the original subtitle.</p><p>Enumeration values:</p><ul><li>ON: Erase the original subtitle.</li><li>OFF: Retain the original subtitle.</li></ul><p>Default value: OFF</p><p>Cannot be set to ON when SubtitleSource=External</p>
                     */
                    std::string m_eraseOriginalSubtitle;
                    bool m_eraseOriginalSubtitleHasBeenSet;

                    /**
                     * <p>Subtitle location information.</p>
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DUBBINGSUBTITLECONFIG_H_
