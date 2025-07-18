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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEERRORLOGRESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEERRORLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ErrorLogDetail.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeErrorLog response structure.
                */
                class DescribeErrorLogResponse : public AbstractModel
                {
                public:
                    DescribeErrorLogResponse();
                    ~DescribeErrorLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total count of messages returned.
                     * @return TotalCount Total count of messages returned.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Error log details.
                     * @return ErrorLogDetails Error log details.
                     * 
                     */
                    std::vector<ErrorLogDetail> GetErrorLogDetails() const;

                    /**
                     * 判断参数 ErrorLogDetails 是否已赋值
                     * @return ErrorLogDetails 是否已赋值
                     * 
                     */
                    bool ErrorLogDetailsHasBeenSet() const;

                private:

                    /**
                     * Total count of messages returned.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Error log details.
                     */
                    std::vector<ErrorLogDetail> m_errorLogDetails;
                    bool m_errorLogDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEERRORLOGRESPONSE_H_
