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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULENORMALACTIONPARAMS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULENORMALACTIONPARAMS_H_

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
                * Common action parameter of a rule engine condition
                */
                class RuleNormalActionParams : public AbstractModel
                {
                public:
                    RuleNormalActionParams();
                    ~RuleNormalActionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The parameter name. For details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
                     * @return Name The parameter name. For details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The parameter name. For details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
                     * @param _name The parameter name. For details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
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
                     * 获取The parameter value.
                     * @return Values The parameter value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置The parameter value.
                     * @param _values The parameter value.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * The parameter name. For details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The parameter value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULENORMALACTIONPARAMS_H_
