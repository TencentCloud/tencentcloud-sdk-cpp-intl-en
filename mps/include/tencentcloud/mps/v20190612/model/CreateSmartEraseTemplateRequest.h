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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTERASETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTERASETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSmartEraseTemplate request structure.
                */
                class CreateSmartEraseTemplateRequest : public AbstractModel
                {
                public:
                    CreateSmartEraseTemplateRequest();
                    ~CreateSmartEraseTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Length limit for the smart erasing template name: 64 characters.
                     * @return Name Length limit for the smart erasing template name: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Length limit for the smart erasing template name: 64 characters.
                     * @param _name Length limit for the smart erasing template name: 64 characters.
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
                     * 获取Length limit for the description information of the smart erasing template: 256 characters.
                     * @return Comment Length limit for the description information of the smart erasing template: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Length limit for the description information of the smart erasing template: 256 characters.
                     * @param _comment Length limit for the description information of the smart erasing template: 256 characters.
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
                     * 获取Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.
                     * @return EraseSubtitleConfig Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.
                     * @param _eraseSubtitleConfig Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.
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
                     * 获取Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.
                     * @return EraseWatermarkConfig Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.
                     * @param _eraseWatermarkConfig Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.
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
                     * 获取Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.
                     * @return ErasePrivacyConfig Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.
                     * @param _erasePrivacyConfig Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.
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
                     * Length limit for the smart erasing template name: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Erasing type.
-subtitle: subtitle removal.
-watermark: watermark removal.
-privacy: privacy protection.
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * Length limit for the description information of the smart erasing template: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTERASETEMPLATEREQUEST_H_
