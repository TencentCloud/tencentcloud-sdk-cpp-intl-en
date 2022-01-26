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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

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
                     * 获取Region information
                     * @return Region Region information
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information
                     * @param Region Region information
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Creation time in milliseconds
                     * @return CreateTime Creation time in milliseconds
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in milliseconds
                     * @param CreateTime Creation time in milliseconds
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Remark Cluster remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Public network access address
                     * @return PublicEndPoint Public network access address
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置Public network access address
                     * @param PublicEndPoint Public network access address
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC access address
                     * @return VpcEndPoint VPC access address
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC access address
                     * @param VpcEndPoint VPC access address
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     */
                    bool VpcEndPointHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
