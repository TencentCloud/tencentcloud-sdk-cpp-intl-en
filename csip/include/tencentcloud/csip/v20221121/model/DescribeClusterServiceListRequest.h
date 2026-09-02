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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSERVICELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSERVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterServiceList request structure.
                */
                class DescribeClusterServiceListRequest : public AbstractModel
                {
                public:
                    DescribeClusterServiceListRequest();
                    ~DescribeClusterServiceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster asset id</p>
                     * @return ClusterAssetId <p>Cluster asset id</p>
                     * @deprecated
                     */
                    std::string GetClusterAssetId() const;

                    /**
                     * 设置<p>Cluster asset id</p>
                     * @param _clusterAssetId <p>Cluster asset id</p>
                     * @deprecated
                     */
                    void SetClusterAssetId(const std::string& _clusterAssetId);

                    /**
                     * 判断参数 ClusterAssetId 是否已赋值
                     * @return ClusterAssetId 是否已赋值
                     * @deprecated
                     */
                    bool ClusterAssetIdHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
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
                     * 获取<p>Common filter criteria list. Supported filter fields:<br>Name: service name, fuzzy matching.<br>ServiceType: service type, exact matching. Values: ClusterIP, NodePort, LoadBalancer, ExternalName.<br>Namespace: namespace, exact matching.<br>SelectorLabel: selector tag, fuzzy matching.</p>
                     * @return Filter <p>Common filter criteria list. Supported filter fields:<br>Name: service name, fuzzy matching.<br>ServiceType: service type, exact matching. Values: ClusterIP, NodePort, LoadBalancer, ExternalName.<br>Namespace: namespace, exact matching.<br>SelectorLabel: selector tag, fuzzy matching.</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>Common filter criteria list. Supported filter fields:<br>Name: service name, fuzzy matching.<br>ServiceType: service type, exact matching. Values: ClusterIP, NodePort, LoadBalancer, ExternalName.<br>Namespace: namespace, exact matching.<br>SelectorLabel: selector tag, fuzzy matching.</p>
                     * @param _filter <p>Common filter criteria list. Supported filter fields:<br>Name: service name, fuzzy matching.<br>ServiceType: service type, exact matching. Values: ClusterIP, NodePort, LoadBalancer, ExternalName.<br>Namespace: namespace, exact matching.<br>SelectorLabel: selector tag, fuzzy matching.</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @return ClusterCaMD5 <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * @param _clusterCaMD5 <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>Unique Pod identifier ID</p>
                     * @return PodUniqueID <p>Unique Pod identifier ID</p>
                     * 
                     */
                    std::string GetPodUniqueID() const;

                    /**
                     * 设置<p>Unique Pod identifier ID</p>
                     * @param _podUniqueID <p>Unique Pod identifier ID</p>
                     * 
                     */
                    void SetPodUniqueID(const std::string& _podUniqueID);

                    /**
                     * 判断参数 PodUniqueID 是否已赋值
                     * @return PodUniqueID 是否已赋值
                     * 
                     */
                    bool PodUniqueIDHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster asset id</p>
                     */
                    std::string m_clusterAssetId;
                    bool m_clusterAssetIdHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Common filter criteria list. Supported filter fields:<br>Name: service name, fuzzy matching.<br>ServiceType: service type, exact matching. Values: ClusterIP, NodePort, LoadBalancer, ExternalName.<br>Namespace: namespace, exact matching.<br>SelectorLabel: selector tag, fuzzy matching.</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Cluster ca certificate md5 value, the unique identifier of the cluster</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>Unique Pod identifier ID</p>
                     */
                    std::string m_podUniqueID;
                    bool m_podUniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERSERVICELISTREQUEST_H_
