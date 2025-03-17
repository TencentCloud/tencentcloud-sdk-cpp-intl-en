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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Engine task information.
                */
                class EngineTaskInfo : public AbstractModel
                {
                public:
                    EngineTaskInfo();
                    ~EngineTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Engine submission time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineSubmitTime Engine submission time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineSubmitTime() const;

                    /**
                     * 设置Engine submission time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineSubmitTime Engine submission time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineSubmitTime(const std::string& _engineSubmitTime);

                    /**
                     * 判断参数 EngineSubmitTime 是否已赋值
                     * @return EngineSubmitTime 是否已赋值
                     * 
                     */
                    bool EngineSubmitTimeHasBeenSet() const;

                    /**
                     * 获取Engine execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeTime Engine execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeTime() const;

                    /**
                     * 设置Engine execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeTime Engine execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeTime(const std::string& _engineExeTime);

                    /**
                     * 判断参数 EngineExeTime 是否已赋值
                     * @return EngineExeTime 是否已赋值
                     * 
                     */
                    bool EngineExeTimeHasBeenSet() const;

                    /**
                     * 获取Total execution time of the engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeTimes Total execution time of the engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEngineExeTimes() const;

                    /**
                     * 设置Total execution time of the engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeTimes Total execution time of the engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeTimes(const uint64_t& _engineExeTimes);

                    /**
                     * 判断参数 EngineExeTimes 是否已赋值
                     * @return EngineExeTimes 是否已赋值
                     * 
                     */
                    bool EngineExeTimesHasBeenSet() const;

                    /**
                     * 获取cu consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CuConsume cu consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCuConsume() const;

                    /**
                     * 设置cu consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cuConsume cu consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCuConsume(const uint64_t& _cuConsume);

                    /**
                     * 判断参数 CuConsume 是否已赋值
                     * @return CuConsume 是否已赋值
                     * 
                     */
                    bool CuConsumeHasBeenSet() const;

                    /**
                     * 获取Resource consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceUsage Resource consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResourceUsage() const;

                    /**
                     * 设置Resource consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceUsage Resource consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceUsage(const int64_t& _resourceUsage);

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                    /**
                     * 获取Engine name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineName Engine name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Engine name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineName Engine name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Engine execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineExeStatus Engine execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineExeStatus() const;

                    /**
                     * 设置Engine execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineExeStatus Engine execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineExeStatus(const std::string& _engineExeStatus);

                    /**
                     * 判断参数 EngineExeStatus 是否已赋值
                     * @return EngineExeStatus 是否已赋值
                     * 
                     */
                    bool EngineExeStatusHasBeenSet() const;

                    /**
                     * 获取Task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskKind Task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskKind() const;

                    /**
                     * 设置Task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskKind Task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskKind(const std::string& _taskKind);

                    /**
                     * 判断参数 TaskKind 是否已赋值
                     * @return TaskKind 是否已赋值
                     * 
                     */
                    bool TaskKindHasBeenSet() const;

                    /**
                     * 获取Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskType Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task SQL statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskContent Task SQL statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskContent() const;

                    /**
                     * 设置Task SQL statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskContent Task SQL statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskContent(const std::string& _taskContent);

                    /**
                     * 判断参数 TaskContent 是否已赋值
                     * @return TaskContent 是否已赋值
                     * 
                     */
                    bool TaskContentHasBeenSet() const;

                    /**
                     * 获取Total bytes of data scanning.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputBytesSum Total bytes of data scanning.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInputBytesSum() const;

                    /**
                     * 设置Total bytes of data scanning.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputBytesSum Total bytes of data scanning.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInputBytesSum(const uint64_t& _inputBytesSum);

                    /**
                     * 判断参数 InputBytesSum 是否已赋值
                     * @return InputBytesSum 是否已赋值
                     * 
                     */
                    bool InputBytesSumHasBeenSet() const;

                    /**
                     * 获取Total shuffle read bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShuffleReadBytesSum Total shuffle read bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetShuffleReadBytesSum() const;

                    /**
                     * 设置Total shuffle read bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shuffleReadBytesSum Total shuffle read bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShuffleReadBytesSum(const uint64_t& _shuffleReadBytesSum);

                    /**
                     * 判断参数 ShuffleReadBytesSum 是否已赋值
                     * @return ShuffleReadBytesSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadBytesSumHasBeenSet() const;

                    /**
                     * 获取Total number of shuffle read lines.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShuffleReadRecordsSum Total number of shuffle read lines.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetShuffleReadRecordsSum() const;

                    /**
                     * 设置Total number of shuffle read lines.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shuffleReadRecordsSum Total number of shuffle read lines.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShuffleReadRecordsSum(const uint64_t& _shuffleReadRecordsSum);

                    /**
                     * 判断参数 ShuffleReadRecordsSum 是否已赋值
                     * @return ShuffleReadRecordsSum 是否已赋值
                     * 
                     */
                    bool ShuffleReadRecordsSumHasBeenSet() const;

                    /**
                     * 获取Total number of outputs.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputRecordsSum Total number of outputs.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOutputRecordsSum() const;

                    /**
                     * 设置Total number of outputs.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputRecordsSum Total number of outputs.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputRecordsSum(const uint64_t& _outputRecordsSum);

                    /**
                     * 判断参数 OutputRecordsSum 是否已赋值
                     * @return OutputRecordsSum 是否已赋值
                     * 
                     */
                    bool OutputRecordsSumHasBeenSet() const;

                    /**
                     * 获取Total output in bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputBytesSum Total output in bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOutputBytesSum() const;

                    /**
                     * 设置Total output in bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputBytesSum Total output in bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputBytesSum(const uint64_t& _outputBytesSum);

                    /**
                     * 判断参数 OutputBytesSum 是否已赋值
                     * @return OutputBytesSum 是否已赋值
                     * 
                     */
                    bool OutputBytesSumHasBeenSet() const;

                    /**
                     * 获取Number of output files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputFilesNum Number of output files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOutputFilesNum() const;

                    /**
                     * 设置Number of output files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputFilesNum Number of output files.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputFilesNum(const uint64_t& _outputFilesNum);

                    /**
                     * 判断参数 OutputFilesNum 是否已赋值
                     * @return OutputFilesNum 是否已赋值
                     * 
                     */
                    bool OutputFilesNumHasBeenSet() const;

                    /**
                     * 获取Number of small files output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OutputSmallFilesNum Number of small files output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOutputSmallFilesNum() const;

                    /**
                     * 设置Number of small files output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _outputSmallFilesNum Number of small files output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutputSmallFilesNum(const uint64_t& _outputSmallFilesNum);

                    /**
                     * 判断参数 OutputSmallFilesNum 是否已赋值
                     * @return OutputSmallFilesNum 是否已赋值
                     * 
                     */
                    bool OutputSmallFilesNumHasBeenSet() const;

                    /**
                     * 获取Execution wait time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WaitTime Execution wait time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWaitTime() const;

                    /**
                     * 设置Execution wait time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _waitTime Execution wait time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWaitTime(const uint64_t& _waitTime);

                    /**
                     * 判断参数 WaitTime 是否已赋值
                     * @return WaitTime 是否已赋值
                     * 
                     */
                    bool WaitTimeHasBeenSet() const;

                    /**
                     * 获取Query result time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueryResultTime Query result time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetQueryResultTime() const;

                    /**
                     * 设置Query result time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queryResultTime Query result time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueryResultTime(const uint64_t& _queryResultTime);

                    /**
                     * 判断参数 QueryResultTime 是否已赋值
                     * @return QueryResultTime 是否已赋值
                     * 
                     */
                    bool QueryResultTimeHasBeenSet() const;

                    /**
                     * 获取Input parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CmdArgs Input parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置Input parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cmdArgs Input parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     * 
                     */
                    bool CmdArgsHasBeenSet() const;

                private:

                    /**
                     * Engine submission time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineSubmitTime;
                    bool m_engineSubmitTimeHasBeenSet;

                    /**
                     * Engine execution time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeTime;
                    bool m_engineExeTimeHasBeenSet;

                    /**
                     * Total execution time of the engine.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_engineExeTimes;
                    bool m_engineExeTimesHasBeenSet;

                    /**
                     * cu consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cuConsume;
                    bool m_cuConsumeHasBeenSet;

                    /**
                     * Resource consumption.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                    /**
                     * Engine name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Engine execution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineExeStatus;
                    bool m_engineExeStatusHasBeenSet;

                    /**
                     * Task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskKind;
                    bool m_taskKindHasBeenSet;

                    /**
                     * Task type

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task SQL statement.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskContent;
                    bool m_taskContentHasBeenSet;

                    /**
                     * Total bytes of data scanning.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_inputBytesSum;
                    bool m_inputBytesSumHasBeenSet;

                    /**
                     * Total shuffle read bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_shuffleReadBytesSum;
                    bool m_shuffleReadBytesSumHasBeenSet;

                    /**
                     * Total number of shuffle read lines.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_shuffleReadRecordsSum;
                    bool m_shuffleReadRecordsSumHasBeenSet;

                    /**
                     * Total number of outputs.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_outputRecordsSum;
                    bool m_outputRecordsSumHasBeenSet;

                    /**
                     * Total output in bytes.
Note: This field may return null, indicating that no valid values can be obtained.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_outputBytesSum;
                    bool m_outputBytesSumHasBeenSet;

                    /**
                     * Number of output files.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_outputFilesNum;
                    bool m_outputFilesNumHasBeenSet;

                    /**
                     * Number of small files output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_outputSmallFilesNum;
                    bool m_outputSmallFilesNumHasBeenSet;

                    /**
                     * Execution wait time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_waitTime;
                    bool m_waitTimeHasBeenSet;

                    /**
                     * Query result time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_queryResultTime;
                    bool m_queryResultTimeHasBeenSet;

                    /**
                     * Input parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ENGINETASKINFO_H_
