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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ErrorPageRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Status code redirect configuration, which is disabled by default.
                */
                class ErrorPage : public AbstractModel
                {
                public:
                    ErrorPage();
                    ~ErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable status code-based redirection. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable status code-based redirection. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable status code-based redirection. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to enable status code-based redirection. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Status code redirect rules configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PageRules Status code redirect rules configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ErrorPageRule> GetPageRules() const;

                    /**
                     * 设置Status code redirect rules configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _pageRules Status code redirect rules configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPageRules(const std::vector<ErrorPageRule>& _pageRules);

                    /**
                     * 判断参数 PageRules 是否已赋值
                     * @return PageRules 是否已赋值
                     * 
                     */
                    bool PageRulesHasBeenSet() const;

                private:

                    /**
                     * Whether to enable status code-based redirection. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Status code redirect rules configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<ErrorPageRule> m_pageRules;
                    bool m_pageRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ERRORPAGE_H_
