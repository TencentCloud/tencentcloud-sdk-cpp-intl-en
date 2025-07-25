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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * StartMatching response structure.
                */
                class StartMatchingResponse : public AbstractModel
                {
                public:
                    StartMatchingResponse();
                    ~StartMatchingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Error code
                     * @return ErrCode Error code
                     * 
                     */
                    uint64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取MatchTicket ID. Up to 128 characters are allowed.
                     * @return MatchTicketId MatchTicket ID. Up to 128 characters are allowed.
                     * 
                     */
                    std::string GetMatchTicketId() const;

                    /**
                     * 判断参数 MatchTicketId 是否已赋值
                     * @return MatchTicketId 是否已赋值
                     * 
                     */
                    bool MatchTicketIdHasBeenSet() const;

                private:

                    /**
                     * Error code
                     */
                    uint64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * MatchTicket ID. Up to 128 characters are allowed.
                     */
                    std::string m_matchTicketId;
                    bool m_matchTicketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGRESPONSE_H_
