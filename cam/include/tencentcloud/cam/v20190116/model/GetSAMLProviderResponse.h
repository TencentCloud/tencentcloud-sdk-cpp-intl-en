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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_

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
                * GetSAMLProvider response structure.
                */
                class GetSAMLProviderResponse : public AbstractModel
                {
                public:
                    GetSAMLProviderResponse();
                    ~GetSAMLProviderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML identity provider name
                     * @return Name SAML identity provider name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取SAML identity provider description
                     * @return Description SAML identity provider description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Time SAML identity provider created
                     * @return CreateTime Time SAML identity provider created
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Time SAML identity provider last modified
                     * @return ModifyTime Time SAML identity provider last modified
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取SAML identity provider metadata document
                     * @return SAMLMetadata SAML identity provider metadata document
                     * 
                     */
                    std::string GetSAMLMetadata() const;

                    /**
                     * 判断参数 SAMLMetadata 是否已赋值
                     * @return SAMLMetadata 是否已赋值
                     * 
                     */
                    bool SAMLMetadataHasBeenSet() const;

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
                     * Time SAML identity provider created
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time SAML identity provider last modified
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * SAML identity provider metadata document
                     */
                    std::string m_sAMLMetadata;
                    bool m_sAMLMetadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETSAMLPROVIDERRESPONSE_H_
