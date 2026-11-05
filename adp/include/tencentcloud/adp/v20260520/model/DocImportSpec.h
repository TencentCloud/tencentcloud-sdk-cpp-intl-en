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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCIMPORTSPEC_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCIMPORTSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DeDuplicateStrategy.h>
#include <tencentcloud/adp/v20260520/model/ExpirationPolicy.h>
#include <tencentcloud/adp/v20260520/model/DocExternalLink.h>
#include <tencentcloud/adp/v20260520/model/LabelRefIdentity.h>
#include <tencentcloud/adp/v20260520/model/DocParseConfig.h>
#include <tencentcloud/adp/v20260520/model/DocSwitch.h>
#include <tencentcloud/adp/v20260520/model/DocUpdatePeriod.h>
#include <tencentcloud/adp/v20260520/model/UserAccessConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document import specification (one-time input of non-persistent data)
                */
                class DocImportSpec : public AbstractModel
                {
                public:
                    DocImportSpec();
                    ~DocImportSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File ID (file identifier obtained through the file management service, required)</p>
                     * @return FileId <p>File ID (file identifier obtained through the file management service, required)</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>File ID (file identifier obtained through the file management service, required)</p>
                     * @param _fileId <p>File ID (file identifier obtained through the file management service, required)</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

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
                     * 获取<p>List of rules regarding repeated files</p>
                     * @return DeDuplicateStrategyList <p>List of rules regarding repeated files</p>
                     * 
                     */
                    std::vector<DeDuplicateStrategy> GetDeDuplicateStrategyList() const;

                    /**
                     * 设置<p>List of rules regarding repeated files</p>
                     * @param _deDuplicateStrategyList <p>List of rules regarding repeated files</p>
                     * 
                     */
                    void SetDeDuplicateStrategyList(const std::vector<DeDuplicateStrategy>& _deDuplicateStrategyList);

                    /**
                     * 判断参数 DeDuplicateStrategyList 是否已赋值
                     * @return DeDuplicateStrategyList 是否已赋值
                     * 
                     */
                    bool DeDuplicateStrategyListHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>Knowledge effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>Knowledge effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>Knowledge effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
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
                     * 获取<p>Applicable scope (tag condition).</p>
                     * @return LabelRefList <p>Applicable scope (tag condition).</p>
                     * 
                     */
                    std::vector<LabelRefIdentity> GetLabelRefList() const;

                    /**
                     * 设置<p>Applicable scope (tag condition).</p>
                     * @param _labelRefList <p>Applicable scope (tag condition).</p>
                     * 
                     */
                    void SetLabelRefList(const std::vector<LabelRefIdentity>& _labelRefList);

                    /**
                     * 判断参数 LabelRefList 是否已赋值
                     * @return LabelRefList 是否已赋值
                     * 
                     */
                    bool LabelRefListHasBeenSet() const;

                    /**
                     * 获取<p>Parsing configuration (split rules, content filtering, etc.)</p>
                     * @return ParseConfig <p>Parsing configuration (split rules, content filtering, etc.)</p>
                     * 
                     */
                    DocParseConfig GetParseConfig() const;

                    /**
                     * 设置<p>Parsing configuration (split rules, content filtering, etc.)</p>
                     * @param _parseConfig <p>Parsing configuration (split rules, content filtering, etc.)</p>
                     * 
                     */
                    void SetParseConfig(const DocParseConfig& _parseConfig);

                    /**
                     * 判断参数 ParseConfig 是否已赋值
                     * @return ParseConfig 是否已赋值
                     * 
                     */
                    bool ParseConfigHasBeenSet() const;

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

                    /**
                     * 获取<p>Update cycle</p>
                     * @return UpdatePeriod <p>Update cycle</p>
                     * 
                     */
                    DocUpdatePeriod GetUpdatePeriod() const;

                    /**
                     * 设置<p>Update cycle</p>
                     * @param _updatePeriod <p>Update cycle</p>
                     * 
                     */
                    void SetUpdatePeriod(const DocUpdatePeriod& _updatePeriod);

                    /**
                     * 判断参数 UpdatePeriod 是否已赋值
                     * @return UpdatePeriod 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHasBeenSet() const;

                    /**
                     * 获取<p>User access configuration</p>
                     * @return UserAccessConfig <p>User access configuration</p>
                     * 
                     */
                    UserAccessConfig GetUserAccessConfig() const;

                    /**
                     * 设置<p>User access configuration</p>
                     * @param _userAccessConfig <p>User access configuration</p>
                     * 
                     */
                    void SetUserAccessConfig(const UserAccessConfig& _userAccessConfig);

                    /**
                     * 判断参数 UserAccessConfig 是否已赋值
                     * @return UserAccessConfig 是否已赋值
                     * 
                     */
                    bool UserAccessConfigHasBeenSet() const;

                private:

                    /**
                     * <p>File ID (file identifier obtained through the file management service, required)</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Ownership category ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>List of rules regarding repeated files</p>
                     */
                    std::vector<DeDuplicateStrategy> m_deDuplicateStrategyList;
                    bool m_deDuplicateStrategyListHasBeenSet;

                    /**
                     * <p>Knowledge effective scope<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
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
                     * <p>Applicable scope (tag condition).</p>
                     */
                    std::vector<LabelRefIdentity> m_labelRefList;
                    bool m_labelRefListHasBeenSet;

                    /**
                     * <p>Parsing configuration (split rules, content filtering, etc.)</p>
                     */
                    DocParseConfig m_parseConfig;
                    bool m_parseConfigHasBeenSet;

                    /**
                     * <p>Switch configuration</p>
                     */
                    DocSwitch m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>Update cycle</p>
                     */
                    DocUpdatePeriod m_updatePeriod;
                    bool m_updatePeriodHasBeenSet;

                    /**
                     * <p>User access configuration</p>
                     */
                    UserAccessConfig m_userAccessConfig;
                    bool m_userAccessConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCIMPORTSPEC_H_
