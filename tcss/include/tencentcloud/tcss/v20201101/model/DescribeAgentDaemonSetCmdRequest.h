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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTDAEMONSETCMDREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTDAEMONSETCMDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCustomParameters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAgentDaemonSetCmd request structure.
                */
                class DescribeAgentDaemonSetCmdRequest : public AbstractModel
                {
                public:
                    DescribeAgentDaemonSetCmdRequest();
                    ~DescribeAgentDaemonSetCmdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is from Tencent Cloud
                     * @return IsCloud Whether it is from Tencent Cloud
                     * 
                     */
                    bool GetIsCloud() const;

                    /**
                     * 设置Whether it is from Tencent Cloud
                     * @param _isCloud Whether it is from Tencent Cloud
                     * 
                     */
                    void SetIsCloud(const bool& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: `basic` (classic network); `private` (VPC); `public` (public network); `direct` (Direct Connect).
                     * @return NetType Network type. Valid values: `basic` (classic network); `private` (VPC); `public` (public network); `direct` (Direct Connect).
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type. Valid values: `basic` (classic network); `private` (VPC); `public` (public network); `direct` (Direct Connect).
                     * @param _netType Network type. Valid values: `basic` (classic network); `private` (VPC); `public` (public network); `direct` (Direct Connect).
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Region, which is required when `NetType` is `direct`.
                     * @return RegionCode Region, which is required when `NetType` is `direct`.
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region, which is required when `NetType` is `direct`.
                     * @param _regionCode Region, which is required when `NetType` is `direct`.
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取VpcId, which is required when `NetType` is `direct`.
                     * @return VpcId VpcId, which is required when `NetType` is `direct`.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId, which is required when `NetType` is `direct`.
                     * @param _vpcId VpcId, which is required when `NetType` is `direct`.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Command validity, which is required for non-Tencent Cloud instances.
                     * @return ExpireDate Command validity, which is required for non-Tencent Cloud instances.
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置Command validity, which is required for non-Tencent Cloud instances.
                     * @param _expireDate Command validity, which is required for non-Tencent Cloud instances.
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取Custom parameters of the cluster
                     * @return ClusterCustomParameters Custom parameters of the cluster
                     * 
                     */
                    std::vector<ClusterCustomParameters> GetClusterCustomParameters() const;

                    /**
                     * 设置Custom parameters of the cluster
                     * @param _clusterCustomParameters Custom parameters of the cluster
                     * 
                     */
                    void SetClusterCustomParameters(const std::vector<ClusterCustomParameters>& _clusterCustomParameters);

                    /**
                     * 判断参数 ClusterCustomParameters 是否已赋值
                     * @return ClusterCustomParameters 是否已赋值
                     * 
                     */
                    bool ClusterCustomParametersHasBeenSet() const;

                private:

                    /**
                     * Whether it is from Tencent Cloud
                     */
                    bool m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * Network type. Valid values: `basic` (classic network); `private` (VPC); `public` (public network); `direct` (Direct Connect).
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Region, which is required when `NetType` is `direct`.
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * VpcId, which is required when `NetType` is `direct`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Command validity, which is required for non-Tencent Cloud instances.
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * Custom parameters of the cluster
                     */
                    std::vector<ClusterCustomParameters> m_clusterCustomParameters;
                    bool m_clusterCustomParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEAGENTDAEMONSETCMDREQUEST_H_
