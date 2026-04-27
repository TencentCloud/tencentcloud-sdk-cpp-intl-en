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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESRESPONSE_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/edgezone/v20260401/model/InstanceTypeQuota.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeInstanceTypes response structure.
                */
                class DescribeInstanceTypesResponse : public AbstractModel
                {
                public:
                    DescribeInstanceTypesResponse();
                    ~DescribeInstanceTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Model quota list.
                     * @return InstanceTypeQuotaSet Model quota list.
                     * 
                     */
                    std::vector<InstanceTypeQuota> GetInstanceTypeQuotaSet() const;

                    /**
                     * 判断参数 InstanceTypeQuotaSet 是否已赋值
                     * @return InstanceTypeQuotaSet 是否已赋值
                     * 
                     */
                    bool InstanceTypeQuotaSetHasBeenSet() const;

                    /**
                     * 获取Number of returned records.
                     * @return TotalCount Number of returned records.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Model quota list.
                     */
                    std::vector<InstanceTypeQuota> m_instanceTypeQuotaSet;
                    bool m_instanceTypeQuotaSetHasBeenSet;

                    /**
                     * Number of returned records.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEINSTANCETYPESRESPONSE_H_
