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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONREQUEST_H_

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
                * DescribeAvailableTKEEdgeVersion request structure.
                */
                class DescribeAvailableTKEEdgeVersionRequest : public AbstractModel
                {
                public:
                    DescribeAvailableTKEEdgeVersionRequest();
                    ~DescribeAvailableTKEEdgeVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取You can enter the `ClusterId` to query the current and latest versions of all cluster components.
                     * @return ClusterId You can enter the `ClusterId` to query the current and latest versions of all cluster components.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置You can enter the `ClusterId` to query the current and latest versions of all cluster components.
                     * @param ClusterId You can enter the `ClusterId` to query the current and latest versions of all cluster components.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * You can enter the `ClusterId` to query the current and latest versions of all cluster components.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEAVAILABLETKEEDGEVERSIONREQUEST_H_
