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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/RegisterInstanceInfo.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRegisterInstances response structure.
                */
                class DescribeRegisterInstancesResponse : public AbstractModel
                {
                public:
                    DescribeRegisterInstancesResponse();
                    ~DescribeRegisterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of registration codes registered by the instance.
                     * @return TotalCount The total number of registration codes registered by the instance.
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
                     * 获取List of managed instance information.
                     * @return RegisterInstanceSet List of managed instance information.
                     * 
                     */
                    std::vector<RegisterInstanceInfo> GetRegisterInstanceSet() const;

                    /**
                     * 判断参数 RegisterInstanceSet 是否已赋值
                     * @return RegisterInstanceSet 是否已赋值
                     * 
                     */
                    bool RegisterInstanceSetHasBeenSet() const;

                private:

                    /**
                     * The total number of registration codes registered by the instance.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of managed instance information.
                     */
                    std::vector<RegisterInstanceInfo> m_registerInstanceSet;
                    bool m_registerInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESRESPONSE_H_
