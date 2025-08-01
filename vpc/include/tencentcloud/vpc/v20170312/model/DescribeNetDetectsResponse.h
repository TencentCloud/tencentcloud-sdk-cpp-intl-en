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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetDetect.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNetDetects response structure.
                */
                class DescribeNetDetectsResponse : public AbstractModel
                {
                public:
                    DescribeNetDetectsResponse();
                    ~DescribeNetDetectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The array of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetDetectSet The array of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NetDetect> GetNetDetectSet() const;

                    /**
                     * 判断参数 NetDetectSet 是否已赋值
                     * @return NetDetectSet 是否已赋值
                     * 
                     */
                    bool NetDetectSetHasBeenSet() const;

                    /**
                     * 获取The number of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount The number of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The array of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NetDetect> m_netDetectSet;
                    bool m_netDetectSetHasBeenSet;

                    /**
                     * The number of network detection objects that meet requirements.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSRESPONSE_H_
