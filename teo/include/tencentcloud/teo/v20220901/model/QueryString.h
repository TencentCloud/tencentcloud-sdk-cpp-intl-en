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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_QUERYSTRING_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_QUERYSTRING_H_

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
                * Request parameter contained in `CacheKey`
                */
                class QueryString : public AbstractModel
                {
                public:
                    QueryString();
                    ~QueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to use `QueryString` as part of `CacheKey`. Values:
<li>`on`: Yes</li>
<li>`off`: No</li>
                     * @return Switch Whether to use `QueryString` as part of `CacheKey`. Values:
<li>`on`: Yes</li>
<li>`off`: No</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to use `QueryString` as part of `CacheKey`. Values:
<li>`on`: Yes</li>
<li>`off`: No</li>
                     * @param _switch Whether to use `QueryString` as part of `CacheKey`. Values:
<li>`on`: Yes</li>
<li>`off`: No</li>
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
                     * 获取CacheKey usage via QueryString, valid values:.
<li>includeCustom: use partial url parameter;</li>.
<li>excludeCustom: exclude partial url parameters.</li>.
                     * @return Action CacheKey usage via QueryString, valid values:.
<li>includeCustom: use partial url parameter;</li>.
<li>excludeCustom: exclude partial url parameters.</li>.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置CacheKey usage via QueryString, valid values:.
<li>includeCustom: use partial url parameter;</li>.
<li>excludeCustom: exclude partial url parameters.</li>.
                     * @param _action CacheKey usage via QueryString, valid values:.
<li>includeCustom: use partial url parameter;</li>.
<li>excludeCustom: exclude partial url parameters.</li>.
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
                     * 获取Specifies the url parameter array for usage/exclusion.
                     * @return Value Specifies the url parameter array for usage/exclusion.
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置Specifies the url parameter array for usage/exclusion.
                     * @param _value Specifies the url parameter array for usage/exclusion.
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Whether to use `QueryString` as part of `CacheKey`. Values:
<li>`on`: Yes</li>
<li>`off`: No</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * CacheKey usage via QueryString, valid values:.
<li>includeCustom: use partial url parameter;</li>.
<li>excludeCustom: exclude partial url parameters.</li>.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Specifies the url parameter array for usage/exclusion.
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_QUERYSTRING_H_
