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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ cluster's basic information
                */
                class RocketMQClusterInfo : public AbstractModel
                {
                public:
                    RocketMQClusterInfo();
                    ~RocketMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取Region information
                     * @return Region Region information
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param _region Region information
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Creation time in milliseconds
                     * @return CreateTime Creation time in milliseconds
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds
                     * @param _createTime Creation time in milliseconds
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Public network access address
                     * @return PublicEndPoint Public network access address
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置Public network access address
                     * @param _publicEndPoint Public network access address
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC access address
                     * @return VpcEndPoint VPC access address
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC access address
                     * @param _vpcEndPoint VPC access address
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SupportNamespaceEndpoint Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSupportNamespaceEndpoint() const;

                    /**
                     * 设置Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _supportNamespaceEndpoint Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportNamespaceEndpoint(const bool& _supportNamespaceEndpoint);

                    /**
                     * 判断参数 SupportNamespaceEndpoint 是否已赋值
                     * @return SupportNamespaceEndpoint 是否已赋值
                     * 
                     */
                    bool SupportNamespaceEndpointHasBeenSet() const;

                    /**
                     * 获取VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vpcs VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<VpcConfig> GetVpcs() const;

                    /**
                     * 设置VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcs VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcs(const std::vector<VpcConfig>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsVip Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isVip Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RocketMQFlag TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRocketMQFlag() const;

                    /**
                     * 设置TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rocketMQFlag TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRocketMQFlag(const bool& _rocketMQFlag);

                    /**
                     * 判断参数 RocketMQFlag 是否已赋值
                     * @return RocketMQFlag 是否已赋值
                     * 
                     */
                    bool RocketMQFlagHasBeenSet() const;

                    /**
                     * 获取Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolateTime Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsolateTime() const;

                    /**
                     * 设置Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isolateTime Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolateTime(const int64_t& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpPublicEndpoint HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpPublicEndpoint() const;

                    /**
                     * 设置HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpPublicEndpoint HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpPublicEndpoint(const std::string& _httpPublicEndpoint);

                    /**
                     * 判断参数 HttpPublicEndpoint 是否已赋值
                     * @return HttpPublicEndpoint 是否已赋值
                     * 
                     */
                    bool HttpPublicEndpointHasBeenSet() const;

                    /**
                     * 获取HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVpcEndpoint HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpVpcEndpoint() const;

                    /**
                     * 设置HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpVpcEndpoint HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpVpcEndpoint(const std::string& _httpVpcEndpoint);

                    /**
                     * 判断参数 HttpVpcEndpoint 是否已赋值
                     * @return HttpVpcEndpoint 是否已赋值
                     * 
                     */
                    bool HttpVpcEndpointHasBeenSet() const;

                    /**
                     * 获取Internal TCP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return InternalEndpoint Internal TCP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置Internal TCP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _internalEndpoint Internal TCP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     * 
                     */
                    bool InternalEndpointHasBeenSet() const;

                    /**
                     * 获取Internal HTTP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return HttpInternalEndpoint Internal HTTP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpInternalEndpoint() const;

                    /**
                     * 设置Internal HTTP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @param _httpInternalEndpoint Internal HTTP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpInternalEndpoint(const std::string& _httpInternalEndpoint);

                    /**
                     * 判断参数 HttpInternalEndpoint 是否已赋值
                     * @return HttpInternalEndpoint 是否已赋值
                     * 
                     */
                    bool HttpInternalEndpointHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Region information
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Creation time in milliseconds
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Public network access address
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC access address
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * Whether the namespace access point is supported.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_supportNamespaceEndpoint;
                    bool m_supportNamespaceEndpointHasBeenSet;

                    /**
                     * VPC Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<VpcConfig> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * Whether it is an exclusive instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * TDMQ for RocketMQ cluster type flag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_rocketMQFlag;
                    bool m_rocketMQFlagHasBeenSet;

                    /**
                     * Billing status (`1`: Normal; `2`: Service suspended; `3`: Terminated)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service suspension time in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * HTTP-based public network access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpPublicEndpoint;
                    bool m_httpPublicEndpointHasBeenSet;

                    /**
                     * HTTP-based VPC access address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVpcEndpoint;
                    bool m_httpVpcEndpointHasBeenSet;

                    /**
                     * Internal TCP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * Internal HTTP access address
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpInternalEndpoint;
                    bool m_httpInternalEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
