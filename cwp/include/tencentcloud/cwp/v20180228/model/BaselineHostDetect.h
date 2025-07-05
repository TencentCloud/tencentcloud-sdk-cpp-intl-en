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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline Host Detection
                */
                class BaselineHostDetect : public AbstractModel
                {
                public:
                    BaselineHostDetect();
                    ~BaselineHostDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host ID
                     * @return HostId Host ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Host ID
                     * @param _hostId Host ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return HostIp Private IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Private IP address
                     * @param _hostIp Private IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return HostName Host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
                     * @param _hostName Host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return WanIp Public IP address
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIp Public IP address
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @return DetectStatus 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @param _detectStatus 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * 
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     * 
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取Number of Passed Tasks in Detection
                     * @return PassedItemCount Number of Passed Tasks in Detection
                     * 
                     */
                    int64_t GetPassedItemCount() const;

                    /**
                     * 设置Number of Passed Tasks in Detection
                     * @param _passedItemCount Number of Passed Tasks in Detection
                     * 
                     */
                    void SetPassedItemCount(const int64_t& _passedItemCount);

                    /**
                     * 判断参数 PassedItemCount 是否已赋值
                     * @return PassedItemCount 是否已赋值
                     * 
                     */
                    bool PassedItemCountHasBeenSet() const;

                    /**
                     * 获取Associated Detection Item Count
                     * @return ItemCount Associated Detection Item Count
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置Associated Detection Item Count
                     * @param _itemCount Associated Detection Item Count
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取Detection Failure Count
                     * @return NotPassedItemCount Detection Failure Count
                     * 
                     */
                    int64_t GetNotPassedItemCount() const;

                    /**
                     * 设置Detection Failure Count
                     * @param _notPassedItemCount Detection Failure Count
                     * 
                     */
                    void SetNotPassedItemCount(const int64_t& _notPassedItemCount);

                    /**
                     * 判断参数 NotPassedItemCount 是否已赋值
                     * @return NotPassedItemCount 是否已赋值
                     * 
                     */
                    bool NotPassedItemCountHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return FirstTime First detection time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First detection time
                     * @param _firstTime First detection time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Last detection Time
                     * @return LastTime Last detection Time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection Time
                     * @param _lastTime Last detection Time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取CWPP UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid CWPP UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid CWPP UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Host ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * Number of Passed Tasks in Detection
                     */
                    int64_t m_passedItemCount;
                    bool m_passedItemCountHasBeenSet;

                    /**
                     * Associated Detection Item Count
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * Detection Failure Count
                     */
                    int64_t m_notPassedItemCount;
                    bool m_notPassedItemCountHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Last detection Time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * CWPP UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_
