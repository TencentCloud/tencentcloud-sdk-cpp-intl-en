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
                     * 获取Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
                     * @return EraseType Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
                     * @param _eraseType Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
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
                     * 获取Subtitle erasing configuration.
This field is required when the value of EraseType is subtitle.
                     * @return EraseSubtitleConfig Subtitle erasing configuration.
This field is required when the value of EraseType is subtitle.
                     * 
                     */
                    UpdateSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置Subtitle erasing configuration.
This field is required when the value of EraseType is subtitle.
                     * @param _eraseSubtitleConfig Subtitle erasing configuration.
This field is required when the value of EraseType is subtitle.
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
                     * 获取Watermark erasing configuration.
This field is required when the value of EraseType is watermark.
                     * @return EraseWatermarkConfig Watermark erasing configuration.
This field is required when the value of EraseType is watermark.
                     * 
                     */
                    UpdateSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置Watermark erasing configuration.
This field is required when the value of EraseType is watermark.
                     * @param _eraseWatermarkConfig Watermark erasing configuration.
This field is required when the value of EraseType is watermark.
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
                     * 获取Privacy protection configuration.
This field is required when the value of EraseType is privacy.
                     * @return ErasePrivacyConfig Privacy protection configuration.
This field is required when the value of EraseType is privacy.
                     * 
                     */
                    UpdateSmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置Privacy protection configuration.
This field is required when the value of EraseType is privacy.
                     * @param _erasePrivacyConfig Privacy protection configuration.
This field is required when the value of EraseType is privacy.
                     * 
                     */
                    void SetErasePrivacyConfig(const UpdateSmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                private:

                    /**
                     * Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * Subtitle erasing configuration.
This field is required when the value of EraseType is subtitle.
                     */
                    UpdateSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * Watermark erasing configuration.
This field is required when the value of EraseType is watermark.
                     */
                    UpdateSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * Privacy protection configuration.
This field is required when the value of EraseType is privacy.
                     */
                    UpdateSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDEERASEPARAMETER_H_
