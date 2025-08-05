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
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     * @param _type Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
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
                     * 获取Effective module. the field value can be:.
<li>`waf`: tencent cloud-managed rules</li>.
<Li>`Rate`: rate limit</li>.
<li>`acl`: custom rule</li>.
<Li>`Cc`: cc attack defense</li>.
<Li>`Bot`: bot protection</li>.
                     * @return Modules Effective module. the field value can be:.
<li>`waf`: tencent cloud-managed rules</li>.
<Li>`Rate`: rate limit</li>.
<li>`acl`: custom rule</li>.
<Li>`Cc`: cc attack defense</li>.
<Li>`Bot`: bot protection</li>.
                     * 
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置Effective module. the field value can be:.
<li>`waf`: tencent cloud-managed rules</li>.
<Li>`Rate`: rate limit</li>.
<li>`acl`: custom rule</li>.
<Li>`Cc`: cc attack defense</li>.
<Li>`Bot`: bot protection</li>.
                     * @param _modules Effective module. the field value can be:.
<li>`waf`: tencent cloud-managed rules</li>.
<Li>`Rate`: rate limit</li>.
<li>`acl`: custom rule</li>.
<Li>`Cc`: cc attack defense</li>.
<Li>`Bot`: bot protection</li>.
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
                     * 获取Skip exception rule details for some rule ids. if null, use the last set configuration by default.
                     * @return PartialModules Skip exception rule details for some rule ids. if null, use the last set configuration by default.
                     * 
                     */
                    std::vector<PartialModule> GetPartialModules() const;

                    /**
                     * 设置Skip exception rule details for some rule ids. if null, use the last set configuration by default.
                     * @param _partialModules Skip exception rule details for some rule ids. if null, use the last set configuration by default.
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
                     * 获取Details of the exception rule for skipping specific fields. if null, use the last set configuration by default.
                     * @return SkipConditions Details of the exception rule for skipping specific fields. if null, use the last set configuration by default.
                     * 
                     */
                    std::vector<SkipCondition> GetSkipConditions() const;

                    /**
                     * 设置Details of the exception rule for skipping specific fields. if null, use the last set configuration by default.
                     * @param _skipConditions Details of the exception rule for skipping specific fields. if null, use the last set configuration by default.
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
                     * Exception mode. Values:
<li>`complete`: Skip the exception rule for full requests.</li>
<li>`partial`: Skip the exception rule for partial requests.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Effective module. the field value can be:.
<li>`waf`: tencent cloud-managed rules</li>.
<Li>`Rate`: rate limit</li>.
<li>`acl`: custom rule</li>.
<Li>`Cc`: cc attack defense</li>.
<Li>`Bot`: bot protection</li>.
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * Skip exception rule details for some rule ids. if null, use the last set configuration by default.
                     */
                    std::vector<PartialModule> m_partialModules;
                    bool m_partialModulesHasBeenSet;

                    /**
                     * Details of the exception rule for skipping specific fields. if null, use the last set configuration by default.
                     */
                    std::vector<SkipCondition> m_skipConditions;
                    bool m_skipConditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTUSERRULESCOPE_H_
