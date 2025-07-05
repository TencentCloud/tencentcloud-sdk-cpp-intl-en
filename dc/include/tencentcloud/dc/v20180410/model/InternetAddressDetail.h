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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * Internet tunnel’s IP address details
                */
                class InternetAddressDetail : public AbstractModel
                {
                public:
                    InternetAddressDetail();
                    ~InternetAddressDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Internet tunnel’s IP address ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceId Internet tunnel’s IP address ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Internet tunnel’s IP address ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _instanceId Internet tunnel’s IP address ID
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Internet tunnel’s network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Subnet Internet tunnel’s network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnet() const;

                    /**
                     * 设置Internet tunnel’s network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnet Internet tunnel’s network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnet(const std::string& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取Mask length of a network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaskLen Mask length of a network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaskLen() const;

                    /**
                     * 设置Mask length of a network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _maskLen Mask length of a network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaskLen(const int64_t& _maskLen);

                    /**
                     * 判断参数 MaskLen 是否已赋值
                     * @return MaskLen 是否已赋值
                     * 
                     */
                    bool MaskLenHasBeenSet() const;

                    /**
                     * 获取Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AddrType Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAddrType() const;

                    /**
                     * 设置Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _addrType Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddrType(const int64_t& _addrType);

                    /**
                     * 判断参数 AddrType 是否已赋值
                     * @return AddrType 是否已赋值
                     * 
                     */
                    bool AddrTypeHasBeenSet() const;

                    /**
                     * 获取Address status. Valid values: 0: in use
1: disabled
2: returned
                     * @return Status Address status. Valid values: 0: in use
1: disabled
2: returned
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Address status. Valid values: 0: in use
1: disabled
2: returned
                     * @param _status Address status. Valid values: 0: in use
1: disabled
2: returned
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
                     * 获取Applied at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplyTime Applied at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Applied at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _applyTime Applied at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Disabled at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StopTime Disabled at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置Disabled at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _stopTime Disabled at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取Returned at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReleaseTime Returned at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置Returned at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _releaseTime Returned at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _region Region
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取User ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AppId User ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _appId User ID
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Address protocol. Valid values: 0: IPv4; 1: IPv6
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AddrProto Address protocol. Valid values: 0: IPv4; 1: IPv6
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAddrProto() const;

                    /**
                     * 设置Address protocol. Valid values: 0: IPv4; 1: IPv6
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _addrProto Address protocol. Valid values: 0: IPv4; 1: IPv6
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddrProto(const int64_t& _addrProto);

                    /**
                     * 判断参数 AddrProto 是否已赋值
                     * @return AddrProto 是否已赋值
                     * 
                     */
                    bool AddrProtoHasBeenSet() const;

                    /**
                     * 获取Retention period of a released IP address, in days
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ReserveTime Retention period of a released IP address, in days
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReserveTime() const;

                    /**
                     * 设置Retention period of a released IP address, in days
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _reserveTime Retention period of a released IP address, in days
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReserveTime(const int64_t& _reserveTime);

                    /**
                     * 判断参数 ReserveTime 是否已赋值
                     * @return ReserveTime 是否已赋值
                     * 
                     */
                    bool ReserveTimeHasBeenSet() const;

                private:

                    /**
                     * Internet tunnel’s IP address ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Internet tunnel’s network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * Mask length of a network address
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maskLen;
                    bool m_maskLenHasBeenSet;

                    /**
                     * Address type. Valid values: 0: BGP
1: China Telecom
2: China Mobile
3: China Unicom
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_addrType;
                    bool m_addrTypeHasBeenSet;

                    /**
                     * Address status. Valid values: 0: in use
1: disabled
2: returned
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Applied at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Disabled at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * Returned at
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * Region
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * User ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Address protocol. Valid values: 0: IPv4; 1: IPv6
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_addrProto;
                    bool m_addrProtoHasBeenSet;

                    /**
                     * Retention period of a released IP address, in days
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_reserveTime;
                    bool m_reserveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_
