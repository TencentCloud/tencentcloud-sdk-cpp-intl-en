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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEABNORMALPROCESSRULESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEABNORMALPROCESSRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteAbnormalProcessRules request structure.
                */
                class DeleteAbnormalProcessRulesRequest : public AbstractModel
                {
                public:
                    DeleteAbnormalProcessRulesRequest();
                    ~DeleteAbnormalProcessRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy IDs
                     * @return RuleIdSet Policy IDs
                     * 
                     */
                    std::vector<std::string> GetRuleIdSet() const;

                    /**
                     * 设置Policy IDs
                     * @param _ruleIdSet Policy IDs
                     * 
                     */
                    void SetRuleIdSet(const std::vector<std::string>& _ruleIdSet);

                    /**
                     * 判断参数 RuleIdSet 是否已赋值
                     * @return RuleIdSet 是否已赋值
                     * 
                     */
                    bool RuleIdSetHasBeenSet() const;

                private:

                    /**
                     * Policy IDs
                     */
                    std::vector<std::string> m_ruleIdSet;
                    bool m_ruleIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEABNORMALPROCESSRULESREQUEST_H_
