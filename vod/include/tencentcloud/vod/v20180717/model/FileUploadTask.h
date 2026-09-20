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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * File upload task information
                */
                class FileUploadTask : public AbstractModel
                {
                public:
                    FileUploadTask();
                    ~FileUploadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique file ID.
                     * @return FileId Unique file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique file ID.
                     * @param _fileId Unique file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Basic information of the generated media file after upload completion.
                     * @return MediaBasicInfo Basic information of the generated media file after upload completion.
                     * 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置Basic information of the generated media file after upload completion.
                     * @param _mediaBasicInfo Basic information of the generated media file after upload completion.
                     * 
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     * 
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                    /**
                     * 获取Task ID of the `Procedure` type. If A task (Procedure) to execute is specified during video upload, the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @return ProcedureTaskId Task ID of the `Procedure` type. If A task (Procedure) to execute is specified during video upload, the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置Task ID of the `Procedure` type. If A task (Procedure) to execute is specified during video upload, the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @param _procedureTaskId Task ID of the `Procedure` type. If A task (Procedure) to execute is specified during video upload, the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * 
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取Task ID of the `ReviewAudioVideo` task type. If a task procedure is specified during video upload (https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), the task is initiated when the task flow template specifies `ReviewAudioVideoTask`.
                     * @return ReviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` task type. If a task procedure is specified during video upload (https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), the task is initiated when the task flow template specifies `ReviewAudioVideoTask`.
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置Task ID of the `ReviewAudioVideo` task type. If a task procedure is specified during video upload (https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), the task is initiated when the task flow template specifies `ReviewAudioVideoTask`.
                     * @param _reviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` task type. If a task procedure is specified during video upload (https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), the task is initiated when the task flow template specifies `ReviewAudioVideoTask`.
                     * 
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                    /**
                     * 获取Meta information, including size, duration, video stream information, and audio stream information.
                     * @return MetaData Meta information, including size, duration, video stream information, and audio stream information.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Meta information, including size, duration, video stream information, and audio stream information.
                     * @param _metaData Meta information, including size, duration, video stream information, and audio stream information.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * Unique file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Basic information of the generated media file after upload completion.
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * Task ID of the `Procedure` type. If A task (Procedure) to execute is specified during video upload, the task is initiated when the task flow template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * Task ID of the `ReviewAudioVideo` task type. If a task procedure is specified during video upload (https://www.tencentcloud.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), the task is initiated when the task flow template specifies `ReviewAudioVideoTask`.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * Meta information, including size, duration, video stream information, and audio stream information.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_
