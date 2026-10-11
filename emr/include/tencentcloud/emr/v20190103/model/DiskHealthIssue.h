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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_

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
                * Disk.
                */
                class DiskHealthIssue : public AbstractModel
                {
                public:
                    DiskHealthIssue();
                    ~DiskHealthIssue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Disk ID.</p>
                     * @return DiskId <p>Disk ID.</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>Disk ID.</p>
                     * @param _diskId <p>Disk ID.</p>
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<p>Mounted directory.</p>
                     * @return MountDir <p>Mounted directory.</p>
                     * 
                     */
                    std::string GetMountDir() const;

                    /**
                     * 设置<p>Mounted directory.</p>
                     * @param _mountDir <p>Mounted directory.</p>
                     * 
                     */
                    void SetMountDir(const std::string& _mountDir);

                    /**
                     * 判断参数 MountDir 是否已赋值
                     * @return MountDir 是否已赋值
                     * 
                     */
                    bool MountDirHasBeenSet() const;

                    /**
                     * 获取<p>Device path.</p>
                     * @return DeviceName <p>Device path.</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>Device path.</p>
                     * @param _deviceName <p>Device path.</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>Exception type.</p>
                     * @return CheckType <p>Exception type.</p>
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置<p>Exception type.</p>
                     * @param _checkType <p>Exception type.</p>
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>Priority.</p>
                     * @return Severity <p>Priority.</p>
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置<p>Priority.</p>
                     * @param _severity <p>Priority.</p>
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>Status.</p>
                     * @return State <p>Status.</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>Status.</p>
                     * @param _state <p>Status.</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>Probe source.</p>
                     * @return DetectSource <p>Probe source.</p>
                     * 
                     */
                    std::string GetDetectSource() const;

                    /**
                     * 设置<p>Probe source.</p>
                     * @param _detectSource <p>Probe source.</p>
                     * 
                     */
                    void SetDetectSource(const std::string& _detectSource);

                    /**
                     * 判断参数 DetectSource 是否已赋值
                     * @return DetectSource 是否已赋值
                     * 
                     */
                    bool DetectSourceHasBeenSet() const;

                    /**
                     * 获取<p>First probe time.</p>
                     * @return FirstDetectTime <p>First probe time.</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>First probe time.</p>
                     * @param _firstDetectTime <p>First probe time.</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest probe time.</p>
                     * @return LastDetectTime <p>Latest probe time.</p>
                     * 
                     */
                    std::string GetLastDetectTime() const;

                    /**
                     * 设置<p>Latest probe time.</p>
                     * @param _lastDetectTime <p>Latest probe time.</p>
                     * 
                     */
                    void SetLastDetectTime(const std::string& _lastDetectTime);

                    /**
                     * 判断参数 LastDetectTime 是否已赋值
                     * @return LastDetectTime 是否已赋值
                     * 
                     */
                    bool LastDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>Probe information.</p>
                     * @return DetectDetail <p>Probe information.</p>
                     * 
                     */
                    std::string GetDetectDetail() const;

                    /**
                     * 设置<p>Probe information.</p>
                     * @param _detectDetail <p>Probe information.</p>
                     * 
                     */
                    void SetDetectDetail(const std::string& _detectDetail);

                    /**
                     * 判断参数 DetectDetail 是否已赋值
                     * @return DetectDetail 是否已赋值
                     * 
                     */
                    bool DetectDetailHasBeenSet() const;

                private:

                    /**
                     * <p>Disk ID.</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>Mounted directory.</p>
                     */
                    std::string m_mountDir;
                    bool m_mountDirHasBeenSet;

                    /**
                     * <p>Device path.</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>Exception type.</p>
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>Priority.</p>
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>Status.</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>Probe source.</p>
                     */
                    std::string m_detectSource;
                    bool m_detectSourceHasBeenSet;

                    /**
                     * <p>First probe time.</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>Latest probe time.</p>
                     */
                    std::string m_lastDetectTime;
                    bool m_lastDetectTimeHasBeenSet;

                    /**
                     * <p>Probe information.</p>
                     */
                    std::string m_detectDetail;
                    bool m_detectDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_
