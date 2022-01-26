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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/VersionInstance.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeVersions response structure.
                */
                class DescribeVersionsResponse : public AbstractModel
                {
                public:
                    DescribeVersionsResponse();
                    ~DescribeVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of versions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCount Number of versions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Version list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VersionInstanceSet Version list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<VersionInstance> GetVersionInstanceSet() const;

                    /**
                     * 判断参数 VersionInstanceSet 是否已赋值
                     * @return VersionInstanceSet 是否已赋值
                     */
                    bool VersionInstanceSetHasBeenSet() const;

                private:

                    /**
                     * Number of versions
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Version list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<VersionInstance> m_versionInstanceSet;
                    bool m_versionInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVERSIONSRESPONSE_H_
