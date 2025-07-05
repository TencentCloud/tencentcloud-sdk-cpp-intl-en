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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_

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
                * SetCheckMode request structure.
                */
                class SetCheckModeRequest : public AbstractModel
                {
                public:
                    SetCheckModeRequest();
                    ~SetCheckModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cluster IDs to be set
                     * @return ClusterIds List of cluster IDs to be set
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置List of cluster IDs to be set
                     * @param _clusterIds List of cluster IDs to be set
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
                     * 获取Cluster check mode. Valid values: `Cluster_Normal` (normal mode); `Cluster_Actived` (proactive mode); `Cluster_Unset` (not set).
                     * @return ClusterCheckMode Cluster check mode. Valid values: `Cluster_Normal` (normal mode); `Cluster_Actived` (proactive mode); `Cluster_Unset` (not set).
                     * 
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置Cluster check mode. Valid values: `Cluster_Normal` (normal mode); `Cluster_Actived` (proactive mode); `Cluster_Unset` (not set).
                     * @param _clusterCheckMode Cluster check mode. Valid values: `Cluster_Normal` (normal mode); `Cluster_Actived` (proactive mode); `Cluster_Unset` (not set).
                     * 
                     */
                    void SetClusterCheckMode(const std::string& _clusterCheckMode);

                    /**
                     * 判断参数 ClusterCheckMode 是否已赋值
                     * @return ClusterCheckMode 是否已赋值
                     * 
                     */
                    bool ClusterCheckModeHasBeenSet() const;

                    /**
                     * 获取Valid values: `0` (not set); `1` (on); `2` (off).
                     * @return ClusterAutoCheck Valid values: `0` (not set); `1` (on); `2` (off).
                     * 
                     */
                    uint64_t GetClusterAutoCheck() const;

                    /**
                     * 设置Valid values: `0` (not set); `1` (on); `2` (off).
                     * @param _clusterAutoCheck Valid values: `0` (not set); `1` (on); `2` (off).
                     * 
                     */
                    void SetClusterAutoCheck(const uint64_t& _clusterAutoCheck);

                    /**
                     * 判断参数 ClusterAutoCheck 是否已赋值
                     * @return ClusterAutoCheck 是否已赋值
                     * 
                     */
                    bool ClusterAutoCheckHasBeenSet() const;

                private:

                    /**
                     * List of cluster IDs to be set
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * Cluster check mode. Valid values: `Cluster_Normal` (normal mode); `Cluster_Actived` (proactive mode); `Cluster_Unset` (not set).
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * Valid values: `0` (not set); `1` (on); `2` (off).
                     */
                    uint64_t m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SETCHECKMODEREQUEST_H_
