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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleStructuredTestItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyRuleTestResult request structure.
                */
                class DescribeDspmIdentifyRuleTestResultRequest : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyRuleTestResultRequest();
                    ~DescribeDspmIdentifyRuleTestResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule type</p><p>Enumeration values:</p><ul><li>structured: Structured rule</li><li>unstructrued: Unstructured rule</li></ul>
                     * @return RuleType <p>Rule type</p><p>Enumeration values:</p><ul><li>structured: Structured rule</li><li>unstructrued: Unstructured rule</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>Rule type</p><p>Enumeration values:</p><ul><li>structured: Structured rule</li><li>unstructrued: Unstructured rule</li></ul>
                     * @param _ruleType <p>Rule type</p><p>Enumeration values:</p><ul><li>structured: Structured rule</li><li>unstructrued: Unstructured rule</li></ul>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Rule content</p>
                     * @return RuleContent <p>Rule content</p>
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置<p>Rule content</p>
                     * @param _ruleContent <p>Rule content</p>
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取<p>Data item id</p>
                     * @return RuleId <p>Data item id</p>
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>Data item id</p>
                     * @param _ruleId <p>Data item id</p>
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取<p>Structured test content</p>
                     * @return StructuredTestContent <p>Structured test content</p>
                     * 
                     */
                    std::vector<DspmIdentifyRuleStructuredTestItem> GetStructuredTestContent() const;

                    /**
                     * 设置<p>Structured test content</p>
                     * @param _structuredTestContent <p>Structured test content</p>
                     * 
                     */
                    void SetStructuredTestContent(const std::vector<DspmIdentifyRuleStructuredTestItem>& _structuredTestContent);

                    /**
                     * 判断参数 StructuredTestContent 是否已赋值
                     * @return StructuredTestContent 是否已赋值
                     * 
                     */
                    bool StructuredTestContentHasBeenSet() const;

                    /**
                     * 获取<p>Unstructured test content</p>
                     * @return UnStructuredTestContent <p>Unstructured test content</p>
                     * 
                     */
                    std::string GetUnStructuredTestContent() const;

                    /**
                     * 设置<p>Unstructured test content</p>
                     * @param _unStructuredTestContent <p>Unstructured test content</p>
                     * 
                     */
                    void SetUnStructuredTestContent(const std::string& _unStructuredTestContent);

                    /**
                     * 判断参数 UnStructuredTestContent 是否已赋值
                     * @return UnStructuredTestContent 是否已赋值
                     * 
                     */
                    bool UnStructuredTestContentHasBeenSet() const;

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
                     * <p>Rule type</p><p>Enumeration values:</p><ul><li>structured: Structured rule</li><li>unstructrued: Unstructured rule</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>Rule content</p>
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * <p>Data item id</p>
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Structured test content</p>
                     */
                    std::vector<DspmIdentifyRuleStructuredTestItem> m_structuredTestContent;
                    bool m_structuredTestContentHasBeenSet;

                    /**
                     * <p>Unstructured test content</p>
                     */
                    std::string m_unStructuredTestContent;
                    bool m_unStructuredTestContentHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYRULETESTRESULTREQUEST_H_
