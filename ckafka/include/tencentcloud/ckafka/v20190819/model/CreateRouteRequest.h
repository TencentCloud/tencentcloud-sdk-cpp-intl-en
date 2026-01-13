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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateRoute request structure.
                */
                class CreateRouteRequest : public AbstractModel
                {
                public:
                    CreateRouteRequest();
                    ~CreateRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specifies the ckafka cluster instance id. obtain through the API <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a>.</p>.
                     * @return InstanceId <p>Specifies the ckafka cluster instance id. obtain through the API <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a>.</p>.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specifies the ckafka cluster instance id. obtain through the API <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a>.</p>.
                     * @param _instanceId <p>Specifies the ckafka cluster instance id. obtain through the API <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a>.</p>.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the network type of the route (3: vpc routing; 7: internal support route; 1: public network route).</p>.
                     * @return VipType <P>Specifies the network type of the route (3: vpc routing; 7: internal support route; 1: public network route).</p>.
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<P>Specifies the network type of the route (3: vpc routing; 7: internal support route; 1: public network route).</p>.
                     * @param _vipType <P>Specifies the network type of the route (3: vpc routing; 7: internal support route; 1: public network route).</p>.
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取<p>vpc network Id. required when vipType is 3.</p>.
                     * @return VpcId <p>vpc network Id. required when vipType is 3.</p>.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc network Id. required when vipType is 3.</p>.
                     * @param _vpcId <p>vpc network Id. required when vipType is 3.</p>.
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
                     * 获取<p>Specifies the vpc subnet id. required when vipType is 3.</p>.
                     * @return SubnetId <p>Specifies the vpc subnet id. required when vipType is 3.</p>.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Specifies the vpc subnet id. required when vipType is 3.</p>.
                     * @param _subnetId <p>Specifies the vpc subnet id. required when vipType is 3.</p>.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>Access type: 0-plaintext; 1-sasl_plaintext; 3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512. defaults to 0. when vipType=3, supports 0,1,3,4,5. when vipType=7, supports 0,1,3. when vipType=1, supports 1,3.</p>.
                     * @return AccessType <p>Access type: 0-plaintext; 1-sasl_plaintext; 3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512. defaults to 0. when vipType=3, supports 0,1,3,4,5. when vipType=7, supports 0,1,3. when vipType=1, supports 1,3.</p>.
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>Access type: 0-plaintext; 1-sasl_plaintext; 3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512. defaults to 0. when vipType=3, supports 0,1,3,4,5. when vipType=7, supports 0,1,3. when vipType=1, supports 1,3.</p>.
                     * @param _accessType <p>Access type: 0-plaintext; 1-sasl_plaintext; 3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512. defaults to 0. when vipType=3, supports 0,1,3,4,5. when vipType=7, supports 0,1,3. when vipType=1, supports 1,3.</p>.
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<P>Specifies whether access management is required. this field has been deprecated.</p>.
                     * @return AuthFlag <P>Specifies whether access management is required. this field has been deprecated.</p>.
                     * 
                     */
                    int64_t GetAuthFlag() const;

                    /**
                     * 设置<P>Specifies whether access management is required. this field has been deprecated.</p>.
                     * @param _authFlag <P>Specifies whether access management is required. this field has been deprecated.</p>.
                     * 
                     */
                    void SetAuthFlag(const int64_t& _authFlag);

                    /**
                     * 判断参数 AuthFlag 是否已赋值
                     * @return AuthFlag 是否已赋值
                     * 
                     */
                    bool AuthFlagHasBeenSet() const;

                    /**
                     * 获取<p>Specifies the caller appId.</p>.
                     * @return CallerAppid <p>Specifies the caller appId.</p>.
                     * 
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置<p>Specifies the caller appId.</p>.
                     * @param _callerAppid <p>Specifies the caller appId.</p>.
                     * 
                     */
                    void SetCallerAppid(const int64_t& _callerAppid);

                    /**
                     * 判断参数 CallerAppid 是否已赋值
                     * @return CallerAppid 是否已赋值
                     * 
                     */
                    bool CallerAppidHasBeenSet() const;

                    /**
                     * 获取<P>Public network bandwidth. required for public network route. must be a multiple of 3. no default value.</p>.
                     * @return PublicNetwork <P>Public network bandwidth. required for public network route. must be a multiple of 3. no default value.</p>.
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<P>Public network bandwidth. required for public network route. must be a multiple of 3. no default value.</p>.
                     * @param _publicNetwork <P>Public network bandwidth. required for public network route. must be a multiple of 3. no default value.</p>.
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取<p>vip address.</p>.
                     * @return Ip <p>vip address.</p>.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>vip address.</p>.
                     * @param _ip <p>vip address.</p>.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the remark information.</p>.
                     * @return Note <P>Specifies the remark information.</p>.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<P>Specifies the remark information.</p>.
                     * @param _note <P>Specifies the remark information.</p>.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the ordered list of security group associations.</p>.
                     * @return SecurityGroupIds <P>Specifies the ordered list of security group associations.</p>.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<P>Specifies the ordered list of security group associations.</p>.
                     * @param _securityGroupIds <P>Specifies the ordered list of security group associations.</p>.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>Specifies the ckafka cluster instance id. obtain through the API <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a>.</p>.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <P>Specifies the network type of the route (3: vpc routing; 7: internal support route; 1: public network route).</p>.
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>vpc network Id. required when vipType is 3.</p>.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Specifies the vpc subnet id. required when vipType is 3.</p>.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Access type: 0-plaintext; 1-sasl_plaintext; 3-sasl_ssl; 4-sasl_scram_sha_256; 5-sasl_scram_sha_512. defaults to 0. when vipType=3, supports 0,1,3,4,5. when vipType=7, supports 0,1,3. when vipType=1, supports 1,3.</p>.
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <P>Specifies whether access management is required. this field has been deprecated.</p>.
                     */
                    int64_t m_authFlag;
                    bool m_authFlagHasBeenSet;

                    /**
                     * <p>Specifies the caller appId.</p>.
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * <P>Public network bandwidth. required for public network route. must be a multiple of 3. no default value.</p>.
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>vip address.</p>.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <P>Specifies the remark information.</p>.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <P>Specifies the ordered list of security group associations.</p>.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEROUTEREQUEST_H_
