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
                     * 获取<p>Input video file information.</p>
                     * @return FileInfos <p>Input video file information.</p>
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Input video file information.</p>
                     * @param _fileInfos <p>Input video file information.</p>
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
                     * 获取<p>Target storage for the output file of the media processing task.</p>
                     * @return OutputStorage <p>Target storage for the output file of the media processing task.</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>Target storage for the output file of the media processing task.</p>
                     * @param _outputStorage <p>Target storage for the output file of the media processing task.</p>
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
                     * 获取<p>Target path for the output file of the media processing task.</p><p>Note: For a complex compositing task, the file name in the path can contain only digits, letters, hyphens (-), and underscores (_), with a maximum of 64 characters.</p>
                     * @return OutputObjectPath <p>Target path for the output file of the media processing task.</p><p>Note: For a complex compositing task, the file name in the path can contain only digits, letters, hyphens (-), and underscores (_), with a maximum of 64 characters.</p>
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>Target path for the output file of the media processing task.</p><p>Note: For a complex compositing task, the file name in the path can contain only digits, letters, hyphens (-), and underscores (_), with a maximum of 64 characters.</p>
                     * @param _outputObjectPath <p>Target path for the output file of the media processing task.</p><p>Note: For a complex compositing task, the file name in the path can contain only digits, letters, hyphens (-), and underscores (_), with a maximum of 64 characters.</p>
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
                     * 获取<p>Configuration of the file generated by the [editing] task.</p>
                     * @return OutputConfig <p>Configuration of the file generated by the [editing] task.</p>
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Configuration of the file generated by the [editing] task.</p>
                     * @param _outputConfig <p>Configuration of the file generated by the [editing] task.</p>
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
                     * 获取<p>[Compositing] task configuration.</p><p>Note: If this is not empty, the task is a compositing task. Otherwise, the task is an editing task.</p>
                     * @return ComposeConfig <p>[Compositing] task configuration.</p><p>Note: If this is not empty, the task is a compositing task. Otherwise, the task is an editing task.</p>
                     * 
                     */
                    ComposeMediaConfig GetComposeConfig() const;

                    /**
                     * 设置<p>[Compositing] task configuration.</p><p>Note: If this is not empty, the task is a compositing task. Otherwise, the task is an editing task.</p>
                     * @param _composeConfig <p>[Compositing] task configuration.</p><p>Note: If this is not empty, the task is a compositing task. Otherwise, the task is an editing task.</p>
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
                     * 获取<p>Event notification information of the task. If this is not specified, no event notification is obtained.</p>
                     * @return TaskNotifyConfig <p>Event notification information of the task. If this is not specified, no event notification is obtained.</p>
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>Event notification information of the task. If this is not specified, no event notification is obtained.</p>
                     * @param _taskNotifyConfig <p>Event notification information of the task. If this is not specified, no event notification is obtained.</p>
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
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
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
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * @return ResourceId <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * @param _resourceId <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Input video file information.</p>
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Target storage for the output file of the media processing task.</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>Target path for the output file of the media processing task.</p><p>Note: For a complex compositing task, the file name in the path can contain only digits, letters, hyphens (-), and underscores (_), with a maximum of 64 characters.</p>
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>Configuration of the file generated by the [editing] task.</p>
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>[Compositing] task configuration.</p><p>Note: If this is not empty, the task is a compositing task. Otherwise, the task is an editing task.</p>
                     */
                    ComposeMediaConfig m_composeConfig;
                    bool m_composeConfigHasBeenSet;

                    /**
                     * <p>Event notification information of the task. If this is not specified, no event notification is obtained.</p>
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The task status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Resource ID. The resource needs to be enabled. The default value is the account's primary resource ID.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIAREQUEST_H_
