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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYJSINJECTIONRULERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYJSINJECTIONRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/JSInjectionRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityJSInjectionRule response structure.
                */
                class DescribeSecurityJSInjectionRuleResponse : public AbstractModel
                {
                public:
                    DescribeSecurityJSInjectionRuleResponse();
                    ~DescribeSecurityJSInjectionRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the total rule count for JavaScript injection.
                     * @return TotalCount Specifies the total rule count for JavaScript injection.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取JavaScript injection rule list.
                     * @return JSInjectionRules JavaScript injection rule list.
                     * 
                     */
                    std::vector<JSInjectionRule> GetJSInjectionRules() const;

                    /**
                     * 判断参数 JSInjectionRules 是否已赋值
                     * @return JSInjectionRules 是否已赋值
                     * 
                     */
                    bool JSInjectionRulesHasBeenSet() const;

                private:

                    /**
                     * Specifies the total rule count for JavaScript injection.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * JavaScript injection rule list.
                     */
                    std::vector<JSInjectionRule> m_jSInjectionRules;
                    bool m_jSInjectionRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYJSINJECTIONRULERESPONSE_H_
