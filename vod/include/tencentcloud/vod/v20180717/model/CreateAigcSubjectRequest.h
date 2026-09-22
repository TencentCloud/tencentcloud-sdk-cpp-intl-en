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
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled with the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled with the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled with the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled with the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</b></p>
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
                     * 获取<p>Subject name.</p>
                     * @return SubjectName <p>Subject name.</p>
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置<p>Subject name.</p>
                     * @param _subjectName <p>Subject name.</p>
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
                     * 获取<p>Main image. Upload at least 1 main image. * Note 1: Supports passing an image URL (ensure it is accessible); * Note 2: Input limit is 3 images; * Note 3: Supports png, jpeg, jpg, and webp formats; * Note 4: Image ratio must be less than 1:4 or 4:1; * Note 5: Image size must be no more than 50 MB;</p>
                     * @return SubjectImages <p>Main image. Upload at least 1 main image. * Note 1: Supports passing an image URL (ensure it is accessible); * Note 2: Input limit is 3 images; * Note 3: Supports png, jpeg, jpg, and webp formats; * Note 4: Image ratio must be less than 1:4 or 4:1; * Note 5: Image size must be no more than 50 MB;</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectImages() const;

                    /**
                     * 设置<p>Main image. Upload at least 1 main image. * Note 1: Supports passing an image URL (ensure it is accessible); * Note 2: Input limit is 3 images; * Note 3: Supports png, jpeg, jpg, and webp formats; * Note 4: Image ratio must be less than 1:4 or 4:1; * Note 5: Image size must be no more than 50 MB;</p>
                     * @param _subjectImages <p>Main image. Upload at least 1 main image. * Note 1: Supports passing an image URL (ensure it is accessible); * Note 2: Input limit is 3 images; * Note 3: Supports png, jpeg, jpg, and webp formats; * Note 4: Image ratio must be less than 1:4 or 4:1; * Note 5: Image size must be no more than 50 MB;</p>
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
                     * 获取<p>Video reference supports uploading 1 main video</p><ul><li>Note 1: For reference only, the viduq2-pro model supports the use of video subjects</li><li>Note 2: Supports uploading up to 1 video of 5 seconds</li><li>Note 3: Video supports mp4, avi, and mov formats</li><li>Note 4: Video pixels cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1, and the size must not exceed 100M.</li></ul>
                     * @return SubjectVideos <p>Video reference supports uploading 1 main video</p><ul><li>Note 1: For reference only, the viduq2-pro model supports the use of video subjects</li><li>Note 2: Supports uploading up to 1 video of 5 seconds</li><li>Note 3: Video supports mp4, avi, and mov formats</li><li>Note 4: Video pixels cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1, and the size must not exceed 100M.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSubjectVideos() const;

                    /**
                     * 设置<p>Video reference supports uploading 1 main video</p><ul><li>Note 1: For reference only, the viduq2-pro model supports the use of video subjects</li><li>Note 2: Supports uploading up to 1 video of 5 seconds</li><li>Note 3: Video supports mp4, avi, and mov formats</li><li>Note 4: Video pixels cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1, and the size must not exceed 100M.</li></ul>
                     * @param _subjectVideos <p>Video reference supports uploading 1 main video</p><ul><li>Note 1: For reference only, the viduq2-pro model supports the use of video subjects</li><li>Note 2: Supports uploading up to 1 video of 5 seconds</li><li>Note 3: Video supports mp4, avi, and mov formats</li><li>Note 4: Video pixels cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1, and the size must not exceed 100M.</li></ul>
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
                     * 获取<p>Main voice type Id. This information is used only when creating an audio and video direct output task.</p><ul><li>Note 1: If no voice type Id is passed in when generating an audio and video direct output task, the system will automatically recommend a voice type.</li><li>Note 2: q2-pro does not support the use of voice type IDs.</li></ul>
                     * @return VoiceId <p>Main voice type Id. This information is used only when creating an audio and video direct output task.</p><ul><li>Note 1: If no voice type Id is passed in when generating an audio and video direct output task, the system will automatically recommend a voice type.</li><li>Note 2: q2-pro does not support the use of voice type IDs.</li></ul>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Main voice type Id. This information is used only when creating an audio and video direct output task.</p><ul><li>Note 1: If no voice type Id is passed in when generating an audio and video direct output task, the system will automatically recommend a voice type.</li><li>Note 2: q2-pro does not support the use of voice type IDs.</li></ul>
                     * @param _voiceId <p>Main voice type Id. This information is used only when creating an audio and video direct output task.</p><ul><li>Note 1: If no voice type Id is passed in when generating an audio and video direct output task, the system will automatically recommend a voice type.</li><li>Note 2: q2-pro does not support the use of voice type IDs.</li></ul>
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
                     * 获取<p>Source context. This is used to pass through user request information. The task completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass through user request information. The task completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The task completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass through user request information. The task completion callback returns the value of this field. The maximum length is 1000 characters.</p>
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

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD services from December 25, 2023, this field must be filled with the app ID when accessing resources in VOD applications, whether it is the default application or a newly created application.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Subject name.</p>
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * <p>Main image. Upload at least 1 main image. * Note 1: Supports passing an image URL (ensure it is accessible); * Note 2: Input limit is 3 images; * Note 3: Supports png, jpeg, jpg, and webp formats; * Note 4: Image ratio must be less than 1:4 or 4:1; * Note 5: Image size must be no more than 50 MB;</p>
                     */
                    std::vector<std::string> m_subjectImages;
                    bool m_subjectImagesHasBeenSet;

                    /**
                     * <p>Video reference supports uploading 1 main video</p><ul><li>Note 1: For reference only, the viduq2-pro model supports the use of video subjects</li><li>Note 2: Supports uploading up to 1 video of 5 seconds</li><li>Note 3: Video supports mp4, avi, and mov formats</li><li>Note 4: Video pixels cannot be less than 128*128, and the ratio must be less than 1:4 or 4:1, and the size must not exceed 100M.</li></ul>
                     */
                    std::vector<std::string> m_subjectVideos;
                    bool m_subjectVideosHasBeenSet;

                    /**
                     * <p>Main voice type Id. This information is used only when creating an audio and video direct output task.</p><ul><li>Note 1: If no voice type Id is passed in when generating an audio and video direct output task, the system will automatically recommend a voice type.</li><li>Note 2: q2-pro does not support the use of voice type IDs.</li></ul>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The task completion callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_
