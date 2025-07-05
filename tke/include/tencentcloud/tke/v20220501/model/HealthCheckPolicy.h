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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICY_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/HealthCheckPolicyRule.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Health check rules
                */
                class HealthCheckPolicy : public AbstractModel
                {
                public:
                    HealthCheckPolicy();
                    ~HealthCheckPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check policy name
                     * @return Name Health check policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Health check policy name
                     * @param _name Health check policy name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取List of health check policy rules
                     * @return Rules List of health check policy rules
                     * 
                     */
                    std::vector<HealthCheckPolicyRule> GetRules() const;

                    /**
                     * 设置List of health check policy rules
                     * @param _rules List of health check policy rules
                     * 
                     */
                    void SetRules(const std::vector<HealthCheckPolicyRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Health check policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of health check policy rules
                     */
                    std::vector<HealthCheckPolicyRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICY_H_
