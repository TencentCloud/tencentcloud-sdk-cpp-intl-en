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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Playback information of the carousel program
                */
                class RoundPlayFilePlayInfo : public AbstractModel
                {
                public:
                    RoundPlayFilePlayInfo();
                    ~RoundPlayFilePlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playlist item ID, assigned by the system.
                     * @return ItemId Playlist item ID, assigned by the system.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Playlist item ID, assigned by the system.
                     * @param _itemId Playlist item ID, assigned by the system.
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Media file identifier.
                     * @return FileId Media file identifier.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file identifier.
                     * @param _fileId Media file identifier.
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
                     * 获取Playback start time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return StartPlayTime Playback start time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetStartPlayTime() const;

                    /**
                     * 设置Playback start time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _startPlayTime Playback start time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    void SetStartPlayTime(const std::string& _startPlayTime);

                    /**
                     * 判断参数 StartPlayTime 是否已赋值
                     * @return StartPlayTime 是否已赋值
                     * 
                     */
                    bool StartPlayTimeHasBeenSet() const;

                    /**
                     * 获取Playback duration in seconds.
                     * @return Duration Playback duration in seconds.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Playback duration in seconds.
                     * @param _duration Playback duration in seconds.
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Playback progress, in seconds.
                     * @return Progress Playback progress, in seconds.
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Playback progress, in seconds.
                     * @param _progress Playback progress, in seconds.
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Playlist item ID, assigned by the system.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Media file identifier.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Playback start time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_startPlayTime;
                    bool m_startPlayTimeHasBeenSet;

                    /**
                     * Playback duration in seconds.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Playback progress, in seconds.
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
