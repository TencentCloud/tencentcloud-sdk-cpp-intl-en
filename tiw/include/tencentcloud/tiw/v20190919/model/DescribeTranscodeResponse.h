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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTranscode response structure.
                */
                class DescribeTranscodeResponse : public AbstractModel
                {
                public:
                    DescribeTranscodeResponse();
                    ~DescribeTranscodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of document pages
                     * @return Pages Total number of document pages
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取Transcoding progress. Value range: 0 to 100
                     * @return Progress Transcoding progress. Value range: 0 to 100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Document resolution
                     * @return Resolution Document resolution
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取URL of the transcoding result
Dynamic transcoding: link of the HTML5 page transcoded from a PowerPoint file
Static transcoding: URL prefix of the image transcoded for each document page. For example, if the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the image URL of the first page is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.
                     * @return ResultUrl URL of the transcoding result
Dynamic transcoding: link of the HTML5 page transcoded from a PowerPoint file
Static transcoding: URL prefix of the image transcoded for each document page. For example, if the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the image URL of the first page is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取Current task state
- QUEUED: queuing for transcoding
- PROCESSING: transcoding is in progress
- FINISHED: transcoded
                     * @return Status Current task state
- QUEUED: queuing for transcoding
- PROCESSING: transcoding is in progress
- FINISHED: transcoded
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Unique ID of the transcoding task
                     * @return TaskId Unique ID of the transcoding task
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Document name
                     * @return Title Document name
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/ `, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * @return ThumbnailUrl URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/ `, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     * 
                     */
                    std::string GetThumbnailUrl() const;

                    /**
                     * 判断参数 ThumbnailUrl 是否已赋值
                     * @return ThumbnailUrl 是否已赋值
                     * 
                     */
                    bool ThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取Resolution of the thumbnail generated for dynamic transcoding
                     * @return ThumbnailResolution Resolution of the thumbnail generated for dynamic transcoding
                     * 
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     * 
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * @return CompressFileUrl URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     * 
                     */
                    std::string GetCompressFileUrl() const;

                    /**
                     * 判断参数 CompressFileUrl 是否已赋值
                     * @return CompressFileUrl 是否已赋值
                     * 
                     */
                    bool CompressFileUrlHasBeenSet() const;

                    /**
                     * 获取Download URL (for trial) of the resource list.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return ResourceListUrl Download URL (for trial) of the resource list.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceListUrl() const;

                    /**
                     * 判断参数 ResourceListUrl 是否已赋值
                     * @return ResourceListUrl 是否已赋值
                     * 
                     */
                    bool ResourceListUrlHasBeenSet() const;

                    /**
                     * 获取Document generation mode (for trial).
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return Ext Document generation mode (for trial).
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取Document transcoding task creation time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Document transcoding task creation time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Document transcoding task assignment time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return AssignTime Document transcoding task assignment time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAssignTime() const;

                    /**
                     * 判断参数 AssignTime 是否已赋值
                     * @return AssignTime 是否已赋值
                     * 
                     */
                    bool AssignTimeHasBeenSet() const;

                    /**
                     * 获取Document transcoding task finished time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * @return FinishedTime Document transcoding task finished time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFinishedTime() const;

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                private:

                    /**
                     * Total number of document pages
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Transcoding progress. Value range: 0 to 100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Document resolution
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * URL of the transcoding result
Dynamic transcoding: link of the HTML5 page transcoded from a PowerPoint file
Static transcoding: URL prefix of the image transcoded for each document page. For example, if the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/`, the image URL of the first page is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * Current task state
- QUEUED: queuing for transcoding
- PROCESSING: transcoding is in progress
- FINISHED: transcoded
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique ID of the transcoding task
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Document name
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * URL prefix of the thumbnail. If the URL prefix is `http://example.com/g0jb42ps49vtebjshilb/ `, the thumbnail URL for the first page of the dynamically transcoded PowerPoint file is
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`, and so on.

If the document transcoding request carries the ThumbnailResolution parameter and the transcoding type is dynamic transcoding, this parameter is not null. In other cases, this parameter is null.
                     */
                    std::string m_thumbnailUrl;
                    bool m_thumbnailUrlHasBeenSet;

                    /**
                     * Resolution of the thumbnail generated for dynamic transcoding
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * URL for downloading the transcoded and compressed file. If `CompressFileType` carried in the document transcoding request is null or is not a supported compression format, this parameter is null.
                     */
                    std::string m_compressFileUrl;
                    bool m_compressFileUrlHasBeenSet;

                    /**
                     * Download URL (for trial) of the resource list.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceListUrl;
                    bool m_resourceListUrlHasBeenSet;

                    /**
                     * Document generation mode (for trial).
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * Document transcoding task creation time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Document transcoding task assignment time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_assignTime;
                    bool m_assignTimeHasBeenSet;

                    /**
                     * Document transcoding task finished time, unit: seconds.
Note: This parameter may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_
