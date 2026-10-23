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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/LogItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisDetail response structure.
                */
                class DescribeLogAnalysisDetailResponse : public AbstractModel
                {
                public:
                    DescribeLogAnalysisDetailResponse();
                    ~DescribeLogAnalysisDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log details list that meets the log match condition.</p>
                     * @return LogDetail <p>Log details list that meets the log match condition.</p>
                     * 
                     */
                    std::vector<LogItem> GetLogDetail() const;

                    /**
                     * 判断参数 LogDetail 是否已赋值
                     * @return LogDetail 是否已赋值
                     * 
                     */
                    bool LogDetailHasBeenSet() const;

                    /**
                     * 获取<p>Total number of logs that meet the match condition.</p>
                     * @return TotalCount <p>Total number of logs that meet the match condition.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Log details list that meets the log match condition.</p>
                     */
                    std::vector<LogItem> m_logDetail;
                    bool m_logDetailHasBeenSet;

                    /**
                     * <p>Total number of logs that meet the match condition.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILRESPONSE_H_
