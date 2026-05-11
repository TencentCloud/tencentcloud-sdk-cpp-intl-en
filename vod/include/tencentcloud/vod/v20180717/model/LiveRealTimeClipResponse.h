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
                     * 获取Edited Video Playback URL
                     * @return Url Edited Video Playback URL
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
                     * 获取Unique identifier of media file for post-editing solidified video.
                     * @return FileId Unique identifier of media file for post-editing solidified video.
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
                     * 获取Edited video task flow ID after solidification.
                     * @return VodTaskId Edited video task flow ID after solidification.
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
                     * 获取Edited Video Metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Edited Video Metadata
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
                     * 获取<span id="p_segmentset">Edited video clip information.</span>
                     * @return SegmentSet <span id="p_segmentset">Edited video clip information.</span>
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
                     * Edited Video Playback URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Unique identifier of media file for post-editing solidified video.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Edited video task flow ID after solidification.
                     */
                    std::string m_vodTaskId;
                    bool m_vodTaskIdHasBeenSet;

                    /**
                     * Edited Video Metadata
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <span id="p_segmentset">Edited video clip information.</span>
                     */
                    std::vector<LiveRealTimeClipMediaSegmentInfo> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
