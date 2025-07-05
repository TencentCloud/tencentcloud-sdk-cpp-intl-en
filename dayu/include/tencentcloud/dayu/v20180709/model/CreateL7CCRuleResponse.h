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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULERESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCRuleConfig.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL7CCRule response structure.
                */
                class CreateL7CCRuleResponse : public AbstractModel
                {
                public:
                    CreateL7CCRuleResponse();
                    ~CreateL7CCRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom layer-7 CC protection rule parameters. If custom CC protection rule is not enabled, an empty array will be returned.
                     * @return RuleConfig Custom layer-7 CC protection rule parameters. If custom CC protection rule is not enabled, an empty array will be returned.
                     * 
                     */
                    std::vector<CCRuleConfig> GetRuleConfig() const;

                    /**
                     * 判断参数 RuleConfig 是否已赋值
                     * @return RuleConfig 是否已赋值
                     * 
                     */
                    bool RuleConfigHasBeenSet() const;

                private:

                    /**
                     * Custom layer-7 CC protection rule parameters. If custom CC protection rule is not enabled, an empty array will be returned.
                     */
                    std::vector<CCRuleConfig> m_ruleConfig;
                    bool m_ruleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULERESPONSE_H_
