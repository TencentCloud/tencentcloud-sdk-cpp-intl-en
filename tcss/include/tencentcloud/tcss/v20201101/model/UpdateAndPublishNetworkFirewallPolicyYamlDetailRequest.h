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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * UpdateAndPublishNetworkFirewallPolicyYamlDetail request structure.
                */
                class UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest : public AbstractModel
                {
                public:
                    UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest();
                    ~UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return Id Policy ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Policy ID
                     * @param _id Policy ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded NetworkPolicy YAML string
                     * @return Yaml Base64-encoded NetworkPolicy YAML string
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 设置Base64-encoded NetworkPolicy YAML string
                     * @param _yaml Base64-encoded NetworkPolicy YAML string
                     * 
                     */
                    void SetYaml(const std::string& _yaml);

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Description Policy description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
                     * @param _description Policy description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Base64-encoded NetworkPolicy YAML string
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYYAMLDETAILREQUEST_H_
