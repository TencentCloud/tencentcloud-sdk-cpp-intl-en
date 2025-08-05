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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineAction.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineSubRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Sub-rule branch.
                */
                class RuleBranch : public AbstractModel
                {
                public:
                    RuleBranch();
                    ~RuleBranch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Match condition (https://intl.cloud.tencent.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d).
                     * @return Condition Match condition (https://intl.cloud.tencent.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d).
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Match condition (https://intl.cloud.tencent.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d).
                     * @param _condition Match condition (https://intl.cloud.tencent.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d).
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取[Operations]( https://www.tencentcloud.com/document/product/1145/54759#c7bd7e02-9247-4a72-b0e4-11c27cadb198).<Br>Note: actions and subrules cannot both be empty.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Actions [Operations]( https://www.tencentcloud.com/document/product/1145/54759#c7bd7e02-9247-4a72-b0e4-11c27cadb198).<Br>Note: actions and subrules cannot both be empty.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<RuleEngineAction> GetActions() const;

                    /**
                     * 设置[Operations]( https://www.tencentcloud.com/document/product/1145/54759#c7bd7e02-9247-4a72-b0e4-11c27cadb198).<Br>Note: actions and subrules cannot both be empty.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _actions [Operations]( https://www.tencentcloud.com/document/product/1145/54759#c7bd7e02-9247-4a72-b0e4-11c27cadb198).<Br>Note: actions and subrules cannot both be empty.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetActions(const std::vector<RuleEngineAction>& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取List of sub-rules. multiple rules exist in this list and are executed sequentially from top to bottom.<br>note: subrules and actions cannot both be empty. currently, only one layer of subrules is supported.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return SubRules List of sub-rules. multiple rules exist in this list and are executed sequentially from top to bottom.<br>note: subrules and actions cannot both be empty. currently, only one layer of subrules is supported.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<RuleEngineSubRule> GetSubRules() const;

                    /**
                     * 设置List of sub-rules. multiple rules exist in this list and are executed sequentially from top to bottom.<br>note: subrules and actions cannot both be empty. currently, only one layer of subrules is supported.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _subRules List of sub-rules. multiple rules exist in this list and are executed sequentially from top to bottom.<br>note: subrules and actions cannot both be empty. currently, only one layer of subrules is supported.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetSubRules(const std::vector<RuleEngineSubRule>& _subRules);

                    /**
                     * 判断参数 SubRules 是否已赋值
                     * @return SubRules 是否已赋值
                     * 
                     */
                    bool SubRulesHasBeenSet() const;

                private:

                    /**
                     * Match condition (https://intl.cloud.tencent.com/document/product/1552/90438?from_cn_redirect=1#33f65828-c6c6-4b66-a011-25a20b548d5d).
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * [Operations]( https://www.tencentcloud.com/document/product/1145/54759#c7bd7e02-9247-4a72-b0e4-11c27cadb198).<Br>Note: actions and subrules cannot both be empty.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<RuleEngineAction> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * List of sub-rules. multiple rules exist in this list and are executed sequentially from top to bottom.<br>note: subrules and actions cannot both be empty. currently, only one layer of subrules is supported.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<RuleEngineSubRule> m_subRules;
                    bool m_subRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEBRANCH_H_
