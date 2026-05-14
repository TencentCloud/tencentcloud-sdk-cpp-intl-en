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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Instrument.h>
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
                * Application-Related configuration list items.
                */
                class ApmApplicationConfigView : public AbstractModel
                {
                public:
                    ApmApplicationConfigView();
                    ~ApmApplicationConfigView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Business system ID</p>
                     * @return InstanceKey <p>Business system ID</p>
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置<p>Business system ID</p>
                     * @param _instanceKey <p>Business system ID</p>
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

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
                     * 获取<p>Interface Filtering</p>
                     * @return OperationNameFilter <p>Interface Filtering</p>
                     * 
                     */
                    std::string GetOperationNameFilter() const;

                    /**
                     * 设置<p>Interface Filtering</p>
                     * @param _operationNameFilter <p>Interface Filtering</p>
                     * 
                     */
                    void SetOperationNameFilter(const std::string& _operationNameFilter);

                    /**
                     * 判断参数 OperationNameFilter 是否已赋值
                     * @return OperationNameFilter 是否已赋值
                     * 
                     */
                    bool OperationNameFilterHasBeenSet() const;

                    /**
                     * 获取<p>Error type filtering</p>
                     * @return ExceptionFilter <p>Error type filtering</p>
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置<p>Error type filtering</p>
                     * @param _exceptionFilter <p>Error type filtering</p>
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
                     * 获取<p>HTTP status code filtering</p>
                     * @return ErrorCodeFilter <p>HTTP status code filtering</p>
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置<p>HTTP status code filtering</p>
                     * @param _errorCodeFilter <p>HTTP status code filtering</p>
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
                     * 获取<p>Application diagnosis switch (abandoned)</p>
                     * @return EventEnable <p>Application diagnosis switch (abandoned)</p>
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置<p>Application diagnosis switch (abandoned)</p>
                     * @param _eventEnable <p>Application diagnosis switch (abandoned)</p>
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
                     * 获取<p>URL convergence switch 0 Off 1 On</p>
                     * @return UrlConvergenceSwitch <p>URL convergence switch 0 Off 1 On</p>
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置<p>URL convergence switch 0 Off 1 On</p>
                     * @param _urlConvergenceSwitch <p>URL convergence switch 0 Off 1 On</p>
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
                     * 获取<p>URL regular convergence rules</p>
                     * @return UrlConvergence <p>URL regular convergence rules</p>
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置<p>URL regular convergence rules</p>
                     * @param _urlConvergence <p>URL regular convergence rules</p>
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
                     * 获取<p>URL exclusion rule regex</p>
                     * @return UrlExclude <p>URL exclusion rule regex</p>
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置<p>URL exclusion rule regex</p>
                     * @param _urlExclude <p>URL exclusion rule regex</p>
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
                     * 获取<p>Whether logging is enabled 0 Disabled 1 Enabled</p>
                     * @return IsRelatedLog <p>Whether logging is enabled 0 Disabled 1 Enabled</p>
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置<p>Whether logging is enabled 0 Disabled 1 Enabled</p>
                     * @param _isRelatedLog <p>Whether logging is enabled 0 Disabled 1 Enabled</p>
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
                     * 获取<p>Log source</p>
                     * @return LogSource <p>Log source</p>
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置<p>Log source</p>
                     * @param _logSource <p>Log source</p>
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
                     * 获取<p>Logset</p>
                     * @return LogSet <p>Logset</p>
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置<p>Logset</p>
                     * @param _logSet <p>Logset</p>
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
                     * 获取<p>Log topic</p>
                     * @return LogTopicID <p>Log topic</p>
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置<p>Log topic</p>
                     * @param _logTopicID <p>Log topic</p>
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
                     * 获取<p>Method stack snapshot switch. Enabled indicates true. false indicates disabled.</p>
                     * @return SnapshotEnable <p>Method stack snapshot switch. Enabled indicates true. false indicates disabled.</p>
                     * 
                     */
                    bool GetSnapshotEnable() const;

                    /**
                     * 设置<p>Method stack snapshot switch. Enabled indicates true. false indicates disabled.</p>
                     * @param _snapshotEnable <p>Method stack snapshot switch. Enabled indicates true. false indicates disabled.</p>
                     * 
                     */
                    void SetSnapshotEnable(const bool& _snapshotEnable);

                    /**
                     * 判断参数 SnapshotEnable 是否已赋值
                     * @return SnapshotEnable 是否已赋值
                     * 
                     */
                    bool SnapshotEnableHasBeenSet() const;

                    /**
                     * 获取<p>Slow call monitoring trigger threshold</p>
                     * @return SnapshotTimeout <p>Slow call monitoring trigger threshold</p>
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置<p>Slow call monitoring trigger threshold</p>
                     * @param _snapshotTimeout <p>Slow call monitoring trigger threshold</p>
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
                     * 获取<p>Master switch for probes</p>
                     * @return AgentEnable <p>Master switch for probes</p>
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置<p>Master switch for probes</p>
                     * @param _agentEnable <p>Master switch for probes</p>
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
                     * 获取<p>Component list toggle (abandoned)</p>
                     * @return InstrumentList <p>Component list toggle (abandoned)</p>
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置<p>Component list toggle (abandoned)</p>
                     * @param _instrumentList <p>Component list toggle (abandoned)</p>
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
                     * 获取<p>Link compression switch (abandoned)</p>
                     * @return TraceSquash <p>Link compression switch (abandoned)</p>
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置<p>Link compression switch (abandoned)</p>
                     * @param _traceSquash <p>Link compression switch (abandoned)</p>
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
                     * 获取<p>Link filtering configuration</p>
                     * @return AgentIgnoreOperation <p>Link filtering configuration</p>
                     * 
                     */
                    std::string GetAgentIgnoreOperation() const;

                    /**
                     * 设置<p>Link filtering configuration</p>
                     * @param _agentIgnoreOperation <p>Link filtering configuration</p>
                     * 
                     */
                    void SetAgentIgnoreOperation(const std::string& _agentIgnoreOperation);

                    /**
                     * 判断参数 AgentIgnoreOperation 是否已赋值
                     * @return AgentIgnoreOperation 是否已赋值
                     * 
                     */
                    bool AgentIgnoreOperationHasBeenSet() const;

                    /**
                     * 获取<p>Enable the application security switch</p>
                     * @return EnableSecurityConfig <p>Enable the application security switch</p>
                     * 
                     */
                    bool GetEnableSecurityConfig() const;

                    /**
                     * 设置<p>Enable the application security switch</p>
                     * @param _enableSecurityConfig <p>Enable the application security switch</p>
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
                     * 获取<p>Whether SQL injection detection is enabled</p>
                     * @return IsSqlInjectionAnalysis <p>Whether SQL injection detection is enabled</p>
                     * 
                     */
                    int64_t GetIsSqlInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether SQL injection detection is enabled</p>
                     * @param _isSqlInjectionAnalysis <p>Whether SQL injection detection is enabled</p>
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
                     * 获取<p>Whether remote command execution detection is enabled</p>
                     * @return IsRemoteCommandExecutionAnalysis <p>Whether remote command execution detection is enabled</p>
                     * 
                     */
                    int64_t GetIsRemoteCommandExecutionAnalysis() const;

                    /**
                     * 设置<p>Whether remote command execution detection is enabled</p>
                     * @param _isRemoteCommandExecutionAnalysis <p>Whether remote command execution detection is enabled</p>
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
                     * 获取<p>Whether memory leakage detection is enabled</p>
                     * @return IsMemoryHijackingAnalysis <p>Whether memory leakage detection is enabled</p>
                     * 
                     */
                    int64_t GetIsMemoryHijackingAnalysis() const;

                    /**
                     * 设置<p>Whether memory leakage detection is enabled</p>
                     * @param _isMemoryHijackingAnalysis <p>Whether memory leakage detection is enabled</p>
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
                     * 获取<p>Whether to enable detection of any file deletion</p>
                     * @return IsDeleteAnyFileAnalysis <p>Whether to enable detection of any file deletion</p>
                     * 
                     */
                    int64_t GetIsDeleteAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable detection of any file deletion</p>
                     * @param _isDeleteAnyFileAnalysis <p>Whether to enable detection of any file deletion</p>
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
                     * 获取<p>Whether to enable arbitrary file read detection</p>
                     * @return IsReadAnyFileAnalysis <p>Whether to enable arbitrary file read detection</p>
                     * 
                     */
                    int64_t GetIsReadAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable arbitrary file read detection</p>
                     * @param _isReadAnyFileAnalysis <p>Whether to enable arbitrary file read detection</p>
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
                     * 获取<p>Whether to enable arbitrary file upload detection</p>
                     * @return IsUploadAnyFileAnalysis <p>Whether to enable arbitrary file upload detection</p>
                     * 
                     */
                    int64_t GetIsUploadAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable arbitrary file upload detection</p>
                     * @param _isUploadAnyFileAnalysis <p>Whether to enable arbitrary file upload detection</p>
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
                     * 获取<p>Whether to enable detection of arbitrary files</p>
                     * @return IsIncludeAnyFileAnalysis <p>Whether to enable detection of arbitrary files</p>
                     * 
                     */
                    int64_t GetIsIncludeAnyFileAnalysis() const;

                    /**
                     * 设置<p>Whether to enable detection of arbitrary files</p>
                     * @param _isIncludeAnyFileAnalysis <p>Whether to enable detection of arbitrary files</p>
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
                     * 获取<p>Whether path traversal detection is enabled</p>
                     * @return IsDirectoryTraversalAnalysis <p>Whether path traversal detection is enabled</p>
                     * 
                     */
                    int64_t GetIsDirectoryTraversalAnalysis() const;

                    /**
                     * 设置<p>Whether path traversal detection is enabled</p>
                     * @param _isDirectoryTraversalAnalysis <p>Whether path traversal detection is enabled</p>
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
                     * 获取<p>Whether to enable template engine injection detection</p>
                     * @return IsTemplateEngineInjectionAnalysis <p>Whether to enable template engine injection detection</p>
                     * 
                     */
                    int64_t GetIsTemplateEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether to enable template engine injection detection</p>
                     * @param _isTemplateEngineInjectionAnalysis <p>Whether to enable template engine injection detection</p>
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
                     * 获取<p>Whether script engine injection detection is enabled</p>
                     * @return IsScriptEngineInjectionAnalysis <p>Whether script engine injection detection is enabled</p>
                     * 
                     */
                    int64_t GetIsScriptEngineInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether script engine injection detection is enabled</p>
                     * @param _isScriptEngineInjectionAnalysis <p>Whether script engine injection detection is enabled</p>
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
                     * 获取<p>Whether expression injection detection is enabled</p>
                     * @return IsExpressionInjectionAnalysis <p>Whether expression injection detection is enabled</p>
                     * 
                     */
                    int64_t GetIsExpressionInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether expression injection detection is enabled</p>
                     * @param _isExpressionInjectionAnalysis <p>Whether expression injection detection is enabled</p>
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
                     * 获取<p>Whether JNDI injection detection is enabled</p>
                     * @return IsJndiInjectionAnalysis <p>Whether JNDI injection detection is enabled</p>
                     * 
                     */
                    int64_t GetIsJndiInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether JNDI injection detection is enabled</p>
                     * @param _isJndiInjectionAnalysis <p>Whether JNDI injection detection is enabled</p>
                     * 
                     */
                    void SetIsJndiInjectionAnalysis(const int64_t& _isJndiInjectionAnalysis);

                    /**
                     * 判断参数 IsJndiInjectionAnalysis 是否已赋值
                     * @return IsJndiInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJndiInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Whether JNI injection detection is enabled</p>
                     * @return IsJniInjectionAnalysis <p>Whether JNI injection detection is enabled</p>
                     * 
                     */
                    int64_t GetIsJniInjectionAnalysis() const;

                    /**
                     * 设置<p>Whether JNI injection detection is enabled</p>
                     * @param _isJniInjectionAnalysis <p>Whether JNI injection detection is enabled</p>
                     * 
                     */
                    void SetIsJniInjectionAnalysis(const int64_t& _isJniInjectionAnalysis);

                    /**
                     * 判断参数 IsJniInjectionAnalysis 是否已赋值
                     * @return IsJniInjectionAnalysis 是否已赋值
                     * 
                     */
                    bool IsJniInjectionAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>Whether Webshell backdoor detection is enabled</p>
                     * @return IsWebshellBackdoorAnalysis <p>Whether Webshell backdoor detection is enabled</p>
                     * 
                     */
                    int64_t GetIsWebshellBackdoorAnalysis() const;

                    /**
                     * 设置<p>Whether Webshell backdoor detection is enabled</p>
                     * @param _isWebshellBackdoorAnalysis <p>Whether Webshell backdoor detection is enabled</p>
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
                     * 获取<p>Whether deserialization detection is enabled</p>
                     * @return IsDeserializationAnalysis <p>Whether deserialization detection is enabled</p>
                     * 
                     */
                    int64_t GetIsDeserializationAnalysis() const;

                    /**
                     * 设置<p>Whether deserialization detection is enabled</p>
                     * @param _isDeserializationAnalysis <p>Whether deserialization detection is enabled</p>
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
                     * 获取<p>Whether the console switch is enabled</p>
                     * @return EnableDashboardConfig <p>Whether the console switch is enabled</p>
                     * 
                     */
                    bool GetEnableDashboardConfig() const;

                    /**
                     * 设置<p>Whether the console switch is enabled</p>
                     * @param _enableDashboardConfig <p>Whether the console switch is enabled</p>
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
                     * 获取<p>Whether to associate with Dashboard</p>
                     * @return IsRelatedDashboard <p>Whether to associate with Dashboard</p>
                     * 
                     */
                    int64_t GetIsRelatedDashboard() const;

                    /**
                     * 设置<p>Whether to associate with Dashboard</p>
                     * @param _isRelatedDashboard <p>Whether to associate with Dashboard</p>
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
                     * 获取<p>Dashboard topic</p>
                     * @return DashboardTopicID <p>Dashboard topic</p>
                     * 
                     */
                    std::string GetDashboardTopicID() const;

                    /**
                     * 设置<p>Dashboard topic</p>
                     * @param _dashboardTopicID <p>Dashboard topic</p>
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
                     * 获取<p>Threshold configuration switch</p>
                     * @return EnableThresholdConfig <p>Threshold configuration switch</p>
                     * 
                     */
                    bool GetEnableThresholdConfig() const;

                    /**
                     * 设置<p>Threshold configuration switch</p>
                     * @param _enableThresholdConfig <p>Threshold configuration switch</p>
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
                     * 获取<p>Error rate threshold</p><p>Unit: %</p>
                     * @return ErrRateThreshold <p>Error rate threshold</p><p>Unit: %</p>
                     * 
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置<p>Error rate threshold</p><p>Unit: %</p>
                     * @param _errRateThreshold <p>Error rate threshold</p><p>Unit: %</p>
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
                     * 获取<p>Alert threshold of response time</p><p>Unit: ms</p>
                     * @return ResponseDurationWarningThreshold <p>Alert threshold of response time</p><p>Unit: ms</p>
                     * 
                     */
                    int64_t GetResponseDurationWarningThreshold() const;

                    /**
                     * 设置<p>Alert threshold of response time</p><p>Unit: ms</p>
                     * @param _responseDurationWarningThreshold <p>Alert threshold of response time</p><p>Unit: ms</p>
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
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * <p>Application name</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>Interface Filtering</p>
                     */
                    std::string m_operationNameFilter;
                    bool m_operationNameFilterHasBeenSet;

                    /**
                     * <p>Error type filtering</p>
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * <p>HTTP status code filtering</p>
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * <p>Application diagnosis switch (abandoned)</p>
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * <p>URL convergence switch 0 Off 1 On</p>
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * <p>URL convergence threshold</p>
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * <p>URL regular convergence rules</p>
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * <p>URL exclusion rule regex</p>
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * <p>Whether logging is enabled 0 Disabled 1 Enabled</p>
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * <p>Log source</p>
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * <p>Logset</p>
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * <p>Log topic</p>
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * <p>Method stack snapshot switch. Enabled indicates true. false indicates disabled.</p>
                     */
                    bool m_snapshotEnable;
                    bool m_snapshotEnableHasBeenSet;

                    /**
                     * <p>Slow call monitoring trigger threshold</p>
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * <p>Master switch for probes</p>
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * <p>Component list toggle (abandoned)</p>
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * <p>Link compression switch (abandoned)</p>
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                    /**
                     * <p>Link filtering configuration</p>
                     */
                    std::string m_agentIgnoreOperation;
                    bool m_agentIgnoreOperationHasBeenSet;

                    /**
                     * <p>Enable the application security switch</p>
                     */
                    bool m_enableSecurityConfig;
                    bool m_enableSecurityConfigHasBeenSet;

                    /**
                     * <p>Whether SQL injection detection is enabled</p>
                     */
                    int64_t m_isSqlInjectionAnalysis;
                    bool m_isSqlInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether component vulnerability detection is enabled</p>
                     */
                    int64_t m_isInstrumentationVulnerabilityScan;
                    bool m_isInstrumentationVulnerabilityScanHasBeenSet;

                    /**
                     * <p>Whether remote command execution detection is enabled</p>
                     */
                    int64_t m_isRemoteCommandExecutionAnalysis;
                    bool m_isRemoteCommandExecutionAnalysisHasBeenSet;

                    /**
                     * <p>Whether memory leakage detection is enabled</p>
                     */
                    int64_t m_isMemoryHijackingAnalysis;
                    bool m_isMemoryHijackingAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable detection of any file deletion</p>
                     */
                    int64_t m_isDeleteAnyFileAnalysis;
                    bool m_isDeleteAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable arbitrary file read detection</p>
                     */
                    int64_t m_isReadAnyFileAnalysis;
                    bool m_isReadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable arbitrary file upload detection</p>
                     */
                    int64_t m_isUploadAnyFileAnalysis;
                    bool m_isUploadAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable detection of arbitrary files</p>
                     */
                    int64_t m_isIncludeAnyFileAnalysis;
                    bool m_isIncludeAnyFileAnalysisHasBeenSet;

                    /**
                     * <p>Whether path traversal detection is enabled</p>
                     */
                    int64_t m_isDirectoryTraversalAnalysis;
                    bool m_isDirectoryTraversalAnalysisHasBeenSet;

                    /**
                     * <p>Whether to enable template engine injection detection</p>
                     */
                    int64_t m_isTemplateEngineInjectionAnalysis;
                    bool m_isTemplateEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether script engine injection detection is enabled</p>
                     */
                    int64_t m_isScriptEngineInjectionAnalysis;
                    bool m_isScriptEngineInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether expression injection detection is enabled</p>
                     */
                    int64_t m_isExpressionInjectionAnalysis;
                    bool m_isExpressionInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether JNDI injection detection is enabled</p>
                     */
                    int64_t m_isJndiInjectionAnalysis;
                    bool m_isJndiInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether JNI injection detection is enabled</p>
                     */
                    int64_t m_isJniInjectionAnalysis;
                    bool m_isJniInjectionAnalysisHasBeenSet;

                    /**
                     * <p>Whether Webshell backdoor detection is enabled</p>
                     */
                    int64_t m_isWebshellBackdoorAnalysis;
                    bool m_isWebshellBackdoorAnalysisHasBeenSet;

                    /**
                     * <p>Whether deserialization detection is enabled</p>
                     */
                    int64_t m_isDeserializationAnalysis;
                    bool m_isDeserializationAnalysisHasBeenSet;

                    /**
                     * <p>Whether the console switch is enabled</p>
                     */
                    bool m_enableDashboardConfig;
                    bool m_enableDashboardConfigHasBeenSet;

                    /**
                     * <p>Whether to associate with Dashboard</p>
                     */
                    int64_t m_isRelatedDashboard;
                    bool m_isRelatedDashboardHasBeenSet;

                    /**
                     * <p>Dashboard topic</p>
                     */
                    std::string m_dashboardTopicID;
                    bool m_dashboardTopicIDHasBeenSet;

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
                     * <p>Automated performance analysis task configuration</p>
                     */
                    AutoProfilingConfig m_autoProfilingConfig;
                    bool m_autoProfilingConfigHasBeenSet;

                    /**
                     * <p>Threshold configuration switch</p>
                     */
                    bool m_enableThresholdConfig;
                    bool m_enableThresholdConfigHasBeenSet;

                    /**
                     * <p>Error rate threshold</p><p>Unit: %</p>
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * <p>Alert threshold of response time</p><p>Unit: ms</p>
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

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
