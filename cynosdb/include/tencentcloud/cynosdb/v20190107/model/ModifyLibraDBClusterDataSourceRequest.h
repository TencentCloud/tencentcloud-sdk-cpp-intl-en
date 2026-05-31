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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/LibraDBClusterSrcInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterDataSource request structure.
                */
                class ModifyLibraDBClusterDataSourceRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterDataSourceRequest();
                    ~ModifyLibraDBClusterDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Analysis Cluster ID
                     * @return ClusterId Analysis Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Analysis Cluster ID
                     * @param _clusterId Analysis Cluster ID
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
                     * 获取Read-only analysis engine instance ID
                     * @return InstanceId Read-only analysis engine instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-only analysis engine instance ID
                     * @param _instanceId Read-only analysis engine instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Source information
                     * @return SrcInfo Source information
                     * 
                     */
                    std::vector<LibraDBClusterSrcInfo> GetSrcInfo() const;

                    /**
                     * 设置Source information
                     * @param _srcInfo Source information
                     * 
                     */
                    void SetSrcInfo(const std::vector<LibraDBClusterSrcInfo>& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Read-only analysis engine instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Source information
                     */
                    std::vector<LibraDBClusterSrcInfo> m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERDATASOURCEREQUEST_H_
