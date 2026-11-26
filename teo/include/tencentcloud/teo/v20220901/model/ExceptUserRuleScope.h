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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PartialModule.h>
#include <tencentcloud/teo/v20220901/model/SkipCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Effective scope of the exception rule.
                */
                class ExceptUserRuleScope : public AbstractModel
                {
                public:
                    ExceptUserRuleScope();
                    ~ExceptUserRuleScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception rule type. Among them, complete mode represents exceptions for full data, while partial mode represents selecting specified modules and specified fields for exceptions. The field values include:
<li>complete: skip entirely mode;</li>
<li>partial: Partially skip mode.</li>
                     * @return Type Exception rule type. Among them, complete mode represents exceptions for full data, while partial mode represents selecting specified modules and specified fields for exceptions. The field values include:
<li>complete: skip entirely mode;</li>
<li>partial: Partially skip mode.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception rule type. Among them, complete mode represents exceptions for full data, while partial mode represents selecting specified modules and specified fields for exceptions. The field values include:
<li>complete: skip entirely mode;</li>
<li>partial: Partially skip mode.</li>
                     * @param _type Exception rule type. Among them, complete mode represents exceptions for full data, while partial mode represents selecting specified modules and specified fields for exceptions. The field values include:
<li>complete: skip entirely mode;</li>
<li>partial: Partially skip mode.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Effective module. Valid values:
<li>waf: managed rules;</li>
<li>rate: rate limit;</li>
<li>acl: custom rule;</li>
<li>cc: CC attack defense;</li>
<li>bot: bot protection.</li>
                     * @return Modules Effective module. Valid values:
<li>waf: managed rules;</li>
<li>rate: rate limit;</li>
<li>acl: custom rule;</li>
<li>cc: CC attack defense;</li>
<li>bot: bot protection.</li>
                     * 
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置Effective module. Valid values:
<li>waf: managed rules;</li>
<li>rate: rate limit;</li>
<li>acl: custom rule;</li>
<li>cc: CC attack defense;</li>
<li>bot: bot protection.</li>
                     * @param _modules Effective module. Valid values:
<li>waf: managed rules;</li>
<li>rate: rate limit;</li>
<li>acl: custom rule;</li>
<li>cc: CC attack defense;</li>
<li>bot: bot protection.</li>
                     * 
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取Skip the exception rule details of some rule IDs. If it is null, use the last set configuration by default.
                     * @return PartialModules Skip the exception rule details of some rule IDs. If it is null, use the last set configuration by default.
                     * 
                     */
                    std::vector<PartialModule> GetPartialModules() const;

                    /**
                     * 设置Skip the exception rule details of some rule IDs. If it is null, use the last set configuration by default.
                     * @param _partialModules Skip the exception rule details of some rule IDs. If it is null, use the last set configuration by default.
                     * 
                     */
                    void SetPartialModules(const std::vector<PartialModule>& _partialModules);

                    /**
                     * 判断参数 PartialModules 是否已赋值
                     * @return PartialModules 是否已赋值
                     * 
                     */
                    bool PartialModulesHasBeenSet() const;

                    /**
                     * 获取Exception rule details for skipping specific fields during scan. If null, use the last set configuration by default.
                     * @return SkipConditions Exception rule details for skipping specific fields during scan. If null, use the last set configuration by default.
                     * 
                     */
                    std::vector<SkipCondition> GetSkipConditions() const;

                    /**
                     * 设置Exception rule details for skipping specific fields during scan. If null, use the last set configuration by default.
                     * @param _skipConditions Exception rule details for skipping specific fields during scan. If null, use the last set configuration by default.
                     * 
                     */
                    void SetSkipConditions(const std::vector<SkipCondition>& _skipConditions);

                    /**
                     * 判断参数 SkipConditions 是否已赋值
                     * @return SkipConditions 是否已赋值
                     * 
                     */
                    bool SkipConditionsHasBeenSet() const;

                private:

                    /**
                     * Exception rule type. Among them, complete mode represents exceptions for full data, while partial mode represents selecting specified modules and specified fields for exceptions. The field values include:
<li>complete: skip entirely mode;</li>
<li>partial: Partially skip mode.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Effective module. Valid values:
<li>waf: managed rules;</li>
<li>rate: rate limit;</li>
<li>acl: custom rule;</li>
<li>cc: CC attack defense;</li>
<li>bot: bot protection.</li>
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * Skip the exception rule details of some rule IDs. If it is null, use the last set configuration by default.
                     */
                    std::vector<PartialModule> m_partialModules;
                    bool m_partialModulesHasBeenSet;

                    /**
                     * Exception rule details for skipping specific fields during scan. If null, use the last set configuration by default.
                     */
                    std::vector<SkipCondition> m_skipConditions;
                    bool m_skipConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
