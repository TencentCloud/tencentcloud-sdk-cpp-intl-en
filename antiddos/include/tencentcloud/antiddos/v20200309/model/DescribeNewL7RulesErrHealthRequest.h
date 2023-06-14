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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeNewL7RulesErrHealth request structure.
                */
                class DescribeNewL7RulesErrHealthRequest : public AbstractModel
                {
                public:
                    DescribeNewL7RulesErrHealthRequest();
                    ~DescribeNewL7RulesErrHealthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @return Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * @param _business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取List of rule IDs
                     * @return RuleIdList List of rule IDs
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置List of rule IDs
                     * @param _ruleIdList List of rule IDs
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * List of rule IDs
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBENEWL7RULESERRHEALTHREQUEST_H_
