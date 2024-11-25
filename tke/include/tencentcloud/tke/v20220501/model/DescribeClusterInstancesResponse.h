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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Instance.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeClusterInstances response structure.
                */
                class DescribeClusterInstancesResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstancesResponse();
                    ~DescribeClusterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of instances in the cluster
                     * @return TotalCount Total number of instances in the cluster
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
                     * 获取List of instances in the cluster
                     * @return InstanceSet List of instances in the cluster
                     * 
                     */
                    std::vector<Instance> GetInstanceSet() const;

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                    /**
                     * 获取Error information collection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Errors Error information collection
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetErrors() const;

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                private:

                    /**
                     * Total number of instances in the cluster
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of instances in the cluster
                     */
                    std::vector<Instance> m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                    /**
                     * Error information collection
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERINSTANCESRESPONSE_H_
