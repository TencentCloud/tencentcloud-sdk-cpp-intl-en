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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/ReactionTimeRange.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeSampleLogs request structure.
                */
                class DescribeSampleLogsRequest : public AbstractModel
                {
                public:
                    DescribeSampleLogsRequest();
                    ~DescribeSampleLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Scenario ID.
                     * @return ScenarioId Scenario ID.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.
                     * @param _scenarioId Scenario ID.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Job ID.
                     * @return JobId Job ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID.
                     * @param _jobId Job ID.
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
                     * 获取Context is used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
                     * @return Context Context is used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Context is used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
                     * @param _context Context is used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Log start time.
                     * @return From Log start time.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Log start time.
                     * @param _from Log start time.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Log end time.
                     * @return To Log end time.
                     * 
                     */
                    std::string GetTo() const;

                    /**
                     * 设置Log end time.
                     * @param _to Log end time.
                     * 
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Log levels, such as debug, info, error.
                     * @return SeverityText Log levels, such as debug, info, error.
                     * 
                     */
                    std::string GetSeverityText() const;

                    /**
                     * 设置Log levels, such as debug, info, error.
                     * @param _severityText Log levels, such as debug, info, error.
                     * 
                     */
                    void SetSeverityText(const std::string& _severityText);

                    /**
                     * 判断参数 SeverityText 是否已赋值
                     * @return SeverityText 是否已赋值
                     * 
                     */
                    bool SeverityTextHasBeenSet() const;

                    /**
                     * 获取Region of pressure engine instance, such as ap-shanghai, ap-guangzhou.
                     * @return InstanceRegion Region of pressure engine instance, such as ap-shanghai, ap-guangzhou.
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置Region of pressure engine instance, such as ap-shanghai, ap-guangzhou.
                     * @param _instanceRegion Region of pressure engine instance, such as ap-shanghai, ap-guangzhou.
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取IP of pressure engine instance.
                     * @return Instance IP of pressure engine instance.
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置IP of pressure engine instance.
                     * @param _instance IP of pressure engine instance.
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取Type of log, can be left empty. 'Request' represents sampling logs.
                     * @return LogType Type of log, can be left empty. 'Request' represents sampling logs.
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Type of log, can be left empty. 'Request' represents sampling logs.
                     * @param _logType Type of log, can be left empty. 'Request' represents sampling logs.
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Number of returned logs, maximum 100.
                     * @return Limit Number of returned logs, maximum 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned logs, maximum 100.
                     * @param _limit Number of returned logs, maximum 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Response time range of sampling logs.
                     * @return ReactionTimeRange Response time range of sampling logs.
                     * 
                     */
                    ReactionTimeRange GetReactionTimeRange() const;

                    /**
                     * 设置Response time range of sampling logs.
                     * @param _reactionTimeRange Response time range of sampling logs.
                     * 
                     */
                    void SetReactionTimeRange(const ReactionTimeRange& _reactionTimeRange);

                    /**
                     * 判断参数 ReactionTimeRange 是否已赋值
                     * @return ReactionTimeRange 是否已赋值
                     * 
                     */
                    bool ReactionTimeRangeHasBeenSet() const;

                    /**
                     * 获取Status code of sampling logs.
                     * @return Status Status code of sampling logs.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status code of sampling logs.
                     * @param _status Status code of sampling logs.
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
                     * 获取Result code of sampling logs.
                     * @return Result Result code of sampling logs.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Result code of sampling logs.
                     * @param _result Result code of sampling logs.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Request method of sampling logs.
                     * @return Method Request method of sampling logs.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Request method of sampling logs.
                     * @param _method Request method of sampling logs.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Request service of sampling logs.
                     * @return Service Request service of sampling logs.
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置Request service of sampling logs.
                     * @param _service Request service of sampling logs.
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Scenario ID.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Job ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Context is used when loading more logs. Pass through the Context value returned last time to retrieve subsequent log content. The expiration time is 1 hour.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Log start time.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Log end time.
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Log levels, such as debug, info, error.
                     */
                    std::string m_severityText;
                    bool m_severityTextHasBeenSet;

                    /**
                     * Region of pressure engine instance, such as ap-shanghai, ap-guangzhou.
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * IP of pressure engine instance.
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * Type of log, can be left empty. 'Request' represents sampling logs.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Number of returned logs, maximum 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Response time range of sampling logs.
                     */
                    ReactionTimeRange m_reactionTimeRange;
                    bool m_reactionTimeRangeHasBeenSet;

                    /**
                     * Status code of sampling logs.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Result code of sampling logs.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Request method of sampling logs.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Request service of sampling logs.
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBESAMPLELOGSREQUEST_H_
