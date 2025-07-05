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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_

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
                * StartMatchingBackfill response structure.
                */
                class StartMatchingBackfillResponse : public AbstractModel
                {
                public:
                    StartMatchingBackfillResponse();
                    ~StartMatchingBackfillResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取MatchTicket
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MatchTicket MatchTicket
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    MatchTicket GetMatchTicket() const;

                    /**
                     * 判断参数 MatchTicket 是否已赋值
                     * @return MatchTicket 是否已赋值
                     * 
                     */
                    bool MatchTicketHasBeenSet() const;

                private:

                    /**
                     * MatchTicket
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    MatchTicket m_matchTicket;
                    bool m_matchTicketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_
