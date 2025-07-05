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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Details of instances in the interwoking group
                */
                class InterInstance : public AbstractModel
                {
                public:
                    InterInstance();
                    ~InterInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Instance interworking IP, which can be accessed after the instance is added to the interworking group.
                     * @return InterVip Instance interworking IP, which can be accessed after the instance is added to the interworking group.
                     * 
                     */
                    std::string GetInterVip() const;

                    /**
                     * 设置Instance interworking IP, which can be accessed after the instance is added to the interworking group.
                     * @param _interVip Instance interworking IP, which can be accessed after the instance is added to the interworking group.
                     * 
                     */
                    void SetInterVip(const std::string& _interVip);

                    /**
                     * 判断参数 InterVip 是否已赋值
                     * @return InterVip 是否已赋值
                     * 
                     */
                    bool InterVipHasBeenSet() const;

                    /**
                     * 获取Instance interworking port, which can be accessed after the instance is added to the interworking group.
                     * @return InterPort Instance interworking port, which can be accessed after the instance is added to the interworking group.
                     * 
                     */
                    int64_t GetInterPort() const;

                    /**
                     * 设置Instance interworking port, which can be accessed after the instance is added to the interworking group.
                     * @param _interPort Instance interworking port, which can be accessed after the instance is added to the interworking group.
                     * 
                     */
                    void SetInterPort(const int64_t& _interPort);

                    /**
                     * 判断参数 InterPort 是否已赋值
                     * @return InterPort 是否已赋值
                     * 
                     */
                    bool InterPortHasBeenSet() const;

                    /**
                     * 获取Instance interworking status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6`(Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * @return Status Instance interworking status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6`(Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance interworking status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6`(Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     * @param _status Instance interworking status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6`(Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
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
                     * 获取Instance region, such as ap-guangzhou.
                     * @return Region Instance region, such as ap-guangzhou.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region, such as ap-guangzhou.
                     * @param _region Instance region, such as ap-guangzhou.
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
                     * 获取Instance AZ name, such as ap-guangzhou-1.
                     * @return Zone Instance AZ name, such as ap-guangzhou-1.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Instance AZ name, such as ap-guangzhou-1.
                     * @param _zone Instance AZ name, such as ap-guangzhou-1.
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
                     * 获取Instance version code
                     * @return Version Instance version code
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Instance version code
                     * @param _version Instance version code
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Instance version
                     * @return VersionName Instance version
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Instance version
                     * @param _versionName Instance version
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return Name Instance name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
                     * @param _name Instance name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Instance access IP
                     * @return Vip Instance access IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance access IP
                     * @param _vip Instance access IP
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Instance access port
                     * @return Vport Instance access port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Instance access port
                     * @param _vport Instance access port
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance interworking IP, which can be accessed after the instance is added to the interworking group.
                     */
                    std::string m_interVip;
                    bool m_interVipHasBeenSet;

                    /**
                     * Instance interworking port, which can be accessed after the instance is added to the interworking group.
                     */
                    int64_t m_interPort;
                    bool m_interPortHasBeenSet;

                    /**
                     * Instance interworking status. Valid values: `1` (Enabling interworking IP), `2` (Enabled interworking IP), `3` (Adding to interworking group), `4` (Added to interworking group), `5` (Reclaiming interworking IP), `6`(Reclaimed interworking IP), `7` (Removing from interworking group), `8` (Removed from interworking group).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance region, such as ap-guangzhou.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance AZ name, such as ap-guangzhou-1.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance version code
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Instance version
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Instance access IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Instance access port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INTERINSTANCE_H_
