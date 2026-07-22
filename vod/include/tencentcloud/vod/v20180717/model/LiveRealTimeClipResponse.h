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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipMediaSegmentInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * LiveRealTimeClip response structure.
                */
                class LiveRealTimeClipResponse : public AbstractModel
                {
                public:
                    LiveRealTimeClipResponse();
                    ~LiveRealTimeClipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Edited Video Playback URL.</p>
                     * @return Url <p>Edited Video Playback URL.</p>
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
                     * @return VodTaskId <p>ID of the edited video task flow after solidification.</p>
                     * 
                     */
                    std::string GetVodTaskId() const;

                    /**
                     * 判断参数 VodTaskId 是否已赋值
                     * @return VodTaskId 是否已赋值
                     * 
                     */
                    bool VodTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Edited video metadata.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData <p>Edited video metadata.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p><span id="p_segmentset">Edited video clip information.</span></p>
                     * @return SegmentSet <p><span id="p_segmentset">Edited video clip information.</span></p>
                     * 
                     */
                    std::vector<LiveRealTimeClipMediaSegmentInfo> GetSegmentSet() const;

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                private:

                    /**
                     * <p>Edited Video Playback URL.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Unique identifier of media file for post-editing solidified video.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>ID of the edited video task flow after solidification.</p>
                     */
                    std::string m_vodTaskId;
                    bool m_vodTaskIdHasBeenSet;

                    /**
                     * <p>Edited video metadata.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p><span id="p_segmentset">Edited video clip information.</span></p>
                     */
                    std::vector<LiveRealTimeClipMediaSegmentInfo> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
