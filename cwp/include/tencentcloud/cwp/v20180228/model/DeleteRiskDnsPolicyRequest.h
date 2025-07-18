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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETERISKDNSPOLICYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETERISKDNSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteRiskDnsPolicy request structure.
                */
                class DeleteRiskDnsPolicyRequest : public AbstractModel
                {
                public:
                    DeleteRiskDnsPolicyRequest();
                    ~DeleteRiskDnsPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID
                     * @return PolicyIds Policy ID
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Policy ID
                     * @param _policyIds Policy ID
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETERISKDNSPOLICYREQUEST_H_
