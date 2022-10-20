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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupManagedRules response structure.
                */
                class DescribeSecurityGroupManagedRulesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityGroupManagedRulesResponse();
                    ~DescribeSecurityGroupManagedRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of bot managed rules returned.
                     * @return Count The number of bot managed rules returned.
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取The total number of rules.
                     * @return Total The total number of rules.
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Details of the managed rule.
                     * @return WafGroupInfo Details of the managed rule.
                     */
                    WafGroupInfo GetWafGroupInfo() const;

                    /**
                     * 判断参数 WafGroupInfo 是否已赋值
                     * @return WafGroupInfo 是否已赋值
                     */
                    bool WafGroupInfoHasBeenSet() const;

                private:

                    /**
                     * The number of bot managed rules returned.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * The total number of rules.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Details of the managed rule.
                     */
                    WafGroupInfo m_wafGroupInfo;
                    bool m_wafGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESRESPONSE_H_
