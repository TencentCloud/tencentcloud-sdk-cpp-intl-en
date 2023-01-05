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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_

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
                * UpdateEdgeClusterVersion request structure.
                */
                class UpdateEdgeClusterVersionRequest : public AbstractModel
                {
                public:
                    UpdateEdgeClusterVersionRequest();
                    ~UpdateEdgeClusterVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Target version
                     * @return EdgeVersion Target version
                     */
                    std::string GetEdgeVersion() const;

                    /**
                     * 设置Target version
                     * @param EdgeVersion Target version
                     */
                    void SetEdgeVersion(const std::string& _edgeVersion);

                    /**
                     * 判断参数 EdgeVersion 是否已赋值
                     * @return EdgeVersion 是否已赋值
                     */
                    bool EdgeVersionHasBeenSet() const;

                    /**
                     * 获取Prefix of the image repository of a custom edge component
                     * @return RegistryPrefix Prefix of the image repository of a custom edge component
                     */
                    std::string GetRegistryPrefix() const;

                    /**
                     * 设置Prefix of the image repository of a custom edge component
                     * @param RegistryPrefix Prefix of the image repository of a custom edge component
                     */
                    void SetRegistryPrefix(const std::string& _registryPrefix);

                    /**
                     * 判断参数 RegistryPrefix 是否已赋值
                     * @return RegistryPrefix 是否已赋值
                     */
                    bool RegistryPrefixHasBeenSet() const;

                    /**
                     * 获取Whether to skip precheck
                     * @return SkipPreCheck Whether to skip precheck
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置Whether to skip precheck
                     * @param SkipPreCheck Whether to skip precheck
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     */
                    bool SkipPreCheckHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Target version
                     */
                    std::string m_edgeVersion;
                    bool m_edgeVersionHasBeenSet;

                    /**
                     * Prefix of the image repository of a custom edge component
                     */
                    std::string m_registryPrefix;
                    bool m_registryPrefixHasBeenSet;

                    /**
                     * Whether to skip precheck
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEEDGECLUSTERVERSIONREQUEST_H_
