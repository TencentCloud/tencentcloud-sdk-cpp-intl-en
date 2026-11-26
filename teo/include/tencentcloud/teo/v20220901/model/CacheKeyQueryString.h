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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_

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
                * Parameter for custom Cache Key query string configuration.
                */
                class CacheKeyQueryString : public AbstractModel
                {
                public:
                    CacheKeyQueryString();
                    ~CacheKeyQueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch to reserve or ignore specified parameters in the query string. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Switch to reserve or ignore specified parameters in the query string. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch to reserve or ignore specified parameters in the query string. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Switch to reserve or ignore specified parameters in the query string. Valid values:
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
                     * 获取Action to reserve or ignore specified parameters in the query string. Valid values:
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if filled in.
                     * @return Action Action to reserve or ignore specified parameters in the query string. Valid values:
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if filled in.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to reserve or ignore specified parameters in the query string. Valid values:
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if filled in.
                     * @param _action Action to reserve or ignore specified parameters in the query string. Valid values:
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if filled in.
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
                     * 获取List of parameter names to reserve/ignore in the query string.<br>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @return Values List of parameter names to reserve/ignore in the query string.<br>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置List of parameter names to reserve/ignore in the query string.<br>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @param _values List of parameter names to reserve/ignore in the query string.<br>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
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
                     * Switch to reserve or ignore specified parameters in the query string. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Action to reserve or ignore specified parameters in the query string. Valid values:
<li>includeCustom: means to reserve some parameters;</li>
<li>excludeCustom: means to ignore some parameters.</li>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if filled in.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * List of parameter names to reserve/ignore in the query string.<br>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYQUERYSTRING_H_
