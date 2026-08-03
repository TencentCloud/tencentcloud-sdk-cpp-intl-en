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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwLogs response structure.
                */
                class DescribeCfwLogsResponse : public AbstractModel
                {
                public:
                    DescribeCfwLogsResponse();
                    ~DescribeCfwLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Query result. UTF-8 JSON object string; the caller must parse Response.Data. Items is the log array of the current page, and fields vary with LogType. TotalCount is the return limit of the current page, Limit is the page size, and LogType and TimeWindow echo the query scope. When HasMore=true, NextToken must be saved and used as-is for continued querying. When HasMore=false, pagination ends.
                     * @return Data Query result. UTF-8 JSON object string; the caller must parse Response.Data. Items is the log array of the current page, and fields vary with LogType. TotalCount is the return limit of the current page, Limit is the page size, and LogType and TimeWindow echo the query scope. When HasMore=true, NextToken must be saved and used as-is for continued querying. When HasMore=false, pagination ends.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Query result. UTF-8 JSON object string; the caller must parse Response.Data. Items is the log array of the current page, and fields vary with LogType. TotalCount is the return limit of the current page, Limit is the page size, and LogType and TimeWindow echo the query scope. When HasMore=true, NextToken must be saved and used as-is for continued querying. When HasMore=false, pagination ends.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWLOGSRESPONSE_H_
