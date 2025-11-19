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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyApmInstance request structure.
                */
                class ModifyApmInstanceRequest : public AbstractModel
                {
                public:
                    ModifyApmInstanceRequest();
                    ~ModifyApmInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Tag list.
                     * @return Tags Tag list.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag list.
                     * @param _tags Tag list.
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
                     * 获取Business system description.
                     * @return Description Business system description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Business system description.
                     * @param _description Business system description.
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
                     * 获取Billing switch.
                     * @return OpenBilling Billing switch.
                     * 
                     */
                    bool GetOpenBilling() const;

                    /**
                     * 设置Billing switch.
                     * @param _openBilling Billing switch.
                     * 
                     */
                    void SetOpenBilling(const bool& _openBilling);

                    /**
                     * 判断参数 OpenBilling 是否已赋值
                     * @return OpenBilling 是否已赋值
                     * 
                     */
                    bool OpenBillingHasBeenSet() const;

                    /**
                     * 获取Business system report limit.
                     * @return SpanDailyCounters Business system report limit.
                     * 
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置Business system report limit.
                     * @param _spanDailyCounters Business system report limit.
                     * 
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取Error rate warning line. when the average error rate of the application exceeds this threshold, the system will give an abnormal note.
                     * @return ErrRateThreshold Error rate warning line. when the average error rate of the application exceeds this threshold, the system will give an abnormal note.
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置Error rate warning line. when the average error rate of the application exceeds this threshold, the system will give an abnormal note.
                     * @param _errRateThreshold Error rate warning line. when the average error rate of the application exceeds this threshold, the system will give an abnormal note.
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
                     * 获取Log region, which takes effect after the log feature is enabled.
                     * @return LogRegion Log region, which takes effect after the log feature is enabled.
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置Log region, which takes effect after the log feature is enabled.
                     * @param _logRegion Log region, which takes effect after the log feature is enabled.
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
                     * 获取CLS log topic id, which takes effect after the log feature is enabled.
                     * @return LogTopicID CLS log topic id, which takes effect after the log feature is enabled.
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置CLS log topic id, which takes effect after the log feature is enabled.
                     * @param _logTopicID CLS log topic id, which takes effect after the log feature is enabled.
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
                     * 获取Logset, which takes effect only after the log feature is enabled.
                     * @return LogSet Logset, which takes effect only after the log feature is enabled.
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置Logset, which takes effect only after the log feature is enabled.
                     * @param _logSet Logset, which takes effect only after the log feature is enabled.
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
                     * 获取Log source, which takes effect only after the log feature is enabled.
                     * @return LogSource Log source, which takes effect only after the log feature is enabled.
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置Log source, which takes effect only after the log feature is enabled.
                     * @param _logSource Log source, which takes effect only after the log feature is enabled.
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
                     * 获取Modify billing mode (1: prepaid, 0: pay-as-you-go).
                     * @return PayMode Modify billing mode (1: prepaid, 0: pay-as-you-go).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Modify billing mode (1: prepaid, 0: pay-as-you-go).
                     * @param _payMode Modify billing mode (1: prepaid, 0: pay-as-you-go).
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
                     * 获取Response time warning line.
                     * @return ResponseDurationWarningThreshold Response time warning line.
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置Response time warning line.
                     * @param _responseDurationWarningThreshold Response time warning line.
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
                     * 获取Whether it is free (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition), default 0.
                     * @return Free Whether it is free (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition), default 0.
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置Whether it is free (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition), default 0.
                     * @param _free Whether it is free (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition), default 0.
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
                     * 获取Associated dashboard id, which takes effect after the associated dashboard is enabled.
                     * @return DashboardTopicID Associated dashboard id, which takes effect after the associated dashboard is enabled.
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置Associated dashboard id, which takes effect after the associated dashboard is enabled.
                     * @param _dashboardTopicID Associated dashboard id, which takes effect after the associated dashboard is enabled.
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
                     * 获取SQL injection detection switch (0: off, 1: on).
                     * @return IsSqlInjectionAnalysis SQL injection detection switch (0: off, 1: on).
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置SQL injection detection switch (0: off, 1: on).
                     * @param _isSqlInjectionAnalysis SQL injection detection switch (0: off, 1: on).
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
                     * 获取Whether to enable detection of the remote command attack.
                     * @return IsRemoteCommandExecutionAnalysis Whether to enable detection of the remote command attack.
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置Whether to enable detection of the remote command attack.
                     * @param _isRemoteCommandExecutionAnalysis Whether to enable detection of the remote command attack.
                     * 
                     */
                    void SetIsRemoteCommandExecutionAnalysis(const int64_t& _isRemoteCommandExecutionAnalysis);

                    /**
                     * 判断参数 IsRemoteCommandExecutionAnalysis 是否已赋值
                     * @return IsRemoteCommandExecutionAnalysis 是否已赋值
                     * 
                     */
                    bool IsRemoteCommandExecutionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable detection of Java webshell.
                     * @return IsMemoryHijackingAnalysis Whether to enable detection of Java webshell.
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置Whether to enable detection of Java webshell.
                     * @param _isMemoryHijackingAnalysis Whether to enable detection of Java webshell.
                     * 
                     */
                    void SetIsMemoryHijackingAnalysis(const int64_t& _isMemoryHijackingAnalysis);

                    /**
                     * 判断参数 IsMemoryHijackingAnalysis 是否已赋值
                     * @return IsMemoryHijackingAnalysis 是否已赋值
                     * 
                     */
                    bool IsMemoryHijackingAnalysisHasBeenSet() const;

                    /**
                     * 获取CLS index type. (0 = full-text index; 1 = key-value index).
                     * @return LogIndexType CLS index type. (0 = full-text index; 1 = key-value index).
                     * 
                     */
                    int64_t GetLogIndexType() const;

                    /**
                     * 设置CLS index type. (0 = full-text index; 1 = key-value index).
                     * @param _logIndexType CLS index type. (0 = full-text index; 1 = key-value index).
                     * 
                     */
                    void SetLogIndexType(const int64_t& _logIndexType);

                    /**
                     * 判断参数 LogIndexType 是否已赋值
                     * @return LogIndexType 是否已赋值
                     * 
                     */
                    bool LogIndexTypeHasBeenSet() const;

                    /**
                     * 获取Index key of traceId. It is valid when the CLS index type is key-value index.
                     * @return LogTraceIdKey Index key of traceId. It is valid when the CLS index type is key-value index.
                     * 
                     */
                    std::string GetLogTraceIdKey() const;

                    /**
                     * 设置Index key of traceId. It is valid when the CLS index type is key-value index.
                     * @param _logTraceIdKey Index key of traceId. It is valid when the CLS index type is key-value index.
                     * 
                     */
                    void SetLogTraceIdKey(const std::string& _logTraceIdKey);

                    /**
                     * 判断参数 LogTraceIdKey 是否已赋值
                     * @return LogTraceIdKey 是否已赋值
                     * 
                     */
                    bool LogTraceIdKeyHasBeenSet() const;

                    /**
                     * 获取Whether to enable the detection of deleting arbitrary files. (0 - disabled; 1: enabled.)
                     * @return IsDeleteAnyFileAnalysis Whether to enable the detection of deleting arbitrary files. (0 - disabled; 1: enabled.)
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置Whether to enable the detection of deleting arbitrary files. (0 - disabled; 1: enabled.)
                     * @param _isDeleteAnyFileAnalysis Whether to enable the detection of deleting arbitrary files. (0 - disabled; 1: enabled.)
                     * 
                     */
                    void SetIsDeleteAnyFileAnalysis(const int64_t& _isDeleteAnyFileAnalysis);

                    /**
                     * 判断参数 IsDeleteAnyFileAnalysis 是否已赋值
                     * @return IsDeleteAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsDeleteAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable the detection of reading arbitrary files. (0 - disabled; 1 - enabled.)
                     * @return IsReadAnyFileAnalysis Whether to enable the detection of reading arbitrary files. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置Whether to enable the detection of reading arbitrary files. (0 - disabled; 1 - enabled.)
                     * @param _isReadAnyFileAnalysis Whether to enable the detection of reading arbitrary files. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    void SetIsReadAnyFileAnalysis(const int64_t& _isReadAnyFileAnalysis);

                    /**
                     * 判断参数 IsReadAnyFileAnalysis 是否已赋值
                     * @return IsReadAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsReadAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable the detection of uploading arbitrary files. (0 - disabled; 1 - enabled.)
                     * @return IsUploadAnyFileAnalysis Whether to enable the detection of uploading arbitrary files. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置Whether to enable the detection of uploading arbitrary files. (0 - disabled; 1 - enabled.)
                     * @param _isUploadAnyFileAnalysis Whether to enable the detection of uploading arbitrary files. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    void SetIsUploadAnyFileAnalysis(const int64_t& _isUploadAnyFileAnalysis);

                    /**
                     * 判断参数 IsUploadAnyFileAnalysis 是否已赋值
                     * @return IsUploadAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsUploadAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable the detection of the inclusion of arbitrary files. (0: disabled, 1: enabled.)
                     * @return IsIncludeAnyFileAnalysis Whether to enable the detection of the inclusion of arbitrary files. (0: disabled, 1: enabled.)
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置Whether to enable the detection of the inclusion of arbitrary files. (0: disabled, 1: enabled.)
                     * @param _isIncludeAnyFileAnalysis Whether to enable the detection of the inclusion of arbitrary files. (0: disabled, 1: enabled.)
                     * 
                     */
                    void SetIsIncludeAnyFileAnalysis(const int64_t& _isIncludeAnyFileAnalysis);

                    /**
                     * 判断参数 IsIncludeAnyFileAnalysis 是否已赋值
                     * @return IsIncludeAnyFileAnalysis 是否已赋值
                     * 
                     */
                    bool IsIncludeAnyFileAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable traversal detection of the directory. (0 - disabled; 1 - enabled).
                     * @return IsDirectoryTraversalAnalysis Whether to enable traversal detection of the directory. (0 - disabled; 1 - enabled).
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置Whether to enable traversal detection of the directory. (0 - disabled; 1 - enabled).
                     * @param _isDirectoryTraversalAnalysis Whether to enable traversal detection of the directory. (0 - disabled; 1 - enabled).
                     * 
                     */
                    void SetIsDirectoryTraversalAnalysis(const int64_t& _isDirectoryTraversalAnalysis);

                    /**
                     * 判断参数 IsDirectoryTraversalAnalysis 是否已赋值
                     * @return IsDirectoryTraversalAnalysis 是否已赋值
                     * 
                     */
                    bool IsDirectoryTraversalAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable template engine injection detection. (0: disabled; 1: enabled.)
                     * @return IsTemplateEngineInjectionAnalysis Whether to enable template engine injection detection. (0: disabled; 1: enabled.)
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable template engine injection detection. (0: disabled; 1: enabled.)
                     * @param _isTemplateEngineInjectionAnalysis Whether to enable template engine injection detection. (0: disabled; 1: enabled.)
                     * 
                     */
                    void SetIsTemplateEngineInjectionAnalysis(const int64_t& _isTemplateEngineInjectionAnalysis);

                    /**
                     * 判断参数 IsTemplateEngineInjectionAnalysis 是否已赋值
                     * @return IsTemplateEngineInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsTemplateEngineInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable script engine injection detection. (0 - disabled; 1 - enabled.)
                     * @return IsScriptEngineInjectionAnalysis Whether to enable script engine injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable script engine injection detection. (0 - disabled; 1 - enabled.)
                     * @param _isScriptEngineInjectionAnalysis Whether to enable script engine injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    void SetIsScriptEngineInjectionAnalysis(const int64_t& _isScriptEngineInjectionAnalysis);

                    /**
                     * 判断参数 IsScriptEngineInjectionAnalysis 是否已赋值
                     * @return IsScriptEngineInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsScriptEngineInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable expression injection detection. (0 - disabled; 1 - enabled.)
                     * @return IsExpressionInjectionAnalysis Whether to enable expression injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable expression injection detection. (0 - disabled; 1 - enabled.)
                     * @param _isExpressionInjectionAnalysis Whether to enable expression injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    void SetIsExpressionInjectionAnalysis(const int64_t& _isExpressionInjectionAnalysis);

                    /**
                     * 判断参数 IsExpressionInjectionAnalysis 是否已赋值
                     * @return IsExpressionInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsExpressionInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable JNDI injection detection. (0 - disabled; 1 - enabled.)
                     * @return IsJNDIInjectionAnalysis Whether to enable JNDI injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    int64_t GetIsJNDIInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable JNDI injection detection. (0 - disabled; 1 - enabled.)
                     * @param _isJNDIInjectionAnalysis Whether to enable JNDI injection detection. (0 - disabled; 1 - enabled.)
                     * 
                     */
                    void SetIsJNDIInjectionAnalysis(const int64_t& _isJNDIInjectionAnalysis);

                    /**
                     * 判断参数 IsJNDIInjectionAnalysis 是否已赋值
                     * @return IsJNDIInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJNDIInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable JNI injection detection. (0 - disabled, 1 - enabled).
                     * @return IsJNIInjectionAnalysis Whether to enable JNI injection detection. (0 - disabled, 1 - enabled).
                     * 
                     */
                    int64_t GetIsJNIInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable JNI injection detection. (0 - disabled, 1 - enabled).
                     * @param _isJNIInjectionAnalysis Whether to enable JNI injection detection. (0 - disabled, 1 - enabled).
                     * 
                     */
                    void SetIsJNIInjectionAnalysis(const int64_t& _isJNIInjectionAnalysis);

                    /**
                     * 判断参数 IsJNIInjectionAnalysis 是否已赋值
                     * @return IsJNIInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJNIInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable Webshell backdoor detection. (0 - disabled; 1 - enabled).
                     * @return IsWebshellBackdoorAnalysis Whether to enable Webshell backdoor detection. (0 - disabled; 1 - enabled).
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置Whether to enable Webshell backdoor detection. (0 - disabled; 1 - enabled).
                     * @param _isWebshellBackdoorAnalysis Whether to enable Webshell backdoor detection. (0 - disabled; 1 - enabled).
                     * 
                     */
                    void SetIsWebshellBackdoorAnalysis(const int64_t& _isWebshellBackdoorAnalysis);

                    /**
                     * 判断参数 IsWebshellBackdoorAnalysis 是否已赋值
                     * @return IsWebshellBackdoorAnalysis 是否已赋值
                     * 
                     */
                    bool IsWebshellBackdoorAnalysisHasBeenSet() const;

                    /**
                     * 获取Whether to enable deserialization detection. (0 - disabled; 1 - enabled).
                     * @return IsDeserializationAnalysis Whether to enable deserialization detection. (0 - disabled; 1 - enabled).
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置Whether to enable deserialization detection. (0 - disabled; 1 - enabled).
                     * @param _isDeserializationAnalysis Whether to enable deserialization detection. (0 - disabled; 1 - enabled).
                     * 
                     */
                    void SetIsDeserializationAnalysis(const int64_t& _isDeserializationAnalysis);

                    /**
                     * 判断参数 IsDeserializationAnalysis 是否已赋值
                     * @return IsDeserializationAnalysis 是否已赋值
                     * 
                     */
                    bool IsDeserializationAnalysisHasBeenSet() const;

                    /**
                     * 获取Convergence threshold for URL long segments.
                     * @return UrlLongSegmentThreshold Convergence threshold for URL long segments.
                     * 
                     */
                    int64_t GetUrlLongSegmentThreshold() const;

                    /**
                     * 设置Convergence threshold for URL long segments.
                     * @param _urlLongSegmentThreshold Convergence threshold for URL long segments.
                     * 
                     */
                    void SetUrlLongSegmentThreshold(const int64_t& _urlLongSegmentThreshold);

                    /**
                     * 判断参数 UrlLongSegmentThreshold 是否已赋值
                     * @return UrlLongSegmentThreshold 是否已赋值
                     * 
                     */
                    bool UrlLongSegmentThresholdHasBeenSet() const;

                    /**
                     * 获取Convergence threshold for URL numerical segments.
                     * @return UrlNumberSegmentThreshold Convergence threshold for URL numerical segments.
                     * 
                     */
                    int64_t GetUrlNumberSegmentThreshold() const;

                    /**
                     * 设置Convergence threshold for URL numerical segments.
                     * @param _urlNumberSegmentThreshold Convergence threshold for URL numerical segments.
                     * 
                     */
                    void SetUrlNumberSegmentThreshold(const int64_t& _urlNumberSegmentThreshold);

                    /**
                     * 判断参数 UrlNumberSegmentThreshold 是否已赋值
                     * @return UrlNumberSegmentThreshold 是否已赋值
                     * 
                     */
                    bool UrlNumberSegmentThresholdHasBeenSet() const;

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
                     * Tag list.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Business system description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Retention period of trace data (unit: days).
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * Billing switch.
                     */
                    bool m_openBilling;
                    bool m_openBillingHasBeenSet;

                    /**
                     * Business system report limit.
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * Error rate warning line. when the average error rate of the application exceeds this threshold, the system will give an abnormal note.
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
                     * Log feature switch (0: off; 1: on).
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * Log region, which takes effect after the log feature is enabled.
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * CLS log topic id, which takes effect after the log feature is enabled.
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * Logset, which takes effect only after the log feature is enabled.
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Log source, which takes effect only after the log feature is enabled.
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * List of custom display tags.
                     */
                    std::vector<std::string> m_customShowTags;
                    bool m_customShowTagsHasBeenSet;

                    /**
                     * Modify billing mode (1: prepaid, 0: pay-as-you-go).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Response time warning line.
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * Whether it is free (0 = paid edition; 1 = tsf restricted free edition; 2 = free edition), default 0.
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                    /**
                     * Whether to associate the dashboard (0 = off, 1 = on).
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * Associated dashboard id, which takes effect after the associated dashboard is enabled.
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * SQL injection detection switch (0: off, 1: on).
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable component vulnerability detection (0 = no, 1 = yes).
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * Whether to enable detection of the remote command attack.
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * Whether to enable detection of Java webshell.
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * CLS index type. (0 = full-text index; 1 = key-value index).
                     */
                    int64_t m_logIndexType;
                    bool m_logIndexTypeHasBeenSet;

                    /**
                     * Index key of traceId. It is valid when the CLS index type is key-value index.
                     */
                    std::string m_logTraceIdKey;
                    bool m_logTraceIdKeyHasBeenSet;

                    /**
                     * Whether to enable the detection of deleting arbitrary files. (0 - disabled; 1: enabled.)
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * Whether to enable the detection of reading arbitrary files. (0 - disabled; 1 - enabled.)
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * Whether to enable the detection of uploading arbitrary files. (0 - disabled; 1 - enabled.)
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * Whether to enable the detection of the inclusion of arbitrary files. (0: disabled, 1: enabled.)
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * Whether to enable traversal detection of the directory. (0 - disabled; 1 - enabled).
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * Whether to enable template engine injection detection. (0: disabled; 1: enabled.)
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable script engine injection detection. (0 - disabled; 1 - enabled.)
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable expression injection detection. (0 - disabled; 1 - enabled.)
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable JNDI injection detection. (0 - disabled; 1 - enabled.)
                     */
                    int64_t m_isJNDIInjectionAnalysis;
                    bool m_isJNDIInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable JNI injection detection. (0 - disabled, 1 - enabled).
                     */
                    int64_t m_isJNIInjectionAnalysis;
                    bool m_isJNIInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable Webshell backdoor detection. (0 - disabled; 1 - enabled).
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * Whether to enable deserialization detection. (0 - disabled; 1 - enabled).
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * Convergence threshold for URL long segments.
                     */
                    int64_t m_urlLongSegmentThreshold;
                    bool m_urlLongSegmentThresholdHasBeenSet;

                    /**
                     * Convergence threshold for URL numerical segments.
                     */
                    int64_t m_urlNumberSegmentThreshold;
                    bool m_urlNumberSegmentThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
