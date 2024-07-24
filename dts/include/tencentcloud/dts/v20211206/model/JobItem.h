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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateAction.h>
#include <tencentcloud/dts/v20211206/model/MigrateDetailInfo.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareTaskInfo.h>
#include <tencentcloud/dts/v20211206/model/TradeInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Migration task list
                */
                class JobItem : public AbstractModel
                {
                public:
                    JobItem();
                    ~JobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobId Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Data migration task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobName Data migration task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Data migration task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jobName Data migration task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task creation (submission) time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Task creation (submission) time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation (submission) time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Task creation (submission) time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task update time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Task update time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task update time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Task update time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Task start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Task start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Task start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task end time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Task end time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Task end time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Migration task error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BriefMsg Migration task error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBriefMsg() const;

                    /**
                     * 设置Migration task error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _briefMsg Migration task error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBriefMsg(const std::string& _briefMsg);

                    /**
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     * 
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `creating` (Creating), `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Valid values: `creating` (Creating), `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values: `creating` (Creating), `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task status. Valid values: `creating` (Creating), `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunMode Task running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Task running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runMode Task running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Expected start time in the format of "2022-07-11 16:20:49", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectRunTime Expected start time in the format of "2022-07-11 16:20:49", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置Expected start time in the format of "2022-07-11 16:20:49", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expectRunTime Expected start time in the format of "2022-07-11 16:20:49", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateAction GetAction() const;

                    /**
                     * 设置Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const MigrateAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Information of the migration task execution process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfo Information of the migration task execution process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateDetailInfo GetStepInfo() const;

                    /**
                     * 设置Information of the migration task execution process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepInfo Information of the migration task execution process
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepInfo(const MigrateDetailInfo& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取Source instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SrcInfo Source instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DBEndpointInfo GetSrcInfo() const;

                    /**
                     * 设置Source instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _srcInfo Source instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSrcInfo(const DBEndpointInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Target database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DstInfo Target database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DBEndpointInfo GetDstInfo() const;

                    /**
                     * 设置Target database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dstInfo Target database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDstInfo(const DBEndpointInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Data consistency check result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CompareTask Data consistency check result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CompareTaskInfo GetCompareTask() const;

                    /**
                     * 设置Data consistency check result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _compareTask Data consistency check result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompareTask(const CompareTaskInfo& _compareTask);

                    /**
                     * 判断参数 CompareTask 是否已赋值
                     * @return CompareTask 是否已赋值
                     * 
                     */
                    bool CompareTaskHasBeenSet() const;

                    /**
                     * 获取Billing status information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TradeInfo Billing status information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TradeInfo GetTradeInfo() const;

                    /**
                     * 设置Billing status information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tradeInfo Billing status information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTradeInfo(const TradeInfo& _tradeInfo);

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     * 
                     */
                    bool TradeInfoHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Information of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRetryTimeRangeMinutes Information of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置Information of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRetryTimeRangeMinutes Information of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DumperResumeCtrl Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDumperResumeCtrl() const;

                    /**
                     * 设置Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dumperResumeCtrl Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDumperResumeCtrl(const std::string& _dumperResumeCtrl);

                    /**
                     * 判断参数 DumperResumeCtrl 是否已赋值
                     * @return DumperResumeCtrl 是否已赋值
                     * 
                     */
                    bool DumperResumeCtrlHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data migration task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task creation (submission) time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task update time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Task start time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task end time in the format of `yyyy-mm-dd hh:mm:ss`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Migration task error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_briefMsg;
                    bool m_briefMsgHasBeenSet;

                    /**
                     * Task status. Valid values: `creating` (Creating), `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Expected start time in the format of "2022-07-11 16:20:49", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Information of the migration task execution process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateDetailInfo m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * Source instance information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DBEndpointInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Target database information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DBEndpointInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Data consistency check result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CompareTaskInfo m_compareTask;
                    bool m_compareTaskHasBeenSet;

                    /**
                     * Billing status information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TradeInfo m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                    /**
                     * Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Information of automatic retry time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * Whether the task can be reentered in the full export stage. Valid values: `yes`, `no`. `yes`: The current task can be reentered. `no`: The current task is in the full export stage which cannot be reentered. If the value of this parameter is `no`, the checkpoint restart is not supported when the task is restarted in the export stage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dumperResumeCtrl;
                    bool m_dumperResumeCtrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_JOBITEM_H_
