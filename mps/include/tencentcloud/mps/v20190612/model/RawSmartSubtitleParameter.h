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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotWordsConfigure.h>
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
                * 
                */
                class RawSmartSubtitleParameter : public AbstractModel
                {
                public:
                    RawSmartSubtitleParameter();
                    ~RawSmartSubtitleParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleType 
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置
                     * @param _subtitleType 
                     * 
                     */
                    void SetSubtitleType(const int64_t& _subtitleType);

                    /**
                     * 判断参数 SubtitleType 是否已赋值
                     * @return SubtitleType 是否已赋值
                     * 
                     */
                    bool SubtitleTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return VideoSrcLanguage 
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置
                     * @param _videoSrcLanguage 
                     * 
                     */
                    void SetVideoSrcLanguage(const std::string& _videoSrcLanguage);

                    /**
                     * 判断参数 VideoSrcLanguage 是否已赋值
                     * @return VideoSrcLanguage 是否已赋值
                     * 
                     */
                    bool VideoSrcLanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleFormat 
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置
                     * @param _subtitleFormat 
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
                     * 获取
                     * @return TranslateSwitch 
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置
                     * @param _translateSwitch 
                     * 
                     */
                    void SetTranslateSwitch(const std::string& _translateSwitch);

                    /**
                     * 判断参数 TranslateSwitch 是否已赋值
                     * @return TranslateSwitch 是否已赋值
                     * 
                     */
                    bool TranslateSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return TranslateDstLanguage 
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置
                     * @param _translateDstLanguage 
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return AsrHotWordsConfigure 
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置
                     * @param _asrHotWordsConfigure 
                     * 
                     */
                    void SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure);

                    /**
                     * 判断参数 AsrHotWordsConfigure 是否已赋值
                     * @return AsrHotWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrHotWordsConfigureHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExtInfo 
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置
                     * @param _extInfo 
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProcessType 
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置
                     * @param _processType 
                     * 
                     */
                    void SetProcessType(const uint64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SelectingSubtitleAreasConfig 
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置
                     * @param _selectingSubtitleAreasConfig 
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleEmbedId 
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置
                     * @param _subtitleEmbedId 
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return SpeakerMode 
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置
                     * @param _speakerMode 
                     * 
                     */
                    void SetSpeakerMode(const int64_t& _speakerMode);

                    /**
                     * 判断参数 SpeakerMode 是否已赋值
                     * @return SpeakerMode 是否已赋值
                     * 
                     */
                    bool SpeakerModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SpeakerLabel 
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置
                     * @param _speakerLabel 
                     * 
                     */
                    void SetSpeakerLabel(const int64_t& _speakerLabel);

                    /**
                     * 判断参数 SpeakerLabel 是否已赋值
                     * @return SpeakerLabel 是否已赋值
                     * 
                     */
                    bool SpeakerLabelHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * 
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
