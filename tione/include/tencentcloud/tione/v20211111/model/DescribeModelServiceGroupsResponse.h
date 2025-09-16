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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ServiceGroup.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceGroups response structure.
                */
                class DescribeModelServiceGroupsResponse : public AbstractModel
                {
                public:
                    DescribeModelServiceGroupsResponse();
                    ~DescribeModelServiceGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of inference service groups.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of inference service groups.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Service group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceGroups Service group information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ServiceGroup> GetServiceGroups() const;

                    /**
                     * 判断参数 ServiceGroups 是否已赋值
                     * @return ServiceGroups 是否已赋值
                     * 
                     */
                    bool ServiceGroupsHasBeenSet() const;

                private:

                    /**
                     * Number of inference service groups.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Service group information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceGroup> m_serviceGroups;
                    bool m_serviceGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSRESPONSE_H_
