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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITWARNINGRULESREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITWARNINGRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/WarningRule.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditWarningRules request structure.
                */
                class AddEditWarningRulesRequest : public AbstractModel
                {
                public:
                    AddEditWarningRulesRequest();
                    ~AddEditWarningRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert switch policy
                     * @return WarningRules Alert switch policy
                     * 
                     */
                    std::vector<WarningRule> GetWarningRules() const;

                    /**
                     * 设置Alert switch policy
                     * @param _warningRules Alert switch policy
                     * 
                     */
                    void SetWarningRules(const std::vector<WarningRule>& _warningRules);

                    /**
                     * 判断参数 WarningRules 是否已赋值
                     * @return WarningRules 是否已赋值
                     * 
                     */
                    bool WarningRulesHasBeenSet() const;

                private:

                    /**
                     * Alert switch policy
                     */
                    std::vector<WarningRule> m_warningRules;
                    bool m_warningRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITWARNINGRULESREQUEST_H_
