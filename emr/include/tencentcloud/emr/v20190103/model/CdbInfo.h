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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Output parameters
                */
                class CdbInfo : public AbstractModel
                {
                public:
                    CdbInfo();
                    ~CdbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Database instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Database instance
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InstanceName Database instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Ip Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Ip Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Port Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Database memory specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MemSize Database memory specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Database memory specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MemSize Database memory specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Database disk specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Volume Database disk specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置Database disk specification
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Volume Database disk specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取Service flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Service Service flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetService() const;

                    /**
                     * 设置Service flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Service Service flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApplyTime Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PayType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PayType Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Expiration flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireFlag Expiration flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetExpireFlag() const;

                    /**
                     * 设置Expiration flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpireFlag Expiration flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireFlag(const bool& _expireFlag);

                    /**
                     * 判断参数 ExpireFlag 是否已赋值
                     * @return ExpireFlag 是否已赋值
                     */
                    bool ExpireFlagHasBeenSet() const;

                    /**
                     * 获取Database status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Database status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Database status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Database status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsAutoRenew() const;

                    /**
                     * 设置Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsAutoRenew Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsAutoRenew(const int64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取Database string
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SerialNo Database string
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置Database string
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SerialNo Database string
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取ZoneId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId ZoneId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置ZoneId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ZoneId ZoneId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取RegionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RegionId RegionId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置RegionId
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RegionId RegionId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Database instance
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Database IP
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Database port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Database memory specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Database disk specification
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * Service flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Expiration time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Application time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Payment type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Expiration flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_expireFlag;
                    bool m_expireFlagHasBeenSet;

                    /**
                     * Database status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Renewal flag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * Database string
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * ZoneId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * RegionId
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CDBINFO_H_
