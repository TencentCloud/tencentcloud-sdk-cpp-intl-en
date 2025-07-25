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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupBackend.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupInstances response structure.
                */
                class DescribeTargetGroupInstancesResponse : public AbstractModel
                {
                public:
                    DescribeTargetGroupInstancesResponse();
                    ~DescribeTargetGroupInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of results returned for the current query
                     * @return TotalCount Number of results returned for the current query
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Information of the bound server
                     * @return TargetGroupInstanceSet Information of the bound server
                     * 
                     */
                    std::vector<TargetGroupBackend> GetTargetGroupInstanceSet() const;

                    /**
                     * 判断参数 TargetGroupInstanceSet 是否已赋值
                     * @return TargetGroupInstanceSet 是否已赋值
                     * 
                     */
                    bool TargetGroupInstanceSetHasBeenSet() const;

                    /**
                     * 获取The actual total number of bound instances, which is not affected by the setting of `Limit`, `Offset` and the CAM permissions.
                     * @return RealCount The actual total number of bound instances, which is not affected by the setting of `Limit`, `Offset` and the CAM permissions.
                     * 
                     */
                    uint64_t GetRealCount() const;

                    /**
                     * 判断参数 RealCount 是否已赋值
                     * @return RealCount 是否已赋值
                     * 
                     */
                    bool RealCountHasBeenSet() const;

                private:

                    /**
                     * Number of results returned for the current query
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information of the bound server
                     */
                    std::vector<TargetGroupBackend> m_targetGroupInstanceSet;
                    bool m_targetGroupInstanceSetHasBeenSet;

                    /**
                     * The actual total number of bound instances, which is not affected by the setting of `Limit`, `Offset` and the CAM permissions.
                     */
                    uint64_t m_realCount;
                    bool m_realCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESRESPONSE_H_
