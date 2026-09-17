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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASESUBTITLECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASESUBTITLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseTimeArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class MPSSmartEraseSubtitleConfig : public AbstractModel
                {
                public:
                    MPSSmartEraseSubtitleConfig();
                    ~MPSSmartEraseSubtitleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return SubtitleEraseMethod 
                     * 
                     */
                    std::string GetSubtitleEraseMethod() const;

                    /**
                     * 设置
                     * @param _subtitleEraseMethod 
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
                     * 获取
                     * @return SubtitleModel 
                     * 
                     */
                    std::string GetSubtitleModel() const;

                    /**
                     * 设置
                     * @param _subtitleModel 
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
                     * 获取
                     * @return OcrSwitch 
                     * 
                     */
                    std::string GetOcrSwitch() const;

                    /**
                     * 设置
                     * @param _ocrSwitch 
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
                     * 获取
                     * @return SubtitleLang 
                     * 
                     */
                    std::string GetSubtitleLang() const;

                    /**
                     * 设置
                     * @param _subtitleLang 
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
                     * @return TransSwitch 
                     * 
                     */
                    std::string GetTransSwitch() const;

                    /**
                     * 设置
                     * @param _transSwitch 
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
                     * 获取
                     * @return TransDstLang 
                     * 
                     */
                    std::string GetTransDstLang() const;

                    /**
                     * 设置
                     * @param _transDstLang 
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
                     * 获取
                     * @return AutoAreas 
                     * 
                     */
                    std::vector<MPSEraseArea> GetAutoAreas() const;

                    /**
                     * 设置
                     * @param _autoAreas 
                     * 
                     */
                    void SetAutoAreas(const std::vector<MPSEraseArea>& _autoAreas);

                    /**
                     * 判断参数 AutoAreas 是否已赋值
                     * @return AutoAreas 是否已赋值
                     * 
                     */
                    bool AutoAreasHasBeenSet() const;

                    /**
                     * 获取
                     * @return CustomAreas 
                     * 
                     */
                    std::vector<MPSEraseTimeArea> GetCustomAreas() const;

                    /**
                     * 设置
                     * @param _customAreas 
                     * 
                     */
                    void SetCustomAreas(const std::vector<MPSEraseTimeArea>& _customAreas);

                    /**
                     * 判断参数 CustomAreas 是否已赋值
                     * @return CustomAreas 是否已赋值
                     * 
                     */
                    bool CustomAreasHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleEmbedId 
                     * 
                     */
                    uint64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置
                     * @param _subtitleEmbedId 
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
                     * 获取
                     * @return UseOriginalPos 
                     * 
                     */
                    int64_t GetUseOriginalPos() const;

                    /**
                     * 设置
                     * @param _useOriginalPos 
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
                     * 获取
                     * @return UseOriginalSize 
                     * 
                     */
                    int64_t GetUseOriginalSize() const;

                    /**
                     * 设置
                     * @param _useOriginalSize 
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
                     * 
                     */
                    std::string m_subtitleEraseMethod;
                    bool m_subtitleEraseMethodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleModel;
                    bool m_subtitleModelHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ocrSwitch;
                    bool m_ocrSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleLang;
                    bool m_subtitleLangHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_transSwitch;
                    bool m_transSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_transDstLang;
                    bool m_transDstLangHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MPSEraseArea> m_autoAreas;
                    bool m_autoAreasHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MPSEraseTimeArea> m_customAreas;
                    bool m_customAreasHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_useOriginalPos;
                    bool m_useOriginalPosHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_useOriginalSize;
                    bool m_useOriginalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASESUBTITLECONFIG_H_
