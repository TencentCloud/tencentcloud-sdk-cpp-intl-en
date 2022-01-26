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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENRESPONSE_H_

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
                * DescribeToken response structure.
                */
                class DescribeTokenResponse : public AbstractModel
                {
                public:
                    DescribeTokenResponse();
                    ~DescribeTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The token corresponding to the current MatchCode. If the current MatchCode does not have a token, this parameter may not obtain a valid value.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MatchToken The token corresponding to the current MatchCode. If the current MatchCode does not have a token, this parameter may not obtain a valid value.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetMatchToken() const;

                    /**
                     * 判断参数 MatchToken 是否已赋值
                     * @return MatchToken 是否已赋值
                     */
                    bool MatchTokenHasBeenSet() const;

                    /**
                     * 获取The time period during which GPM will continuously push the original token in seconds when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CompatibleSpan The time period during which GPM will continuously push the original token in seconds when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t GetCompatibleSpan() const;

                    /**
                     * 判断参数 CompatibleSpan 是否已赋值
                     * @return CompatibleSpan 是否已赋值
                     */
                    bool CompatibleSpanHasBeenSet() const;

                private:

                    /**
                     * The token corresponding to the current MatchCode. If the current MatchCode does not have a token, this parameter may not obtain a valid value.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_matchToken;
                    bool m_matchTokenHasBeenSet;

                    /**
                     * The time period during which GPM will continuously push the original token in seconds when the token is replaced.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_compatibleSpan;
                    bool m_compatibleSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENRESPONSE_H_
