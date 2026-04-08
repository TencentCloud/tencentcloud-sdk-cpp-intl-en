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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/SmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart erasure custom parameter.
                */
                class RawSmartEraseParameter : public AbstractModel
                {
                public:
                    RawSmartEraseParameter();
                    ~RawSmartEraseParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     * @return EraseType <p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置<p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     * @param _eraseType <p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     * 
                     */
                    void SetEraseType(const std::string& _eraseType);

                    /**
                     * 判断参数 EraseType 是否已赋值
                     * @return EraseType 是否已赋值
                     * 
                     */
                    bool EraseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EraseSubtitleConfig <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eraseSubtitleConfig <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EraseWatermarkConfig <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eraseWatermarkConfig <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErasePrivacyConfig <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _erasePrivacyConfig <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                    /**
                     * 获取<p>id of the subtitle removal suppression template.</p>
                     * @return SubtitleEmbedId <p>id of the subtitle removal suppression template.</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>id of the subtitle removal suppression template.</p>
                     * @param _subtitleEmbedId <p>id of the subtitle removal suppression template.</p>
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
                     * 获取<p>Suppression configuration, enabled by default, moves subtitles back to the original subtitle position.</p>
                     * @return UseOriginalPos <p>Suppression configuration, enabled by default, moves subtitles back to the original subtitle position.</p>
                     * 
                     */
                    int64_t GetUseOriginalPos() const;

                    /**
                     * 设置<p>Suppression configuration, enabled by default, moves subtitles back to the original subtitle position.</p>
                     * @param _useOriginalPos <p>Suppression configuration, enabled by default, moves subtitles back to the original subtitle position.</p>
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
                     * 获取<p>Suppression configuration, enabled by default. When enabled, use the original subtitle font size.</p>
                     * @return UseOriginalSize <p>Suppression configuration, enabled by default. When enabled, use the original subtitle font size.</p>
                     * 
                     */
                    int64_t GetUseOriginalSize() const;

                    /**
                     * 设置<p>Suppression configuration, enabled by default. When enabled, use the original subtitle font size.</p>
                     * @param _useOriginalSize <p>Suppression configuration, enabled by default. When enabled, use the original subtitle font size.</p>
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
                     * <p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * <p>id of the subtitle removal suppression template.</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>Suppression configuration, enabled by default, moves subtitles back to the original subtitle position.</p>
                     */
                    int64_t m_useOriginalPos;
                    bool m_useOriginalPosHasBeenSet;

                    /**
                     * <p>Suppression configuration, enabled by default. When enabled, use the original subtitle font size.</p>
                     */
                    int64_t m_useOriginalSize;
                    bool m_useOriginalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
