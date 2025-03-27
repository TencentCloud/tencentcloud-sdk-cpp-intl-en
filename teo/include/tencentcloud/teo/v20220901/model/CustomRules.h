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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom rules configuration.
                */
                class CustomRules : public AbstractModel
                {
                public:
                    CustomRules();
                    ~CustomRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The custom rule. <br>when modifying the Web protection configuration using ModifySecurityPolicy: <br> - if the Rules parameter is not specified or the parameter length of Rules is zero: clear all custom rule configurations. <br> - if the Rules parameter is not specified: keep the existing custom rule configuration without modification.
                     * @return Rules The custom rule. <br>when modifying the Web protection configuration using ModifySecurityPolicy: <br> - if the Rules parameter is not specified or the parameter length of Rules is zero: clear all custom rule configurations. <br> - if the Rules parameter is not specified: keep the existing custom rule configuration without modification.
                     * 
                     */
                    std::vector<CustomRule> GetRules() const;

                    /**
                     * 设置The custom rule. <br>when modifying the Web protection configuration using ModifySecurityPolicy: <br> - if the Rules parameter is not specified or the parameter length of Rules is zero: clear all custom rule configurations. <br> - if the Rules parameter is not specified: keep the existing custom rule configuration without modification.
                     * @param _rules The custom rule. <br>when modifying the Web protection configuration using ModifySecurityPolicy: <br> - if the Rules parameter is not specified or the parameter length of Rules is zero: clear all custom rule configurations. <br> - if the Rules parameter is not specified: keep the existing custom rule configuration without modification.
                     * 
                     */
                    void SetRules(const std::vector<CustomRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * The custom rule. <br>when modifying the Web protection configuration using ModifySecurityPolicy: <br> - if the Rules parameter is not specified or the parameter length of Rules is zero: clear all custom rule configurations. <br> - if the Rules parameter is not specified: keep the existing custom rule configuration without modification.
                     */
                    std::vector<CustomRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMRULES_H_
