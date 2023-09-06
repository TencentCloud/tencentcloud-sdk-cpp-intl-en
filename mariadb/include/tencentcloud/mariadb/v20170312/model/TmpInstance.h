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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Temp instance
                */
                class TmpInstance : public AbstractModel
                {
                public:
                    TmpInstance();
                    ~TmpInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return AppId Application ID
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _appId Application ID
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance remarks
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return InstanceRemark Instance remarks
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceRemark() const;

                    /**
                     * 设置Instance remarks
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _instanceRemark Instance remarks
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceRemark(const std::string& _instanceRemark);

                    /**
                     * 判断参数 InstanceRemark 是否已赋值
                     * @return InstanceRemark 是否已赋值
                     * 
                     */
                    bool InstanceRemarkHasBeenSet() const;

                    /**
                     * 获取Whether it is a temp instance. Valid values: `0` (non-temp instance), `1` (invalid temp instance), `2` (valid temp rollback instance).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return TempType Whether it is a temp instance. Valid values: `0` (non-temp instance), `1` (invalid temp instance), `2` (valid temp rollback instance).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTempType() const;

                    /**
                     * 设置Whether it is a temp instance. Valid values: `0` (non-temp instance), `1` (invalid temp instance), `2` (valid temp rollback instance).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _tempType Whether it is a temp instance. Valid values: `0` (non-temp instance), `1` (invalid temp instance), `2` (valid temp rollback instance).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTempType(const int64_t& _tempType);

                    /**
                     * 判断参数 TempType 是否已赋值
                     * @return TempType 是否已赋值
                     * 
                     */
                    bool TempTypeHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-1` (isolated), `-2` (eliminated).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Status Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-1` (isolated), `-2` (eliminated).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-1` (isolated), `-2` (eliminated).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _status Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-1` (isolated), `-2` (eliminated).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return InstanceId Instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _instanceId Instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Virtual instance IP
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Vip Virtual instance IP
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Virtual instance IP
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _vip Virtual instance IP
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Virtual instance port
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Vport Virtual instance port
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Virtual instance port
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _vport Virtual instance port
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Validity end time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return PeriodEndTime Validity end time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPeriodEndTime() const;

                    /**
                     * 设置Validity end time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _periodEndTime Validity end time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPeriodEndTime(const std::string& _periodEndTime);

                    /**
                     * 判断参数 PeriodEndTime 是否已赋值
                     * @return PeriodEndTime 是否已赋值
                     * 
                     */
                    bool PeriodEndTimeHasBeenSet() const;

                    /**
                     * 获取Source instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return SrcInstanceId Source instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _srcInstanceId Source instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance status description
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return StatusDesc Instance status description
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Instance status description
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _statusDesc Instance status description
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Instance region
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Region Instance region
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _region Instance region
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取AZ of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Zone AZ of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _zone AZ of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
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
                     * 获取Virtual IPv6 of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Vipv6 Virtual IPv6 of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVipv6() const;

                    /**
                     * 设置Virtual IPv6 of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _vipv6 Virtual IPv6 of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVipv6(const std::string& _vipv6);

                    /**
                     * 判断参数 Vipv6 是否已赋值
                     * @return Vipv6 是否已赋值
                     * 
                     */
                    bool Vipv6HasBeenSet() const;

                    /**
                     * 获取Instance IPv6 flag
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return Ipv6Flag Instance IPv6 flag
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置Instance IPv6 flag
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _ipv6Flag Instance IPv6 flag
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpv6Flag(const uint64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                private:

                    /**
                     * Application ID
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Creation time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance remarks
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceRemark;
                    bool m_instanceRemarkHasBeenSet;

                    /**
                     * Whether it is a temp instance. Valid values: `0` (non-temp instance), `1` (invalid temp instance), `2` (valid temp rollback instance).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_tempType;
                    bool m_tempTypeHasBeenSet;

                    /**
                     * Instance status. Valid values: `0` (to be initialized), `1` (in process), `2` (running), `-1` (isolated), `-2` (eliminated).
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Virtual instance IP
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Virtual instance port
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Validity end time
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_periodEndTime;
                    bool m_periodEndTimeHasBeenSet;

                    /**
                     * Source instance ID in the format of `tdsql-ow728lmc`
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Instance status description
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Instance region
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * AZ of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Virtual IPv6 of the instance
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    std::string m_vipv6;
                    bool m_vipv6HasBeenSet;

                    /**
                     * Instance IPv6 flag
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_TMPINSTANCE_H_
