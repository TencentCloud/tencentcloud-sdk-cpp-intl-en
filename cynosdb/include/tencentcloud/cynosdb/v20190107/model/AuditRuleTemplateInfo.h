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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Details of an audit rule template
                */
                class AuditRuleTemplateInfo : public AbstractModel
                {
                public:
                    AuditRuleTemplateInfo();
                    ~AuditRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule template ID
                     * @return RuleTemplateId Rule template ID
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置Rule template ID
                     * @param RuleTemplateId Rule template ID
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取Rule template name
                     * @return RuleTemplateName Rule template name
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置Rule template name
                     * @param RuleTemplateName Rule template name
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取Filter of the rule template
                     * @return RuleFilters Filter of the rule template
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置Filter of the rule template
                     * @param RuleFilters Filter of the rule template
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取Description of a rule template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description of a rule template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of a rule template
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Description Description of a rule template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time of a rule template
                     * @return CreateAt Creation time of a rule template
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Creation time of a rule template
                     * @param CreateAt Creation time of a rule template
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     */
                    bool CreateAtHasBeenSet() const;

                private:

                    /**
                     * Rule template ID
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule template name
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * Filter of the rule template
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Description of a rule template
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time of a rule template
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
