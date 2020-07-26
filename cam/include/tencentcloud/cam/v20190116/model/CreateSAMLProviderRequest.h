/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateSAMLProvider request structure.
                */
                class CreateSAMLProviderRequest : public AbstractModel
                {
                public:
                    CreateSAMLProviderRequest();
                    ~CreateSAMLProviderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML identity provider name
                     * @return Name SAML identity provider name
                     */
                    std::string GetName() const;

                    /**
                     * 设置SAML identity provider name
                     * @param Name SAML identity provider name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取SAML identity provider description
                     * @return Description SAML identity provider description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置SAML identity provider description
                     * @param Description SAML identity provider description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取SAML identity provider metadata document (Base64)
                     * @return SAMLMetadataDocument SAML identity provider metadata document (Base64)
                     */
                    std::string GetSAMLMetadataDocument() const;

                    /**
                     * 设置SAML identity provider metadata document (Base64)
                     * @param SAMLMetadataDocument SAML identity provider metadata document (Base64)
                     */
                    void SetSAMLMetadataDocument(const std::string& _sAMLMetadataDocument);

                    /**
                     * 判断参数 SAMLMetadataDocument 是否已赋值
                     * @return SAMLMetadataDocument 是否已赋值
                     */
                    bool SAMLMetadataDocumentHasBeenSet() const;

                private:

                    /**
                     * SAML identity provider name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * SAML identity provider description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * SAML identity provider metadata document (Base64)
                     */
                    std::string m_sAMLMetadataDocument;
                    bool m_sAMLMetadataDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESAMLPROVIDERREQUEST_H_
