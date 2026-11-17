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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSCPayInfo request structure.
                */
                class DescribeCSCPayInfoRequest : public AbstractModel
                {
                public:
                    DescribeCSCPayInfoRequest();
                    ~DescribeCSCPayInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return MemberId 
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置
                     * @param _memberId 
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return NeedQuotaUsed 
                     * 
                     */
                    bool GetNeedQuotaUsed() const;

                    /**
                     * 设置
                     * @param _needQuotaUsed 
                     * 
                     */
                    void SetNeedQuotaUsed(const bool& _needQuotaUsed);

                    /**
                     * 判断参数 NeedQuotaUsed 是否已赋值
                     * @return NeedQuotaUsed 是否已赋值
                     * 
                     */
                    bool NeedQuotaUsedHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 
                     */
                    bool m_needQuotaUsed;
                    bool m_needQuotaUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_
