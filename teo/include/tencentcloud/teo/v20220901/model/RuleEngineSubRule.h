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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINESUBRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINESUBRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleBranch.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Sub-rule
                */
                class RuleEngineSubRule : public AbstractModel
                {
                public:
                    RuleEngineSubRule();
                    ~RuleEngineSubRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sub-Rule branch.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return Branches Sub-Rule branch.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::vector<RuleBranch> GetBranches() const;

                    /**
                     * 设置Sub-Rule branch.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _branches Sub-Rule branch.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetBranches(const std::vector<RuleBranch>& _branches);

                    /**
                     * 判断参数 Branches 是否已赋值
                     * @return Branches 是否已赋值
                     * 
                     */
                    bool BranchesHasBeenSet() const;

                    /**
                     * 获取Rule comments.
                     * @return Description Rule comments.
                     * 
                     */
                    std::vector<std::string> GetDescription() const;

                    /**
                     * 设置Rule comments.
                     * @param _description Rule comments.
                     * 
                     */
                    void SetDescription(const std::vector<std::string>& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Sub-Rule branch.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<RuleBranch> m_branches;
                    bool m_branchesHasBeenSet;

                    /**
                     * Rule comments.
                     */
                    std::vector<std::string> m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINESUBRULE_H_
