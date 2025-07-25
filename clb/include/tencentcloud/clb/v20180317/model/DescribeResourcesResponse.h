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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ZoneResource.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeResources response structure.
                */
                class DescribeResourcesResponse : public AbstractModel
                {
                public:
                    DescribeResourcesResponse();
                    ~DescribeResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of resources supported by the AZ
                     * @return ZoneResourceSet List of resources supported by the AZ
                     * 
                     */
                    std::vector<ZoneResource> GetZoneResourceSet() const;

                    /**
                     * 判断参数 ZoneResourceSet 是否已赋值
                     * @return ZoneResourceSet 是否已赋值
                     * 
                     */
                    bool ZoneResourceSetHasBeenSet() const;

                    /**
                     * 获取Number of entries in the AZ resource list.
                     * @return TotalCount Number of entries in the AZ resource list.
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
                     * List of resources supported by the AZ
                     */
                    std::vector<ZoneResource> m_zoneResourceSet;
                    bool m_zoneResourceSetHasBeenSet;

                    /**
                     * Number of entries in the AZ resource list.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBERESOURCESRESPONSE_H_
