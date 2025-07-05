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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTEREXTRAARGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTEREXTRAARGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEdgeClusterExtraArgs response structure.
                */
                class DescribeEdgeClusterExtraArgsResponse : public AbstractModel
                {
                public:
                    DescribeEdgeClusterExtraArgsResponse();
                    ~DescribeEdgeClusterExtraArgsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterExtraArgs Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    EdgeClusterExtraArgs GetClusterExtraArgs() const;

                    /**
                     * 判断参数 ClusterExtraArgs 是否已赋值
                     * @return ClusterExtraArgs 是否已赋值
                     * 
                     */
                    bool ClusterExtraArgsHasBeenSet() const;

                private:

                    /**
                     * Custom parameters of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    EdgeClusterExtraArgs m_clusterExtraArgs;
                    bool m_clusterExtraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGECLUSTEREXTRAARGSRESPONSE_H_
