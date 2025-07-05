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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclRule.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN precise access control configuration
                */
                class AdvancedScdnAclGroup : public AbstractModel
                {
                public:
                    AdvancedScdnAclGroup();
                    ~AdvancedScdnAclGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Specific configurations
                     * @return Configure Specific configurations
                     * 
                     */
                    std::vector<AdvancedScdnAclRule> GetConfigure() const;

                    /**
                     * 设置Specific configurations
                     * @param _configure Specific configurations
                     * 
                     */
                    void SetConfigure(const std::vector<AdvancedScdnAclRule>& _configure);

                    /**
                     * 判断参数 Configure 是否已赋值
                     * @return Configure 是否已赋值
                     * 
                     */
                    bool ConfigureHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `intercept` and `redirect`.
                     * @return Result Action. Valid values: `intercept` and `redirect`.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Action. Valid values: `intercept` and `redirect`.
                     * @param _result Action. Valid values: `intercept` and `redirect`.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Whether the rule is activated. Valid values: `active` and `inactive`.
                     * @return Status Whether the rule is activated. Valid values: `active` and `inactive`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the rule is activated. Valid values: `active` and `inactive`.
                     * @param _status Whether the rule is activated. Valid values: `active` and `inactive`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error page configuration
                     * @return ErrorPage Error page configuration
                     * 
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置Error page configuration
                     * @param _errorPage Error page configuration
                     * 
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     * 
                     */
                    bool ErrorPageHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Specific configurations
                     */
                    std::vector<AdvancedScdnAclRule> m_configure;
                    bool m_configureHasBeenSet;

                    /**
                     * Action. Valid values: `intercept` and `redirect`.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Whether the rule is activated. Valid values: `active` and `inactive`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error page configuration
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_
