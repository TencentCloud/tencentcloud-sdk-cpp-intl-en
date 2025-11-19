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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Instrument.h>
#include <tencentcloud/apm/v20210622/model/AgentOperationConfigView.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyApmApplicationConfig request structure.
                */
                class ModifyApmApplicationConfigRequest : public AbstractModel
                {
                public:
                    ModifyApmApplicationConfigRequest();
                    ~ModifyApmApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business system ID.
                     * @return InstanceId Business system ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Business system ID.
                     * @param _instanceId Business system ID.
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
                     * 获取Application name
                     * @return ServiceName Application name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name
                     * @param _serviceName Application name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取URL convergence switch. 0: Off; 1: On
                     * @return UrlConvergenceSwitch URL convergence switch. 0: Off; 1: On
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置URL convergence switch. 0: Off; 1: On
                     * @param _urlConvergenceSwitch URL convergence switch. 0: Off; 1: On
                     * 
                     */
                    void SetUrlConvergenceSwitch(const int64_t& _urlConvergenceSwitch);

                    /**
                     * 判断参数 UrlConvergenceSwitch 是否已赋值
                     * @return UrlConvergenceSwitch 是否已赋值
                     * 
                     */
                    bool UrlConvergenceSwitchHasBeenSet() const;

                    /**
                     * 获取URL convergence threshold
                     * @return UrlConvergenceThreshold URL convergence threshold
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置URL convergence threshold
                     * @param _urlConvergenceThreshold URL convergence threshold
                     * 
                     */
                    void SetUrlConvergenceThreshold(const int64_t& _urlConvergenceThreshold);

                    /**
                     * 判断参数 UrlConvergenceThreshold 是否已赋值
                     * @return UrlConvergenceThreshold 是否已赋值
                     * 
                     */
                    bool UrlConvergenceThresholdHasBeenSet() const;

                    /**
                     * 获取Regex rules for exception filtering, separated by commas
                     * @return ExceptionFilter Regex rules for exception filtering, separated by commas
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置Regex rules for exception filtering, separated by commas
                     * @param _exceptionFilter Regex rules for exception filtering, separated by commas
                     * 
                     */
                    void SetExceptionFilter(const std::string& _exceptionFilter);

                    /**
                     * 判断参数 ExceptionFilter 是否已赋值
                     * @return ExceptionFilter 是否已赋值
                     * 
                     */
                    bool ExceptionFilterHasBeenSet() const;

                    /**
                     * 获取Regex rules for URL convergence, separated by commas
                     * @return UrlConvergence Regex rules for URL convergence, separated by commas
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置Regex rules for URL convergence, separated by commas
                     * @param _urlConvergence Regex rules for URL convergence, separated by commas
                     * 
                     */
                    void SetUrlConvergence(const std::string& _urlConvergence);

                    /**
                     * 判断参数 UrlConvergence 是否已赋值
                     * @return UrlConvergence 是否已赋值
                     * 
                     */
                    bool UrlConvergenceHasBeenSet() const;

                    /**
                     * 获取Error code filtering, separated by commas
                     * @return ErrorCodeFilter Error code filtering, separated by commas
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置Error code filtering, separated by commas
                     * @param _errorCodeFilter Error code filtering, separated by commas
                     * 
                     */
                    void SetErrorCodeFilter(const std::string& _errorCodeFilter);

                    /**
                     * 判断参数 ErrorCodeFilter 是否已赋值
                     * @return ErrorCodeFilter 是否已赋值
                     * 
                     */
                    bool ErrorCodeFilterHasBeenSet() const;

                    /**
                     * 获取Regex rules for URL exclusion, separated by commas
                     * @return UrlExclude Regex rules for URL exclusion, separated by commas
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置Regex rules for URL exclusion, separated by commas
                     * @param _urlExclude Regex rules for URL exclusion, separated by commas
                     * 
                     */
                    void SetUrlExclude(const std::string& _urlExclude);

                    /**
                     * 判断参数 UrlExclude 是否已赋值
                     * @return UrlExclude 是否已赋值
                     * 
                     */
                    bool UrlExcludeHasBeenSet() const;

                    /**
                     * 获取Log switch. 0: Off; 1: On
                     * @return IsRelatedLog Log switch. 0: Off; 1: On
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置Log switch. 0: Off; 1: On
                     * @param _isRelatedLog Log switch. 0: Off; 1: On
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
                     * 获取Log region.
                     * @return LogRegion Log region.
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置Log region.
                     * @param _logRegion Log region.
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
                     * 获取Log topic ID
                     * @return LogTopicID Log topic ID
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置Log topic ID
                     * @param _logTopicID Log topic ID
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
                     * 获取CLS log set/ES cluster ID
                     * @return LogSet CLS log set/ES cluster ID
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS log set/ES cluster ID
                     * @param _logSet CLS log set/ES cluster ID
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
                     * 获取Log source: CLS or ES
                     * @return LogSource Log source: CLS or ES
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置Log source: CLS or ES
                     * @param _logSource Log source: CLS or ES
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
                     * 获取APIs to be filtered
                     * @return IgnoreOperationName APIs to be filtered
                     * 
                     */
                    std::string GetIgnoreOperationName() const;

                    /**
                     * 设置APIs to be filtered
                     * @param _ignoreOperationName APIs to be filtered
                     * 
                     */
                    void SetIgnoreOperationName(const std::string& _ignoreOperationName);

                    /**
                     * 判断参数 IgnoreOperationName 是否已赋值
                     * @return IgnoreOperationName 是否已赋值
                     * 
                     */
                    bool IgnoreOperationNameHasBeenSet() const;

                    /**
                     * 获取Whether thread profiling is enabled.
                     * @return EnableSnapshot Whether thread profiling is enabled.
                     * 
                     */
                    bool GetEnableSnapshot() const;

                    /**
                     * 设置Whether thread profiling is enabled.
                     * @param _enableSnapshot Whether thread profiling is enabled.
                     * 
                     */
                    void SetEnableSnapshot(const bool& _enableSnapshot);

                    /**
                     * 判断参数 EnableSnapshot 是否已赋值
                     * @return EnableSnapshot 是否已赋值
                     * 
                     */
                    bool EnableSnapshotHasBeenSet() const;

                    /**
                     * 获取Timeout threshold for thread profiling.
                     * @return SnapshotTimeout Timeout threshold for thread profiling.
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置Timeout threshold for thread profiling.
                     * @param _snapshotTimeout Timeout threshold for thread profiling.
                     * 
                     */
                    void SetSnapshotTimeout(const int64_t& _snapshotTimeout);

                    /**
                     * 判断参数 SnapshotTimeout 是否已赋值
                     * @return SnapshotTimeout 是否已赋值
                     * 
                     */
                    bool SnapshotTimeoutHasBeenSet() const;

                    /**
                     * 获取Whether agent is enabled.
                     * @return AgentEnable Whether agent is enabled.
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置Whether agent is enabled.
                     * @param _agentEnable Whether agent is enabled.
                     * 
                     */
                    void SetAgentEnable(const bool& _agentEnable);

                    /**
                     * 判断参数 AgentEnable 是否已赋值
                     * @return AgentEnable 是否已赋值
                     * 
                     */
                    bool AgentEnableHasBeenSet() const;

                    /**
                     * 获取Whether link compression is enabled.
                     * @return TraceSquash Whether link compression is enabled.
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置Whether link compression is enabled.
                     * @param _traceSquash Whether link compression is enabled.
                     * 
                     */
                    void SetTraceSquash(const bool& _traceSquash);

                    /**
                     * 判断参数 TraceSquash 是否已赋值
                     * @return TraceSquash 是否已赋值
                     * 
                     */
                    bool TraceSquashHasBeenSet() const;

                    /**
                     * 获取Switch for enabling application diagnosis.
                     * @return EventEnable Switch for enabling application diagnosis.
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置Switch for enabling application diagnosis.
                     * @param _eventEnable Switch for enabling application diagnosis.
                     * 
                     */
                    void SetEventEnable(const bool& _eventEnable);

                    /**
                     * 判断参数 EventEnable 是否已赋值
                     * @return EventEnable 是否已赋值
                     * 
                     */
                    bool EventEnableHasBeenSet() const;

                    /**
                     * 获取Component List
                     * @return InstrumentList Component List
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置Component List
                     * @param _instrumentList Component List
                     * 
                     */
                    void SetInstrumentList(const std::vector<Instrument>& _instrumentList);

                    /**
                     * 判断参数 InstrumentList 是否已赋值
                     * @return InstrumentList 是否已赋值
                     * 
                     */
                    bool InstrumentListHasBeenSet() const;

                    /**
                     * 获取Related configurations of the probe APIs.
                     * @return AgentOperationConfigView Related configurations of the probe APIs.
                     * 
                     */
                    AgentOperationConfigView GetAgentOperationConfigView() const;

                    /**
                     * 设置Related configurations of the probe APIs.
                     * @param _agentOperationConfigView Related configurations of the probe APIs.
                     * 
                     */
                    void SetAgentOperationConfigView(const AgentOperationConfigView& _agentOperationConfigView);

                    /**
                     * 判断参数 AgentOperationConfigView 是否已赋值
                     * @return AgentOperationConfigView 是否已赋值
                     * 
                     */
                    bool AgentOperationConfigViewHasBeenSet() const;

                    /**
                     * 获取Whether to enable application log configuration.
                     * @return EnableLogConfig Whether to enable application log configuration.
                     * 
                     */
                    bool GetEnableLogConfig() const;

                    /**
                     * 设置Whether to enable application log configuration.
                     * @param _enableLogConfig Whether to enable application log configuration.
                     * 
                     */
                    void SetEnableLogConfig(const bool& _enableLogConfig);

                    /**
                     * 判断参数 EnableLogConfig 是否已赋值
                     * @return EnableLogConfig 是否已赋值
                     * 
                     */
                    bool EnableLogConfigHasBeenSet() const;

                    /**
                     * 获取Whether to enable the dashboard configuration for applications. false: disabled (consistent with the business system configuration); true: enabled (application-level configuration).
                     * @return EnableDashboardConfig Whether to enable the dashboard configuration for applications. false: disabled (consistent with the business system configuration); true: enabled (application-level configuration).
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置Whether to enable the dashboard configuration for applications. false: disabled (consistent with the business system configuration); true: enabled (application-level configuration).
                     * @param _enableDashboardConfig Whether to enable the dashboard configuration for applications. false: disabled (consistent with the business system configuration); true: enabled (application-level configuration).
                     * 
                     */
                    void SetEnableDashboardConfig(const bool& _enableDashboardConfig);

                    /**
                     * 判断参数 EnableDashboardConfig 是否已赋值
                     * @return EnableDashboardConfig 是否已赋值
                     * 
                     */
                    bool EnableDashboardConfigHasBeenSet() const;

                    /**
                     * 获取Whether to associate with Dashboard. 0: disabled; 1: enabled.
                     * @return IsRelatedDashboard Whether to associate with Dashboard. 0: disabled; 1: enabled.
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置Whether to associate with Dashboard. 0: disabled; 1: enabled.
                     * @param _isRelatedDashboard Whether to associate with Dashboard. 0: disabled; 1: enabled.
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
                     * 获取dashboard ID
                     * @return DashboardTopicID dashboard ID
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置dashboard ID
                     * @param _dashboardTopicID dashboard ID
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
                     * 获取Whether to enable the application security configuration.
                     * @return EnableSecurityConfig Whether to enable the application security configuration.
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置Whether to enable the application security configuration.
                     * @param _enableSecurityConfig Whether to enable the application security configuration.
                     * 
                     */
                    void SetEnableSecurityConfig(const bool& _enableSecurityConfig);

                    /**
                     * 判断参数 EnableSecurityConfig 是否已赋值
                     * @return EnableSecurityConfig 是否已赋值
                     * 
                     */
                    bool EnableSecurityConfigHasBeenSet() const;

                    /**
                     * 获取Whether to enable SQL injection analysis.
                     * @return IsSqlInjectionAnalysis Whether to enable SQL injection analysis.
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置Whether to enable SQL injection analysis.
                     * @param _isSqlInjectionAnalysis Whether to enable SQL injection analysis.
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
                     * 获取Whether to enable detection of component vulnerability.
                     * @return IsInstrumentationVulnerabilityScan Whether to enable detection of component vulnerability.
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置Whether to enable detection of component vulnerability.
                     * @param _isInstrumentationVulnerabilityScan Whether to enable detection of component vulnerability.
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
                     * 获取Whether remote command detection is enabled.
                     * @return IsRemoteCommandExecutionAnalysis Whether remote command detection is enabled.
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置Whether remote command detection is enabled.
                     * @param _isRemoteCommandExecutionAnalysis Whether remote command detection is enabled.
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
                     * 获取Automatic convergence switch for APIs. 0: disabled | 1: enabled.
                     * @return UrlAutoConvergenceEnable Automatic convergence switch for APIs. 0: disabled | 1: enabled.
                     * 
                     */
                    bool GetUrlAutoConvergenceEnable() const;

                    /**
                     * 设置Automatic convergence switch for APIs. 0: disabled | 1: enabled.
                     * @param _urlAutoConvergenceEnable Automatic convergence switch for APIs. 0: disabled | 1: enabled.
                     * 
                     */
                    void SetUrlAutoConvergenceEnable(const bool& _urlAutoConvergenceEnable);

                    /**
                     * 判断参数 UrlAutoConvergenceEnable 是否已赋值
                     * @return UrlAutoConvergenceEnable 是否已赋值
                     * 
                     */
                    bool UrlAutoConvergenceEnableHasBeenSet() const;

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

                    /**
                     * 获取Specifies the memory threshold for probe fusing.
                     * @return DisableMemoryUsed Specifies the memory threshold for probe fusing.
                     * 
                     */
                    int64_t GetDisableMemoryUsed() const;

                    /**
                     * 设置Specifies the memory threshold for probe fusing.
                     * @param _disableMemoryUsed Specifies the memory threshold for probe fusing.
                     * 
                     */
                    void SetDisableMemoryUsed(const int64_t& _disableMemoryUsed);

                    /**
                     * 判断参数 DisableMemoryUsed 是否已赋值
                     * @return DisableMemoryUsed 是否已赋值
                     * 
                     */
                    bool DisableMemoryUsedHasBeenSet() const;

                    /**
                     * 获取Specifies the CPU threshold for probe fusing.
                     * @return DisableCpuUsed Specifies the CPU threshold for probe fusing.
                     * 
                     */
                    int64_t GetDisableCpuUsed() const;

                    /**
                     * 设置Specifies the CPU threshold for probe fusing.
                     * @param _disableCpuUsed Specifies the CPU threshold for probe fusing.
                     * 
                     */
                    void SetDisableCpuUsed(const int64_t& _disableCpuUsed);

                    /**
                     * 判断参数 DisableCpuUsed 是否已赋值
                     * @return DisableCpuUsed 是否已赋值
                     * 
                     */
                    bool DisableCpuUsedHasBeenSet() const;

                private:

                    /**
                     * Business system ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Application name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * URL convergence switch. 0: Off; 1: On
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * URL convergence threshold
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * Regex rules for exception filtering, separated by commas
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * Regex rules for URL convergence, separated by commas
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * Error code filtering, separated by commas
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * Regex rules for URL exclusion, separated by commas
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * Log switch. 0: Off; 1: On
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * Log region.
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * CLS log set/ES cluster ID
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Log source: CLS or ES
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * APIs to be filtered
                     */
                    std::string m_ignoreOperationName;
                    bool m_ignoreOperationNameHasBeenSet;

                    /**
                     * Whether thread profiling is enabled.
                     */
                    bool m_enableSnapshot;
                    bool m_enableSnapshotHasBeenSet;

                    /**
                     * Timeout threshold for thread profiling.
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * Whether agent is enabled.
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * Whether link compression is enabled.
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * Switch for enabling application diagnosis.
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * Component List
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * Related configurations of the probe APIs.
                     */
                    AgentOperationConfigView m_agentOperationConfigView;
                    bool m_agentOperationConfigViewHasBeenSet;

                    /**
                     * Whether to enable application log configuration.
                     */
                    bool m_enableLogConfig;
                    bool m_enableLogConfigHasBeenSet;

                    /**
                     * Whether to enable the dashboard configuration for applications. false: disabled (consistent with the business system configuration); true: enabled (application-level configuration).
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * Whether to associate with Dashboard. 0: disabled; 1: enabled.
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * dashboard ID
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

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
                     * Whether to enable the application security configuration.
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * Whether to enable SQL injection analysis.
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * Whether to enable detection of component vulnerability.
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * Whether remote command detection is enabled.
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * Whether to enable detection of Java webshell.
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

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
                     * Automatic convergence switch for APIs. 0: disabled | 1: enabled.
                     */
                    bool m_urlAutoConvergenceEnable;
                    bool m_urlAutoConvergenceEnableHasBeenSet;

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

                    /**
                     * Specifies the memory threshold for probe fusing.
                     */
                    int64_t m_disableMemoryUsed;
                    bool m_disableMemoryUsedHasBeenSet;

                    /**
                     * Specifies the CPU threshold for probe fusing.
                     */
                    int64_t m_disableCpuUsed;
                    bool m_disableCpuUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMAPPLICATIONCONFIGREQUEST_H_
