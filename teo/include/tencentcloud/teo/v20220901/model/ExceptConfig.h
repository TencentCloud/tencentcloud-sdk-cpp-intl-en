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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Exception rule for configuring rules that need to skip specific scenarios
                */
                class ExceptConfig : public AbstractModel
                {
                public:
                    ExceptConfig();
                    ~ExceptConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Exception rule details. If null, use the last set configuration by default.
                     * @return ExceptUserRules Exception rule details. If null, use the last set configuration by default.
                     * 
                     */
                    std::vector<ExceptUserRule> GetExceptUserRules() const;

                    /**
                     * 设置Exception rule details. If null, use the last set configuration by default.
                     * @param _exceptUserRules Exception rule details. If null, use the last set configuration by default.
                     * 
                     */
                    void SetExceptUserRules(const std::vector<ExceptUserRule>& _exceptUserRules);

                    /**
                     * 判断参数 ExceptUserRules 是否已赋值
                     * @return ExceptUserRules 是否已赋值
                     * 
                     */
                    bool ExceptUserRulesHasBeenSet() const;

                private:

                    /**
                     * Configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Exception rule details. If null, use the last set configuration by default.
                     */
                    std::vector<ExceptUserRule> m_exceptUserRules;
                    bool m_exceptUserRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_
