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
                * The scope to which the exception rule applies
                */
                class ExceptUserRuleScope : public AbstractModel
                {
                public:
                    ExceptUserRuleScope();
                    ~ExceptUserRuleScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     * @return Type Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     * @param Type Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The module to be activated. Values:
<li>`waf`: Managed rules</li>
<li>`cc`: Rate limiting rules</li>
<li>`bot`: bot protection</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Modules The module to be activated. Values:
<li>`waf`: Managed rules</li>
<li>`cc`: Rate limiting rules</li>
<li>`bot`: bot protection</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置The module to be activated. Values:
<li>`waf`: Managed rules</li>
<li>`cc`: Rate limiting rules</li>
<li>`bot`: bot protection</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Modules The module to be activated. Values:
<li>`waf`: Managed rules</li>
<li>`cc`: Rate limiting rules</li>
<li>`bot`: bot protection</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取Module settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PartialModules Module settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PartialModule> GetPartialModules() const;

                    /**
                     * 设置Module settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PartialModules Module settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPartialModules(const std::vector<PartialModule>& _partialModules);

                    /**
                     * 判断参数 PartialModules 是否已赋值
                     * @return PartialModules 是否已赋值
                     */
                    bool PartialModulesHasBeenSet() const;

                    /**
                     * 获取Condition settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SkipConditions Condition settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SkipCondition> GetSkipConditions() const;

                    /**
                     * 设置Condition settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param SkipConditions Condition settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSkipConditions(const std::vector<SkipCondition>& _skipConditions);

                    /**
                     * 判断参数 SkipConditions 是否已赋值
                     * @return SkipConditions 是否已赋值
                     */
                    bool SkipConditionsHasBeenSet() const;

                private:

                    /**
                     * Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The module to be activated. Values:
<li>`waf`: Managed rules</li>
<li>`cc`: Rate limiting rules</li>
<li>`bot`: bot protection</li>
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * Module settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<PartialModule> m_partialModules;
                    bool m_partialModulesHasBeenSet;

                    /**
                     * Condition settings of the exception rule. If it is null, the settings that were last configured will be used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SkipCondition> m_skipConditions;
                    bool m_skipConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
