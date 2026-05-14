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
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/AutoProfilingConfig.h>


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
                     * 获取<p>Business system ID</p>
                     * @return InstanceId <p>Business system ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Business system ID</p>
                     * @param _instanceId <p>Business system ID</p>
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
                     * 获取<p>Application name</p>
                     * @return ServiceName <p>Application name</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>Application name</p>
                     * @param _serviceName <p>Application name</p>
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
                     * 获取<p>URL convergence switch, 0 Off | 1 On</p>
                     * @return UrlConvergenceSwitch <p>URL convergence switch, 0 Off | 1 On</p>
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置<p>URL convergence switch, 0 Off | 1 On</p>
                     * @param _urlConvergenceSwitch <p>URL convergence switch, 0 Off | 1 On</p>
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
                     * 获取<p>URL convergence threshold</p>
                     * @return UrlConvergenceThreshold <p>URL convergence threshold</p>
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置<p>URL convergence threshold</p>
                     * @param _urlConvergenceThreshold <p>URL convergence threshold</p>
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
                     * 获取<p>Exception filtering regex rules, comma-separated</p>
                     * @return ExceptionFilter <p>Exception filtering regex rules, comma-separated</p>
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置<p>Exception filtering regex rules, comma-separated</p>
                     * @param _exceptionFilter <p>Exception filtering regex rules, comma-separated</p>
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
                     * 获取<p>URL convergence regex rules, comma-separated</p>
                     * @return UrlConvergence <p>URL convergence regex rules, comma-separated</p>
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置<p>URL convergence regex rules, comma-separated</p>
                     * @param _urlConvergence <p>URL convergence regex rules, comma-separated</p>
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
                     * 获取<p>Error code filtering, comma-separated</p>
                     * @return ErrorCodeFilter <p>Error code filtering, comma-separated</p>
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置<p>Error code filtering, comma-separated</p>
                     * @param _errorCodeFilter <p>Error code filtering, comma-separated</p>
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
                     * 获取<p>URL exclusion regex rule, comma-separated</p>
                     * @return UrlExclude <p>URL exclusion regex rule, comma-separated</p>
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置<p>URL exclusion regex rule, comma-separated</p>
                     * @param _urlExclude <p>URL exclusion regex rule, comma-separated</p>
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
                     * 获取<p>Log switch 0 Disabled 1 Enabled</p>
                     * @return IsRelatedLog <p>Log switch 0 Disabled 1 Enabled</p>
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置<p>Log switch 0 Disabled 1 Enabled</p>
                     * @param _isRelatedLog <p>Log switch 0 Disabled 1 Enabled</p>
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
                     * 获取<p>Log region</p>
                     * @return LogRegion <p>Log region</p>
                     * 
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置<p>Log region</p>
                     * @param _logRegion <p>Log region</p>
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
                     * 获取<p>Log topic ID</p>
                     * @return LogTopicID <p>Log topic ID</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>Log topic ID</p>
                     * @param _logTopicID <p>Log topic ID</p>
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
                     * 获取<p>CLS logset | ES cluster ID</p>
                     * @return LogSet <p>CLS logset | ES cluster ID</p>
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置<p>CLS logset | ES cluster ID</p>
                     * @param _logSet <p>CLS logset | ES cluster ID</p>
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
                     * 获取<p>Log source CLS | ES</p>
                     * @return LogSource <p>Log source CLS | ES</p>
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置<p>Log source CLS | ES</p>
                     * @param _logSource <p>Log source CLS | ES</p>
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
                     * 获取<p>Interfaces to Filter</p>
                     * @return IgnoreOperationName <p>Interfaces to Filter</p>
                     * 
                     */
                    std::string GetIgnoreOperationName() const;

                    /**
                     * 设置<p>Interfaces to Filter</p>
                     * @param _ignoreOperationName <p>Interfaces to Filter</p>
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
                     * 获取<p>Whether thread profiling is enabled</p>
                     * @return EnableSnapshot <p>Whether thread profiling is enabled</p>
                     * 
                     */
                    bool GetEnableSnapshot() const;

                    /**
                     * 设置<p>Whether thread profiling is enabled</p>
                     * @param _enableSnapshot <p>Whether thread profiling is enabled</p>
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
                     * 获取<p>Timeout threshold for thread profiling</p>
                     * @return SnapshotTimeout <p>Timeout threshold for thread profiling</p>
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置<p>Timeout threshold for thread profiling</p>
                     * @param _snapshotTimeout <p>Timeout threshold for thread profiling</p>
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
                     * 获取<p>Whether to enable agent</p>
                     * @return AgentEnable <p>Whether to enable agent</p>
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置<p>Whether to enable agent</p>
                     * @param _agentEnable <p>Whether to enable agent</p>
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
                     * 获取<p>Whether to enable link compression</p>
                     * @return TraceSquash <p>Whether to enable link compression</p>
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置<p>Whether to enable link compression</p>
                     * @param _traceSquash <p>Whether to enable link compression</p>
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
                     * 获取<p>Whether the switch for enabling application diagnosis is enabled</p>
                     * @return EventEnable <p>Whether the switch for enabling application diagnosis is enabled</p>
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置<p>Whether the switch for enabling application diagnosis is enabled</p>
                     * @param _eventEnable <p>Whether the switch for enabling application diagnosis is enabled</p>
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
                     * 获取<p>Component list</p>
                     * @return InstrumentList <p>Component list</p>
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置<p>Component list</p>
                     * @param _instrumentList <p>Component list</p>
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
                     * 获取<p>probe API related configuration</p>
                     * @return AgentOperationConfigView <p>probe API related configuration</p>
                     * 
                     */
                    AgentOperationConfigView GetAgentOperationConfigView() const;

                    /**
                     * 设置<p>probe API related configuration</p>
                     * @param _agentOperationConfigView <p>probe API related configuration</p>
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
                     * 获取<p>Whether the application log configuration is enabled</p>
                     * @return EnableLogConfig <p>Whether the application log configuration is enabled</p>
                     * 
                     */
                    bool GetEnableLogConfig() const;

                    /**
                     * 设置<p>Whether the application log configuration is enabled</p>
                     * @param _enableLogConfig <p>Whether the application log configuration is enabled</p>
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
                     * 获取<p>Whether the dashboard configuration is enabled: false (disabled, consistent with the business system)/true (enabled, application-level configuration)</p>
                     * @return EnableDashboardConfig <p>Whether the dashboard configuration is enabled: false (disabled, consistent with the business system)/true (enabled, application-level configuration)</p>
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置<p>Whether the dashboard configuration is enabled: false (disabled, consistent with the business system)/true (enabled, application-level configuration)</p>
                     * @param _enableDashboardConfig <p>Whether the dashboard configuration is enabled: false (disabled, consistent with the business system)/true (enabled, application-level configuration)</p>
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
                     * 获取<p>Whether to associate with dashboard: 0 off 1 on</p>
                     * @return IsRelatedDashboard <p>Whether to associate with dashboard: 0 off 1 on</p>
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置<p>Whether to associate with dashboard: 0 off 1 on</p>
                     * @param _isRelatedDashboard <p>Whether to associate with dashboard: 0 off 1 on</p>
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
                     * 获取<p>dashboard ID</p>
                     * @return DashboardTopicID <p>dashboard ID</p>
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置<p>dashboard ID</p>
                     * @param _dashboardTopicID <p>dashboard ID</p>
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
                     * 获取<p>CLS index type (0=full-text index, 1=key-value index)</p>
                     * @return LogIndexType <p>CLS index type (0=full-text index, 1=key-value index)</p>
                     * 
                     */
                    int64_t GetLogIndexType() const;

                    /**
                     * 设置<p>CLS index type (0=full-text index, 1=key-value index)</p>
                     * @param _logIndexType <p>CLS index type (0=full-text index, 1=key-value index)</p>
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
                     * 获取<p>Index key of traceId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * @return LogTraceIdKey <p>Index key of traceId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * 
                     */
                    std::string GetLogTraceIdKey() const;

                    /**
                     * 设置<p>Index key of traceId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * @param _logTraceIdKey <p>Index key of traceId: This parameter is valid only when the CLS index type is key-value index.</p>
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
                     * 获取<p>Whether application security configuration is enabled</p>
                     * @return EnableSecurityConfig <p>Whether application security configuration is enabled</p>
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置<p>Whether application security configuration is enabled</p>
                     * @param _enableSecurityConfig <p>Whether application security configuration is enabled</p>
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
                     * 获取<p>Whether SQL injection analysis is enabled</p>
                     * @return IsSqlInjectionAnalysis <p>Whether SQL injection analysis is enabled</p>
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether SQL injection analysis is enabled</p>
                     * @param _isSqlInjectionAnalysis <p>Whether SQL injection analysis is enabled</p>
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
                     * 获取<p>Whether component vulnerability detection is enabled</p>
                     * @return IsInstrumentationVulnerabilityScan <p>Whether component vulnerability detection is enabled</p>
                     * 
                     */
                    int64_t GetIsInstrumentationVulnerabilityScan() const;

                    /**
                     * 设置<p>Whether component vulnerability detection is enabled</p>
                     * @param _isInstrumentationVulnerabilityScan <p>Whether component vulnerability detection is enabled</p>
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
                     * 获取<p>Whether remote command detection is enabled</p>
                     * @return IsRemoteCommandExecutionAnalysis <p>Whether remote command detection is enabled</p>
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置<p>Whether remote command detection is enabled</p>
                     * @param _isRemoteCommandExecutionAnalysis <p>Whether remote command detection is enabled</p>
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
                     * 获取<p>Whether Java Webshell detection is enabled</p>
                     * @return IsMemoryHijackingAnalysis <p>Whether Java Webshell detection is enabled</p>
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置<p>Whether Java Webshell detection is enabled</p>
                     * @param _isMemoryHijackingAnalysis <p>Whether Java Webshell detection is enabled</p>
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
                     * 获取<p>Whether to enable detection of any file deletion (0 - turn off, 1 - turn on)</p>
                     * @return IsDeleteAnyFileAnalysis <p>Whether to enable detection of any file deletion (0 - turn off, 1 - turn on)</p>
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable detection of any file deletion (0 - turn off, 1 - turn on)</p>
                     * @param _isDeleteAnyFileAnalysis <p>Whether to enable detection of any file deletion (0 - turn off, 1 - turn on)</p>
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
                     * 获取<p>Whether to enable arbitrary file read detection (0 - disabled, 1 - enabled)</p>
                     * @return IsReadAnyFileAnalysis <p>Whether to enable arbitrary file read detection (0 - disabled, 1 - enabled)</p>
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable arbitrary file read detection (0 - disabled, 1 - enabled)</p>
                     * @param _isReadAnyFileAnalysis <p>Whether to enable arbitrary file read detection (0 - disabled, 1 - enabled)</p>
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
                     * 获取<p>Whether to enable arbitrary file upload detection (0-disable, 1-enable)</p>
                     * @return IsUploadAnyFileAnalysis <p>Whether to enable arbitrary file upload detection (0-disable, 1-enable)</p>
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable arbitrary file upload detection (0-disable, 1-enable)</p>
                     * @param _isUploadAnyFileAnalysis <p>Whether to enable arbitrary file upload detection (0-disable, 1-enable)</p>
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
                     * 获取<p>Whether to enable detection of arbitrary files (0 - disabled, 1 - enabled)</p>
                     * @return IsIncludeAnyFileAnalysis <p>Whether to enable detection of arbitrary files (0 - disabled, 1 - enabled)</p>
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable detection of arbitrary files (0 - disabled, 1 - enabled)</p>
                     * @param _isIncludeAnyFileAnalysis <p>Whether to enable detection of arbitrary files (0 - disabled, 1 - enabled)</p>
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
                     * 获取<p>Whether path traversal detection is enabled (0-disabled, 1-enabled)</p>
                     * @return IsDirectoryTraversalAnalysis <p>Whether path traversal detection is enabled (0-disabled, 1-enabled)</p>
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置<p>Whether path traversal detection is enabled (0-disabled, 1-enabled)</p>
                     * @param _isDirectoryTraversalAnalysis <p>Whether path traversal detection is enabled (0-disabled, 1-enabled)</p>
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
                     * 获取<p>Whether to enable template engine injection detection (0-disable, 1-enable)</p>
                     * @return IsTemplateEngineInjectionAnalysis <p>Whether to enable template engine injection detection (0-disable, 1-enable)</p>
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether to enable template engine injection detection (0-disable, 1-enable)</p>
                     * @param _isTemplateEngineInjectionAnalysis <p>Whether to enable template engine injection detection (0-disable, 1-enable)</p>
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
                     * 获取<p>Whether to enable script engine injection detection (0-disable, 1-enable)</p>
                     * @return IsScriptEngineInjectionAnalysis <p>Whether to enable script engine injection detection (0-disable, 1-enable)</p>
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether to enable script engine injection detection (0-disable, 1-enable)</p>
                     * @param _isScriptEngineInjectionAnalysis <p>Whether to enable script engine injection detection (0-disable, 1-enable)</p>
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
                     * 获取<p>Whether expression injection detection is enabled (0-disabled, 1-enabled)</p>
                     * @return IsExpressionInjectionAnalysis <p>Whether expression injection detection is enabled (0-disabled, 1-enabled)</p>
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether expression injection detection is enabled (0-disabled, 1-enabled)</p>
                     * @param _isExpressionInjectionAnalysis <p>Whether expression injection detection is enabled (0-disabled, 1-enabled)</p>
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
                     * 获取<p>Whether JNDI injection detection is enabled (0 - disabled, 1 - enabled)</p>
                     * @return IsJNDIInjectionAnalysis <p>Whether JNDI injection detection is enabled (0 - disabled, 1 - enabled)</p>
                     * 
                     */
                    int64_t GetIsJNDIInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether JNDI injection detection is enabled (0 - disabled, 1 - enabled)</p>
                     * @param _isJNDIInjectionAnalysis <p>Whether JNDI injection detection is enabled (0 - disabled, 1 - enabled)</p>
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
                     * 获取<p>Whether JNI injection detection is enabled (0-disabled, 1-enabled)</p>
                     * @return IsJNIInjectionAnalysis <p>Whether JNI injection detection is enabled (0-disabled, 1-enabled)</p>
                     * 
                     */
                    int64_t GetIsJNIInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether JNI injection detection is enabled (0-disabled, 1-enabled)</p>
                     * @param _isJNIInjectionAnalysis <p>Whether JNI injection detection is enabled (0-disabled, 1-enabled)</p>
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
                     * 获取<p>Whether to enable Webshell backdoor detection (0 - disabled, 1 - enabled)</p>
                     * @return IsWebshellBackdoorAnalysis <p>Whether to enable Webshell backdoor detection (0 - disabled, 1 - enabled)</p>
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置<p>Whether to enable Webshell backdoor detection (0 - disabled, 1 - enabled)</p>
                     * @param _isWebshellBackdoorAnalysis <p>Whether to enable Webshell backdoor detection (0 - disabled, 1 - enabled)</p>
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
                     * 获取<p>Whether deserialization detection is enabled (0-disabled, 1-enabled)</p>
                     * @return IsDeserializationAnalysis <p>Whether deserialization detection is enabled (0-disabled, 1-enabled)</p>
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置<p>Whether deserialization detection is enabled (0-disabled, 1-enabled)</p>
                     * @param _isDeserializationAnalysis <p>Whether deserialization detection is enabled (0-disabled, 1-enabled)</p>
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
                     * 获取<p>API auto convergence switch, 0-off | 1-on</p>
                     * @return UrlAutoConvergenceEnable <p>API auto convergence switch, 0-off | 1-on</p>
                     * 
                     */
                    bool GetUrlAutoConvergenceEnable() const;

                    /**
                     * 设置<p>API auto convergence switch, 0-off | 1-on</p>
                     * @param _urlAutoConvergenceEnable <p>API auto convergence switch, 0-off | 1-on</p>
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
                     * 获取<p>URL long segment convergence threshold</p>
                     * @return UrlLongSegmentThreshold <p>URL long segment convergence threshold</p>
                     * 
                     */
                    int64_t GetUrlLongSegmentThreshold() const;

                    /**
                     * 设置<p>URL long segment convergence threshold</p>
                     * @param _urlLongSegmentThreshold <p>URL long segment convergence threshold</p>
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
                     * 获取<p>URL digit segment convergence threshold</p>
                     * @return UrlNumberSegmentThreshold <p>URL digit segment convergence threshold</p>
                     * 
                     */
                    int64_t GetUrlNumberSegmentThreshold() const;

                    /**
                     * 设置<p>URL digit segment convergence threshold</p>
                     * @param _urlNumberSegmentThreshold <p>URL digit segment convergence threshold</p>
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
                     * 获取<p>Fuse memory threshold of the probe</p>
                     * @return DisableMemoryUsed <p>Fuse memory threshold of the probe</p>
                     * 
                     */
                    int64_t GetDisableMemoryUsed() const;

                    /**
                     * 设置<p>Fuse memory threshold of the probe</p>
                     * @param _disableMemoryUsed <p>Fuse memory threshold of the probe</p>
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
                     * 获取<p>Probe fuse CPU threshold</p>
                     * @return DisableCpuUsed <p>Probe fuse CPU threshold</p>
                     * 
                     */
                    int64_t GetDisableCpuUsed() const;

                    /**
                     * 设置<p>Probe fuse CPU threshold</p>
                     * @param _disableCpuUsed <p>Probe fuse CPU threshold</p>
                     * 
                     */
                    void SetDisableCpuUsed(const int64_t& _disableCpuUsed);

                    /**
                     * 判断参数 DisableCpuUsed 是否已赋值
                     * @return DisableCpuUsed 是否已赋值
                     * 
                     */
                    bool DisableCpuUsedHasBeenSet() const;

                    /**
                     * 获取<p>Whether SQL parameter access is enabled</p>
                     * @return DbStatementParametersEnabled <p>Whether SQL parameter access is enabled</p>
                     * 
                     */
                    bool GetDbStatementParametersEnabled() const;

                    /**
                     * 设置<p>Whether SQL parameter access is enabled</p>
                     * @param _dbStatementParametersEnabled <p>Whether SQL parameter access is enabled</p>
                     * 
                     */
                    void SetDbStatementParametersEnabled(const bool& _dbStatementParametersEnabled);

                    /**
                     * 判断参数 DbStatementParametersEnabled 是否已赋值
                     * @return DbStatementParametersEnabled 是否已赋值
                     * 
                     */
                    bool DbStatementParametersEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Slow SQL threshold</p>
                     * @return SlowSQLThresholds <p>Slow SQL threshold</p>
                     * 
                     */
                    std::vector<ApmTag> GetSlowSQLThresholds() const;

                    /**
                     * 设置<p>Slow SQL threshold</p>
                     * @param _slowSQLThresholds <p>Slow SQL threshold</p>
                     * 
                     */
                    void SetSlowSQLThresholds(const std::vector<ApmTag>& _slowSQLThresholds);

                    /**
                     * 判断参数 SlowSQLThresholds 是否已赋值
                     * @return SlowSQLThresholds 是否已赋值
                     * 
                     */
                    bool SlowSQLThresholdsHasBeenSet() const;

                    /**
                     * 获取<p>Whether the masking rule is enabled</p>
                     * @return EnableDesensitizationRule <p>Whether the masking rule is enabled</p>
                     * 
                     */
                    int64_t GetEnableDesensitizationRule() const;

                    /**
                     * 设置<p>Whether the masking rule is enabled</p>
                     * @param _enableDesensitizationRule <p>Whether the masking rule is enabled</p>
                     * 
                     */
                    void SetEnableDesensitizationRule(const int64_t& _enableDesensitizationRule);

                    /**
                     * 判断参数 EnableDesensitizationRule 是否已赋值
                     * @return EnableDesensitizationRule 是否已赋值
                     * 
                     */
                    bool EnableDesensitizationRuleHasBeenSet() const;

                    /**
                     * 获取<p>Masking rule</p>
                     * @return DesensitizationRule <p>Masking rule</p>
                     * 
                     */
                    std::string GetDesensitizationRule() const;

                    /**
                     * 设置<p>Masking rule</p>
                     * @param _desensitizationRule <p>Masking rule</p>
                     * 
                     */
                    void SetDesensitizationRule(const std::string& _desensitizationRule);

                    /**
                     * 判断参数 DesensitizationRule 是否已赋值
                     * @return DesensitizationRule 是否已赋值
                     * 
                     */
                    bool DesensitizationRuleHasBeenSet() const;

                    /**
                     * 获取<p>Index key of spanId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * @return LogSpanIdKey <p>Index key of spanId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * 
                     */
                    std::string GetLogSpanIdKey() const;

                    /**
                     * 设置<p>Index key of spanId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * @param _logSpanIdKey <p>Index key of spanId: This parameter is valid only when the CLS index type is key-value index.</p>
                     * 
                     */
                    void SetLogSpanIdKey(const std::string& _logSpanIdKey);

                    /**
                     * 判断参数 LogSpanIdKey 是否已赋值
                     * @return LogSpanIdKey 是否已赋值
                     * 
                     */
                    bool LogSpanIdKeyHasBeenSet() const;

                    /**
                     * 获取<p>Automated performance analysis task configuration</p>
                     * @return AutoProfilingConfig <p>Automated performance analysis task configuration</p>
                     * 
                     */
                    AutoProfilingConfig GetAutoProfilingConfig() const;

                    /**
                     * 设置<p>Automated performance analysis task configuration</p>
                     * @param _autoProfilingConfig <p>Automated performance analysis task configuration</p>
                     * 
                     */
                    void SetAutoProfilingConfig(const AutoProfilingConfig& _autoProfilingConfig);

                    /**
                     * 判断参数 AutoProfilingConfig 是否已赋值
                     * @return AutoProfilingConfig 是否已赋值
                     * 
                     */
                    bool AutoProfilingConfigHasBeenSet() const;

                    /**
                     * 获取<p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
                     * @return EnableThresholdConfig <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
                     * @param _enableThresholdConfig <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
                     * 
                     */
                    void SetEnableThresholdConfig(const bool& _enableThresholdConfig);

                    /**
                     * 判断参数 EnableThresholdConfig 是否已赋值
                     * @return EnableThresholdConfig 是否已赋值
                     * 
                     */
                    bool EnableThresholdConfigHasBeenSet() const;

                    /**
                     * 获取<p>Error rate threshold (%) used to judge the application health status as "red".</p>
                     * @return ErrRateThreshold <p>Error rate threshold (%) used to judge the application health status as "red".</p>
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>Error rate threshold (%) used to judge the application health status as "red".</p>
                     * @param _errRateThreshold <p>Error rate threshold (%) used to judge the application health status as "red".</p>
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
                     * 获取<p>Alert threshold for response time (ms), used to judge the application health status as "yellow".</p>
                     * @return ResponseDurationWarningThreshold <p>Alert threshold for response time (ms), used to judge the application health status as "yellow".</p>
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>Alert threshold for response time (ms), used to judge the application health status as "yellow".</p>
                     * @param _responseDurationWarningThreshold <p>Alert threshold for response time (ms), used to judge the application health status as "yellow".</p>
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
                     * 获取<p>Whether to use the default fuse threshold of the probe</p>
                     * @return UseDefaultFuseConfig <p>Whether to use the default fuse threshold of the probe</p>
                     * 
                     */
                    bool GetUseDefaultFuseConfig() const;

                    /**
                     * 设置<p>Whether to use the default fuse threshold of the probe</p>
                     * @param _useDefaultFuseConfig <p>Whether to use the default fuse threshold of the probe</p>
                     * 
                     */
                    void SetUseDefaultFuseConfig(const bool& _useDefaultFuseConfig);

                    /**
                     * 判断参数 UseDefaultFuseConfig 是否已赋值
                     * @return UseDefaultFuseConfig 是否已赋值
                     * 
                     */
                    bool UseDefaultFuseConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Business system ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Application name</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>URL convergence switch, 0 Off | 1 On</p>
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * <p>URL convergence threshold</p>
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * <p>Exception filtering regex rules, comma-separated</p>
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * <p>URL convergence regex rules, comma-separated</p>
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * <p>Error code filtering, comma-separated</p>
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * <p>URL exclusion regex rule, comma-separated</p>
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * <p>Log switch 0 Disabled 1 Enabled</p>
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * <p>Log region</p>
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * <p>Log topic ID</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>CLS logset | ES cluster ID</p>
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * <p>Log source CLS | ES</p>
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * <p>Interfaces to Filter</p>
                     */
                    std::string m_ignoreOperationName;
                    bool m_ignoreOperationNameHasBeenSet;

                    /**
                     * <p>Whether thread profiling is enabled</p>
                     */
                    bool m_enableSnapshot;
                    bool m_enableSnapshotHasBeenSet;

                    /**
                     * <p>Timeout threshold for thread profiling</p>
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * <p>Whether to enable agent</p>
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * <p>Whether to enable link compression</p>
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * <p>Whether the switch for enabling application diagnosis is enabled</p>
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * <p>Component list</p>
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * <p>probe API related configuration</p>
                     */
                    AgentOperationConfigView m_agentOperationConfigView;
                    bool m_agentOperationConfigViewHasBeenSet;

                    /**
                     * <p>Whether the application log configuration is enabled</p>
                     */
                    bool m_enableLogConfig;
                    bool m_enableLogConfigHasBeenSet;

                    /**
                     * <p>Whether the dashboard configuration is enabled: false (disabled, consistent with the business system)/true (enabled, application-level configuration)</p>
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * <p>Whether to associate with dashboard: 0 off 1 on</p>
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * <p>dashboard ID</p>
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

                    /**
                     * <p>CLS index type (0=full-text index, 1=key-value index)</p>
                     */
                    int64_t m_logIndexType;
                    bool m_logIndexTypeHasBeenSet;

                    /**
                     * <p>Index key of traceId: This parameter is valid only when the CLS index type is key-value index.</p>
                     */
                    std::string m_logTraceIdKey;
                    bool m_logTraceIdKeyHasBeenSet;

                    /**
                     * <p>Whether application security configuration is enabled</p>
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * <p>Whether SQL injection analysis is enabled</p>
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether component vulnerability detection is enabled</p>
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * <p>Whether remote command detection is enabled</p>
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * <p>Whether Java Webshell detection is enabled</p>
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable detection of any file deletion (0 - turn off, 1 - turn on)</p>
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable arbitrary file read detection (0 - disabled, 1 - enabled)</p>
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable arbitrary file upload detection (0-disable, 1-enable)</p>
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable detection of arbitrary files (0 - disabled, 1 - enabled)</p>
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether path traversal detection is enabled (0-disabled, 1-enabled)</p>
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable template engine injection detection (0-disable, 1-enable)</p>
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable script engine injection detection (0-disable, 1-enable)</p>
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether expression injection detection is enabled (0-disabled, 1-enabled)</p>
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether JNDI injection detection is enabled (0 - disabled, 1 - enabled)</p>
                     */
                    int64_t m_isJNDIInjectionAnalysis;
                    bool m_isJNDIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether JNI injection detection is enabled (0-disabled, 1-enabled)</p>
                     */
                    int64_t m_isJNIInjectionAnalysis;
                    bool m_isJNIInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable Webshell backdoor detection (0 - disabled, 1 - enabled)</p>
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * <p>Whether deserialization detection is enabled (0-disabled, 1-enabled)</p>
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * <p>API auto convergence switch, 0-off | 1-on</p>
                     */
                    bool m_urlAutoConvergenceEnable;
                    bool m_urlAutoConvergenceEnableHasBeenSet;

                    /**
                     * <p>URL long segment convergence threshold</p>
                     */
                    int64_t m_urlLongSegmentThreshold;
                    bool m_urlLongSegmentThresholdHasBeenSet;

                    /**
                     * <p>URL digit segment convergence threshold</p>
                     */
                    int64_t m_urlNumberSegmentThreshold;
                    bool m_urlNumberSegmentThresholdHasBeenSet;

                    /**
                     * <p>Fuse memory threshold of the probe</p>
                     */
                    int64_t m_disableMemoryUsed;
                    bool m_disableMemoryUsedHasBeenSet;

                    /**
                     * <p>Probe fuse CPU threshold</p>
                     */
                    int64_t m_disableCpuUsed;
                    bool m_disableCpuUsedHasBeenSet;

                    /**
                     * <p>Whether SQL parameter access is enabled</p>
                     */
                    bool m_dbStatementParametersEnabled;
                    bool m_dbStatementParametersEnabledHasBeenSet;

                    /**
                     * <p>Slow SQL threshold</p>
                     */
                    std::vector<ApmTag> m_slowSQLThresholds;
                    bool m_slowSQLThresholdsHasBeenSet;

                    /**
                     * <p>Whether the masking rule is enabled</p>
                     */
                    int64_t m_enableDesensitizationRule;
                    bool m_enableDesensitizationRuleHasBeenSet;

                    /**
                     * <p>Masking rule</p>
                     */
                    std::string m_desensitizationRule;
                    bool m_desensitizationRuleHasBeenSet;

                    /**
                     * <p>Index key of spanId: This parameter is valid only when the CLS index type is key-value index.</p>
                     */
                    std::string m_logSpanIdKey;
                    bool m_logSpanIdKeyHasBeenSet;

                    /**
                     * <p>Automated performance analysis task configuration</p>
                     */
                    AutoProfilingConfig m_autoProfilingConfig;
                    bool m_autoProfilingConfigHasBeenSet;

                    /**
                     * <p>Threshold configuration switch. true means use application level threshold; false means use business system level threshold.</p>
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>Error rate threshold (%) used to judge the application health status as "red".</p>
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>Alert threshold for response time (ms), used to judge the application health status as "yellow".</p>
                     */
                    int64_t m_responseDurationWarningThreshold;
                    bool m_responseDurationWarningThresholdHasBeenSet;

                    /**
                     * <p>Whether to use the default fuse threshold of the probe</p>
                     */
                    bool m_useDefaultFuseConfig;
                    bool m_useDefaultFuseConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMAPPLICATIONCONFIGREQUEST_H_
