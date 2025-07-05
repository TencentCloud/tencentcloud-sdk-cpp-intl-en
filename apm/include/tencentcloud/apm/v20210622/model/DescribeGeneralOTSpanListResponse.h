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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralOTSpanList response structure.
                */
                class DescribeGeneralOTSpanListResponse : public AbstractModel
                {
                public:
                    DescribeGeneralOTSpanListResponse();
                    ~DescribeGeneralOTSpanListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
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
                     * 获取The trace structure containing the query results spans. the string after the opentelemetry standard trace structure is hashed. first, the trace is converted into a json string using ptrace.jsonmarshaler, then compressed with gzip, and finally converted into a base64 standard string.
                     * @return Spans The trace structure containing the query results spans. the string after the opentelemetry standard trace structure is hashed. first, the trace is converted into a json string using ptrace.jsonmarshaler, then compressed with gzip, and finally converted into a base64 standard string.
                     * 
                     */
                    std::string GetSpans() const;

                    /**
                     * 判断参数 Spans 是否已赋值
                     * @return Spans 是否已赋值
                     * 
                     */
                    bool SpansHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The trace structure containing the query results spans. the string after the opentelemetry standard trace structure is hashed. first, the trace is converted into a json string using ptrace.jsonmarshaler, then compressed with gzip, and finally converted into a base64 standard string.
                     */
                    std::string m_spans;
                    bool m_spansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_
