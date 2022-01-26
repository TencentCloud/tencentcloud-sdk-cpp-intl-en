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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHCODESREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHCODESREQUEST_H_

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
                * DescribeMatchCodes request structure.
                */
                class DescribeMatchCodesRequest : public AbstractModel
                {
                public:
                    DescribeMatchCodesRequest();
                    ~DescribeMatchCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, number of pages.
                     * @return Offset Offset, number of pages.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, number of pages.
                     * @param Offset Offset, number of pages.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of MatchCodes per page
                     * @return Limit The number of MatchCodes per page
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of MatchCodes per page
                     * @param Limit The number of MatchCodes per page
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query by the MatchCode value (a string).
                     * @return MatchCode Query by the MatchCode value (a string).
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置Query by the MatchCode value (a string).
                     * @param MatchCode Query by the MatchCode value (a string).
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     */
                    bool MatchCodeHasBeenSet() const;

                private:

                    /**
                     * Offset, number of pages.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of MatchCodes per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query by the MatchCode value (a string).
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBEMATCHCODESREQUEST_H_
