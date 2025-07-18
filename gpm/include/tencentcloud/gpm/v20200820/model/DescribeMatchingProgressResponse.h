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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchTicket.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeMatchingProgress response structure.
                */
                class DescribeMatchingProgressResponse : public AbstractModel
                {
                public:
                    DescribeMatchingProgressResponse();
                    ~DescribeMatchingProgressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取MatchTicket list
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchTickets MatchTicket list
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<MatchTicket> GetMatchTickets() const;

                    /**
                     * 判断参数 MatchTickets 是否已赋值
                     * @return MatchTickets 是否已赋值
                     * 
                     */
                    bool MatchTicketsHasBeenSet() const;

                    /**
                     * 获取Error code
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ErrCode Error code
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                private:

                    /**
                     * MatchTicket list
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<MatchTicket> m_matchTickets;
                    bool m_matchTicketsHasBeenSet;

                    /**
                     * Error code
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSRESPONSE_H_
