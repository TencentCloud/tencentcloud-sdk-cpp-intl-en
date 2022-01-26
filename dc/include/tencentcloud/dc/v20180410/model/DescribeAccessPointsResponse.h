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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/AccessPoint.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeAccessPoints response structure.
                */
                class DescribeAccessPointsResponse : public AbstractModel
                {
                public:
                    DescribeAccessPointsResponse();
                    ~DescribeAccessPointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Access point information.
                     * @return AccessPointSet Access point information.
                     */
                    std::vector<AccessPoint> GetAccessPointSet() const;

                    /**
                     * 判断参数 AccessPointSet 是否已赋值
                     * @return AccessPointSet 是否已赋值
                     */
                    bool AccessPointSetHasBeenSet() const;

                    /**
                     * 获取Number of eligible access points.
                     * @return TotalCount Number of eligible access points.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Access point information.
                     */
                    std::vector<AccessPoint> m_accessPointSet;
                    bool m_accessPointSetHasBeenSet;

                    /**
                     * Number of eligible access points.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEACCESSPOINTSRESPONSE_H_
