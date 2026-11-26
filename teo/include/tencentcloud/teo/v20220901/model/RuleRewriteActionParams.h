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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEREWRITEACTIONPARAMS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEREWRITEACTIONPARAMS_H_

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
                * Action parameter for HTTP request/response header operations in rule engine conditions.
                */
                class RuleRewriteActionParams : public AbstractModel
                {
                public:
                    RuleRewriteActionParams();
                    ~RuleRewriteActionParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取For feature parameter names and completion specifications, call the API to query the rule engine's parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1). Currently, only three values are supported:
<li> add: Add an HTTP header;</li>
<li> set: rewrite HTTP header;</li>
<li> del: delete an HTTP header.</li>
                     * @return Action For feature parameter names and completion specifications, call the API to query the rule engine's parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1). Currently, only three values are supported:
<li> add: Add an HTTP header;</li>
<li> set: rewrite HTTP header;</li>
<li> del: delete an HTTP header.</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置For feature parameter names and completion specifications, call the API to query the rule engine's parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1). Currently, only three values are supported:
<li> add: Add an HTTP header;</li>
<li> set: rewrite HTTP header;</li>
<li> del: delete an HTTP header.</li>
                     * @param _action For feature parameter names and completion specifications, call the API to query the rule engine's parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1). Currently, only three values are supported:
<li> add: Add an HTTP header;</li>
<li> set: rewrite HTTP header;</li>
<li> del: delete an HTTP header.</li>
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
                     * 获取Parameter name.
                     * @return Name Parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name.
                     * @param _name Parameter name.
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
                     * 获取Parameter value.
                     * @return Values Parameter value.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Parameter value.
                     * @param _values Parameter value.
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
                     * For feature parameter names and completion specifications, call the API to query the rule engine's parameter settings (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1). Currently, only three values are supported:
<li> add: Add an HTTP header;</li>
<li> set: rewrite HTTP header;</li>
<li> del: delete an HTTP header.</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEREWRITEACTIONPARAMS_H_
