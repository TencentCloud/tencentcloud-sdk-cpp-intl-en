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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CODEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CODEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleCodeActionParams.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Action with a status code for the rule engine
                */
                class CodeAction : public AbstractModel
                {
                public:
                    CodeAction();
                    ~CodeAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Feature name. For completion specifications, call the API to query the parameter settings of the rule engine (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
                     * @return Action Feature name. For completion specifications, call the API to query the parameter settings of the rule engine (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Feature name. For completion specifications, call the API to query the parameter settings of the rule engine (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
                     * @param _action Feature name. For completion specifications, call the API to query the parameter settings of the rule engine (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
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
                     * 获取Operation parameter.
                     * @return Parameters Operation parameter.
                     * 
                     */
                    std::vector<RuleCodeActionParams> GetParameters() const;

                    /**
                     * 设置Operation parameter.
                     * @param _parameters Operation parameter.
                     * 
                     */
                    void SetParameters(const std::vector<RuleCodeActionParams>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * Feature name. For completion specifications, call the API to query the parameter settings of the rule engine (https://www.tencentcloud.com/document/product/1552/80618?from_cn_redirect=1).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operation parameter.
                     */
                    std::vector<RuleCodeActionParams> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CODEACTION_H_
