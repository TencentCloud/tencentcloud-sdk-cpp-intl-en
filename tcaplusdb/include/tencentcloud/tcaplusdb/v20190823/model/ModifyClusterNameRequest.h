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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterName request structure.
                */
                class ModifyClusterNameRequest : public AbstractModel
                {
                public:
                    ModifyClusterNameRequest();
                    ~ModifyClusterNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster to be renamed
                     * @return ClusterId ID of the cluster to be renamed
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster to be renamed
                     * @param _clusterId ID of the cluster to be renamed
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
                     * 获取Cluster name to be changed to, which can contain up to 32 letters and digits
                     * @return ClusterName Cluster name to be changed to, which can contain up to 32 letters and digits
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name to be changed to, which can contain up to 32 letters and digits
                     * @param _clusterName Cluster name to be changed to, which can contain up to 32 letters and digits
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster to be renamed
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name to be changed to, which can contain up to 32 letters and digits
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
