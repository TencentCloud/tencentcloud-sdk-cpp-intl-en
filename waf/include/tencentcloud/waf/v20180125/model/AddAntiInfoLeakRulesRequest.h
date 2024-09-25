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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/StrategyForAntiInfoLeak.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddAntiInfoLeakRules request structure.
                */
                class AddAntiInfoLeakRulesRequest : public AbstractModel
                {
                public:
                    AddAntiInfoLeakRulesRequest();
                    ~AddAntiInfoLeakRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return Name Rule name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Rule name
                     * @param _name Rule name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Actions: 0 (alarm), 1 (replace), 2 (only display the first four digits), 3 (only display the last four digits), 4 (block)
                     * @return ActionType Actions: 0 (alarm), 1 (replace), 2 (only display the first four digits), 3 (only display the last four digits), 4 (block)
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置Actions: 0 (alarm), 1 (replace), 2 (only display the first four digits), 3 (only display the last four digits), 4 (block)
                     * @param _actionType Actions: 0 (alarm), 1 (replace), 2 (only display the first four digits), 3 (only display the last four digits), 4 (block)
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Policy details
                     * @return Strategies Policy details
                     * 
                     */
                    std::vector<StrategyForAntiInfoLeak> GetStrategies() const;

                    /**
                     * 设置Policy details
                     * @param _strategies Policy details
                     * 
                     */
                    void SetStrategies(const std::vector<StrategyForAntiInfoLeak>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取URL
                     * @return Uri URL
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置URL
                     * @param _uri URL
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Actions: 0 (alarm), 1 (replace), 2 (only display the first four digits), 3 (only display the last four digits), 4 (block)
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Policy details
                     */
                    std::vector<StrategyForAntiInfoLeak> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * URL
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDANTIINFOLEAKRULESREQUEST_H_
