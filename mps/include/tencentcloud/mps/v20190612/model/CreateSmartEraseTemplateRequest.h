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
                     * 获取<p>Length limit for the smart erasing template name: 64 characters.</p>
                     * @return Name <p>Length limit for the smart erasing template name: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Length limit for the smart erasing template name: 64 characters.</p>
                     * @param _name <p>Length limit for the smart erasing template name: 64 characters.</p>
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
                     * 获取<p>Length limit for the description information of the smart erasing template: 256 characters.</p>
                     * @return Comment <p>Length limit for the description information of the smart erasing template: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Length limit for the description information of the smart erasing template: 256 characters.</p>
                     * @param _comment <p>Length limit for the description information of the smart erasing template: 256 characters.</p>
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
                     * 获取<p>Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.</p>
                     * @return EraseSubtitleConfig <p>Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.</p>
                     * 
                     */
                    SmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置<p>Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.</p>
                     * @param _eraseSubtitleConfig <p>Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.</p>
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
                     * 获取<p>Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.</p>
                     * @return EraseWatermarkConfig <p>Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.</p>
                     * 
                     */
                    SmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置<p>Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.</p>
                     * @param _eraseWatermarkConfig <p>Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.</p>
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
                     * 获取<p>Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.</p>
                     * @return ErasePrivacyConfig <p>Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.</p>
                     * 
                     */
                    SmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置<p>Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.</p>
                     * @param _erasePrivacyConfig <p>Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.</p>
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
                     * <p>Length limit for the smart erasing template name: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Removal Type</p><ul><li>subtitle removal</li><li>watermark removal</li><li>privacy protection</li></ul>
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * <p>Length limit for the description information of the smart erasing template: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Subtitle erasing configuration. This parameter is required and valid only when the value of EraseType is set to subtitle.</p>
                     */
                    SmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * <p>Watermark erasing configuration. This parameter is required and valid only when the value of EraseType is set to watermark.</p>
                     */
                    SmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * <p>Privacy protection configuration. This parameter is required and valid only when the value of EraseType is set to privacy.</p>
                     */
                    SmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATESMARTERASETEMPLATEREQUEST_H_
