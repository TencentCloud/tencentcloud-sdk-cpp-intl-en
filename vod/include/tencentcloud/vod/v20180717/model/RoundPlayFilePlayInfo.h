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
                * Playlist Program Playback Information
                */
                class RoundPlayFilePlayInfo : public AbstractModel
                {
                public:
                    RoundPlayFilePlayInfo();
                    ~RoundPlayFilePlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playlist program id, assigned by the system.
                     * @return ItemId Playlist program id, assigned by the system.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Playlist program id, assigned by the system.
                     * @param _itemId Playlist program id, assigned by the system.
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
                     * 获取The media file id.
                     * @return FileId The media file id.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The media file id.
                     * @param _fileId The media file id.
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
                     * 获取The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @return StartPlayTime The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    std::string GetStartPlayTime() const;

                    /**
                     * 设置The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @param _startPlayTime The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
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
                     * 获取Playback duration, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     * @return Duration Playback duration, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置Playback duration, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     * @param _duration Playback duration, in seconds.
Note: this field may return null, indicating that no valid value was found.
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
Note: this field may return null, indicating that no valid value was found.
                     * @return Progress Playback progress, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Playback progress, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     * @param _progress Playback progress, in seconds.
Note: this field may return null, indicating that no valid value was found.
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
                     * Playlist program id, assigned by the system.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * The media file id.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     */
                    std::string m_startPlayTime;
                    bool m_startPlayTimeHasBeenSet;

                    /**
                     * Playback duration, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Playback progress, in seconds.
Note: this field may return null, indicating that no valid value was found.
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
