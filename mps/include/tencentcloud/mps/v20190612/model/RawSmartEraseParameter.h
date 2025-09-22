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
                     * 获取Specifies the removal type.
-subtitle removal.
-Remove watermark.
-privacy protection.
                     * @return EraseType Specifies the removal type.
-subtitle removal.
-Remove watermark.
-privacy protection.
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置Specifies the removal type.
-subtitle removal.
-Remove watermark.
-privacy protection.
                     * @param _eraseType Specifies the removal type.
-subtitle removal.
-Remove watermark.
-privacy protection.
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
                     * 获取Subtitle erasure configuration.
When EraseType is subtitle, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EraseSubtitleConfig Subtitle erasure configuration.
When EraseType is subtitle, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置Subtitle erasure configuration.
When EraseType is subtitle, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eraseSubtitleConfig Subtitle erasure configuration.
When EraseType is subtitle, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Specifies the watermark removal configuration.
When EraseType is watermark, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EraseWatermarkConfig Specifies the watermark removal configuration.
When EraseType is watermark, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置Specifies the watermark removal configuration.
When EraseType is watermark, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _eraseWatermarkConfig Specifies the watermark removal configuration.
When EraseType is watermark, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Privacy protection configuration.
When EraseType is privacy, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ErasePrivacyConfig Privacy protection configuration.
When EraseType is privacy, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置Privacy protection configuration.
When EraseType is privacy, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _erasePrivacyConfig Privacy protection configuration.
When EraseType is privacy, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                private:

                    /**
                     * Specifies the removal type.
-subtitle removal.
-Remove watermark.
-privacy protection.
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * Subtitle erasure configuration.
When EraseType is subtitle, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * Specifies the watermark removal configuration.
When EraseType is watermark, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * Privacy protection configuration.
When EraseType is privacy, this field is required.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTERASEPARAMETER_H_
