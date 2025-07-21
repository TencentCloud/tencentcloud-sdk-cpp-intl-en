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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptionRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Web security exception rules.
                */
                class ExceptionRules : public AbstractModel
                {
                public:
                    ExceptionRules();
                    ~ExceptionRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Definition list of exception Rules. when using ModifySecurityPolicy to modify Web protection configuration: <li>if the Rules parameter is not specified or the parameter length is zero: clear all exception rule configurations.</li><li>if the ExceptionRules parameter value is not specified in SecurityPolicy: keep existing exception rule configurations without modification.</li>.
                     * @return Rules Definition list of exception Rules. when using ModifySecurityPolicy to modify Web protection configuration: <li>if the Rules parameter is not specified or the parameter length is zero: clear all exception rule configurations.</li><li>if the ExceptionRules parameter value is not specified in SecurityPolicy: keep existing exception rule configurations without modification.</li>.
                     * 
                     */
                    std::vector<ExceptionRule> GetRules() const;

                    /**
                     * 设置Definition list of exception Rules. when using ModifySecurityPolicy to modify Web protection configuration: <li>if the Rules parameter is not specified or the parameter length is zero: clear all exception rule configurations.</li><li>if the ExceptionRules parameter value is not specified in SecurityPolicy: keep existing exception rule configurations without modification.</li>.
                     * @param _rules Definition list of exception Rules. when using ModifySecurityPolicy to modify Web protection configuration: <li>if the Rules parameter is not specified or the parameter length is zero: clear all exception rule configurations.</li><li>if the ExceptionRules parameter value is not specified in SecurityPolicy: keep existing exception rule configurations without modification.</li>.
                     * 
                     */
                    void SetRules(const std::vector<ExceptionRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Definition list of exception Rules. when using ModifySecurityPolicy to modify Web protection configuration: <li>if the Rules parameter is not specified or the parameter length is zero: clear all exception rule configurations.</li><li>if the ExceptionRules parameter value is not specified in SecurityPolicy: keep existing exception rule configurations without modification.</li>.
                     */
                    std::vector<ExceptionRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTIONRULES_H_
