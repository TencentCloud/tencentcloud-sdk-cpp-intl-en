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
                     * 获取Basic information of media file generated after upload is completed.
                     * @return MediaBasicInfo Basic information of media file generated after upload is completed.
                     * 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置Basic information of media file generated after upload is completed.
                     * @param _mediaBasicInfo Basic information of media file generated after upload is completed.
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
                     * 获取The task ID for the task type `Procedure`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @return ProcedureTaskId The task ID for the task type `Procedure`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置The task ID for the task type `Procedure`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @param _procedureTaskId The task ID for the task type `Procedure`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
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
                     * 获取The task ID for the task type `ReviewAudioVideo`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @return ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置The task ID for the task type `ReviewAudioVideo`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @param _reviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
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
                     * 获取Metadata, such as size, duration, video stream information, audio stream information, etc.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Metadata, such as size, duration, video stream information, audio stream information, etc.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata, such as size, duration, video stream information, audio stream information, etc.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _metaData Metadata, such as size, duration, video stream information, audio stream information, etc.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Basic information of media file generated after upload is completed.
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * The task ID for the task type `Procedure`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * The task ID for the task type `ReviewAudioVideo`. If a task flow is specified for [uploaded media](https://intl.cloud.tencent.com/document/product/266/33475?from_cn_redirect=1#.E4.BB.BB.E5.8A.A1.E5.8F.91.E8.B5.B7), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * Metadata, such as size, duration, video stream information, audio stream information, etc.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_
