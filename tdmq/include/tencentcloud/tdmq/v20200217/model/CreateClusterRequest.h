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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateCluster request structure.
                */
                class CreateClusterRequest : public AbstractModel
                {
                public:
                    CreateClusterRequest();
                    ~CreateClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster name, which can contain up to 16 letters, digits, hyphens, and underscores.
                     * @return ClusterName Cluster name, which can contain up to 16 letters, digits, hyphens, and underscores.
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name, which can contain up to 16 letters, digits, hyphens, and underscores.
                     * @param ClusterName Cluster name, which can contain up to 16 letters, digits, hyphens, and underscores.
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取ID of your dedicated physical cluster. If it is not passed in, cluster resources will be created in a public cluster by default.
                     * @return BindClusterId ID of your dedicated physical cluster. If it is not passed in, cluster resources will be created in a public cluster by default.
                     */
                    uint64_t GetBindClusterId() const;

                    /**
                     * 设置ID of your dedicated physical cluster. If it is not passed in, cluster resources will be created in a public cluster by default.
                     * @param BindClusterId ID of your dedicated physical cluster. If it is not passed in, cluster resources will be created in a public cluster by default.
                     */
                    void SetBindClusterId(const uint64_t& _bindClusterId);

                    /**
                     * 判断参数 BindClusterId 是否已赋值
                     * @return BindClusterId 是否已赋值
                     */
                    bool BindClusterIdHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters).
                     * @return Remark Remarks (up to 128 characters).
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
                     * @param Remark Remarks (up to 128 characters).
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Cluster tag list (deprecated).
                     * @return Tags Cluster tag list (deprecated).
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Cluster tag list (deprecated).
                     * @param Tags Cluster tag list (deprecated).
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
                     * @return PublicAccessEnabled Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
                     * @param PublicAccessEnabled Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                private:

                    /**
                     * Cluster name, which can contain up to 16 letters, digits, hyphens, and underscores.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * ID of your dedicated physical cluster. If it is not passed in, cluster resources will be created in a public cluster by default.
                     */
                    uint64_t m_bindClusterId;
                    bool m_bindClusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Cluster tag list (deprecated).
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATECLUSTERREQUEST_H_
