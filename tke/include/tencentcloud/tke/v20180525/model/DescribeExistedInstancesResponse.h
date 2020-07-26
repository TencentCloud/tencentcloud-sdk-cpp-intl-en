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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXISTEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXISTEDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstance.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeExistedInstances response structure.
                */
                class DescribeExistedInstancesResponse : public AbstractModel
                {
                public:
                    DescribeExistedInstancesResponse();
                    ~DescribeExistedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Array of existing instance information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExistedInstanceSet Array of existing instance information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ExistedInstance> GetExistedInstanceSet() const;

                    /**
                     * 判断参数 ExistedInstanceSet 是否已赋值
                     * @return ExistedInstanceSet 是否已赋值
                     */
                    bool ExistedInstanceSetHasBeenSet() const;

                    /**
                     * 获取Number of instances that match the filter condition(s).
                     * @return TotalCount Number of instances that match the filter condition(s).
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Array of existing instance information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ExistedInstance> m_existedInstanceSet;
                    bool m_existedInstanceSetHasBeenSet;

                    /**
                     * Number of instances that match the filter condition(s).
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXISTEDINSTANCESRESPONSE_H_
