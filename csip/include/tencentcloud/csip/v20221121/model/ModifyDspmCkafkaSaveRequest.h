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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RouteInfo.h>
#include <tencentcloud/csip/v20221121/model/LogDeliveryInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmCkafkaSave request structure.
                */
                class ModifyDspmCkafkaSaveRequest : public AbstractModel
                {
                public:
                    ModifyDspmCkafkaSaveRequest();
                    ~ModifyDspmCkafkaSaveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Access type. Currently supported values: 1 and 7</p><p>Enumeration values:</p><ul><li>1: External TGW</li><li>2: Basic network</li><li>3: VPC network</li><li>4: idc environment - supporting network</li><li>5: SSL public network access method</li><li>6: Blackstone Environment VPC</li><li>7: cvm environment - supporting network</li></ul>
                     * @return VipType <p>Access type. Currently supported values: 1 and 7</p><p>Enumeration values:</p><ul><li>1: External TGW</li><li>2: Basic network</li><li>3: VPC network</li><li>4: idc environment - supporting network</li><li>5: SSL public network access method</li><li>6: Blackstone Environment VPC</li><li>7: cvm environment - supporting network</li></ul>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>Access type. Currently supported values: 1 and 7</p><p>Enumeration values:</p><ul><li>1: External TGW</li><li>2: Basic network</li><li>3: VPC network</li><li>4: idc environment - supporting network</li><li>5: SSL public network access method</li><li>6: Blackstone Environment VPC</li><li>7: cvm environment - supporting network</li></ul>
                     * @param _vipType <p>Access type. Currently supported values: 1 and 7</p><p>Enumeration values:</p><ul><li>1: External TGW</li><li>2: Basic network</li><li>3: VPC network</li><li>4: idc environment - supporting network</li><li>5: SSL public network access method</li><li>6: Blackstone Environment VPC</li><li>7: cvm environment - supporting network</li></ul>
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
                     * 获取<p>Region of the instance</p>
                     * @return RegionId <p>Region of the instance</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>Region of the instance</p>
                     * @param _regionId <p>Region of the instance</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance access information</p>
                     * @return RouteInfo <p>Instance access information</p>
                     * 
                     */
                    RouteInfo GetRouteInfo() const;

                    /**
                     * 设置<p>Instance access information</p>
                     * @param _routeInfo <p>Instance access information</p>
                     * 
                     */
                    void SetRouteInfo(const RouteInfo& _routeInfo);

                    /**
                     * 判断参数 RouteInfo 是否已赋值
                     * @return RouteInfo 是否已赋值
                     * 
                     */
                    bool RouteInfoHasBeenSet() const;

                    /**
                     * 获取<p>When integration is for a domain name, it is valid</p>
                     * @return Username <p>When integration is for a domain name, it is valid</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>When integration is for a domain name, it is valid</p>
                     * @param _username <p>When integration is for a domain name, it is valid</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>It is valid when the integration is for the domain.</p>
                     * @return Password <p>It is valid when the integration is for the domain.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>It is valid when the integration is for the domain.</p>
                     * @param _password <p>It is valid when the integration is for the domain.</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Topic configuration for log shipping</p>
                     * @return LogDeliveryInfo <p>Topic configuration for log shipping</p>
                     * 
                     */
                    std::vector<LogDeliveryInfo> GetLogDeliveryInfo() const;

                    /**
                     * 设置<p>Topic configuration for log shipping</p>
                     * @param _logDeliveryInfo <p>Topic configuration for log shipping</p>
                     * 
                     */
                    void SetLogDeliveryInfo(const std::vector<LogDeliveryInfo>& _logDeliveryInfo);

                    /**
                     * 判断参数 LogDeliveryInfo 是否已赋值
                     * @return LogDeliveryInfo 是否已赋值
                     * 
                     */
                    bool LogDeliveryInfoHasBeenSet() const;

                    /**
                     * 获取<p>Whether to overwrite existing configurations. false by default (not overwrite, be compatible)</p>
                     * @return IsOverwrite <p>Whether to overwrite existing configurations. false by default (not overwrite, be compatible)</p>
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置<p>Whether to overwrite existing configurations. false by default (not overwrite, be compatible)</p>
                     * @param _isOverwrite <p>Whether to overwrite existing configurations. false by default (not overwrite, be compatible)</p>
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

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

                private:

                    /**
                     * <p>Access type. Currently supported values: 1 and 7</p><p>Enumeration values:</p><ul><li>1: External TGW</li><li>2: Basic network</li><li>3: VPC network</li><li>4: idc environment - supporting network</li><li>5: SSL public network access method</li><li>6: Blackstone Environment VPC</li><li>7: cvm environment - supporting network</li></ul>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>Region of the instance</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance access information</p>
                     */
                    RouteInfo m_routeInfo;
                    bool m_routeInfoHasBeenSet;

                    /**
                     * <p>When integration is for a domain name, it is valid</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>It is valid when the integration is for the domain.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Topic configuration for log shipping</p>
                     */
                    std::vector<LogDeliveryInfo> m_logDeliveryInfo;
                    bool m_logDeliveryInfoHasBeenSet;

                    /**
                     * <p>Whether to overwrite existing configurations. false by default (not overwrite, be compatible)</p>
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMCKAFKASAVEREQUEST_H_
