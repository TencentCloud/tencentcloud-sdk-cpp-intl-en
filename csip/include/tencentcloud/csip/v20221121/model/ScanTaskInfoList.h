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
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
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
                     * 获取start time of the task
                     * @return StartTime start time of the task
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置start time of the task
                     * @param _startTime start time of the task
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
                     * @return EndTime Task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time
                     * @param _endTime Task end time
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
                     * 获取Cron Format
                     * @return ScanPlanContent Cron Format
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置Cron Format
                     * @param _scanPlanContent Cron Format
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
                     * 获取0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * @return TaskType 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     * @param _taskType 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
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
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param _insertTime Creation time.
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
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Custom Specified Scan Asset Information
                     * @return SelfDefiningAssets Custom Specified Scan Asset Information
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置Custom Specified Scan Asset Information
                     * @param _selfDefiningAssets Custom Specified Scan Asset Information
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
                     * 获取Estimated Time
                     * @return PredictTime Estimated Time
                     * 
                     */
                    int64_t GetPredictTime() const;

                    /**
                     * 设置Estimated Time
                     * @param _predictTime Estimated Time
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
                     * 获取Estimated Completion Time
                     * @return PredictEndTime Estimated Completion Time
                     * 
                     */
                    std::string GetPredictEndTime() const;

                    /**
                     * 设置Estimated Completion Time
                     * @param _predictEndTime Estimated Completion Time
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
                     * 获取Report Count
                     * @return ReportNumber Report Count
                     * 
                     */
                    int64_t GetReportNumber() const;

                    /**
                     * 设置Report Count
                     * @param _reportNumber Report Count
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
                     * @return AssetNumber Number of assets
                     * 
                     */
                    int64_t GetAssetNumber() const;

                    /**
                     * 设置Number of assets
                     * @param _assetNumber Number of assets
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
                     * 获取Scan Status. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Scan Stopped.
                     * @return ScanStatus Scan Status. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Scan Stopped.
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置Scan Status. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Scan Stopped.
                     * @param _scanStatus Scan Status. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Scan Stopped.
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
                     * @return Percent Task progress
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Task progress
                     * @param _percent Task progress
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
                     * @return ScanItem port/poc/weakpass/webcontent/configrisk
                     * 
                     */
                    std::string GetScanItem() const;

                    /**
                     * 设置port/poc/weakpass/webcontent/configrisk
                     * @param _scanItem port/poc/weakpass/webcontent/configrisk
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
                     * 获取0-Full Scan; 1-Specified Asset Scan; 2-Excluded Asset Scan; 3-Custom Specified Asset Scan.
                     * @return ScanAssetType 0-Full Scan; 1-Specified Asset Scan; 2-Excluded Asset Scan; 3-Custom Specified Asset Scan.
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置0-Full Scan; 1-Specified Asset Scan; 2-Excluded Asset Scan; 3-Custom Specified Asset Scan.
                     * @param _scanAssetType 0-Full Scan; 1-Specified Asset Scan; 2-Excluded Asset Scan; 3-Custom Specified Asset Scan.
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
                     * 获取VSS Subtask ID
                     * @return VSSTaskId VSS Subtask ID
                     * 
                     */
                    std::string GetVSSTaskId() const;

                    /**
                     * 设置VSS Subtask ID
                     * @param _vSSTaskId VSS Subtask ID
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
                     * 获取CSPM Subtask ID
                     * @return CSPMTaskId CSPM Subtask ID
                     * 
                     */
                    std::string GetCSPMTaskId() const;

                    /**
                     * 设置CSPM Subtask ID
                     * @param _cSPMTaskId CSPM Subtask ID
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
                     * 获取Host Vulnerability Scan Subtask ID
                     * @return CWPPOCId Host Vulnerability Scan Subtask ID
                     * 
                     */
                    std::string GetCWPPOCId() const;

                    /**
                     * 设置Host Vulnerability Scan Subtask ID
                     * @param _cWPPOCId Host Vulnerability Scan Subtask ID
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
                     * 获取Host Baseline Subtask ID
                     * @return CWPBlId Host Baseline Subtask ID
                     * 
                     */
                    std::string GetCWPBlId() const;

                    /**
                     * 设置Host Baseline Subtask ID
                     * @param _cWPBlId Host Baseline Subtask ID
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
                     * 获取VSS Subtask Progress
                     * @return VSSTaskProcess VSS Subtask Progress
                     * 
                     */
                    int64_t GetVSSTaskProcess() const;

                    /**
                     * 设置VSS Subtask Progress
                     * @param _vSSTaskProcess VSS Subtask Progress
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
                     * 获取CSPM Subtask Progress
                     * @return CSPMTaskProcess CSPM Subtask Progress
                     * 
                     */
                    uint64_t GetCSPMTaskProcess() const;

                    /**
                     * 设置CSPM Subtask Progress
                     * @param _cSPMTaskProcess CSPM Subtask Progress
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
                     * 获取Host Vulnerability Scan Subtask Progress
                     * @return CWPPOCProcess Host Vulnerability Scan Subtask Progress
                     * 
                     */
                    int64_t GetCWPPOCProcess() const;

                    /**
                     * 设置Host Vulnerability Scan Subtask Progress
                     * @param _cWPPOCProcess Host Vulnerability Scan Subtask Progress
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
                     * 获取Host Baseline Subtask Progress
                     * @return CWPBlProcess Host Baseline Subtask Progress
                     * 
                     */
                    uint64_t GetCWPBlProcess() const;

                    /**
                     * 设置Host Baseline Subtask Progress
                     * @param _cWPBlProcess Host Baseline Subtask Progress
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
                     * 获取Exception status code
                     * @return ErrorCode Exception status code
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Exception status code
                     * @param _errorCode Exception status code
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
                     * @return ErrorInfo Exception information
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置Exception information
                     * @param _errorInfo Exception information
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
                     * 获取Number of Days for Periodic Task to Start
                     * @return StartDay Number of Days for Periodic Task to Start
                     * 
                     */
                    int64_t GetStartDay() const;

                    /**
                     * 设置Number of Days for Periodic Task to Start
                     * @param _startDay Number of Days for Periodic Task to Start
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
                     * 获取Scanning Frequency, in Days. 1-Daily; 7-Weekly; 30-Monthly; 0-Scan Once.
                     * @return Frequency Scanning Frequency, in Days. 1-Daily; 7-Weekly; 30-Monthly; 0-Scan Once.
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置Scanning Frequency, in Days. 1-Daily; 7-Weekly; 30-Monthly; 0-Scan Once.
                     * @param _frequency Scanning Frequency, in Days. 1-Daily; 7-Weekly; 30-Monthly; 0-Scan Once.
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
                     * 获取Completion Count
                     * @return CompleteNumber Completion Count
                     * 
                     */
                    int64_t GetCompleteNumber() const;

                    /**
                     * 设置Completion Count
                     * @param _completeNumber Completion Count
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
                     * 获取Completed Asset Count
                     * @return CompleteAssetNumber Completed Asset Count
                     * 
                     */
                    int64_t GetCompleteAssetNumber() const;

                    /**
                     * 设置Completed Asset Count
                     * @param _completeAssetNumber Completed Asset Count
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
                     * 获取risk count
                     * @return RiskCount risk count
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置risk count
                     * @param _riskCount risk count
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
                     * 获取Asset
                     * @return Assets Asset
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置Asset
                     * @param _assets Asset
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
                     * 获取User Appid
                     * @return AppId User Appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User Appid
                     * @param _appId User Appid
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
                     * 获取User Host Account ID
                     * @return UIN User Host Account ID
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置User Host Account ID
                     * @param _uIN User Host Account ID
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
                     * 获取User name
                     * @return UserName User name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name
                     * @param _userName User name
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
                     * 获取Checkup Mode. 0-Standard Mode; 1-Quick Mode; 2-Advanced Mode.
                     * @return TaskMode Checkup Mode. 0-Standard Mode; 1-Quick Mode; 2-Advanced Mode.
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置Checkup Mode. 0-Standard Mode; 1-Quick Mode; 2-Advanced Mode.
                     * @param _taskMode Checkup Mode. 0-Standard Mode; 1-Quick Mode; 2-Advanced Mode.
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
                     * 获取Scan Source
                     * @return ScanFrom Scan Source
                     * 
                     */
                    std::string GetScanFrom() const;

                    /**
                     * 设置Scan Source
                     * @param _scanFrom Scan Source
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
                     * 获取Whether health checkup is limited or exempted. 0-No; 1-Yes.
                     * @return IsFree Whether health checkup is limited or exempted. 0-No; 1-Yes.
                     * 
                     */
                    int64_t GetIsFree() const;

                    /**
                     * 设置Whether health checkup is limited or exempted. 0-No; 1-Yes.
                     * @param _isFree Whether health checkup is limited or exempted. 0-No; 1-Yes.
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
                     * 获取Whether it can be deleted. 1-Yes; 0-No. For use with multi-account management.
                     * @return IsDelete Whether it can be deleted. 1-Yes; 0-No. For use with multi-account management.
                     * 
                     */
                    int64_t GetIsDelete() const;

                    /**
                     * 设置Whether it can be deleted. 1-Yes; 0-No. For use with multi-account management.
                     * @param _isDelete Whether it can be deleted. 1-Yes; 0-No. For use with multi-account management.
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
                     * 获取Task Source Type. 0: Default; 1: Assistant; 2: Health Checkup Items.
                     * @return SourceType Task Source Type. 0: Default; 1: Assistant; 2: Health Checkup Items.
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置Task Source Type. 0: Default; 1: Assistant; 2: Health Checkup Items.
                     * @param _sourceType Task Source Type. 0: Default; 1: Assistant; 2: Health Checkup Items.
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
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * start time of the task
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Cron Format
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * 0-Periodic Task; 1-Scan Now; 2-Scheduled Scan; 3-Custom.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Custom Specified Scan Asset Information
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * Estimated Time
                     */
                    int64_t m_predictTime;
                    bool m_predictTimeHasBeenSet;

                    /**
                     * Estimated Completion Time
                     */
                    std::string m_predictEndTime;
                    bool m_predictEndTimeHasBeenSet;

                    /**
                     * Report Count
                     */
                    int64_t m_reportNumber;
                    bool m_reportNumberHasBeenSet;

                    /**
                     * Number of assets
                     */
                    int64_t m_assetNumber;
                    bool m_assetNumberHasBeenSet;

                    /**
                     * Scan Status. 0-Initial Value; 1-Scanning; 2-Scan Completed; 3-Scan Error; 4-Scan Stopped.
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * Task progress
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * port/poc/weakpass/webcontent/configrisk
                     */
                    std::string m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * 0-Full Scan; 1-Specified Asset Scan; 2-Excluded Asset Scan; 3-Custom Specified Asset Scan.
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * VSS Subtask ID
                     */
                    std::string m_vSSTaskId;
                    bool m_vSSTaskIdHasBeenSet;

                    /**
                     * CSPM Subtask ID
                     */
                    std::string m_cSPMTaskId;
                    bool m_cSPMTaskIdHasBeenSet;

                    /**
                     * Host Vulnerability Scan Subtask ID
                     */
                    std::string m_cWPPOCId;
                    bool m_cWPPOCIdHasBeenSet;

                    /**
                     * Host Baseline Subtask ID
                     */
                    std::string m_cWPBlId;
                    bool m_cWPBlIdHasBeenSet;

                    /**
                     * VSS Subtask Progress
                     */
                    int64_t m_vSSTaskProcess;
                    bool m_vSSTaskProcessHasBeenSet;

                    /**
                     * CSPM Subtask Progress
                     */
                    uint64_t m_cSPMTaskProcess;
                    bool m_cSPMTaskProcessHasBeenSet;

                    /**
                     * Host Vulnerability Scan Subtask Progress
                     */
                    int64_t m_cWPPOCProcess;
                    bool m_cWPPOCProcessHasBeenSet;

                    /**
                     * Host Baseline Subtask Progress
                     */
                    uint64_t m_cWPBlProcess;
                    bool m_cWPBlProcessHasBeenSet;

                    /**
                     * Exception status code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Exception information
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * Number of Days for Periodic Task to Start
                     */
                    int64_t m_startDay;
                    bool m_startDayHasBeenSet;

                    /**
                     * Scanning Frequency, in Days. 1-Daily; 7-Weekly; 30-Monthly; 0-Scan Once.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Completion Count
                     */
                    int64_t m_completeNumber;
                    bool m_completeNumberHasBeenSet;

                    /**
                     * Completed Asset Count
                     */
                    int64_t m_completeAssetNumber;
                    bool m_completeAssetNumberHasBeenSet;

                    /**
                     * risk count
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * Asset
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * User Appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User Host Account ID
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Checkup Mode. 0-Standard Mode; 1-Quick Mode; 2-Advanced Mode.
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * Scan Source
                     */
                    std::string m_scanFrom;
                    bool m_scanFromHasBeenSet;

                    /**
                     * Whether health checkup is limited or exempted. 0-No; 1-Yes.
                     */
                    int64_t m_isFree;
                    bool m_isFreeHasBeenSet;

                    /**
                     * Whether it can be deleted. 1-Yes; 0-No. For use with multi-account management.
                     */
                    int64_t m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * Task Source Type. 0: Default; 1: Assistant; 2: Health Checkup Items.
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFOLIST_H_
