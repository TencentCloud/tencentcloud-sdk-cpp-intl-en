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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskAssetObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Data returned in the list of scan tasks list to display information
                */
                class ScanTaskInfoList : public AbstractModel
                {
                public:
                    ScanTaskInfoList();
                    ~ScanTaskInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskName Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskName Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Start time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StartTime Start time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _startTime Start time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取Task end time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return EndTime Task end time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _endTime Task end time
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取CRON format
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanPlanContent CRON format
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置CRON format
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanPlanContent CRON format
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanPlanContent(const std::string& _scanPlanContent);

                    /**
                     * 判断参数 ScanPlanContent 是否已赋值
                     * @return ScanPlanContent 是否已赋值
                     * 
                     */
                    bool ScanPlanContentHasBeenSet() const;

                    /**
                     * 获取Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskType Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskType Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * @return InsertTime Creation time
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * @param _insertTime Creation time
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskId Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Custom list of assets to scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SelfDefiningAssets Custom list of assets to scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置Custom list of assets to scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _selfDefiningAssets Custom list of assets to scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSelfDefiningAssets(const std::vector<std::string>& _selfDefiningAssets);

                    /**
                     * 判断参数 SelfDefiningAssets 是否已赋值
                     * @return SelfDefiningAssets 是否已赋值
                     * 
                     */
                    bool SelfDefiningAssetsHasBeenSet() const;

                    /**
                     * 获取Estimated period to complete the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PredictTime Estimated period to complete the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPredictTime() const;

                    /**
                     * 设置Estimated period to complete the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _predictTime Estimated period to complete the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPredictTime(const int64_t& _predictTime);

                    /**
                     * 判断参数 PredictTime 是否已赋值
                     * @return PredictTime 是否已赋值
                     * 
                     */
                    bool PredictTimeHasBeenSet() const;

                    /**
                     * 获取Estimated completion time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return PredictEndTime Estimated completion time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPredictEndTime() const;

                    /**
                     * 设置Estimated completion time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _predictEndTime Estimated completion time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPredictEndTime(const std::string& _predictEndTime);

                    /**
                     * 判断参数 PredictEndTime 是否已赋值
                     * @return PredictEndTime 是否已赋值
                     * 
                     */
                    bool PredictEndTimeHasBeenSet() const;

                    /**
                     * 获取Number of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReportNumber Number of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReportNumber() const;

                    /**
                     * 设置Number of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _reportNumber Number of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReportNumber(const int64_t& _reportNumber);

                    /**
                     * 判断参数 ReportNumber 是否已赋值
                     * @return ReportNumber 是否已赋值
                     * 
                     */
                    bool ReportNumberHasBeenSet() const;

                    /**
                     * 获取Number of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AssetNumber Number of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAssetNumber() const;

                    /**
                     * 设置Number of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assetNumber Number of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssetNumber(const int64_t& _assetNumber);

                    /**
                     * 判断参数 AssetNumber 是否已赋值
                     * @return AssetNumber 是否已赋值
                     * 
                     */
                    bool AssetNumberHasBeenSet() const;

                    /**
                     * 获取Scanning status. `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning; `4`: Scanning stopped
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanStatus Scanning status. `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning; `4`: Scanning stopped
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Scanning status. `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning; `4`: Scanning stopped
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanStatus Scanning status. `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning; `4`: Scanning stopped
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Percent Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _percent Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取port/poc/weakpass/webcontent/configrisk
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanItem port/poc/weakpass/webcontent/configrisk
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanItem() const;

                    /**
                     * 设置port/poc/weakpass/webcontent/configrisk
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanItem port/poc/weakpass/webcontent/configrisk
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanItem(const std::string& _scanItem);

                    /**
                     * 判断参数 ScanItem 是否已赋值
                     * @return ScanItem 是否已赋值
                     * 
                     */
                    bool ScanItemHasBeenSet() const;

                    /**
                     * 获取Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanAssetType Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanAssetType Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanAssetType(const int64_t& _scanAssetType);

                    /**
                     * 判断参数 ScanAssetType 是否已赋值
                     * @return ScanAssetType 是否已赋值
                     * 
                     */
                    bool ScanAssetTypeHasBeenSet() const;

                    /**
                     * 获取VSS subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VSSTaskId VSS subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVSSTaskId() const;

                    /**
                     * 设置VSS subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vSSTaskId VSS subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVSSTaskId(const std::string& _vSSTaskId);

                    /**
                     * 判断参数 VSSTaskId 是否已赋值
                     * @return VSSTaskId 是否已赋值
                     * 
                     */
                    bool VSSTaskIdHasBeenSet() const;

                    /**
                     * 获取CSPM subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CSPMTaskId CSPM subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCSPMTaskId() const;

                    /**
                     * 设置CSPM subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cSPMTaskId CSPM subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCSPMTaskId(const std::string& _cSPMTaskId);

                    /**
                     * 判断参数 CSPMTaskId 是否已赋值
                     * @return CSPMTaskId 是否已赋值
                     * 
                     */
                    bool CSPMTaskIdHasBeenSet() const;

                    /**
                     * 获取CWPP vulnerability scan task IDHost missed scan subtask id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPPOCId CWPP vulnerability scan task IDHost missed scan subtask id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCWPPOCId() const;

                    /**
                     * 设置CWPP vulnerability scan task IDHost missed scan subtask id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPPOCId CWPP vulnerability scan task IDHost missed scan subtask id
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPPOCId(const std::string& _cWPPOCId);

                    /**
                     * 判断参数 CWPPOCId 是否已赋值
                     * @return CWPPOCId 是否已赋值
                     * 
                     */
                    bool CWPPOCIdHasBeenSet() const;

                    /**
                     * 获取CWPP baseline check task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPBlId CWPP baseline check task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCWPBlId() const;

                    /**
                     * 设置CWPP baseline check task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPBlId CWPP baseline check task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPBlId(const std::string& _cWPBlId);

                    /**
                     * 判断参数 CWPBlId 是否已赋值
                     * @return CWPBlId 是否已赋值
                     * 
                     */
                    bool CWPBlIdHasBeenSet() const;

                    /**
                     * 获取VSS task progess
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return VSSTaskProcess VSS task progess
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetVSSTaskProcess() const;

                    /**
                     * 设置VSS task progess
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _vSSTaskProcess VSS task progess
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVSSTaskProcess(const int64_t& _vSSTaskProcess);

                    /**
                     * 判断参数 VSSTaskProcess 是否已赋值
                     * @return VSSTaskProcess 是否已赋值
                     * 
                     */
                    bool VSSTaskProcessHasBeenSet() const;

                    /**
                     * 获取CSPM task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CSPMTaskProcess CSPM task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCSPMTaskProcess() const;

                    /**
                     * 设置CSPM task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cSPMTaskProcess CSPM task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCSPMTaskProcess(const uint64_t& _cSPMTaskProcess);

                    /**
                     * 判断参数 CSPMTaskProcess 是否已赋值
                     * @return CSPMTaskProcess 是否已赋值
                     * 
                     */
                    bool CSPMTaskProcessHasBeenSet() const;

                    /**
                     * 获取CWPP vulnerability scan task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPPOCProcess CWPP vulnerability scan task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCWPPOCProcess() const;

                    /**
                     * 设置CWPP vulnerability scan task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPPOCProcess CWPP vulnerability scan task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPPOCProcess(const int64_t& _cWPPOCProcess);

                    /**
                     * 判断参数 CWPPOCProcess 是否已赋值
                     * @return CWPPOCProcess 是否已赋值
                     * 
                     */
                    bool CWPPOCProcessHasBeenSet() const;

                    /**
                     * 获取CWPP baseline check task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CWPBlProcess CWPP baseline check task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCWPBlProcess() const;

                    /**
                     * 设置CWPP baseline check task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _cWPBlProcess CWPP baseline check task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCWPBlProcess(const uint64_t& _cWPBlProcess);

                    /**
                     * 判断参数 CWPBlProcess 是否已赋值
                     * @return CWPBlProcess 是否已赋值
                     * 
                     */
                    bool CWPBlProcessHasBeenSet() const;

                    /**
                     * 获取
                     * @return ErrorCode 
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置
                     * @param _errorCode 
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Exception information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ErrorInfo Exception information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置Exception information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _errorInfo Exception information
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取Day of the month to start the scheduled task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return StartDay Day of the month to start the scheduled task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStartDay() const;

                    /**
                     * 设置Day of the month to start the scheduled task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _startDay Day of the month to start the scheduled task
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartDay(const int64_t& _startDay);

                    /**
                     * 判断参数 StartDay 是否已赋值
                     * @return StartDay 是否已赋值
                     * 
                     */
                    bool StartDayHasBeenSet() const;

                    /**
                     * 获取Scan frequency in days. `1`: Every day; `7`: Every seven days; `30`: Every 30 days; `0`: Scan once only
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Frequency Scan frequency in days. `1`: Every day; `7`: Every seven days; `30`: Every 30 days; `0`: Scan once only
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置Scan frequency in days. `1`: Every day; `7`: Every seven days; `30`: Every 30 days; `0`: Scan once only
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _frequency Scan frequency in days. `1`: Every day; `7`: Every seven days; `30`: Every 30 days; `0`: Scan once only
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Number of completed tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CompleteNumber Number of completed tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCompleteNumber() const;

                    /**
                     * 设置Number of completed tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _completeNumber Number of completed tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompleteNumber(const int64_t& _completeNumber);

                    /**
                     * 判断参数 CompleteNumber 是否已赋值
                     * @return CompleteNumber 是否已赋值
                     * 
                     */
                    bool CompleteNumberHasBeenSet() const;

                    /**
                     * 获取Number of scanned assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return CompleteAssetNumber Number of scanned assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCompleteAssetNumber() const;

                    /**
                     * 设置Number of scanned assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _completeAssetNumber Number of scanned assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompleteAssetNumber(const int64_t& _completeAssetNumber);

                    /**
                     * 判断参数 CompleteAssetNumber 是否已赋值
                     * @return CompleteAssetNumber 是否已赋值
                     * 
                     */
                    bool CompleteAssetNumberHasBeenSet() const;

                    /**
                     * 获取Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RiskCount Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _riskCount Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取Assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Assets Assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置Assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _assets Assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssets(const std::vector<TaskAssetObject>& _assets);

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取User `Appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return AppId User `Appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User `Appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _appId User `Appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UIN User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _uIN User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     * 
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UserName User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _userName User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskMode Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _taskMode Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取Source of scanning request
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ScanFrom Source of scanning request
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScanFrom() const;

                    /**
                     * 设置Source of scanning request
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _scanFrom Source of scanning request
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScanFrom(const std::string& _scanFrom);

                    /**
                     * 判断参数 ScanFrom 是否已赋值
                     * @return ScanFrom 是否已赋值
                     * 
                     */
                    bool ScanFromHasBeenSet() const;

                    /**
                     * 获取Whether it's a limited-time free health check. `0`: No; `1`: Yes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsFree Whether it's a limited-time free health check. `0`: No; `1`: Yes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsFree() const;

                    /**
                     * 设置Whether it's a limited-time free health check. `0`: No; `1`: Yes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isFree Whether it's a limited-time free health check. `0`: No; `1`: Yes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsFree(const int64_t& _isFree);

                    /**
                     * 判断参数 IsFree 是否已赋值
                     * @return IsFree 是否已赋值
                     * 
                     */
                    bool IsFreeHasBeenSet() const;

                    /**
                     * 获取Whether the user is authorized to delete this task. `1` :Yes; `0`: No. It's available for multi-account management.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return IsDelete Whether the user is authorized to delete this task. `1` :Yes; `0`: No. It's available for multi-account management.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsDelete() const;

                    /**
                     * 设置Whether the user is authorized to delete this task. `1` :Yes; `0`: No. It's available for multi-account management.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _isDelete Whether the user is authorized to delete this task. `1` :Yes; `0`: No. It's available for multi-account management.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDelete(const int64_t& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                    /**
                     * 获取Source of the task. `0`: Default, `1`: Assistant; `2`: Health check
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return SourceType Source of the task. `0`: Default, `1`: Assistant; `2`: Health check
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置Source of the task. `0`: Default, `1`: Assistant; `2`: Health check
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _sourceType Source of the task. `0`: Default, `1`: Assistant; `2`: Health check
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * Task name
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Start time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * CRON format
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * Task type. `0`: Scheduled task, `1`: Scan immediately; `2`: Scanned at the specified time; `3`: Custom.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Creation time
Note: u200dThis field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Custom list of assets to scan
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * Estimated period to complete the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_predictTime;
                    bool m_predictTimeHasBeenSet;

                    /**
                     * Estimated completion time of the task
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_predictEndTime;
                    bool m_predictEndTimeHasBeenSet;

                    /**
                     * Number of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reportNumber;
                    bool m_reportNumberHasBeenSet;

                    /**
                     * Number of assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_assetNumber;
                    bool m_assetNumberHasBeenSet;

                    /**
                     * Scanning status. `0`: (default) Not scanned; `1`: Scanning; `2`: Scan completed; `3`: Error while scanning; `4`: Scanning stopped
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * port/poc/weakpass/webcontent/configrisk
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * Values: `0` (Scan all); `1` (Scan specific assets); `2` (Scan all expect the specified assets); `3` (Custom assets).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * VSS subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_vSSTaskId;
                    bool m_vSSTaskIdHasBeenSet;

                    /**
                     * CSPM subtask ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cSPMTaskId;
                    bool m_cSPMTaskIdHasBeenSet;

                    /**
                     * CWPP vulnerability scan task IDHost missed scan subtask id
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cWPPOCId;
                    bool m_cWPPOCIdHasBeenSet;

                    /**
                     * CWPP baseline check task ID
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_cWPBlId;
                    bool m_cWPBlIdHasBeenSet;

                    /**
                     * VSS task progess
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_vSSTaskProcess;
                    bool m_vSSTaskProcessHasBeenSet;

                    /**
                     * CSPM task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cSPMTaskProcess;
                    bool m_cSPMTaskProcessHasBeenSet;

                    /**
                     * CWPP vulnerability scan task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cWPPOCProcess;
                    bool m_cWPPOCProcessHasBeenSet;

                    /**
                     * CWPP baseline check task progress
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cWPBlProcess;
                    bool m_cWPBlProcessHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Exception information
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * Day of the month to start the scheduled task
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_startDay;
                    bool m_startDayHasBeenSet;

                    /**
                     * Scan frequency in days. `1`: Every day; `7`: Every seven days; `30`: Every 30 days; `0`: Scan once only
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Number of completed tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_completeNumber;
                    bool m_completeNumberHasBeenSet;

                    /**
                     * Number of scanned assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_completeAssetNumber;
                    bool m_completeAssetNumberHasBeenSet;

                    /**
                     * Number of risks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Assets
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * User `Appid`
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * User name.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Scan task mode: `0` (Standard), `1` (Quick), `2` (Advanced). 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Source of scanning request
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_scanFrom;
                    bool m_scanFromHasBeenSet;

                    /**
                     * Whether it's a limited-time free health check. `0`: No; `1`: Yes
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * Whether the user is authorized to delete this task. `1` :Yes; `0`: No. It's available for multi-account management.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * Source of the task. `0`: Default, `1`: Assistant; `2`: Health check
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_
