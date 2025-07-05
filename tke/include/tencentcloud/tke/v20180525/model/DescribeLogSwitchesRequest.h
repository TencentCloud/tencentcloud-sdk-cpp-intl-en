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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGSWITCHESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGSWITCHESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeLogSwitches request structure.
                */
                class DescribeLogSwitchesRequest : public AbstractModel
                {
                public:
                    DescribeLogSwitchesRequest();
                    ~DescribeLogSwitchesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cluster IDs
                     * @return ClusterIds List of cluster IDs
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置List of cluster IDs
                     * @param _clusterIds List of cluster IDs
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取Cluster Type, TKE or EKS
                     * @return ClusterType Cluster Type, TKE or EKS
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster Type, TKE or EKS
                     * @param _clusterType Cluster Type, TKE or EKS
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * List of cluster IDs
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Cluster Type, TKE or EKS
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBELOGSWITCHESREQUEST_H_
