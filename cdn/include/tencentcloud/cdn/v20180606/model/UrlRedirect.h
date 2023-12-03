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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/UrlRedirectRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Configuration of URL rewriting
                */
                class UrlRedirect : public AbstractModel
                {
                public:
                    UrlRedirect();
                    ~UrlRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable URL rewriting. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable URL rewriting. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable URL rewriting. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable URL rewriting. Values:
`on`: Enable
`off`: Disable
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
                     * 获取Rule of URL rewriting rule, which is required if `Switch` is `on`. There can be up to 10 rules.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return PathRules Rule of URL rewriting rule, which is required if `Switch` is `on`. There can be up to 10 rules.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<UrlRedirectRule> GetPathRules() const;

                    /**
                     * 设置Rule of URL rewriting rule, which is required if `Switch` is `on`. There can be up to 10 rules.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _pathRules Rule of URL rewriting rule, which is required if `Switch` is `on`. There can be up to 10 rules.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPathRules(const std::vector<UrlRedirectRule>& _pathRules);

                    /**
                     * 判断参数 PathRules 是否已赋值
                     * @return PathRules 是否已赋值
                     * 
                     */
                    bool PathRulesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable URL rewriting. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Rule of URL rewriting rule, which is required if `Switch` is `on`. There can be up to 10 rules.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<UrlRedirectRule> m_pathRules;
                    bool m_pathRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECT_H_
