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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * BatchProcessMedia request structure.
                */
                class BatchProcessMediaRequest : public AbstractModel
                {
                public:
                    BatchProcessMediaRequest();
                    ~BatchProcessMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Path of the input file.
                     * @return InputInfo Path of the input file.
                     * 
                     */
                    std::vector<MediaInputInfo> GetInputInfo() const;

                    /**
                     * 设置Path of the input file.
                     * @param _inputInfo Path of the input file.
                     * 
                     */
                    void SetInputInfo(const std::vector<MediaInputInfo>& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Storage bucket for the output file. If it is left blank, the storage location in InputInfo will be inherited.
Note: When InputInfo.Type is URL, this parameter is required.
                     * @return OutputStorage Storage bucket for the output file. If it is left blank, the storage location in InputInfo will be inherited.
Note: When InputInfo.Type is URL, this parameter is required.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置Storage bucket for the output file. If it is left blank, the storage location in InputInfo will be inherited.
Note: When InputInfo.Type is URL, this parameter is required.
                     * @param _outputStorage Storage bucket for the output file. If it is left blank, the storage location in InputInfo will be inherited.
Note: When InputInfo.Type is URL, this parameter is required.
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left blank, it indicates that the directory is the same as the one where the file is located in InputInfo.
                     * @return OutputDir Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left blank, it indicates that the directory is the same as the one where the file is located in InputInfo.
                     * 
                     */
                    std::string GetOutputDir() const;

                    /**
                     * 设置Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left blank, it indicates that the directory is the same as the one where the file is located in InputInfo.
                     * @param _outputDir Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left blank, it indicates that the directory is the same as the one where the file is located in InputInfo.
                     * 
                     */
                    void SetOutputDir(const std::string& _outputDir);

                    /**
                     * 判断参数 OutputDir 是否已赋值
                     * @return OutputDir 是否已赋值
                     * 
                     */
                    bool OutputDirHasBeenSet() const;

                    /**
                     * 获取Smart subtitle.
                     * @return SmartSubtitlesTask Smart subtitle.
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置Smart subtitle.
                     * @param _smartSubtitlesTask Smart subtitle.
                     * 
                     */
                    void SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取Event notification information of the task. If left blank, it indicates that no event notification will be obtained.
                     * @return TaskNotifyConfig Event notification information of the task. If left blank, it indicates that no event notification will be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of the task. If left blank, it indicates that no event notification will be obtained.
                     * @param _taskNotifyConfig Event notification information of the task. If left blank, it indicates that no event notification will be obtained.
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Priority of the task flow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @return TasksPriority Priority of the task flow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Priority of the task flow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @param _tasksPriority Priority of the task flow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @return SessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @param _sessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @return ResourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * @param _resourceId Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Whether to skip metadata acquisition. Valid values:
0: do not skip.
1: skip.
Default value: 0		
                     * @return SkipMateData Whether to skip metadata acquisition. Valid values:
0: do not skip.
1: skip.
Default value: 0		
                     * 
                     */
                    int64_t GetSkipMateData() const;

                    /**
                     * 设置Whether to skip metadata acquisition. Valid values:
0: do not skip.
1: skip.
Default value: 0		
                     * @param _skipMateData Whether to skip metadata acquisition. Valid values:
0: do not skip.
1: skip.
Default value: 0		
                     * 
                     */
                    void SetSkipMateData(const int64_t& _skipMateData);

                    /**
                     * 判断参数 SkipMateData 是否已赋值
                     * @return SkipMateData 是否已赋值
                     * 
                     */
                    bool SkipMateDataHasBeenSet() const;

                private:

                    /**
                     * Path of the input file.
                     */
                    std::vector<MediaInputInfo> m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Storage bucket for the output file. If it is left blank, the storage location in InputInfo will be inherited.
Note: When InputInfo.Type is URL, this parameter is required.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * Storage directory for the output file. It should start and end with a slash (/), such as `/movie/201907/`.
If left blank, it indicates that the directory is the same as the one where the file is located in InputInfo.
                     */
                    std::string m_outputDir;
                    bool m_outputDirHasBeenSet;

                    /**
                     * Smart subtitle.
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * Event notification information of the task. If left blank, it indicates that no event notification will be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Priority of the task flow. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Resource ID. Ensure the corresponding resource is in the enabled state. The default value is an account's primary resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Whether to skip metadata acquisition. Valid values:
0: do not skip.
1: skip.
Default value: 0		
                     */
                    int64_t m_skipMateData;
                    bool m_skipMateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHPROCESSMEDIAREQUEST_H_
