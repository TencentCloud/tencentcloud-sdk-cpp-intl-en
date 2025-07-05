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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * APM business system information.
                */
                class ApmInstanceDetail : public AbstractModel
                {
                public:
                    ApmInstanceDetail();
                    ~ApmInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Business system id.
                     * @return InstanceId Business system id.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceId Business system id.
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
                     * 获取Business system name.
                     * @return Name Business system name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Business system name.
                     * @param _name Business system name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Business system description information.
                     * @return Description Business system description information.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Business system description information.
                     * @param _description Business system description information.
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
                     * 获取Status of the business system.
{Initializing; running; throttling}.
                     * @return Status Status of the business system.
{Initializing; running; throttling}.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status of the business system.
{Initializing; running; throttling}.
                     * @param _status Status of the business system.
{Initializing; running; throttling}.
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
                     * 获取Region where the business system belongs.
                     * @return Region Region where the business system belongs.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region where the business system belongs.
                     * @param _region Region where the business system belongs.
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
                     * 获取Business system tag list.
                     * @return Tags Business system tag list.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Business system tag list.
                     * @param _tags Business system tag list.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取AppID information.
                     * @return AppId AppID information.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppID information.
                     * @param _appId AppID information.
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
                     * 获取Creator uin.
                     * @return CreateUin Creator uin.
                     * 
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置Creator uin.
                     * @param _createUin Creator uin.
                     * 
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Storage used (unit: mb).
                     * @return AmountOfUsedStorage Storage used (unit: mb).
                     * 
                     */
                    double GetAmountOfUsedStorage() const;

                    /**
                     * 设置Storage used (unit: mb).
                     * @param _amountOfUsedStorage Storage used (unit: mb).
                     * 
                     */
                    void SetAmountOfUsedStorage(const double& _amountOfUsedStorage);

                    /**
                     * 判断参数 AmountOfUsedStorage 是否已赋值
                     * @return AmountOfUsedStorage 是否已赋值
                     * 
                     */
                    bool AmountOfUsedStorageHasBeenSet() const;

                    /**
                     * 获取Quantity of server applications of the business system.
                     * @return ServiceCount Quantity of server applications of the business system.
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置Quantity of server applications of the business system.
                     * @param _serviceCount Quantity of server applications of the business system.
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Average daily reported span count.
                     * @return CountOfReportSpanPerDay Average daily reported span count.
                     * 
                     */
                    int64_t GetCountOfReportSpanPerDay() const;

                    /**
                     * 设置Average daily reported span count.
                     * @param _countOfReportSpanPerDay Average daily reported span count.
                     * 
                     */
                    void SetCountOfReportSpanPerDay(const int64_t& _countOfReportSpanPerDay);

                    /**
                     * 判断参数 CountOfReportSpanPerDay 是否已赋值
                     * @return CountOfReportSpanPerDay 是否已赋值
                     * 
                     */
                    bool CountOfReportSpanPerDayHasBeenSet() const;

                    /**
                     * 获取Retention period of trace data (unit: days).
                     * @return TraceDuration Retention period of trace data (unit: days).
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Retention period of trace data (unit: days).
                     * @param _traceDuration Retention period of trace data (unit: days).
                     * 
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     * 
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取Business system report limit.
                     * @return SpanDailyCounters Business system report limit.
                     * 
                     */
                    int64_t GetSpanDailyCounters() const;

                    /**
                     * 设置Business system report limit.
                     * @param _spanDailyCounters Business system report limit.
                     * 
                     */
                    void SetSpanDailyCounters(const int64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取Whether the business system billing is Activated (0 = not activated, 1 = activated).
                     * @return BillingInstance Whether the business system billing is Activated (0 = not activated, 1 = activated).
                     * 
                     */
                    int64_t GetBillingInstance() const;

                    /**
                     * 设置Whether the business system billing is Activated (0 = not activated, 1 = activated).
                     * @param _billingInstance Whether the business system billing is Activated (0 = not activated, 1 = activated).
                     * 
                     */
                    void SetBillingInstance(const int64_t& _billingInstance);

                    /**
                     * 判断参数 BillingInstance 是否已赋值
                     * @return BillingInstance 是否已赋值
                     * 
                     */
                    bool BillingInstanceHasBeenSet() const;

                    /**
                     * 获取Error warning line (unit: %).
                     * @return ErrRateThreshold Error warning line (unit: %).
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置Error warning line (unit: %).
                     * @param _errRateThreshold Error warning line (unit: %).
                     * 
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     * 
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取Sampling rate (unit: %).
                     * @return SampleRate Sampling rate (unit: %).
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Sampling rate (unit: %).
                     * @param _sampleRate Sampling rate (unit: %).
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Error sampling switch (0: off, 1: on).
                     * @return ErrorSample Error sampling switch (0: off, 1: on).
                     * 
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置Error sampling switch (0: off, 1: on).
                     * @param _errorSample Error sampling switch (0: off, 1: on).
                     * 
                     */
                    void SetErrorSample(const int64_t& _errorSample);

                    /**
                     * 判断参数 ErrorSample 是否已赋值
                     * @return ErrorSample 是否已赋值
                     * 
                     */
                    bool ErrorSampleHasBeenSet() const;

                    /**
                     * 获取Sampling slow call saving threshold (unit: ms).
                     * @return SlowRequestSavedThreshold Sampling slow call saving threshold (unit: ms).
                     * 
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置Sampling slow call saving threshold (unit: ms).
                     * @param _slowRequestSavedThreshold Sampling slow call saving threshold (unit: ms).
                     * 
                     */
                    void SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold);

                    /**
                     * 判断参数 SlowRequestSavedThreshold 是否已赋值
                     * @return SlowRequestSavedThreshold 是否已赋值
                     * 
                     */
                    bool SlowRequestSavedThresholdHasBeenSet() const;

                    /**
                     * 获取CLS log region.
                     * @return LogRegion CLS log region.
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置CLS log region.
                     * @param _logRegion CLS log region.
                     * 
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     * 
                     */
                    bool LogRegionHasBeenSet() const;

                    /**
                     * 获取Log source.
                     * @return LogSource Log source.
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置Log source.
                     * @param _logSource Log source.
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                    /**
                     * 获取Log feature switch (0: off; 1: on).
                     * @return IsRelatedLog Log feature switch (0: off; 1: on).
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置Log feature switch (0: off; 1: on).
                     * @param _isRelatedLog Log feature switch (0: off; 1: on).
                     * 
                     */
                    void SetIsRelatedLog(const int64_t& _isRelatedLog);

                    /**
                     * 判断参数 IsRelatedLog 是否已赋值
                     * @return IsRelatedLog 是否已赋值
                     * 
                     */
                    bool IsRelatedLogHasBeenSet() const;

                    /**
                     * 获取Log topic id.
                     * @return LogTopicID Log topic id.
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置Log topic id.
                     * @param _logTopicID Log topic id.
                     * 
                     */
                    void SetLogTopicID(const std::string& _logTopicID);

                    /**
                     * 判断参数 LogTopicID 是否已赋值
                     * @return LogTopicID 是否已赋值
                     * 
                     */
                    bool LogTopicIDHasBeenSet() const;

                    /**
                     * 获取Quantity of client applications of the business system.
                     * @return ClientCount Quantity of client applications of the business system.
                     * 
                     */
                    int64_t GetClientCount() const;

                    /**
                     * 设置Quantity of client applications of the business system.
                     * @param _clientCount Quantity of client applications of the business system.
                     * 
                     */
                    void SetClientCount(const int64_t& _clientCount);

                    /**
                     * 判断参数 ClientCount 是否已赋值
                     * @return ClientCount 是否已赋值
                     * 
                     */
                    bool ClientCountHasBeenSet() const;

                    /**
                     * 获取The quantity of active applications in this business system in the last two days.
                     * @return TotalCount The quantity of active applications in this business system in the last two days.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置The quantity of active applications in this business system in the last two days.
                     * @param _totalCount The quantity of active applications in this business system in the last two days.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取CLS log set.
                     * @return LogSet CLS log set.
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS log set.
                     * @param _logSet CLS log set.
                     * 
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     * 
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取Retention period of metric data (unit: days).
                     * @return MetricDuration Retention period of metric data (unit: days).
                     * 
                     */
                    int64_t GetMetricDuration() const;

                    /**
                     * 设置Retention period of metric data (unit: days).
                     * @param _metricDuration Retention period of metric data (unit: days).
                     * 
                     */
                    void SetMetricDuration(const int64_t& _metricDuration);

                    /**
                     * 判断参数 MetricDuration 是否已赋值
                     * @return MetricDuration 是否已赋值
                     * 
                     */
                    bool MetricDurationHasBeenSet() const;

                    /**
                     * 获取List of custom display tags.
                     * @return CustomShowTags List of custom display tags.
                     * 
                     */
                    std::vector<std::string> GetCustomShowTags() const;

                    /**
                     * 设置List of custom display tags.
                     * @param _customShowTags List of custom display tags.
                     * 
                     */
                    void SetCustomShowTags(const std::vector<std::string>& _customShowTags);

                    /**
                     * 判断参数 CustomShowTags 是否已赋值
                     * @return CustomShowTags 是否已赋值
                     * 
                     */
                    bool CustomShowTagsHasBeenSet() const;

                    /**
                     * 获取Business system billing mode (1: prepaid, 0: pay-as-you-go).
                     * @return PayMode Business system billing mode (1: prepaid, 0: pay-as-you-go).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Business system billing mode (1: prepaid, 0: pay-as-you-go).
                     * @param _payMode Business system billing mode (1: prepaid, 0: pay-as-you-go).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Indicates whether the billing mode of the business system takes effect.
                     * @return PayModeEffective Indicates whether the billing mode of the business system takes effect.
                     * 
                     */
                    bool GetPayModeEffective() const;

                    /**
                     * 设置Indicates whether the billing mode of the business system takes effect.
                     * @param _payModeEffective Indicates whether the billing mode of the business system takes effect.
                     * 
                     */
                    void SetPayModeEffective(const bool& _payModeEffective);

                    /**
                     * 判断参数 PayModeEffective 是否已赋值
                     * @return PayModeEffective 是否已赋值
                     * 
                     */
                    bool PayModeEffectiveHasBeenSet() const;

                    /**
                     * 获取Response time warning line (unit: ms).
                     * @return ResponseDurationWarningThreshold Response time warning line (unit: ms).
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置Response time warning line (unit: ms).
                     * @param _responseDurationWarningThreshold Response time warning line (unit: ms).
                     * 
                     */
                    void SetResponseDurationWarningThreshold(const int64_t& _responseDurationWarningThreshold);

                    /**
                     * 判断参数 ResponseDurationWarningThreshold 是否已赋值
                     * @return ResponseDurationWarningThreshold 是否已赋值
                     * 
                     */
                    bool ResponseDurationWarningThresholdHasBeenSet() const;

                    /**
                     * 获取Whether it is free (0 = no; 1 = limited free; 2 = completely free), default 0.
                     * @return Free Whether it is free (0 = no; 1 = limited free; 2 = completely free), default 0.
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置Whether it is free (0 = no; 1 = limited free; 2 = completely free), default 0.
                     * @param _free Whether it is free (0 = no; 1 = limited free; 2 = completely free), default 0.
                     * 
                     */
                    void SetFree(const int64_t& _free);

                    /**
                     * 判断参数 Free 是否已赋值
                     * @return Free 是否已赋值
                     * 
                     */
                    bool FreeHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is the default business system of tsf (0 = no, 1 = yes).
                     * @return DefaultTSF Indicates whether it is the default business system of tsf (0 = no, 1 = yes).
                     * 
                     */
                    int64_t GetDefaultTSF() const;

                    /**
                     * 设置Indicates whether it is the default business system of tsf (0 = no, 1 = yes).
                     * @param _defaultTSF Indicates whether it is the default business system of tsf (0 = no, 1 = yes).
                     * 
                     */
                    void SetDefaultTSF(const int64_t& _defaultTSF);

                    /**
                     * 判断参数 DefaultTSF 是否已赋值
                     * @return DefaultTSF 是否已赋值
                     * 
                     */
                    bool DefaultTSFHasBeenSet() const;

                    /**
                     * 获取Whether to associate the dashboard (0 = off, 1 = on).
                     * @return IsRelatedDashboard Whether to associate the dashboard (0 = off, 1 = on).
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置Whether to associate the dashboard (0 = off, 1 = on).
                     * @param _isRelatedDashboard Whether to associate the dashboard (0 = off, 1 = on).
                     * 
                     */
                    void SetIsRelatedDashboard(const int64_t& _isRelatedDashboard);

                    /**
                     * 判断参数 IsRelatedDashboard 是否已赋值
                     * @return IsRelatedDashboard 是否已赋值
                     * 
                     */
                    bool IsRelatedDashboardHasBeenSet() const;

                    /**
                     * 获取Associated dashboard id.
                     * @return DashboardTopicID Associated dashboard id.
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置Associated dashboard id.
                     * @param _dashboardTopicID Associated dashboard id.
                     * 
                     */
                    void SetDashboardTopicID(const std::string& _dashboardTopicID);

                    /**
                     * 判断参数 DashboardTopicID 是否已赋值
                     * @return DashboardTopicID 是否已赋值
                     * 
                     */
                    bool DashboardTopicIDHasBeenSet() const;

                    /**
                     * 获取Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     * @return IsInstrumentationVulnerabilityScan Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     * @param _isInstrumentationVulnerabilityScan Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     * 
                     */
                    void SetIsInstrumentationVulnerabilityScan(const int64_t& _isInstrumentationVulnerabilityScan);

                    /**
                     * 判断参数 IsInstrumentationVulnerabilityScan 是否已赋值
                     * @return IsInstrumentationVulnerabilityScan 是否已赋值
                     * 
                     */
                    bool IsInstrumentationVulnerabilityScanHasBeenSet() const;

                    /**
                     * 获取Whether to enable sql injection analysis (0: off, 1: on).
                     * @return IsSqlInjectionAnalysis Whether to enable sql injection analysis (0: off, 1: on).
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable sql injection analysis (0: off, 1: on).
                     * @param _isSqlInjectionAnalysis Whether to enable sql injection analysis (0: off, 1: on).
                     * 
                     */
                    void SetIsSqlInjectionAnalysis(const int64_t& _isSqlInjectionAnalysis);

                    /**
                     * 判断参数 IsSqlInjectionAnalysis 是否已赋值
                     * @return IsSqlInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsSqlInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Reasons for traffic throttling.
Official version quota;.
Trial version quota.
Trial version expiration;.
Account in arrears.
}.
                     * @return StopReason Reasons for traffic throttling.
Official version quota;.
Trial version quota.
Trial version expiration;.
Account in arrears.
}.
                     * 
                     */
                    int64_t GetStopReason() const;

                    /**
                     * 设置Reasons for traffic throttling.
Official version quota;.
Trial version quota.
Trial version expiration;.
Account in arrears.
}.
                     * @param _stopReason Reasons for traffic throttling.
Official version quota;.
Trial version quota.
Trial version expiration;.
Account in arrears.
}.
                     * 
                     */
                    void SetStopReason(const int64_t& _stopReason);

                    /**
                     * 判断参数 StopReason 是否已赋值
                     * @return StopReason 是否已赋值
                     * 
                     */
                    bool StopReasonHasBeenSet() const;

                private:

                    /**
                     * Business system id.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Business system name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Business system description information.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status of the business system.
{Initializing; running; throttling}.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region where the business system belongs.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Business system tag list.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * AppID information.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Creator uin.
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Storage used (unit: mb).
                     */
                    double m_amountOfUsedStorage;
                    bool m_amountOfUsedStorageHasBeenSet;

                    /**
                     * Quantity of server applications of the business system.
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Average daily reported span count.
                     */
                    int64_t m_countOfReportSpanPerDay;
                    bool m_countOfReportSpanPerDayHasBeenSet;

                    /**
                     * Retention period of trace data (unit: days).
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * Business system report limit.
                     */
                    int64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * Whether the business system billing is Activated (0 = not activated, 1 = activated).
                     */
                    int64_t m_billingInstance;
                    bool m_billingInstanceHasBeenSet;

                    /**
                     * Error warning line (unit: %).
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * Sampling rate (unit: %).
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Error sampling switch (0: off, 1: on).
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * Sampling slow call saving threshold (unit: ms).
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                    /**
                     * CLS log region.
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * Log source.
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * Log feature switch (0: off; 1: on).
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * Log topic id.
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * Quantity of client applications of the business system.
                     */
                    int64_t m_clientCount;
                    bool m_clientCountHasBeenSet;

                    /**
                     * The quantity of active applications in this business system in the last two days.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * CLS log set.
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Retention period of metric data (unit: days).
                     */
                    int64_t m_metricDuration;
                    bool m_metricDurationHasBeenSet;

                    /**
                     * List of custom display tags.
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * Business system billing mode (1: prepaid, 0: pay-as-you-go).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Indicates whether the billing mode of the business system takes effect.
                     */
                    bool m_payModeEffective;
                    bool m_payModeEffectiveHasBeenSet;

                    /**
                     * Response time warning line (unit: ms).
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * Whether it is free (0 = no; 1 = limited free; 2 = completely free), default 0.
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * Indicates whether it is the default business system of tsf (0 = no, 1 = yes).
                     */
                    int64_t m_defaultTSF;
                    bool m_defaultTSFHasBeenSet;

                    /**
                     * Whether to associate the dashboard (0 = off, 1 = on).
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * Associated dashboard id.
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * Whether to enable sql injection analysis (0: off, 1: on).
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * Reasons for traffic throttling.
Official version quota;.
Trial version quota.
Trial version expiration;.
Account in arrears.
}.
                     */
                    int64_t m_stopReason;
                    bool m_stopReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMINSTANCEDETAIL_H_
