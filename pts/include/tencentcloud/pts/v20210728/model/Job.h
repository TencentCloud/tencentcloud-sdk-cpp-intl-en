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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Load.h>
#include <tencentcloud/pts/v20210728/model/TestData.h>
#include <tencentcloud/pts/v20210728/model/LoadSource.h>
#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>
#include <tencentcloud/pts/v20210728/model/ProtocolInfo.h>
#include <tencentcloud/pts/v20210728/model/FileInfo.h>
#include <tencentcloud/pts/v20210728/model/DomainNameConfig.h>
#include <tencentcloud/pts/v20210728/model/NotificationHook.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Performance test job.
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobId Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobId Job ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioId Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenarioId Scenario ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return Load Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Load GetLoad() const;

                    /**
                     * 设置Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _load Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLoad(const Load& _load);

                    /**
                     * 判断参数 Load 是否已赋值
                     * @return Load 是否已赋值
                     * 
                     */
                    bool LoadHasBeenSet() const;

                    /**
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return Configs Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetConfigs() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _configs Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetConfigs(const std::vector<std::string>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                    /**
                     * 获取Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * @return Datasets Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<TestData> GetDatasets() const;

                    /**
                     * 设置Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * @param _datasets Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDatasets(const std::vector<TestData>& _datasets);

                    /**
                     * 判断参数 Datasets 是否已赋值
                     * @return Datasets 是否已赋值
                     * 
                     */
                    bool DatasetsHasBeenSet() const;

                    /**
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return Extensions Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetExtensions() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _extensions Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetExtensions(const std::vector<std::string>& _extensions);

                    /**
                     * 判断参数 Extensions 是否已赋值
                     * @return Extensions 是否已赋值
                     * 
                     */
                    bool ExtensionsHasBeenSet() const;

                    /**
                     * 获取Job status, values including:
JobUnknown: 0, JobCreated: 1, JobPending: 2, JobPreparing: 3, JobSelectClustering: 4, JobCreateTasking: 5, JobSyncTasking: 6,
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Job status, values including:
JobUnknown: 0, JobCreated: 1, JobPending: 2, JobPreparing: 3, JobSelectClustering: 4, JobCreateTasking: 5, JobSyncTasking: 6,
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Job status, values including:
JobUnknown: 0, JobCreated: 1, JobPending: 2, JobPreparing: 3, JobSelectClustering: 4, JobCreateTasking: 5, JobSyncTasking: 6,
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Job status, values including:
JobUnknown: 0, JobCreated: 1, JobPending: 2, JobPreparing: 3, JobSelectClustering: 4, JobCreateTasking: 5, JobSyncTasking: 6,
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Start time.

Note: This field may return null, indicating that no valid value is found.
                     * @return StartTime Start time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _startTime Start time.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取End time.

Note: This field may return null, indicating that no valid value is found.
                     * @return EndTime End time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _endTime End time.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Maximum VU.

Note: This field may return null, indicating that no valid value is found.
                     * @return MaxVirtualUserCount Maximum VU.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetMaxVirtualUserCount() const;

                    /**
                     * 设置Maximum VU.

Note: This field may return null, indicating that no valid value is found.
                     * @param _maxVirtualUserCount Maximum VU.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMaxVirtualUserCount(const int64_t& _maxVirtualUserCount);

                    /**
                     * 判断参数 MaxVirtualUserCount 是否已赋值
                     * @return MaxVirtualUserCount 是否已赋值
                     * 
                     */
                    bool MaxVirtualUserCountHasBeenSet() const;

                    /**
                     * 获取Note.

Note: This field may return null, indicating that no valid value is found.
                     * @return Note Note.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Note.

Note: This field may return null, indicating that no valid value is found.
                     * @param _note Note.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Error rate percentage.

Note: This field may return null, indicating that no valid value is found.
                     * @return ErrorRate Error rate percentage.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置Error rate percentage.

Note: This field may return null, indicating that no valid value is found.
                     * @param _errorRate Error rate percentage.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                    /**
                     * 获取Job owner.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobOwner Job owner.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置Job owner.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobOwner Job owner.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

                    /**
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return LoadSources Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    LoadSource GetLoadSources() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _loadSources Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLoadSources(const LoadSource& _loadSources);

                    /**
                     * 判断参数 LoadSources 是否已赋值
                     * @return LoadSources 是否已赋值
                     * 
                     */
                    bool LoadSourcesHasBeenSet() const;

                    /**
                     * 获取Job duration.

Note: This field may return null, indicating that no valid value is found.
                     * @return Duration Job duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Job duration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _duration Job duration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Maximum requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * @return MaxRequestsPerSecond Maximum requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetMaxRequestsPerSecond() const;

                    /**
                     * 设置Maximum requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * @param _maxRequestsPerSecond Maximum requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond);

                    /**
                     * 判断参数 MaxRequestsPerSecond 是否已赋值
                     * @return MaxRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool MaxRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Total number of requests.

Note: This field may return null, indicating that no valid value is found.
                     * @return RequestTotal Total number of requests.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetRequestTotal() const;

                    /**
                     * 设置Total number of requests.

Note: This field may return null, indicating that no valid value is found.
                     * @param _requestTotal Total number of requests.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRequestTotal(const double& _requestTotal);

                    /**
                     * 判断参数 RequestTotal 是否已赋值
                     * @return RequestTotal 是否已赋值
                     * 
                     */
                    bool RequestTotalHasBeenSet() const;

                    /**
                     * 获取Average requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * @return RequestsPerSecond Average requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 设置Average requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * @param _requestsPerSecond Average requests per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRequestsPerSecond(const double& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Average response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeAverage Average response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeAverage() const;

                    /**
                     * 设置Average response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeAverage Average response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeAverage(const double& _responseTimeAverage);

                    /**
                     * 判断参数 ResponseTimeAverage 是否已赋值
                     * @return ResponseTimeAverage 是否已赋值
                     * 
                     */
                    bool ResponseTimeAverageHasBeenSet() const;

                    /**
                     * 获取99th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeP99 99th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeP99() const;

                    /**
                     * 设置99th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeP99 99th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeP99(const double& _responseTimeP99);

                    /**
                     * 判断参数 ResponseTimeP99 是否已赋值
                     * @return ResponseTimeP99 是否已赋值
                     * 
                     */
                    bool ResponseTimeP99HasBeenSet() const;

                    /**
                     * 获取95th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeP95 95th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeP95() const;

                    /**
                     * 设置95th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeP95 95th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeP95(const double& _responseTimeP95);

                    /**
                     * 判断参数 ResponseTimeP95 是否已赋值
                     * @return ResponseTimeP95 是否已赋值
                     * 
                     */
                    bool ResponseTimeP95HasBeenSet() const;

                    /**
                     * 获取90th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeP90 90th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeP90() const;

                    /**
                     * 设置90th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeP90 90th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeP90(const double& _responseTimeP90);

                    /**
                     * 判断参数 ResponseTimeP90 是否已赋值
                     * @return ResponseTimeP90 是否已赋值
                     * 
                     */
                    bool ResponseTimeP90HasBeenSet() const;

                    /**
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return Scripts Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetScripts() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scripts Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScripts(const std::vector<std::string>& _scripts);

                    /**
                     * 判断参数 Scripts 是否已赋值
                     * @return Scripts 是否已赋值
                     * 
                     */
                    bool ScriptsHasBeenSet() const;

                    /**
                     * 获取Maximum response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeMax Maximum response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeMax() const;

                    /**
                     * 设置Maximum response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeMax Maximum response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeMax(const double& _responseTimeMax);

                    /**
                     * 判断参数 ResponseTimeMax 是否已赋值
                     * @return ResponseTimeMax 是否已赋值
                     * 
                     */
                    bool ResponseTimeMaxHasBeenSet() const;

                    /**
                     * 获取Minimum response time.

Note: This field may return null, indicating that no valid value is found.
                     * @return ResponseTimeMin Minimum response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetResponseTimeMin() const;

                    /**
                     * 设置Minimum response time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _responseTimeMin Minimum response time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResponseTimeMin(const double& _responseTimeMin);

                    /**
                     * 判断参数 ResponseTimeMin 是否已赋值
                     * @return ResponseTimeMin 是否已赋值
                     * 
                     */
                    bool ResponseTimeMinHasBeenSet() const;

                    /**
                     * 获取Stress machine information.

Note: This field may return null, indicating that no valid value is found.
                     * @return LoadSourceInfos Stress machine information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<LoadSource> GetLoadSourceInfos() const;

                    /**
                     * 设置Stress machine information.

Note: This field may return null, indicating that no valid value is found.
                     * @param _loadSourceInfos Stress machine information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetLoadSourceInfos(const std::vector<LoadSource>& _loadSourceInfos);

                    /**
                     * 判断参数 LoadSourceInfos 是否已赋值
                     * @return LoadSourceInfos 是否已赋值
                     * 
                     */
                    bool LoadSourceInfosHasBeenSet() const;

                    /**
                     * 获取Test script information.

Note: This field may return null, indicating that no valid value is found.
                     * @return TestScripts Test script information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<ScriptInfo> GetTestScripts() const;

                    /**
                     * 设置Test script information.

Note: This field may return null, indicating that no valid value is found.
                     * @param _testScripts Test script information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTestScripts(const std::vector<ScriptInfo>& _testScripts);

                    /**
                     * 判断参数 TestScripts 是否已赋值
                     * @return TestScripts 是否已赋值
                     * 
                     */
                    bool TestScriptsHasBeenSet() const;

                    /**
                     * 获取Protocol file information.

Note: This field may return null, indicating that no valid value is found.
                     * @return Protocols Protocol file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<ProtocolInfo> GetProtocols() const;

                    /**
                     * 设置Protocol file information.

Note: This field may return null, indicating that no valid value is found.
                     * @param _protocols Protocol file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProtocols(const std::vector<ProtocolInfo>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取Request file information.

Note: This field may return null, indicating that no valid value is found.
                     * @return RequestFiles Request file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<FileInfo> GetRequestFiles() const;

                    /**
                     * 设置Request file information.

Note: This field may return null, indicating that no valid value is found.
                     * @param _requestFiles Request file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRequestFiles(const std::vector<FileInfo>& _requestFiles);

                    /**
                     * 判断参数 RequestFiles 是否已赋值
                     * @return RequestFiles 是否已赋值
                     * 
                     */
                    bool RequestFilesHasBeenSet() const;

                    /**
                     * 获取Extension file information.

Note: This field may return null, indicating that no valid value is found.
                     * @return Plugins Extension file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<FileInfo> GetPlugins() const;

                    /**
                     * 设置Extension file information.

Note: This field may return null, indicating that no valid value is found.
                     * @param _plugins Extension file information.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetPlugins(const std::vector<FileInfo>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return CronId Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCronId() const;

                    /**
                     * 设置Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _cronId Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCronId(const std::string& _cronId);

                    /**
                     * 判断参数 CronId 是否已赋值
                     * @return CronId 是否已赋值
                     * 
                     */
                    bool CronIdHasBeenSet() const;

                    /**
                     * 获取Scenario type.

Note: This field may return null, indicating that no valid value is found.
                     * @return Type Scenario type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Scenario type.

Note: This field may return null, indicating that no valid value is found.
                     * @param _type Scenario type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Domain binding configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return DomainNameConfig Domain binding configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    DomainNameConfig GetDomainNameConfig() const;

                    /**
                     * 设置Domain binding configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _domainNameConfig Domain binding configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDomainNameConfig(const DomainNameConfig& _domainNameConfig);

                    /**
                     * 判断参数 DomainNameConfig 是否已赋值
                     * @return DomainNameConfig 是否已赋值
                     * 
                     */
                    bool DomainNameConfigHasBeenSet() const;

                    /**
                     * 获取Whether the job is a debug job.

Note: This field may return null, indicating that no valid value is found.
                     * @return Debug Whether the job is a debug job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetDebug() const;

                    /**
                     * 设置Whether the job is a debug job.

Note: This field may return null, indicating that no valid value is found.
                     * @param _debug Whether the job is a debug job.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDebug(const bool& _debug);

                    /**
                     * 判断参数 Debug 是否已赋值
                     * @return Debug 是否已赋值
                     * 
                     */
                    bool DebugHasBeenSet() const;

                    /**
                     * 获取Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * @return AbortReason Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAbortReason() const;

                    /**
                     * 设置Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * @param _abortReason Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAbortReason(const int64_t& _abortReason);

                    /**
                     * 判断参数 AbortReason 是否已赋值
                     * @return AbortReason 是否已赋值
                     * 
                     */
                    bool AbortReasonHasBeenSet() const;

                    /**
                     * 获取Create Time.

Note: This field may return null, indicating that no valid value is found.
                     * @return CreatedAt Create Time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create Time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _createdAt Create Time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Notification event callback.

Note: This field may return null, indicating that no valid value is found.
                     * @return NotificationHooks Notification event callback.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<NotificationHook> GetNotificationHooks() const;

                    /**
                     * 设置Notification event callback.

Note: This field may return null, indicating that no valid value is found.
                     * @param _notificationHooks Notification event callback.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNotificationHooks(const std::vector<NotificationHook>& _notificationHooks);

                    /**
                     * 判断参数 NotificationHooks 是否已赋值
                     * @return NotificationHooks 是否已赋值
                     * 
                     */
                    bool NotificationHooksHasBeenSet() const;

                    /**
                     * 获取Bytes received per second.

Note: This field may return null, indicating that no valid value is found.
                     * @return NetworkReceiveRate Bytes received per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetNetworkReceiveRate() const;

                    /**
                     * 设置Bytes received per second.

Note: This field may return null, indicating that no valid value is found.
                     * @param _networkReceiveRate Bytes received per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNetworkReceiveRate(const double& _networkReceiveRate);

                    /**
                     * 判断参数 NetworkReceiveRate 是否已赋值
                     * @return NetworkReceiveRate 是否已赋值
                     * 
                     */
                    bool NetworkReceiveRateHasBeenSet() const;

                    /**
                     * 获取Bytes sent per second.

Note: This field may return null, indicating that no valid value is found.
                     * @return NetworkSendRate Bytes sent per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    double GetNetworkSendRate() const;

                    /**
                     * 设置Bytes sent per second.

Note: This field may return null, indicating that no valid value is found.
                     * @param _networkSendRate Bytes sent per second.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNetworkSendRate(const double& _networkSendRate);

                    /**
                     * 判断参数 NetworkSendRate 是否已赋值
                     * @return NetworkSendRate 是否已赋值
                     * 
                     */
                    bool NetworkSendRateHasBeenSet() const;

                    /**
                     * 获取Job status description.

Note: This field may return null, indicating that no valid value is found.
                     * @return Message Job status description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Job status description.

Note: This field may return null, indicating that no valid value is found.
                     * @param _message Job status description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Project name.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectName Project name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectName Project name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioName Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenarioName Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取Billing type.

Note: This field may return null, indicating that no valid value is found.
                     * @return PayMode Billing type.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing type.

Note: This field may return null, indicating that no valid value is found.
                     * @param _payMode Billing type.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Job VUM usage.

Note: This field may return null, indicating that no valid value is found.
                     * @return Usage Job VUM usage.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetUsage() const;

                    /**
                     * 设置Job VUM usage.

Note: This field may return null, indicating that no valid value is found.
                     * @param _usage Job VUM usage.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUsage(const int64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * Job ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Load configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    Load m_load;
                    bool m_loadHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_configs;
                    bool m_configsHasBeenSet;

                    /**
                     * Test datasets.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<TestData> m_datasets;
                    bool m_datasetsHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * Job status, values including:
JobUnknown: 0, JobCreated: 1, JobPending: 2, JobPreparing: 3, JobSelectClustering: 4, JobCreateTasking: 5, JobSyncTasking: 6,
JobRunning:11,JobFinished:12,JobPrepareException:13,JobFinishException:14,JobAborting:15,JobAborted:16,JobAbortException:17,JobDeleted:18,
JobSelectClusterException:19,JobCreateTaskException:20,JobSyncTaskException:21

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Maximum VU.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_maxVirtualUserCount;
                    bool m_maxVirtualUserCountHasBeenSet;

                    /**
                     * Note.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Error rate percentage.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                    /**
                     * Job owner.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    LoadSource m_loadSources;
                    bool m_loadSourcesHasBeenSet;

                    /**
                     * Job duration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Maximum requests per second.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * Total number of requests.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_requestTotal;
                    bool m_requestTotalHasBeenSet;

                    /**
                     * Average requests per second.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * Average response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeAverage;
                    bool m_responseTimeAverageHasBeenSet;

                    /**
                     * 99th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeP99;
                    bool m_responseTimeP99HasBeenSet;

                    /**
                     * 95th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeP95;
                    bool m_responseTimeP95HasBeenSet;

                    /**
                     * 90th percentile response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeP90;
                    bool m_responseTimeP90HasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_scripts;
                    bool m_scriptsHasBeenSet;

                    /**
                     * Maximum response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeMax;
                    bool m_responseTimeMaxHasBeenSet;

                    /**
                     * Minimum response time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_responseTimeMin;
                    bool m_responseTimeMinHasBeenSet;

                    /**
                     * Stress machine information.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<LoadSource> m_loadSourceInfos;
                    bool m_loadSourceInfosHasBeenSet;

                    /**
                     * Test script information.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<ScriptInfo> m_testScripts;
                    bool m_testScriptsHasBeenSet;

                    /**
                     * Protocol file information.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<ProtocolInfo> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * Request file information.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<FileInfo> m_requestFiles;
                    bool m_requestFilesHasBeenSet;

                    /**
                     * Extension file information.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<FileInfo> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cronId;
                    bool m_cronIdHasBeenSet;

                    /**
                     * Scenario type.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Domain binding configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    DomainNameConfig m_domainNameConfig;
                    bool m_domainNameConfigHasBeenSet;

                    /**
                     * Whether the job is a debug job.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_debug;
                    bool m_debugHasBeenSet;

                    /**
                     * Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_abortReason;
                    bool m_abortReasonHasBeenSet;

                    /**
                     * Create Time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Notification event callback.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<NotificationHook> m_notificationHooks;
                    bool m_notificationHooksHasBeenSet;

                    /**
                     * Bytes received per second.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_networkReceiveRate;
                    bool m_networkReceiveRateHasBeenSet;

                    /**
                     * Bytes sent per second.

Note: This field may return null, indicating that no valid value is found.
                     */
                    double m_networkSendRate;
                    bool m_networkSendRateHasBeenSet;

                    /**
                     * Job status description.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Project name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * Billing type.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Job VUM usage.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_JOB_H_
