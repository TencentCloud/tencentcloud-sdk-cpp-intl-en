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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncSearchResult response structure.
                */
                class DescribeAsyncSearchResultResponse : public AbstractModel
                {
                public:
                    DescribeAsyncSearchResultResponse();
                    ~DescribeAsyncSearchResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取`Context` for loading subsequent content
                     * @return Context `Context` for loading subsequent content
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Whether all log query results are returned
                     * @return ListOver Whether all log query results are returned
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取Log content
                     * @return Results Log content
                     */
                    std::vector<LogInfo> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * `Context` for loading subsequent content
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Whether all log query results are returned
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Log content
                     */
                    std::vector<LogInfo> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHRESULTRESPONSE_H_
