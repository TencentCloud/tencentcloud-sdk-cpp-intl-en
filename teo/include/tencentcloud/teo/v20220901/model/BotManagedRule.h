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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot managed rules. The rule IDs can be obtained from the output of DescribeBotManagedRules.
                */
                class BotManagedRule : public AbstractModel
                {
                public:
                    BotManagedRule();
                    ~BotManagedRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The rule action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`monitor`: Observe</li>
                     * @return Action The rule action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`monitor`: Observe</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The rule action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`monitor`: Observe</li>
                     * @param _action The rule action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`monitor`: Observe</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取The rule ID, which is only used as an output parameter.
                     * @return RuleID The rule ID, which is only used as an output parameter.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置The rule ID, which is only used as an output parameter.
                     * @param _ruleID The rule ID, which is only used as an output parameter.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取The ID of the rule that applies the "Allow" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransManagedIds The ID of the rule that applies the "Allow" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetTransManagedIds() const;

                    /**
                     * 设置The ID of the rule that applies the "Allow" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transManagedIds The ID of the rule that applies the "Allow" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransManagedIds(const std::vector<int64_t>& _transManagedIds);

                    /**
                     * 判断参数 TransManagedIds 是否已赋值
                     * @return TransManagedIds 是否已赋值
                     * 
                     */
                    bool TransManagedIdsHasBeenSet() const;

                    /**
                     * 获取The ID of the rule that applies the "JavaScript challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlgManagedIds The ID of the rule that applies the "JavaScript challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置The ID of the rule that applies the "JavaScript challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _algManagedIds The ID of the rule that applies the "JavaScript challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     * 
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取The ID of the rule that applies the "Managed challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CapManagedIds The ID of the rule that applies the "Managed challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置The ID of the rule that applies the "Managed challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _capManagedIds The ID of the rule that applies the "Managed challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     * 
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取The ID of the rule that applies the "Observe" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MonManagedIds The ID of the rule that applies the "Observe" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置The ID of the rule that applies the "Observe" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _monManagedIds The ID of the rule that applies the "Observe" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     * 
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取The ID of the rule that applies the "Block" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DropManagedIds The ID of the rule that applies the "Block" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置The ID of the rule that applies the "Block" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dropManagedIds The ID of the rule that applies the "Block" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     * 
                     */
                    bool DropManagedIdsHasBeenSet() const;

                private:

                    /**
                     * The rule action. Values:
<li>`drop`: Block</li>
<li>`trans`: Allow</li>
<li>`alg`: JavaScript challenge</li>
<li>`monitor`: Observe</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The rule ID, which is only used as an output parameter.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * The ID of the rule that applies the "Allow" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_transManagedIds;
                    bool m_transManagedIdsHasBeenSet;

                    /**
                     * The ID of the rule that applies the "JavaScript challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * The ID of the rule that applies the "Managed challenge" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * The ID of the rule that applies the "Observe" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * The ID of the rule that applies the "Block" action.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTMANAGEDRULE_H_
