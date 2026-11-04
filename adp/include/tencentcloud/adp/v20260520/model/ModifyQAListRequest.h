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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentityList.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyQAList request structure.
                */
                class ModifyQAListRequest : public AbstractModel
                {
                public:
                    ModifyQAListRequest();
                    ~ModifyQAListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the knowledge base it belongs to</p>
                     * @return KbId <p>ID of the knowledge base it belongs to</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>ID of the knowledge base it belongs to</p>
                     * @param _kbId <p>ID of the knowledge base it belongs to</p>
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
                     * 获取<p>List of QA IDs to be modified (quantity: 1-20)</p>
                     * @return QaIdList <p>List of QA IDs to be modified (quantity: 1-20)</p>
                     * 
                     */
                    std::vector<std::string> GetQaIdList() const;

                    /**
                     * 设置<p>List of QA IDs to be modified (quantity: 1-20)</p>
                     * @param _qaIdList <p>List of QA IDs to be modified (quantity: 1-20)</p>
                     * 
                     */
                    void SetQaIdList(const std::vector<std::string>& _qaIdList);

                    /**
                     * 判断参数 QaIdList 是否已赋值
                     * @return QaIdList 是否已赋值
                     * 
                     */
                    bool QaIdListHasBeenSet() const;

                    /**
                     * 获取<p>Category ID</p>
                     * @return CategoryId <p>Category ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>Category ID</p>
                     * @param _categoryId <p>Category ID</p>
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
                     * 获取<p>Effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>Effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>Effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>Effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
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
                     * 获取<p>Whether to adopt (verification passed)</p>
                     * @return IsAccepted <p>Whether to adopt (verification passed)</p>
                     * 
                     */
                    bool GetIsAccepted() const;

                    /**
                     * 设置<p>Whether to adopt (verification passed)</p>
                     * @param _isAccepted <p>Whether to adopt (verification passed)</p>
                     * 
                     */
                    void SetIsAccepted(const bool& _isAccepted);

                    /**
                     * 判断参数 IsAccepted 是否已赋值
                     * @return IsAccepted 是否已赋值
                     * 
                     */
                    bool IsAcceptedHasBeenSet() const;

                    /**
                     * 获取<p>Applicable scope (tag condition list).</p>
                     * @return LabelRefList <p>Applicable scope (tag condition list).</p>
                     * 
                     */
                    LabelRefIdentityList GetLabelRefList() const;

                    /**
                     * 设置<p>Applicable scope (tag condition list).</p>
                     * @param _labelRefList <p>Applicable scope (tag condition list).</p>
                     * 
                     */
                    void SetLabelRefList(const LabelRefIdentityList& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the knowledge base it belongs to</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>List of QA IDs to be modified (quantity: 1-20)</p>
                     */
                    std::vector<std::string> m_qaIdList;
                    bool m_qaIdListHasBeenSet;

                    /**
                     * <p>Category ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>Expiration policy (validity time and behavior after the validity period expires)</p>
                     */
                    ExpirationPolicy m_expirationPolicy;
                    bool m_expirationPolicyHasBeenSet;

                    /**
                     * <p>Whether to adopt (verification passed)</p>
                     */
                    bool m_isAccepted;
                    bool m_isAcceptedHasBeenSet;

                    /**
                     * <p>Applicable scope (tag condition list).</p>
                     */
                    LabelRefIdentityList m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYQALISTREQUEST_H_
