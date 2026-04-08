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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartEraseSubtitleConfig.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartEraseWatermarkConfig.h>
#include <tencentcloud/mps/v20190612/model/UpdateSmartErasePrivacyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Custom parameters for smart erasing.
                */
                class OverrideEraseParameter : public AbstractModel
                {
                public:
                    OverrideEraseParameter();
                    ~OverrideEraseParameter() = default;
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
                     * @return EraseSubtitleConfig <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
                     * 
                     */
                    UpdateSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
                     * @param _eraseSubtitleConfig <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
                     * 
                     */
                    void SetEraseSubtitleConfig(const UpdateSmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取<p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
                     * @return EraseWatermarkConfig <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
                     * 
                     */
                    UpdateSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
                     * @param _eraseWatermarkConfig <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
                     * 
                     */
                    void SetEraseWatermarkConfig(const UpdateSmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取<p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
                     * @return ErasePrivacyConfig <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
                     * 
                     */
                    UpdateSmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
                     * @param _erasePrivacyConfig <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
                     * 
                     */
                    void SetErasePrivacyConfig(const UpdateSmartErasePrivacyConfig& _erasePrivacyConfig);

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

                private:

                    /**
                     * <p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>Subtitle erasing configuration;<br>This field is required when the value of EraseType is set to subtitle.</p>
                     */
                    UpdateSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>Watermark erasing configuration.<br>This field is required when the value of EraseType is set to watermark.</p>
                     */
                    UpdateSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>Privacy protection configuration.<br>This field is required when the value of EraseType is privacy.</p>
                     */
                    UpdateSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * <p>id of the subtitle removal suppression template.</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_
