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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterCustomParameters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterInstallCommand request structure.
                */
                class DescribeClusterInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribeClusterInstallCommandRequest();
                    ~DescribeClusterInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Whether it is Tencent Cloud. true: use the parallel container daemonset yaml installation branch; false: use the host agent installation command branch</p>
                     * @return IsCloud <p>Whether it is Tencent Cloud. true: use the parallel container daemonset yaml installation branch; false: use the host agent installation command branch</p>
                     * 
                     */
                    bool GetIsCloud() const;

                    /**
                     * 设置<p>Whether it is Tencent Cloud. true: use the parallel container daemonset yaml installation branch; false: use the host agent installation command branch</p>
                     * @param _isCloud <p>Whether it is Tencent Cloud. true: use the parallel container daemonset yaml installation branch; false: use the host agent installation command branch</p>
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
                     * 获取<p>Network type<br>Enumeration values:<br>basic: basic network<br>private: VPC<br>public: public network<br>direct: direct connect</p>
                     * @return NetType <p>Network type<br>Enumeration values:<br>basic: basic network<br>private: VPC<br>public: public network<br>direct: direct connect</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>Network type<br>Enumeration values:<br>basic: basic network<br>private: VPC<br>public: public network<br>direct: direct connect</p>
                     * @param _netType <p>Network type<br>Enumeration values:<br>basic: basic network<br>private: VPC<br>public: public network<br>direct: direct connect</p>
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
                     * 获取<p>Region code (required when NetType=direct; used by the Tencent Cloud branch for special region mirror repository replacement)</p>
                     * @return RegionCode <p>Region code (required when NetType=direct; used by the Tencent Cloud branch for special region mirror repository replacement)</p>
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>Region code (required when NetType=direct; used by the Tencent Cloud branch for special region mirror repository replacement)</p>
                     * @param _regionCode <p>Region code (required when NetType=direct; used by the Tencent Cloud branch for special region mirror repository replacement)</p>
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
                     * 获取<p>VPC ID (required when NetType=direct)<br>Parameter format: in the form of vpc-xxxxxxxx</p>
                     * @return VpcId <p>VPC ID (required when NetType=direct)<br>Parameter format: in the form of vpc-xxxxxxxx</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID (required when NetType=direct)<br>Parameter format: in the form of vpc-xxxxxxxx</p>
                     * @param _vpcId <p>VPC ID (required when NetType=direct)<br>Parameter format: in the form of vpc-xxxxxxxx</p>
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
                     * 获取<p>Expiration time<br>Parameter format: yyyy-MM-dd (for example, 2026-12-31)<br>Purpose: For the Tencent Cloud branch, it is the expiration time of the cos download link for the daemonset yaml; for the non-Tencent Cloud branch, it is the expiration time of the agent installation token</p>
                     * @return ExpireDate <p>Expiration time<br>Parameter format: yyyy-MM-dd (for example, 2026-12-31)<br>Purpose: For the Tencent Cloud branch, it is the expiration time of the cos download link for the daemonset yaml; for the non-Tencent Cloud branch, it is the expiration time of the agent installation token</p>
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置<p>Expiration time<br>Parameter format: yyyy-MM-dd (for example, 2026-12-31)<br>Purpose: For the Tencent Cloud branch, it is the expiration time of the cos download link for the daemonset yaml; for the non-Tencent Cloud branch, it is the expiration time of the agent installation token</p>
                     * @param _expireDate <p>Expiration time<br>Parameter format: yyyy-MM-dd (for example, 2026-12-31)<br>Purpose: For the Tencent Cloud branch, it is the expiration time of the cos download link for the daemonset yaml; for the non-Tencent Cloud branch, it is the expiration time of the agent installation token</p>
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
                     * 获取<p>List of csip tag IDs (for non-Tencent Cloud branches, associate installation tags)</p>
                     * @return TagIds <p>List of csip tag IDs (for non-Tencent Cloud branches, associate installation tags)</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>List of csip tag IDs (for non-Tencent Cloud branches, associate installation tags)</p>
                     * @param _tagIds <p>List of csip tag IDs (for non-Tencent Cloud branches, associate installation tags)</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster custom parameters (Tencent Cloud branch used for replacing daemonset template placeholders)</p>
                     * @return ClusterCustomParameters <p>Cluster custom parameters (Tencent Cloud branch used for replacing daemonset template placeholders)</p>
                     * 
                     */
                    std::vector<ClusterCustomParameters> GetClusterCustomParameters() const;

                    /**
                     * 设置<p>Cluster custom parameters (Tencent Cloud branch used for replacing daemonset template placeholders)</p>
                     * @param _clusterCustomParameters <p>Cluster custom parameters (Tencent Cloud branch used for replacing daemonset template placeholders)</p>
                     * 
                     */
                    void SetClusterCustomParameters(const std::vector<ClusterCustomParameters>& _clusterCustomParameters);

                    /**
                     * 判断参数 ClusterCustomParameters 是否已赋值
                     * @return ClusterCustomParameters 是否已赋值
                     * 
                     */
                    bool ClusterCustomParametersHasBeenSet() const;

                    /**
                     * 获取<p>Integration VIP (used by non-Tenant Cloud branches; automatically applied for by the DC service when NetType=direct and Vip is not passed)</p>
                     * @return Vip <p>Integration VIP (used by non-Tenant Cloud branches; automatically applied for by the DC service when NetType=direct and Vip is not passed)</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>Integration VIP (used by non-Tenant Cloud branches; automatically applied for by the DC service when NetType=direct and Vip is not passed)</p>
                     * @param _vip <p>Integration VIP (used by non-Tenant Cloud branches; automatically applied for by the DC service when NetType=direct and Vip is not passed)</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * <p>Whether it is Tencent Cloud. true: use the parallel container daemonset yaml installation branch; false: use the host agent installation command branch</p>
                     */
                    bool m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Network type<br>Enumeration values:<br>basic: basic network<br>private: VPC<br>public: public network<br>direct: direct connect</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>Region code (required when NetType=direct; used by the Tencent Cloud branch for special region mirror repository replacement)</p>
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>VPC ID (required when NetType=direct)<br>Parameter format: in the form of vpc-xxxxxxxx</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Expiration time<br>Parameter format: yyyy-MM-dd (for example, 2026-12-31)<br>Purpose: For the Tencent Cloud branch, it is the expiration time of the cos download link for the daemonset yaml; for the non-Tencent Cloud branch, it is the expiration time of the agent installation token</p>
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * <p>List of csip tag IDs (for non-Tencent Cloud branches, associate installation tags)</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>Cluster custom parameters (Tencent Cloud branch used for replacing daemonset template placeholders)</p>
                     */
                    std::vector<ClusterCustomParameters> m_clusterCustomParameters;
                    bool m_clusterCustomParametersHasBeenSet;

                    /**
                     * <p>Integration VIP (used by non-Tenant Cloud branches; automatically applied for by the DC service when NetType=direct and Vip is not passed)</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_
