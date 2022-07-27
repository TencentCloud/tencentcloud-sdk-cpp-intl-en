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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ECMZoneInstanceCountISP.h>
#include <tencentcloud/tke/v20180525/model/ECMEnhancedService.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateECMInstances request structure.
                */
                class CreateECMInstancesRequest : public AbstractModel
                {
                public:
                    CreateECMInstancesRequest();
                    ~CreateECMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterID Cluster ID
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterID Cluster ID
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Module ID
                     * @return ModuleId Module ID
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID
                     * @param ModuleId Module ID
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Instance AZ, number of instances and ISP
                     * @return ZoneInstanceCountISPSet Instance AZ, number of instances and ISP
                     */
                    std::vector<ECMZoneInstanceCountISP> GetZoneInstanceCountISPSet() const;

                    /**
                     * 设置Instance AZ, number of instances and ISP
                     * @param ZoneInstanceCountISPSet Instance AZ, number of instances and ISP
                     */
                    void SetZoneInstanceCountISPSet(const std::vector<ECMZoneInstanceCountISP>& _zoneInstanceCountISPSet);

                    /**
                     * 判断参数 ZoneInstanceCountISPSet 是否已赋值
                     * @return ZoneInstanceCountISPSet 是否已赋值
                     */
                    bool ZoneInstanceCountISPSetHasBeenSet() const;

                    /**
                     * 获取Password
                     * @return Password Password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password
                     * @param Password Password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth
                     * @return InternetMaxBandwidthOut Public network bandwidth
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network bandwidth
                     * @param InternetMaxBandwidthOut Public network bandwidth
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param ImageId Image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return HostName Host name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param HostName Host name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Enhanced service (including CWP and Cloud Monitoring)
                     * @return EnhancedService Enhanced service (including CWP and Cloud Monitoring)
                     */
                    ECMEnhancedService GetEnhancedService() const;

                    /**
                     * 设置Enhanced service (including CWP and Cloud Monitoring)
                     * @param EnhancedService Enhanced service (including CWP and Cloud Monitoring)
                     */
                    void SetEnhancedService(const ECMEnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取Custom script
                     * @return UserData Custom script
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置Custom script
                     * @param UserData Custom script
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取Instance extension information
                     * @return External Instance extension information
                     */
                    std::string GetExternal() const;

                    /**
                     * 设置Instance extension information
                     * @param External Instance extension information
                     */
                    void SetExternal(const std::string& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取Security group of the instance
                     * @return SecurityGroupIds Security group of the instance
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group of the instance
                     * @param SecurityGroupIds Security group of the instance
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Module ID
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Instance AZ, number of instances and ISP
                     */
                    std::vector<ECMZoneInstanceCountISP> m_zoneInstanceCountISPSet;
                    bool m_zoneInstanceCountISPSetHasBeenSet;

                    /**
                     * Password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Public network bandwidth
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Enhanced service (including CWP and Cloud Monitoring)
                     */
                    ECMEnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Custom script
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * Instance extension information
                     */
                    std::string m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * Security group of the instance
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEECMINSTANCESREQUEST_H_
