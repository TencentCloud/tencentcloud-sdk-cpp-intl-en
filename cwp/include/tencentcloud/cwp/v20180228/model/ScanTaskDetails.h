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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_

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
                * List of scan task details
                */
                class ScanTaskDetails : public AbstractModel
                {
                public:
                    ScanTaskDetails();
                    ~ScanTaskDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server IP
                     * @return HostIp Server IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server IP
                     * @param _hostIp Server IP
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
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
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
                     * 获取Operating system
                     * @return OsName Operating system
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system
                     * @param _osName Operating system
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Number of risks
                     * @return RiskNum Number of risks
                     * 
                     */
                    uint64_t GetRiskNum() const;

                    /**
                     * 设置Number of risks
                     * @param _riskNum Number of risks
                     * 
                     */
                    void SetRiskNum(const uint64_t& _riskNum);

                    /**
                     * 判断参数 RiskNum 是否已赋值
                     * @return RiskNum 是否已赋值
                     * 
                     */
                    bool RiskNumHasBeenSet() const;

                    /**
                     * 获取Scan start time
                     * @return ScanBeginTime Scan start time
                     * 
                     */
                    std::string GetScanBeginTime() const;

                    /**
                     * 设置Scan start time
                     * @param _scanBeginTime Scan start time
                     * 
                     */
                    void SetScanBeginTime(const std::string& _scanBeginTime);

                    /**
                     * 判断参数 ScanBeginTime 是否已赋值
                     * @return ScanBeginTime 是否已赋值
                     * 
                     */
                    bool ScanBeginTimeHasBeenSet() const;

                    /**
                     * 获取Scan end time
                     * @return ScanEndTime Scan end time
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置Scan end time
                     * @param _scanEndTime Scan end time
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取UUID
                     * @return Uuid UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置UUID
                     * @param _uuid UUID
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
                     * 获取QUUID
                     * @return Quuid QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置QUUID
                     * @param _quuid QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Status code
                     * @return Status Status code
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status code
                     * @param _status Status code
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Failure details
                     * @return FailType Failure details
                     * 
                     */
                    uint64_t GetFailType() const;

                    /**
                     * 设置Failure details
                     * @param _failType Failure details
                     * 
                     */
                    void SetFailType(const uint64_t& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return MachineWanIp Public IP address
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置Public IP address
                     * @param _machineWanIp Public IP address
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Additional information
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
                     * Server IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Operating system
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Number of risks
                     */
                    uint64_t m_riskNum;
                    bool m_riskNumHasBeenSet;

                    /**
                     * Scan start time
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * Scan end time
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Status code
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Failure details
                     */
                    uint64_t m_failType;
                    bool m_failTypeHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * Additional information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_
