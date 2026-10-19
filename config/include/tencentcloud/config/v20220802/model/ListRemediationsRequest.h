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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListRemediations request structure.
                */
                class ListRemediationsRequest : public AbstractModel
                {
                public:
                    ListRemediationsRequest();
                    ~ListRemediationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items per page. Default value: 20; value range: 1–200.
                     * @return Limit Number of items per page. Default value: 20; value range: 1–200.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default value: 20; value range: 1–200.
                     * @param _limit Number of items per page. Default value: 20; value range: 1–200.
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
                     * 获取Rule ID
                     * @return RuleIds Rule ID
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleIds Rule ID
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * Number of items per page. Default value: 20; value range: 1–200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTREMEDIATIONSREQUEST_H_
