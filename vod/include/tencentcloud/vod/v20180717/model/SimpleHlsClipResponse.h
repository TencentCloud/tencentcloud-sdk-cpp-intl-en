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
                     * 获取<p>Trimmed video address.</p>
                     * @return Url <p>Trimmed video address.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Cropped video metadata. Currently, the <code>Size</code>, <code>Rotate</code>, <code>VideoDuration</code>, and <code>AudioDuration</code> fields are temporarily default with no real data.</p>
                     * @return MetaData <p>Cropped video metadata. Currently, the <code>Size</code>, <code>Rotate</code>, <code>VideoDuration</code>, and <code>AudioDuration</code> fields are temporarily default with no real data.</p>
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取<p>Unique identifier of media file for post-editing solidified video.</p>
                     * @return FileId <p>Unique identifier of media file for post-editing solidified video.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>ID of the edited video task flow after solidification.</p>
                     * @return TaskId <p>ID of the edited video task flow after solidification.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>Trimmed video address.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Cropped video metadata. Currently, the <code>Size</code>, <code>Rotate</code>, <code>VideoDuration</code>, and <code>AudioDuration</code> fields are temporarily default with no real data.</p>
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Unique identifier of media file for post-editing solidified video.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>ID of the edited video task flow after solidification.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_
