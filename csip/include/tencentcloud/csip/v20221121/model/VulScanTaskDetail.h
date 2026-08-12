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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability scan task details
                */
                class VulScanTaskDetail : public AbstractModel
                {
                public:
                    VulScanTaskDetail();
                    ~VulScanTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Creator AppId</p>
                     * @return AppId <p>Creator AppId</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Creator AppId</p>
                     * @param _appId <p>Creator AppId</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取<p>Public ip address</p>
                     * @return PublicIp <p>Public ip address</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>Public ip address</p>
                     * @param _publicIp <p>Public ip address</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>Private ip</p>
                     * @return PrivateIp <p>Private ip</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>Private ip</p>
                     * @param _privateIp <p>Private ip</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>os</p>
                     * @return OS <p>os</p>
                     * 
                     */
                    std::string GetOS() const;

                    /**
                     * 设置<p>os</p>
                     * @param _oS <p>os</p>
                     * 
                     */
                    void SetOS(const std::string& _oS);

                    /**
                     * 判断参数 OS 是否已赋值
                     * @return OS 是否已赋值
                     * 
                     */
                    bool OSHasBeenSet() const;

                    /**
                     * 获取<p>Scan status (SUCCESS: Scan complete/successful, OFFLINE: Client offline, TIMEOUT: Scan timeout, FAILED: Scan failed, UNSUPPORTED: Client version too low/Do not support scanning, TERMINATED: Terminated, TERMINATING: Terminating)</p><p>Enumeration value:</p><ul><li>SCANNING: Scanning</li></ul>
                     * @return Status <p>Scan status (SUCCESS: Scan complete/successful, OFFLINE: Client offline, TIMEOUT: Scan timeout, FAILED: Scan failed, UNSUPPORTED: Client version too low/Do not support scanning, TERMINATED: Terminated, TERMINATING: Terminating)</p><p>Enumeration value:</p><ul><li>SCANNING: Scanning</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Scan status (SUCCESS: Scan complete/successful, OFFLINE: Client offline, TIMEOUT: Scan timeout, FAILED: Scan failed, UNSUPPORTED: Client version too low/Do not support scanning, TERMINATED: Terminated, TERMINATING: Terminating)</p><p>Enumeration value:</p><ul><li>SCANNING: Scanning</li></ul>
                     * @param _status <p>Scan status (SUCCESS: Scan complete/successful, OFFLINE: Client offline, TIMEOUT: Scan timeout, FAILED: Scan failed, UNSUPPORTED: Client version too low/Do not support scanning, TERMINATED: Terminated, TERMINATING: Terminating)</p><p>Enumeration value:</p><ul><li>SCANNING: Scanning</li></ul>
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
                     * 获取<p>Scan start time</p>
                     * @return StartTime <p>Scan start time</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Scan start time</p>
                     * @param _startTime <p>Scan start time</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Scan end time</p>
                     * @return EndTime <p>Scan end time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Scan end time</p>
                     * @param _endTime <p>Scan end time</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability count</p>
                     * @return Vuls <p>Vulnerability count</p>
                     * 
                     */
                    uint64_t GetVuls() const;

                    /**
                     * 设置<p>Vulnerability count</p>
                     * @param _vuls <p>Vulnerability count</p>
                     * 
                     */
                    void SetVuls(const uint64_t& _vuls);

                    /**
                     * 判断参数 Vuls 是否已赋值
                     * @return Vuls 是否已赋值
                     * 
                     */
                    bool VulsHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason</p>
                     * @return Description <p>Failure reason</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Failure reason</p>
                     * @param _description <p>Failure reason</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Creator AppId</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * <p>Public ip address</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>Private ip</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>os</p>
                     */
                    std::string m_oS;
                    bool m_oSHasBeenSet;

                    /**
                     * <p>Scan status (SUCCESS: Scan complete/successful, OFFLINE: Client offline, TIMEOUT: Scan timeout, FAILED: Scan failed, UNSUPPORTED: Client version too low/Do not support scanning, TERMINATED: Terminated, TERMINATING: Terminating)</p><p>Enumeration value:</p><ul><li>SCANNING: Scanning</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Scan start time</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Scan end time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Vulnerability count</p>
                     */
                    uint64_t m_vuls;
                    bool m_vulsHasBeenSet;

                    /**
                     * <p>Failure reason</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASKDETAIL_H_
