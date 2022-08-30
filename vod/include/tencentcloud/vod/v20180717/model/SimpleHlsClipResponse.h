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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * SimpleHlsClip response structure.
                */
                class SimpleHlsClipResponse : public AbstractModel
                {
                public:
                    SimpleHlsClipResponse();
                    ~SimpleHlsClipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Address of clipped video.
                     * @return Url Address of clipped video.
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Metadata of clipped video. Currently, `Size`, `Rotate`, `VideoDuration`, and `AudioDuration` fields use default value with no actual data.
                     * @return MetaData Metadata of clipped video. Currently, `Size`, `Rotate`, `VideoDuration`, and `AudioDuration` fields use default value with no actual data.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Unique ID of a video clip for persistent storage.
                     * @return FileId Unique ID of a video clip for persistent storage.
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The ID of the task flow to execute on the video clipped for persistent storage.
                     * @return TaskId The ID of the task flow to execute on the video clipped for persistent storage.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Address of clipped video.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Metadata of clipped video. Currently, `Size`, `Rotate`, `VideoDuration`, and `AudioDuration` fields use default value with no actual data.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Unique ID of a video clip for persistent storage.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The ID of the task flow to execute on the video clipped for persistent storage.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_
