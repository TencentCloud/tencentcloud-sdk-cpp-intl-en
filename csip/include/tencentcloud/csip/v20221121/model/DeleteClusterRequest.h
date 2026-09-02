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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECLUSTERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteCluster request structure.
                */
                class DeleteClusterRequest : public AbstractModel
                {
                public:
                    DeleteClusterRequest();
                    ~DeleteClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Member ID of the Called Group Account
                     * @return OperatedMemberId Member ID of the Called Group Account
                     * 
                     */
                    std::vector<std::string> GetOperatedMemberId() const;

                    /**
                     * 设置Member ID of the Called Group Account
                     * @param _operatedMemberId Member ID of the Called Group Account
                     * 
                     */
                    void SetOperatedMemberId(const std::vector<std::string>& _operatedMemberId);

                    /**
                     * 判断参数 OperatedMemberId 是否已赋值
                     * @return OperatedMemberId 是否已赋值
                     * 
                     */
                    bool OperatedMemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster asset id</p>
                     * @return ClusterAssetIds <p>Cluster asset id</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetClusterAssetIds() const;

                    /**
                     * 设置<p>Cluster asset id</p>
                     * @param _clusterAssetIds <p>Cluster asset id</p>
                     * @deprecated
                     */
                    void SetClusterAssetIds(const std::vector<std::string>& _clusterAssetIds);

                    /**
                     * 判断参数 ClusterAssetIds 是否已赋值
                     * @return ClusterAssetIds 是否已赋值
                     * @deprecated
                     */
                    bool ClusterAssetIdsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @return ClusterCaMD5List <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @param _clusterCaMD5List <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    void SetClusterCaMD5List(const std::vector<std::string>& _clusterCaMD5List);

                    /**
                     * 判断参数 ClusterCaMD5List 是否已赋值
                     * @return ClusterCaMD5List 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5ListHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Member ID of the Called Group Account
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                    /**
                     * <p>Cluster asset id</p>
                     */
                    std::vector<std::string> m_clusterAssetIds;
                    bool m_clusterAssetIdsHasBeenSet;

                    /**
                     * <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETECLUSTERREQUEST_H_
