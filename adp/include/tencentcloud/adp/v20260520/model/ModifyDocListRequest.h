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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYDOCLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYDOCLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/DocExternalLink.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentityList.h>
#include <tencentcloud/adp/v20260520/model/DocSwitch.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyDocList request structure.
                */
                class ModifyDocListRequest : public AbstractModel
                {
                public:
                    ModifyDocListRequest();
                    ~ModifyDocListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Document ID list to be modified (quantity: 1-20)</p>
                     * @return DocIdList <p>Document ID list to be modified (quantity: 1-20)</p>
                     * 
                     */
                    std::vector<std::string> GetDocIdList() const;

                    /**
                     * 设置<p>Document ID list to be modified (quantity: 1-20)</p>
                     * @param _docIdList <p>Document ID list to be modified (quantity: 1-20)</p>
                     * 
                     */
                    void SetDocIdList(const std::vector<std::string>& _docIdList);

                    /**
                     * 判断参数 DocIdList 是否已赋值
                     * @return DocIdList 是否已赋值
                     * 
                     */
                    bool DocIdListHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KbId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _kbId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>Ownership category ID</p>
                     * @return CategoryId <p>Ownership category ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Ownership category ID</p>
                     * @param _categoryId <p>Ownership category ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>Application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>Application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>Application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    void SetEffectiveDomain(const int64_t& _effectiveDomain);

                    /**
                     * 判断参数 EffectiveDomain 是否已赋值
                     * @return EffectiveDomain 是否已赋值
                     * 
                     */
                    bool EffectiveDomainHasBeenSet() const;

                    /**
                     * 获取<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @return ExpirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    ExpirationPolicy GetExpirationPolicy() const;

                    /**
                     * 设置<p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * @param _expirationPolicy <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     * 
                     */
                    void SetExpirationPolicy(const ExpirationPolicy& _expirationPolicy);

                    /**
                     * 判断参数 ExpirationPolicy 是否已赋值
                     * @return ExpirationPolicy 是否已赋值
                     * 
                     */
                    bool ExpirationPolicyHasBeenSet() const;

                    /**
                     * 获取<p>External link</p>
                     * @return ExternalLink <p>External link</p>
                     * 
                     */
                    DocExternalLink GetExternalLink() const;

                    /**
                     * 设置<p>External link</p>
                     * @param _externalLink <p>External link</p>
                     * 
                     */
                    void SetExternalLink(const DocExternalLink& _externalLink);

                    /**
                     * 判断参数 ExternalLink 是否已赋值
                     * @return ExternalLink 是否已赋值
                     * 
                     */
                    bool ExternalLinkHasBeenSet() const;

                    /**
                     * 获取<p>Tag list.</p>
                     * @return LabelRefList <p>Tag list.</p>
                     * 
                     */
                    LabelRefIdentityList GetLabelRefList() const;

                    /**
                     * 设置<p>Tag list.</p>
                     * @param _labelRefList <p>Tag list.</p>
                     * 
                     */
                    void SetLabelRefList(const LabelRefIdentityList& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                    /**
                     * 获取<p>Switch configuration</p>
                     * @return Switch <p>Switch configuration</p>
                     * 
                     */
                    DocSwitch GetSwitch() const;

                    /**
                     * 设置<p>Switch configuration</p>
                     * @param _switch <p>Switch configuration</p>
                     * 
                     */
                    void SetSwitch(const DocSwitch& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * <p>Document ID list to be modified (quantity: 1-20)</p>
                     */
                    std::vector<std::string> m_docIdList;
                    bool m_docIdListHasBeenSet;

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>Ownership category ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Application scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>External link</p>
                     */
                    DocExternalLink m_externalLink;
                    bool m_externalLinkHasBeenSet;

                    /**
                     * <p>Tag list.</p>
                     */
                    LabelRefIdentityList m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                    /**
                     * <p>Switch configuration</p>
                     */
                    DocSwitch m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYDOCLISTREQUEST_H_
