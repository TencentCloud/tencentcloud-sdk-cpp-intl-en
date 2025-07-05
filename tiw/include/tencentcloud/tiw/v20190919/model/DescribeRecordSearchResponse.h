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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERECORDSEARCHRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERECORDSEARCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/RecordTaskSearchResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeRecordSearch response structure.
                */
                class DescribeRecordSearchResponse : public AbstractModel
                {
                public:
                    DescribeRecordSearchResponse();
                    ~DescribeRecordSearchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The set of queried recording tasks.
                     * @return RecordTaskSet The set of queried recording tasks.
                     * 
                     */
                    std::vector<RecordTaskSearchResult> GetRecordTaskSet() const;

                    /**
                     * 判断参数 RecordTaskSet 是否已赋值
                     * @return RecordTaskSet 是否已赋值
                     * 
                     */
                    bool RecordTaskSetHasBeenSet() const;

                    /**
                     * 获取Number of recording tasks.
                     * @return TotalCount Number of recording tasks.
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
                     * The set of queried recording tasks.
                     */
                    std::vector<RecordTaskSearchResult> m_recordTaskSet;
                    bool m_recordTaskSetHasBeenSet;

                    /**
                     * Number of recording tasks.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERECORDSEARCHRESPONSE_H_
