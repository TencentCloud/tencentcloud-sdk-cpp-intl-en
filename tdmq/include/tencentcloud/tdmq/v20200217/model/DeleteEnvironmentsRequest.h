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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteEnvironments request structure.
                */
                class DeleteEnvironmentsRequest : public AbstractModel
                {
                public:
                    DeleteEnvironmentsRequest();
                    ~DeleteEnvironmentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of environments (namespaces). Up to 20 environments can be deleted at a time.
                     * @return EnvironmentIds Array of environments (namespaces). Up to 20 environments can be deleted at a time.
                     */
                    std::vector<std::string> GetEnvironmentIds() const;

                    /**
                     * 设置Array of environments (namespaces). Up to 20 environments can be deleted at a time.
                     * @param EnvironmentIds Array of environments (namespaces). Up to 20 environments can be deleted at a time.
                     */
                    void SetEnvironmentIds(const std::vector<std::string>& _environmentIds);

                    /**
                     * 判断参数 EnvironmentIds 是否已赋值
                     * @return EnvironmentIds 是否已赋值
                     */
                    bool EnvironmentIdsHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID
                     * @return ClusterId Pulsar cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID
                     * @param ClusterId Pulsar cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Array of environments (namespaces). Up to 20 environments can be deleted at a time.
                     */
                    std::vector<std::string> m_environmentIds;
                    bool m_environmentIdsHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEENVIRONMENTSREQUEST_H_
