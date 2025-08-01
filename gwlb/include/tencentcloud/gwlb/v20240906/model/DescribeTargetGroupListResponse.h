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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupList response structure.
                */
                class DescribeTargetGroupListResponse : public AbstractModel
                {
                public:
                    DescribeTargetGroupListResponse();
                    ~DescribeTargetGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of displayed results.
                     * @return TotalCount Number of displayed results.
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
                     * 获取Collection of displayed target group information.
                     * @return TargetGroupSet Collection of displayed target group information.
                     * 
                     */
                    std::vector<TargetGroupInfo> GetTargetGroupSet() const;

                    /**
                     * 判断参数 TargetGroupSet 是否已赋值
                     * @return TargetGroupSet 是否已赋值
                     * 
                     */
                    bool TargetGroupSetHasBeenSet() const;

                private:

                    /**
                     * Number of displayed results.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Collection of displayed target group information.
                     */
                    std::vector<TargetGroupInfo> m_targetGroupSet;
                    bool m_targetGroupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETARGETGROUPLISTRESPONSE_H_
