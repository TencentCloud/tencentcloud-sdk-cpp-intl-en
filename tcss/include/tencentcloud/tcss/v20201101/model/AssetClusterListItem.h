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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of clusters
                */
                class AssetClusterListItem : public AbstractModel
                {
                public:
                    AssetClusterListItem();
                    ~AssetClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterID Cluster ID
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster status
`CSR_RUNNING`: Running
`CSR_EXCEPTION`: Abnormal
`CSR_DEL`: Deleted
                     * @return Status Cluster status
`CSR_RUNNING`: Running
`CSR_EXCEPTION`: Abnormal
`CSR_DEL`: Deleted
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cluster status
`CSR_RUNNING`: Running
`CSR_EXCEPTION`: Abnormal
`CSR_DEL`: Deleted
                     * @param Status Cluster status
`CSR_RUNNING`: Running
`CSR_EXCEPTION`: Abnormal
`CSR_DEL`: Deleted
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Bound rule name
                     * @return BindRuleName Bound rule name
                     */
                    std::string GetBindRuleName() const;

                    /**
                     * 设置Bound rule name
                     * @param BindRuleName Bound rule name
                     */
                    void SetBindRuleName(const std::string& _bindRuleName);

                    /**
                     * 判断参数 BindRuleName 是否已赋值
                     * @return BindRuleName 是否已赋值
                     */
                    bool BindRuleNameHasBeenSet() const;

                    /**
                     * 获取Cluster type:
`CT_TKE`: TKE cluster
`CT_USER_CREATE`: External cluster
                     * @return ClusterType Cluster type:
`CT_TKE`: TKE cluster
`CT_USER_CREATE`: External cluster
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type:
`CT_TKE`: TKE cluster
`CT_USER_CREATE`: External cluster
                     * @param ClusterType Cluster type:
`CT_TKE`: TKE cluster
`CT_USER_CREATE`: External cluster
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster status
`CSR_RUNNING`: Running
`CSR_EXCEPTION`: Abnormal
`CSR_DEL`: Deleted
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Bound rule name
                     */
                    std::string m_bindRuleName;
                    bool m_bindRuleNameHasBeenSet;

                    /**
                     * Cluster type:
`CT_TKE`: TKE cluster
`CT_USER_CREATE`: External cluster
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
