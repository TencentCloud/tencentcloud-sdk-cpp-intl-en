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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TKEINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TKEINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TkeNameSpaceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of a TKE instance
                */
                class TkeInstanceDetail : public AbstractModel
                {
                public:
                    TkeInstanceDetail();
                    ~TkeInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The cluster ID.
                     * @return ClusterId The cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The cluster ID.
                     * @param _clusterId The cluster ID.
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
                     * 获取The cluster name.
                     * @return ClusterName The cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置The cluster name.
                     * @param _clusterName The cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取The list of cluster namespaces.
                     * @return NamespaceList The list of cluster namespaces.
                     * 
                     */
                    std::vector<TkeNameSpaceDetail> GetNamespaceList() const;

                    /**
                     * 设置The list of cluster namespaces.
                     * @param _namespaceList The list of cluster namespaces.
                     * 
                     */
                    void SetNamespaceList(const std::vector<TkeNameSpaceDetail>& _namespaceList);

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

                    /**
                     * 获取The cluster type.
                     * @return ClusterType The cluster type.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置The cluster type.
                     * @param _clusterType The cluster type.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取The cluster version.
                     * @return ClusterVersion The cluster version.
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置The cluster version.
                     * @param _clusterVersion The cluster version.
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                private:

                    /**
                     * The cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * The list of cluster namespaces.
                     */
                    std::vector<TkeNameSpaceDetail> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

                    /**
                     * The cluster type.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * The cluster version.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TKEINSTANCEDETAIL_H_
