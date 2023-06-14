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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the scanned image
                */
                class VulScanImageInfo : public AbstractModel
                {
                public:
                    VulScanImageInfo();
                    ~VulScanImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return Size Image size
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置Image size
                     * @param _size Image size
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `SCANNING` (scanning); `FAILED` (failed); `FINISHED` (completed); `CANCELED` (canceled).
                     * @return ScanStatus Task status. Valid values: `SCANNING` (scanning); `FAILED` (failed); `FINISHED` (completed); `CANCELED` (canceled).
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置Task status. Valid values: `SCANNING` (scanning); `FAILED` (failed); `FINISHED` (completed); `CANCELED` (canceled).
                     * @param _scanStatus Task status. Valid values: `SCANNING` (scanning); `FAILED` (failed); `FINISHED` (completed); `CANCELED` (canceled).
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Scan duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScanDuration Scan duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetScanDuration() const;

                    /**
                     * 设置Scan duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scanDuration Scan duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanDuration(const double& _scanDuration);

                    /**
                     * 判断参数 ScanDuration 是否已赋值
                     * @return ScanDuration 是否已赋值
                     * 
                     */
                    bool ScanDurationHasBeenSet() const;

                    /**
                     * 获取Number of high-risk vulnerabilities
                     * @return HighLevelVulCount Number of high-risk vulnerabilities
                     * 
                     */
                    int64_t GetHighLevelVulCount() const;

                    /**
                     * 设置Number of high-risk vulnerabilities
                     * @param _highLevelVulCount Number of high-risk vulnerabilities
                     * 
                     */
                    void SetHighLevelVulCount(const int64_t& _highLevelVulCount);

                    /**
                     * 判断参数 HighLevelVulCount 是否已赋值
                     * @return HighLevelVulCount 是否已赋值
                     * 
                     */
                    bool HighLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk vulnerabilities
                     * @return MediumLevelVulCount Number of medium-risk vulnerabilities
                     * 
                     */
                    int64_t GetMediumLevelVulCount() const;

                    /**
                     * 设置Number of medium-risk vulnerabilities
                     * @param _mediumLevelVulCount Number of medium-risk vulnerabilities
                     * 
                     */
                    void SetMediumLevelVulCount(const int64_t& _mediumLevelVulCount);

                    /**
                     * 判断参数 MediumLevelVulCount 是否已赋值
                     * @return MediumLevelVulCount 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of low-risk vulnerabilities
                     * @return LowLevelVulCount Number of low-risk vulnerabilities
                     * 
                     */
                    int64_t GetLowLevelVulCount() const;

                    /**
                     * 设置Number of low-risk vulnerabilities
                     * @param _lowLevelVulCount Number of low-risk vulnerabilities
                     * 
                     */
                    void SetLowLevelVulCount(const int64_t& _lowLevelVulCount);

                    /**
                     * 判断参数 LowLevelVulCount 是否已赋值
                     * @return LowLevelVulCount 是否已赋值
                     * 
                     */
                    bool LowLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of critical vulnerabilities
                     * @return CriticalLevelVulCount Number of critical vulnerabilities
                     * 
                     */
                    int64_t GetCriticalLevelVulCount() const;

                    /**
                     * 设置Number of critical vulnerabilities
                     * @param _criticalLevelVulCount Number of critical vulnerabilities
                     * 
                     */
                    void SetCriticalLevelVulCount(const int64_t& _criticalLevelVulCount);

                    /**
                     * 判断参数 CriticalLevelVulCount 是否已赋值
                     * @return CriticalLevelVulCount 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCountHasBeenSet() const;

                    /**
                     * 获取ID of the task to scan local images for vulnerabilities
                     * @return TaskID ID of the task to scan local images for vulnerabilities
                     * 
                     */
                    int64_t GetTaskID() const;

                    /**
                     * 设置ID of the task to scan local images for vulnerabilities
                     * @param _taskID ID of the task to scan local images for vulnerabilities
                     * 
                     */
                    void SetTaskID(const int64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取Start time of the vulnerability scan
                     * @return ScanStartTime Start time of the vulnerability scan
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 设置Start time of the vulnerability scan
                     * @param _scanStartTime Start time of the vulnerability scan
                     * 
                     */
                    void SetScanStartTime(const std::string& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the vulnerability scan
                     * @return ScanEndTime End time of the vulnerability scan
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置End time of the vulnerability scan
                     * @param _scanEndTime End time of the vulnerability scan
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
                     * 获取Cause of the failure. Valid values: `TIMEOUT` (timeout); `TOO_MANY` (too many tasks); `OFFLINE` (offline).
                     * @return ErrorStatus Cause of the failure. Valid values: `TIMEOUT` (timeout); `TOO_MANY` (too many tasks); `OFFLINE` (offline).
                     * 
                     */
                    std::string GetErrorStatus() const;

                    /**
                     * 设置Cause of the failure. Valid values: `TIMEOUT` (timeout); `TOO_MANY` (too many tasks); `OFFLINE` (offline).
                     * @param _errorStatus Cause of the failure. Valid values: `TIMEOUT` (timeout); `TOO_MANY` (too many tasks); `OFFLINE` (offline).
                     * 
                     */
                    void SetErrorStatus(const std::string& _errorStatus);

                    /**
                     * 判断参数 ErrorStatus 是否已赋值
                     * @return ErrorStatus 是否已赋值
                     * 
                     */
                    bool ErrorStatusHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image size
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Task status. Valid values: `SCANNING` (scanning); `FAILED` (failed); `FINISHED` (completed); `CANCELED` (canceled).
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Scan duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_scanDuration;
                    bool m_scanDurationHasBeenSet;

                    /**
                     * Number of high-risk vulnerabilities
                     */
                    int64_t m_highLevelVulCount;
                    bool m_highLevelVulCountHasBeenSet;

                    /**
                     * Number of medium-risk vulnerabilities
                     */
                    int64_t m_mediumLevelVulCount;
                    bool m_mediumLevelVulCountHasBeenSet;

                    /**
                     * Number of low-risk vulnerabilities
                     */
                    int64_t m_lowLevelVulCount;
                    bool m_lowLevelVulCountHasBeenSet;

                    /**
                     * Number of critical vulnerabilities
                     */
                    int64_t m_criticalLevelVulCount;
                    bool m_criticalLevelVulCountHasBeenSet;

                    /**
                     * ID of the task to scan local images for vulnerabilities
                     */
                    int64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * Start time of the vulnerability scan
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * End time of the vulnerability scan
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * Cause of the failure. Valid values: `TIMEOUT` (timeout); `TOO_MANY` (too many tasks); `OFFLINE` (offline).
                     */
                    std::string m_errorStatus;
                    bool m_errorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_
