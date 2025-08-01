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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedCluster.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusters response structure.
                */
                class DescribeDedicatedClustersResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClustersResponse();
                    ~DescribeDedicatedClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of CDCs that meet the conditions
                     * @return DedicatedClusterSet List of CDCs that meet the conditions
                     * 
                     */
                    std::vector<DedicatedCluster> GetDedicatedClusterSet() const;

                    /**
                     * 判断参数 DedicatedClusterSet 是否已赋值
                     * @return DedicatedClusterSet 是否已赋值
                     * 
                     */
                    bool DedicatedClusterSetHasBeenSet() const;

                    /**
                     * 获取Total number of CDCs that meet the conditions
                     * @return TotalCount Total number of CDCs that meet the conditions
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of CDCs that meet the conditions
                     */
                    std::vector<DedicatedCluster> m_dedicatedClusterSet;
                    bool m_dedicatedClusterSetHasBeenSet;

                    /**
                     * Total number of CDCs that meet the conditions
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERSRESPONSE_H_
