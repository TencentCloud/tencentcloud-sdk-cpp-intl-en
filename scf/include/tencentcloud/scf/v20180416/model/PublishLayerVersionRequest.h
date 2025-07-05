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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Code.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * PublishLayerVersion request structure.
                */
                class PublishLayerVersionRequest : public AbstractModel
                {
                public:
                    PublishLayerVersionRequest();
                    ~PublishLayerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Layer name, which can contain 1-64 English letters, digits, hyphens, and underscores, must begin with a letter, and cannot end with a hyphen or underscore
                     * @return LayerName Layer name, which can contain 1-64 English letters, digits, hyphens, and underscores, must begin with a letter, and cannot end with a hyphen or underscore
                     * 
                     */
                    std::string GetLayerName() const;

                    /**
                     * 设置Layer name, which can contain 1-64 English letters, digits, hyphens, and underscores, must begin with a letter, and cannot end with a hyphen or underscore
                     * @param _layerName Layer name, which can contain 1-64 English letters, digits, hyphens, and underscores, must begin with a letter, and cannot end with a hyphen or underscore
                     * 
                     */
                    void SetLayerName(const std::string& _layerName);

                    /**
                     * 判断参数 LayerName 是否已赋值
                     * @return LayerName 是否已赋值
                     * 
                     */
                    bool LayerNameHasBeenSet() const;

                    /**
                     * 获取Runtimes compatible with layer. Multiple choices are allowed. The valid values of this parameter correspond to the valid values of the `Runtime` of the function.
                     * @return CompatibleRuntimes Runtimes compatible with layer. Multiple choices are allowed. The valid values of this parameter correspond to the valid values of the `Runtime` of the function.
                     * 
                     */
                    std::vector<std::string> GetCompatibleRuntimes() const;

                    /**
                     * 设置Runtimes compatible with layer. Multiple choices are allowed. The valid values of this parameter correspond to the valid values of the `Runtime` of the function.
                     * @param _compatibleRuntimes Runtimes compatible with layer. Multiple choices are allowed. The valid values of this parameter correspond to the valid values of the `Runtime` of the function.
                     * 
                     */
                    void SetCompatibleRuntimes(const std::vector<std::string>& _compatibleRuntimes);

                    /**
                     * 判断参数 CompatibleRuntimes 是否已赋值
                     * @return CompatibleRuntimes 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimesHasBeenSet() const;

                    /**
                     * 获取Layer file source or content
                     * @return Content Layer file source or content
                     * 
                     */
                    Code GetContent() const;

                    /**
                     * 设置Layer file source or content
                     * @param _content Layer file source or content
                     * 
                     */
                    void SetContent(const Code& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Layer version description
                     * @return Description Layer version description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Layer version description
                     * @param _description Layer version description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Software license of layer
                     * @return LicenseInfo Software license of layer
                     * 
                     */
                    std::string GetLicenseInfo() const;

                    /**
                     * 设置Software license of layer
                     * @param _licenseInfo Software license of layer
                     * 
                     */
                    void SetLicenseInfo(const std::string& _licenseInfo);

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     * 
                     */
                    bool LicenseInfoHasBeenSet() const;

                private:

                    /**
                     * Layer name, which can contain 1-64 English letters, digits, hyphens, and underscores, must begin with a letter, and cannot end with a hyphen or underscore
                     */
                    std::string m_layerName;
                    bool m_layerNameHasBeenSet;

                    /**
                     * Runtimes compatible with layer. Multiple choices are allowed. The valid values of this parameter correspond to the valid values of the `Runtime` of the function.
                     */
                    std::vector<std::string> m_compatibleRuntimes;
                    bool m_compatibleRuntimesHasBeenSet;

                    /**
                     * Layer file source or content
                     */
                    Code m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Layer version description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Software license of layer
                     */
                    std::string m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_PUBLISHLAYERVERSIONREQUEST_H_
