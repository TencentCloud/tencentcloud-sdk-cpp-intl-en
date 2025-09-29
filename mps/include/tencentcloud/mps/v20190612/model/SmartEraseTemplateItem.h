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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_

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
                * Smart erasing template details.
                */
                class SmartEraseTemplateItem : public AbstractModel
                {
                public:
                    SmartEraseTemplateItem();
                    ~SmartEraseTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the smart erasing template.
                     * @return Definition Unique identifier of the smart erasing template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the smart erasing template.
                     * @param _definition Unique identifier of the smart erasing template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Smart erasing template name.
                     * @return Name Smart erasing template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Smart erasing template name.
                     * @param _name Smart erasing template name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Smart erasing template description information.
                     * @return Comment Smart erasing template description information.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Smart erasing template description information.
                     * @param _comment Smart erasing template description information.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Template type. Valid values:
* Preset: system preset template.
* Custom: user-defined template.
                     * @return Type Template type. Valid values:
* Preset: system preset template.
* Custom: user-defined template.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
* Preset: system preset template.
* Custom: user-defined template.
                     * @param _type Template type. Valid values:
* Preset: system preset template.
* Custom: user-defined template.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EraseSubtitleConfig Subtitle erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置Subtitle erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eraseSubtitleConfig Subtitle erasing configuration.
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
                     * 获取Watermark erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EraseWatermarkConfig Watermark erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置Watermark erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eraseWatermarkConfig Watermark erasing configuration.
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
                     * 获取Privacy protection configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErasePrivacyConfig Privacy protection configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置Privacy protection configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _erasePrivacyConfig Privacy protection configuration.
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
                     * 获取Template creation time in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @return CreateTime Template creation time in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _createTime Template creation time in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time of the template in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @return UpdateTime Last modification time of the template in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time of the template in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _updateTime Last modification time of the template in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Alias of the preset smart erasing template.
                     * @return AliasName Alias of the preset smart erasing template.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Alias of the preset smart erasing template.
                     * @param _aliasName Alias of the preset smart erasing template.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the smart erasing template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Smart erasing template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Smart erasing template description information.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
* Preset: system preset template.
* Custom: user-defined template.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * Watermark erasing configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * Privacy protection configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * Template creation time in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the template in [ISO datetime format](https://www.tencentcloud.comom/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Alias of the preset smart erasing template.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETEMPLATEITEM_H_
