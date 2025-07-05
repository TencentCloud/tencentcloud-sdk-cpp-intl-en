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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeBoardSDKLog response structure.
                */
                class DescribeBoardSDKLogResponse : public AbstractModel
                {
                public:
                    DescribeBoardSDKLogResponse();
                    ~DescribeBoardSDKLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of logs queried.
                     * @return Total Number of logs queried.
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
                     * 获取Log details.
                     * @return Sources Log details.
                     * 
                     */
                    std::vector<std::string> GetSources() const;

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     * 
                     */
                    bool SourcesHasBeenSet() const;

                    /**
                     * 获取Number of logs queried within each time range after aggregation based on the time range.
                     * @return Buckets Number of logs queried within each time range after aggregation based on the time range.
                     * 
                     */
                    std::vector<std::string> GetBuckets() const;

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     * 
                     */
                    bool BucketsHasBeenSet() const;

                    /**
                     * 获取Context key used for recursive extraction. This parameter can be used in the next request.
                     * @return Context Context key used for recursive extraction. This parameter can be used in the next request.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * Number of logs queried.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Log details.
                     */
                    std::vector<std::string> m_sources;
                    bool m_sourcesHasBeenSet;

                    /**
                     * Number of logs queried within each time range after aggregation based on the time range.
                     */
                    std::vector<std::string> m_buckets;
                    bool m_bucketsHasBeenSet;

                    /**
                     * Context key used for recursive extraction. This parameter can be used in the next request.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEBOARDSDKLOGRESPONSE_H_
