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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertCCRule response structure.
                */
                class UpsertCCRuleResponse : public AbstractModel
                {
                public:
                    UpsertCCRuleResponse();
                    ~UpsertCCRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Operated RuleId
                     * @return RuleId Operated RuleId
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Normally null

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Operated RuleId
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULERESPONSE_H_
