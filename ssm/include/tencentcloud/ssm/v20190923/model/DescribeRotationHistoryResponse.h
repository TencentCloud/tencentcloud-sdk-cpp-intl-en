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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeRotationHistory response structure.
                */
                class DescribeRotationHistoryResponse : public AbstractModel
                {
                public:
                    DescribeRotationHistoryResponse();
                    ~DescribeRotationHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of version numbers.
                     * @return VersionIDs List of version numbers.
                     * 
                     */
                    std::vector<std::string> GetVersionIDs() const;

                    /**
                     * 判断参数 VersionIDs 是否已赋值
                     * @return VersionIDs 是否已赋值
                     * 
                     */
                    bool VersionIDsHasBeenSet() const;

                    /**
                     * 获取Number of version numbers. The maximum number of version numbers that can be shown to users is 10.
                     * @return TotalCount Number of version numbers. The maximum number of version numbers that can be shown to users is 10.
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
                     * List of version numbers.
                     */
                    std::vector<std::string> m_versionIDs;
                    bool m_versionIDsHasBeenSet;

                    /**
                     * Number of version numbers. The maximum number of version numbers that can be shown to users is 10.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_
