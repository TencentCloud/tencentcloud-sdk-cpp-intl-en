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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MTicket.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeMatchingProgress request structure.
                */
                class DescribeMatchingProgressRequest : public AbstractModel
                {
                public:
                    DescribeMatchingProgressRequest();
                    ~DescribeMatchingProgressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of MatchTicket IDs. It can contain up to 12 IDs.
                     * @return MatchTicketIds List of MatchTicket IDs. It can contain up to 12 IDs.
                     * 
                     */
                    std::vector<MTicket> GetMatchTicketIds() const;

                    /**
                     * 设置List of MatchTicket IDs. It can contain up to 12 IDs.
                     * @param _matchTicketIds List of MatchTicket IDs. It can contain up to 12 IDs.
                     * 
                     */
                    void SetMatchTicketIds(const std::vector<MTicket>& _matchTicketIds);

                    /**
                     * 判断参数 MatchTicketIds 是否已赋值
                     * @return MatchTicketIds 是否已赋值
                     * 
                     */
                    bool MatchTicketIdsHasBeenSet() const;

                private:

                    /**
                     * List of MatchTicket IDs. It can contain up to 12 IDs.
                     */
                    std::vector<MTicket> m_matchTicketIds;
                    bool m_matchTicketIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHINGPROGRESSREQUEST_H_
