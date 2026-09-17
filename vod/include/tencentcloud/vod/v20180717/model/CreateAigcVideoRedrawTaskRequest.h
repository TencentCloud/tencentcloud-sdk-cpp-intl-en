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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOREDRAWTASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOREDRAWTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTaskInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcVideoRedrawTask request structure.
                */
                class CreateAigcVideoRedrawTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcVideoRedrawTaskRequest();
                    ~CreateAigcVideoRedrawTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileInfo 
                     * 
                     */
                    AigcVideoRedrawTaskInputFileInfo GetFileInfo() const;

                    /**
                     * 设置
                     * @param _fileInfo 
                     * 
                     */
                    void SetFileInfo(const AigcVideoRedrawTaskInputFileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return TaskInfo 
                     * 
                     */
                    AigcVideoRedrawTaskInfo GetTaskInfo() const;

                    /**
                     * 设置
                     * @param _taskInfo 
                     * 
                     */
                    void SetTaskInfo(const AigcVideoRedrawTaskInfo& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return OutputConfig 
                     * 
                     */
                    AigcVideoRedrawOutputConfig GetOutputConfig() const;

                    /**
                     * 设置
                     * @param _outputConfig 
                     * 
                     */
                    void SetOutputConfig(const AigcVideoRedrawOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SessionId 
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置
                     * @param _sessionId 
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
                     * 获取
                     * @return SessionContext 
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置
                     * @param _sessionContext 
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
                     * 获取
                     * @return TasksPriority 
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置
                     * @param _tasksPriority 
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
                     * 获取
                     * @return ExtInfo 
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置
                     * @param _extInfo 
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoRedrawTaskInputFileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoRedrawTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * 
                     */
                    AigcVideoRedrawOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCVIDEOREDRAWTASKREQUEST_H_
