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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Configuration to retain query strings for this path
                */
                class RuleQueryString : public AbstractModel
                {
                public:
                    RuleQueryString();
                    ~RuleQueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to use `QueryString` as part of `CacheKey`. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Switch Whether to use `QueryString` as part of `CacheKey`. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to use `QueryString` as part of `CacheKey`. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _switch Whether to use `QueryString` as part of `CacheKey`. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取`includeCustom` will retain partial query strings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Action `includeCustom` will retain partial query strings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置`includeCustom` will retain partial query strings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _action `includeCustom` will retain partial query strings
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Array of included/excluded query strings (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Value Array of included/excluded query strings (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Array of included/excluded query strings (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _value Array of included/excluded query strings (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Whether to use `QueryString` as part of `CacheKey`. Valid values: on, off
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * `includeCustom` will retain partial query strings
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Array of included/excluded query strings (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_
