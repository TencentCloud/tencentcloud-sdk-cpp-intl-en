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
                     * 获取Business system id.
                     * @return InstanceKey Business system id.
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Business system id.
                     * @param _instanceKey Business system id.
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
                     * 获取Application name	.	
                     * @return ServiceName Application name	.	
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Application name	.	
                     * @param _serviceName Application name	.	
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
                     * 获取API filtering.
                     * @return OperationNameFilter API filtering.
                     * 
                     */
                    std::string GetOperationNameFilter() const;

                    /**
                     * 设置API filtering.
                     * @param _operationNameFilter API filtering.
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
                     * 获取Error type filtering.
                     * @return ExceptionFilter Error type filtering.
                     * 
                     */
                    std::string GetExceptionFilter() const;

                    /**
                     * 设置Error type filtering.
                     * @param _exceptionFilter Error type filtering.
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
                     * 获取HTTP status code filtering.
                     * @return ErrorCodeFilter HTTP status code filtering.
                     * 
                     */
                    std::string GetErrorCodeFilter() const;

                    /**
                     * 设置HTTP status code filtering.
                     * @param _errorCodeFilter HTTP status code filtering.
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
                     * 获取Application diagnosis switch (deprecated).
                     * @return EventEnable Application diagnosis switch (deprecated).
                     * 
                     */
                    bool GetEventEnable() const;

                    /**
                     * 设置Application diagnosis switch (deprecated).
                     * @param _eventEnable Application diagnosis switch (deprecated).
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
                     * 获取URL convergence switch. 0: off; 1: on.
                     * @return UrlConvergenceSwitch URL convergence switch. 0: off; 1: on.
                     * 
                     */
                    int64_t GetUrlConvergenceSwitch() const;

                    /**
                     * 设置URL convergence switch. 0: off; 1: on.
                     * @param _urlConvergenceSwitch URL convergence switch. 0: off; 1: on.
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
                     * 获取URL convergence threshold.	
                     * @return UrlConvergenceThreshold URL convergence threshold.	
                     * 
                     */
                    int64_t GetUrlConvergenceThreshold() const;

                    /**
                     * 设置URL convergence threshold.	
                     * @param _urlConvergenceThreshold URL convergence threshold.	
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
                     * 获取URL convergence rule in the form of a regular expression.	
                     * @return UrlConvergence URL convergence rule in the form of a regular expression.	
                     * 
                     */
                    std::string GetUrlConvergence() const;

                    /**
                     * 设置URL convergence rule in the form of a regular expression.	
                     * @param _urlConvergence URL convergence rule in the form of a regular expression.	
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
                     * 获取URL exclusion rule in the form of a regular expression.
                     * @return UrlExclude URL exclusion rule in the form of a regular expression.
                     * 
                     */
                    std::string GetUrlExclude() const;

                    /**
                     * 设置URL exclusion rule in the form of a regular expression.
                     * @param _urlExclude URL exclusion rule in the form of a regular expression.
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
                     * 获取Log feature switch. 0: off; 1: on.
                     * @return IsRelatedLog Log feature switch. 0: off; 1: on.
                     * 
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置Log feature switch. 0: off; 1: on.
                     * @param _isRelatedLog Log feature switch. 0: off; 1: on.
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
                     * 获取Log set. 
                     * @return LogSet Log set. 
                     * 
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置Log set. 
                     * @param _logSet Log set. 
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
                     * 获取Log topic.
                     * @return LogTopicID Log topic.
                     * 
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置Log topic.
                     * @param _logTopicID Log topic.
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
                     * 获取Method stack snapshot switch: true to enable, false to disable.
                     * @return SnapshotEnable Method stack snapshot switch: true to enable, false to disable.
                     * 
                     */
                    bool GetSnapshotEnable() const;

                    /**
                     * 设置Method stack snapshot switch: true to enable, false to disable.
                     * @param _snapshotEnable Method stack snapshot switch: true to enable, false to disable.
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
                     * 获取Slow call listening trigger threshold.
                     * @return SnapshotTimeout Slow call listening trigger threshold.
                     * 
                     */
                    int64_t GetSnapshotTimeout() const;

                    /**
                     * 设置Slow call listening trigger threshold.
                     * @param _snapshotTimeout Slow call listening trigger threshold.
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
                     * 获取Probe master switch.
                     * @return AgentEnable Probe master switch.
                     * 
                     */
                    bool GetAgentEnable() const;

                    /**
                     * 设置Probe master switch.
                     * @param _agentEnable Probe master switch.
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
                     * 获取Component list switch (deprecated).
                     * @return InstrumentList Component list switch (deprecated).
                     * 
                     */
                    std::vector<Instrument> GetInstrumentList() const;

                    /**
                     * 设置Component list switch (deprecated).
                     * @param _instrumentList Component list switch (deprecated).
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
                     * 获取Link compression switch (deprecated).
                     * @return TraceSquash Link compression switch (deprecated).
                     * 
                     */
                    bool GetTraceSquash() const;

                    /**
                     * 设置Link compression switch (deprecated).
                     * @param _traceSquash Link compression switch (deprecated).
                     * 
                     */
                    void SetTraceSquash(const bool& _traceSquash);

                    /**
                     * 判断参数 TraceSquash 是否已赋值
                     * @return TraceSquash 是否已赋值
                     * 
                     */
                    bool TraceSquashHasBeenSet() const;

                private:

                    /**
                     * Business system id.
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Application name	.	
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * API filtering.
                     */
                    std::string m_operationNameFilter;
                    bool m_operationNameFilterHasBeenSet;

                    /**
                     * Error type filtering.
                     */
                    std::string m_exceptionFilter;
                    bool m_exceptionFilterHasBeenSet;

                    /**
                     * HTTP status code filtering.
                     */
                    std::string m_errorCodeFilter;
                    bool m_errorCodeFilterHasBeenSet;

                    /**
                     * Application diagnosis switch (deprecated).
                     */
                    bool m_eventEnable;
                    bool m_eventEnableHasBeenSet;

                    /**
                     * URL convergence switch. 0: off; 1: on.
                     */
                    int64_t m_urlConvergenceSwitch;
                    bool m_urlConvergenceSwitchHasBeenSet;

                    /**
                     * URL convergence threshold.	
                     */
                    int64_t m_urlConvergenceThreshold;
                    bool m_urlConvergenceThresholdHasBeenSet;

                    /**
                     * URL convergence rule in the form of a regular expression.	
                     */
                    std::string m_urlConvergence;
                    bool m_urlConvergenceHasBeenSet;

                    /**
                     * URL exclusion rule in the form of a regular expression.
                     */
                    std::string m_urlExclude;
                    bool m_urlExcludeHasBeenSet;

                    /**
                     * Log feature switch. 0: off; 1: on.
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * Log source.	
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * Log set. 
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * Log topic.
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * Method stack snapshot switch: true to enable, false to disable.
                     */
                    bool m_snapshotEnable;
                    bool m_snapshotEnableHasBeenSet;

                    /**
                     * Slow call listening trigger threshold.
                     */
                    int64_t m_snapshotTimeout;
                    bool m_snapshotTimeoutHasBeenSet;

                    /**
                     * Probe master switch.
                     */
                    bool m_agentEnable;
                    bool m_agentEnableHasBeenSet;

                    /**
                     * Component list switch (deprecated).
                     */
                    std::vector<Instrument> m_instrumentList;
                    bool m_instrumentListHasBeenSet;

                    /**
                     * Link compression switch (deprecated).
                     */
                    bool m_traceSquash;
                    bool m_traceSquashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAPPLICATIONCONFIGVIEW_H_
