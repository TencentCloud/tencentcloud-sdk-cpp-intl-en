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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/SearchLogResult.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * SearchLog response structure.
                */
                class SearchLogResponse : public AbstractModel
                {
                public:
                    SearchLogResponse();
                    ~SearchLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of logs
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Total Total number of logs
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Number of entries per page.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Limit Number of entries per page.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Page Page number
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Log searching results
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Results Log searching results
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SearchLogResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * Total number of logs
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Number of entries per page.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Log searching results
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<SearchLogResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESPONSE_H_
