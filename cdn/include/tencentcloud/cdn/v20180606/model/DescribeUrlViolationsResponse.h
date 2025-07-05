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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ViolationUrl.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeUrlViolations response structure.
                */
                class DescribeUrlViolationsResponse : public AbstractModel
                {
                public:
                    DescribeUrlViolationsResponse();
                    ~DescribeUrlViolationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Details of URLs in violation
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UrlRecordList Details of URLs in violation
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ViolationUrl> GetUrlRecordList() const;

                    /**
                     * 判断参数 UrlRecordList 是否已赋值
                     * @return UrlRecordList 是否已赋值
                     * 
                     */
                    bool UrlRecordListHasBeenSet() const;

                    /**
                     * 获取Total number of records, which is used for pagination.
                     * @return TotalCount Total number of records, which is used for pagination.
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
                     * Details of URLs in violation
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<ViolationUrl> m_urlRecordList;
                    bool m_urlRecordListHasBeenSet;

                    /**
                     * Total number of records, which is used for pagination.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEURLVIOLATIONSRESPONSE_H_
