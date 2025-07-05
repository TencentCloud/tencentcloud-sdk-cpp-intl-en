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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL4RULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL4RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribleL4Rules request structure.
                */
                class DescribleL4RulesRequest : public AbstractModel
                {
                public:
                    DescribleL4RulesRequest();
                    ~DescribleL4RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
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
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param _id Anti-DDoS instance ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * @return RuleIdList Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * @param _ruleIdList Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. A value of 0 means no pagination
                     * @return Limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. A value of 0 means no pagination
                     * @param _limit Number of entries per page. A value of 0 means no pagination
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page start offset, whose value is (page number - 1) * number of entries per page
                     * @return Offset Page start offset, whose value is (page number - 1) * number of entries per page
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page start offset, whose value is (page number - 1) * number of entries per page
                     * @param _offset Page start offset, whose value is (page number - 1) * number of entries per page
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule ID, which is optional. If this field is entered, the specified rule will be obtained
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * Number of entries per page. A value of 0 means no pagination
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page start offset, whose value is (page number - 1) * number of entries per page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBLEL4RULESREQUEST_H_
