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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmIdentifyRule request structure.
                */
                class ModifyDspmIdentifyRuleRequest : public AbstractModel
                {
                public:
                    ModifyDspmIdentifyRuleRequest();
                    ~ModifyDspmIdentifyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Data item id</p>
                     * @return Id <p>Data item id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Data item id</p>
                     * @param _id <p>Data item id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Data item name</p>
                     * @return Name <p>Data item name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Data item name</p>
                     * @param _name <p>Data item name</p>
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Data item description.</p>
                     * @return Description <p>Data item description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Data item description.</p>
                     * @param _description <p>Data item description.</p>
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
                     * 获取<p>Data item enable status</p><p>Enumeration values:</p><ul><li>0: disabled</li><li>1: enabled</li></ul>
                     * @return Status <p>Data item enable status</p><p>Enumeration values:</p><ul><li>0: disabled</li><li>1: enabled</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Data item enable status</p><p>Enumeration values:</p><ul><li>0: disabled</li><li>1: enabled</li></ul>
                     * @param _status <p>Data item enable status</p><p>Enumeration values:</p><ul><li>0: disabled</li><li>1: enabled</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Structured rule</p>
                     * @return StructuredRule <p>Structured rule</p>
                     * 
                     */
                    std::string GetStructuredRule() const;

                    /**
                     * 设置<p>Structured rule</p>
                     * @param _structuredRule <p>Structured rule</p>
                     * 
                     */
                    void SetStructuredRule(const std::string& _structuredRule);

                    /**
                     * 判断参数 StructuredRule 是否已赋值
                     * @return StructuredRule 是否已赋值
                     * 
                     */
                    bool StructuredRuleHasBeenSet() const;

                    /**
                     * 获取<p>Unstructured rule</p>
                     * @return UnStructuredRule <p>Unstructured rule</p>
                     * 
                     */
                    std::string GetUnStructuredRule() const;

                    /**
                     * 设置<p>Unstructured rule</p>
                     * @param _unStructuredRule <p>Unstructured rule</p>
                     * 
                     */
                    void SetUnStructuredRule(const std::string& _unStructuredRule);

                    /**
                     * 判断参数 UnStructuredRule 是否已赋值
                     * @return UnStructuredRule 是否已赋值
                     * 
                     */
                    bool UnStructuredRuleHasBeenSet() const;

                    /**
                     * 获取<p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @return OperationSource <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    std::string GetOperationSource() const;

                    /**
                     * 设置<p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * @param _operationSource <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     * 
                     */
                    void SetOperationSource(const std::string& _operationSource);

                    /**
                     * 判断参数 OperationSource 是否已赋值
                     * @return OperationSource 是否已赋值
                     * 
                     */
                    bool OperationSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Data item id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Data item name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Data item description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Data item enable status</p><p>Enumeration values:</p><ul><li>0: disabled</li><li>1: enabled</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Structured rule</p>
                     */
                    std::string m_structuredRule;
                    bool m_structuredRuleHasBeenSet;

                    /**
                     * <p>Unstructured rule</p>
                     */
                    std::string m_unStructuredRule;
                    bool m_unStructuredRuleHasBeenSet;

                    /**
                     * <p>Operation source: empty/dspm=database risk monitoring entry, cos=object storage risk monitoring entry</p>
                     */
                    std::string m_operationSource;
                    bool m_operationSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMIDENTIFYRULEREQUEST_H_
