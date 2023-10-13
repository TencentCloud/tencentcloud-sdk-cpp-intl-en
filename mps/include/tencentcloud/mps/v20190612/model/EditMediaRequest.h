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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EditMediaFileInfo.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/EditMediaOutputConfig.h>
#include <tencentcloud/mps/v20190612/model/ComposeMediaConfig.h>
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
                * EditMedia request structure.
                */
                class EditMediaRequest : public AbstractModel
                {
                public:
                    EditMediaRequest();
                    ~EditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of input video file.
                     * @return FileInfos Information of input video file.
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置Information of input video file.
                     * @param _fileInfos Information of input video file.
                     * 
                     */
                    void SetFileInfos(const std::vector<EditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取The storage location of the media processing output file.
                     * @return OutputStorage The storage location of the media processing output file.
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置The storage location of the media processing output file.
                     * @param _outputStorage The storage location of the media processing output file.
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
                     * 获取The path to save the media processing output file.

Note: For complex compositing tasks, the filename can be up to 64 characters long and can only contain digits, letters, and special characters -_

                     * @return OutputObjectPath The path to save the media processing output file.

Note: For complex compositing tasks, the filename can be up to 64 characters long and can only contain digits, letters, and special characters -_

                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置The path to save the media processing output file.

Note: For complex compositing tasks, the filename can be up to 64 characters long and can only contain digits, letters, and special characters -_

                     * @param _outputObjectPath The path to save the media processing output file.

Note: For complex compositing tasks, the filename can be up to 64 characters long and can only contain digits, letters, and special characters -_

                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取The output settings for a video clipping task.
                     * @return OutputConfig The output settings for a video clipping task.
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置The output settings for a video clipping task.
                     * @param _outputConfig The output settings for a video clipping task.
                     * 
                     */
                    void SetOutputConfig(const EditMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取The settings for a video compositing task.

Note: If this parameter is not empty, the task is a video compositing task. Otherwise, the task is a video clipping task.
                     * @return ComposeConfig The settings for a video compositing task.

Note: If this parameter is not empty, the task is a video compositing task. Otherwise, the task is a video clipping task.
                     * 
                     */
                    ComposeMediaConfig GetComposeConfig() const;

                    /**
                     * 设置The settings for a video compositing task.

Note: If this parameter is not empty, the task is a video compositing task. Otherwise, the task is a video clipping task.
                     * @param _composeConfig The settings for a video compositing task.

Note: If this parameter is not empty, the task is a video compositing task. Otherwise, the task is a video clipping task.
                     * 
                     */
                    void SetComposeConfig(const ComposeMediaConfig& _composeConfig);

                    /**
                     * 判断参数 ComposeConfig 是否已赋值
                     * @return ComposeConfig 是否已赋值
                     * 
                     */
                    bool ComposeConfigHasBeenSet() const;

                    /**
                     * 获取Event notification information of task. If this parameter is left empty, no event notifications will be obtained.
                     * @return TaskNotifyConfig Event notification information of task. If this parameter is left empty, no event notifications will be obtained.
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Event notification information of task. If this parameter is left empty, no event notifications will be obtained.
                     * @param _taskNotifyConfig Event notification information of task. If this parameter is left empty, no event notifications will be obtained.
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
                     * 获取Task priority. The higher the value, the higher the priority. Value range: -10–10. If this parameter is left empty, 0 will be used.
                     * @return TasksPriority Task priority. The higher the value, the higher the priority. Value range: -10–10. If this parameter is left empty, 0 will be used.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. The higher the value, the higher the priority. Value range: -10–10. If this parameter is left empty, 0 will be used.
                     * @param _tasksPriority Task priority. The higher the value, the higher the priority. Value range: -10–10. If this parameter is left empty, 0 will be used.
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
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @param _sessionId The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @param _sessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Information of input video file.
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * The storage location of the media processing output file.
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * The path to save the media processing output file.

Note: For complex compositing tasks, the filename can be up to 64 characters long and can only contain digits, letters, and special characters -_

                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * The output settings for a video clipping task.
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * The settings for a video compositing task.

Note: If this parameter is not empty, the task is a video compositing task. Otherwise, the task is a video clipping task.
                     */
                    ComposeMediaConfig m_composeConfig;
                    bool m_composeConfigHasBeenSet;

                    /**
                     * Event notification information of task. If this parameter is left empty, no event notifications will be obtained.
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Task priority. The higher the value, the higher the priority. Value range: -10–10. If this parameter is left empty, 0 will be used.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last three days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
