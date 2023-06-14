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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/OrgMemberPolicy.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMemberPolicies response structure.
                */
                class DescribeOrganizationMemberPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberPoliciesResponse();
                    ~DescribeOrganizationMemberPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Items List.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<OrgMemberPolicy> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Total number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * List.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OrgMemberPolicy> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Total number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESRESPONSE_H_
