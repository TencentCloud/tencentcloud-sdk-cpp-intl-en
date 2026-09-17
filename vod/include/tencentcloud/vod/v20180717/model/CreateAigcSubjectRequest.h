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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcSubject request structure.
                */
                class CreateAigcSubjectRequest : public AbstractModel
                {
                public:
                    CreateAigcSubjectRequest();
                    ~CreateAigcSubjectRequest() = default;
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
                     * @return SubjectName 
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置
                     * @param _subjectName 
                     * 
                     */
                    void SetSubjectName(const std::string& _subjectName);

                    /**
                     * 判断参数 SubjectName 是否已赋值
                     * @return SubjectName 是否已赋值
                     * 
                     */
                    bool SubjectNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubjectImages 
                     * 
                     */
                    std::vector<std::string> GetSubjectImages() const;

                    /**
                     * 设置
                     * @param _subjectImages 
                     * 
                     */
                    void SetSubjectImages(const std::vector<std::string>& _subjectImages);

                    /**
                     * 判断参数 SubjectImages 是否已赋值
                     * @return SubjectImages 是否已赋值
                     * 
                     */
                    bool SubjectImagesHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubjectVideos 
                     * 
                     */
                    std::vector<std::string> GetSubjectVideos() const;

                    /**
                     * 设置
                     * @param _subjectVideos 
                     * 
                     */
                    void SetSubjectVideos(const std::vector<std::string>& _subjectVideos);

                    /**
                     * 判断参数 SubjectVideos 是否已赋值
                     * @return SubjectVideos 是否已赋值
                     * 
                     */
                    bool SubjectVideosHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoiceId 
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置
                     * @param _voiceId 
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

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

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_subjectImages;
                    bool m_subjectImagesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_subjectVideos;
                    bool m_subjectVideosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_
