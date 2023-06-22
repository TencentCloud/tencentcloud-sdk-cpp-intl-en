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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MigrateAction.h>
#include <tencentcloud/dts/v20211206/model/MigrateDetailInfo.h>
#include <tencentcloud/dts/v20211206/model/DBEndpointInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareTaskInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/MigrateOption.h>
#include <tencentcloud/dts/v20211206/model/CheckStepInfo.h>
#include <tencentcloud/dts/v20211206/model/TradeInfo.h>
#include <tencentcloud/dts/v20211206/model/ErrorInfoItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationDetail response structure.
                */
                class DescribeMigrationDetailResponse : public AbstractModel
                {
                public:
                    DescribeMigrationDetailResponse();
                    ~DescribeMigrationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobId Data migration task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobId() const;

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
                     * 判断参数 BriefMsg 是否已赋值
                     * @return BriefMsg 是否已赋值
                     * 
                     */
                    bool BriefMsgHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Valid values: `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateAction GetAction() const;

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Information of the migration task execution process. The check and migration step information will be displayed in the check and migration stages respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfo Information of the migration task execution process. The check and migration step information will be displayed in the check and migration stages respectively.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateDetailInfo GetStepInfo() const;

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
                     * 判断参数 CompareTask 是否已赋值
                     * @return CompareTask 是否已赋值
                     * 
                     */
                    bool CompareTaskHasBeenSet() const;

                    /**
                     * 获取Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunMode Running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpectRunTime Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     * 
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取Migration options, which describe how the task performs migration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MigrateOption Migration options, which describe how the task performs migration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MigrateOption GetMigrateOption() const;

                    /**
                     * 判断参数 MigrateOption 是否已赋值
                     * @return MigrateOption 是否已赋值
                     * 
                     */
                    bool MigrateOptionHasBeenSet() const;

                    /**
                     * 获取Check task running details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckStepInfo Check task running details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CheckStepInfo GetCheckStepInfo() const;

                    /**
                     * 判断参数 CheckStepInfo 是否已赋值
                     * @return CheckStepInfo 是否已赋值
                     * 
                     */
                    bool CheckStepInfoHasBeenSet() const;

                    /**
                     * 获取Billing information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TradeInfo Billing information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TradeInfo GetTradeInfo() const;

                    /**
                     * 判断参数 TradeInfo 是否已赋值
                     * @return TradeInfo 是否已赋值
                     * 
                     */
                    bool TradeInfoHasBeenSet() const;

                    /**
                     * 获取Task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorInfo Task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ErrorInfoItem> GetErrorInfo() const;

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

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
                     * Task status. Valid values: `created`(Created), `checking` (Checking), `checkPass` (Check passed), `checkNotPass` (Check not passed), `readyRun` (Ready for running), `running` (Running), `readyComplete` (Preparation completed), `success` (Successful), `failed` (Failed), `stopping` (Stopping), `completing` (Completing), `pausing` (Pausing), `manualPaused` (Paused). Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task operation information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Information of the migration task execution process. The check and migration step information will be displayed in the check and migration stages respectively.
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
                     * Tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Running mode. Valid values: `immediate`, `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `timed`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * Migration options, which describe how the task performs migration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MigrateOption m_migrateOption;
                    bool m_migrateOptionHasBeenSet;

                    /**
                     * Check task running details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CheckStepInfo m_checkStepInfo;
                    bool m_checkStepInfoHasBeenSet;

                    /**
                     * Billing information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TradeInfo m_tradeInfo;
                    bool m_tradeInfoHasBeenSet;

                    /**
                     * Task error information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ErrorInfoItem> m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONDETAILRESPONSE_H_
