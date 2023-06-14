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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance information
                */
                class RedisCommonInstanceList : public AbstractModel
                {
                public:
                    RedisCommonInstanceList();
                    ~RedisCommonInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * @return AppId User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * @param _appId User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Project ID of the instance
                     * @return ProjectId Project ID of the instance
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of the instance
                     * @param _projectId Project ID of the instance
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Instance region
                     * @return Region Instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
                     * @param _region Instance region
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
                     * 获取Instance AZ
                     * @return Zone Instance AZ
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ
                     * @param _zone Instance AZ
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance VPC ID
                     * @return VpcId Instance VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Instance VPC ID
                     * @param _vpcId Instance VPC ID
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
                     * 获取VPC subnet ID
                     * @return SubnetId VPC subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC subnet ID
                     * @param _subnetId VPC subnet ID
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
                     * 获取Instance status information
- `1`: Task running.
- `2`: Instance running.
- `-2`: Instance isolated.
- `-3`: Instance being eliminated.
- `-4`: Instance eliminated.
                     * @return Status Instance status information
- `1`: Task running.
- `2`: Instance running.
- `-2`: Instance isolated.
- `-3`: Instance being eliminated.
- `-4`: Instance eliminated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status information
- `1`: Task running.
- `2`: Instance running.
- `-2`: Instance isolated.
- `-3`: Instance being eliminated.
- `-4`: Instance eliminated.
                     * @param _status Instance status information
- `1`: Task running.
- `2`: Instance running.
- `-2`: Instance isolated.
- `-3`: Instance being eliminated.
- `-4`: Instance eliminated.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Private network IP address of an instance
                     * @return Vips Private network IP address of an instance
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置Private network IP address of an instance
                     * @param _vips Private network IP address of an instance
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取Instance network port
                     * @return Vport Instance network port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance network port
                     * @param _vport Instance network port
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return Createtime Instance creation time
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置Instance creation time
                     * @param _createtime Instance creation time
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取Billing type
- `0`: Pay-as-you-go.
- `1`: Monthly subscription.
                     * @return PayMode Billing type
- `0`: Pay-as-you-go.
- `1`: Monthly subscription.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing type
- `0`: Pay-as-you-go.
- `1`: Monthly subscription.
                     * @param _payMode Billing type
- `0`: Pay-as-you-go.
- `1`: Monthly subscription.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Network Type
- `0`: Classic network.
- `1`: VPC.
                     * @return NetType Network Type
- `0`: Classic network.
- `1`: VPC.
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置Network Type
- `0`: Classic network.
- `1`: VPC.
                     * @param _netType Network Type
- `0`: Classic network.
- `1`: VPC.
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * User APPID, which is the unique application ID that matches an account. Some Tencent Cloud products use this APPID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project ID of the instance
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Instance status information
- `1`: Task running.
- `2`: Instance running.
- `-2`: Instance isolated.
- `-3`: Instance being eliminated.
- `-4`: Instance eliminated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Private network IP address of an instance
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * Instance network port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * Billing type
- `0`: Pay-as-you-go.
- `1`: Monthly subscription.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Network Type
- `0`: Classic network.
- `1`: VPC.
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_
