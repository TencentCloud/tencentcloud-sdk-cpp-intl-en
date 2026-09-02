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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERNAMESPACELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERNAMESPACELISTREQUEST_H_

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
                * DescribeClusterNamespaceList request structure.
                */
                class DescribeClusterNamespaceListRequest : public AbstractModel
                {
                public:
                    DescribeClusterNamespaceListRequest();
                    ~DescribeClusterNamespaceListRequest() = default;
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
                     * 获取<p>Common filter criteria list. Supported filter fields:<br>Name: namespace name, fuzzy matching.<br>Label: tag, fuzzy matching (matches either the key or value of a tag; any match counts).</p>
                     * @return Filter <p>Common filter criteria list. Supported filter fields:<br>Name: namespace name, fuzzy matching.<br>Label: tag, fuzzy matching (matches either the key or value of a tag; any match counts).</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>Common filter criteria list. Supported filter fields:<br>Name: namespace name, fuzzy matching.<br>Label: tag, fuzzy matching (matches either the key or value of a tag; any match counts).</p>
                     * @param _filter <p>Common filter criteria list. Supported filter fields:<br>Name: namespace name, fuzzy matching.<br>Label: tag, fuzzy matching (matches either the key or value of a tag; any match counts).</p>
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
                     * 获取<p>Cluster ca certificate md5 value, unique identifier of the cluster</p>
                     * @return ClusterCaMD5 <p>Cluster ca certificate md5 value, unique identifier of the cluster</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>Cluster ca certificate md5 value, unique identifier of the cluster</p>
                     * @param _clusterCaMD5 <p>Cluster ca certificate md5 value, unique identifier of the cluster</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                private:

                    /**
                     * <p>Cluster asset id</p>
                     */
                    std::string m_clusterAssetId;
                    bool m_clusterAssetIdHasBeenSet;

                    /**
                     * <p>Common filter criteria list. Supported filter fields:<br>Name: namespace name, fuzzy matching.<br>Label: tag, fuzzy matching (matches either the key or value of a tag; any match counts).</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Cluster ca certificate md5 value, unique identifier of the cluster</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERNAMESPACELISTREQUEST_H_
