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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_

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
                * CommitUpload response structure.
                */
                class CommitUploadResponse : public AbstractModel
                {
                public:
                    CommitUploadResponse();
                    ~CommitUploadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Unique ID of media file.
                     * @return FileId Unique ID of media file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Media playback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaUrl Media playback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取Media cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverUrl Media cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     */
                    bool CoverUrlHasBeenSet() const;

                private:

                    /**
                     * Unique ID of media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media playback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * Media cover address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_