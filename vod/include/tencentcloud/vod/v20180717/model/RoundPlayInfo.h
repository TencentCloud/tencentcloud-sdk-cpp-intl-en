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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayListItemInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The information of a playlist.
                */
                class RoundPlayInfo : public AbstractModel
                {
                public:
                    RoundPlayInfo();
                    ~RoundPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The playlist ID.
                     * @return RoundPlayId The playlist ID.
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置The playlist ID.
                     * @param _roundPlayId The playlist ID.
                     * 
                     */
                    void SetRoundPlayId(const std::string& _roundPlayId);

                    /**
                     * 判断参数 RoundPlayId 是否已赋值
                     * @return RoundPlayId 是否已赋值
                     * 
                     */
                    bool RoundPlayIdHasBeenSet() const;

                    /**
                     * 获取The playback start time, in [ISO 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @return StartTime The playback start time, in [ISO 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The playback start time, in [ISO 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @param _startTime The playback start time, in [ISO 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The files on the list.
                     * @return RoundPlaylist The files on the list.
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置The files on the list.
                     * @param _roundPlaylist The files on the list.
                     * 
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     * 
                     */
                    bool RoundPlaylistHasBeenSet() const;

                    /**
                     * 获取The playlist name (not longer than 64 characters).
                     * @return Name The playlist name (not longer than 64 characters).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The playlist name (not longer than 64 characters).
                     * @param _name The playlist name (not longer than 64 characters).
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The playlist description (not longer than 256 characters).
                     * @return Desc The playlist description (not longer than 256 characters).
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置The playlist description (not longer than 256 characters).
                     * @param _desc The playlist description (not longer than 256 characters).
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Playback status, optional values:
<li>Enabled: startup status;</li>
<li>Disabled: stop status. </li>
Default value: Enabled.
                     * @return Status Playback status, optional values:
<li>Enabled: startup status;</li>
<li>Disabled: stop status. </li>
Default value: Enabled.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Playback status, optional values:
<li>Enabled: startup status;</li>
<li>Disabled: stop status. </li>
Default value: Enabled.
                     * @param _status Playback status, optional values:
<li>Enabled: startup status;</li>
<li>Disabled: stop status. </li>
Default value: Enabled.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Play mode, optional values:
<li>Loop: Play the playlist in a loop;</li>
<li>Linear: Play once, stop playing after the playlist is played. </li>
Default value: Loop.
                     * @return PlayBackMode Play mode, optional values:
<li>Loop: Play the playlist in a loop;</li>
<li>Linear: Play once, stop playing after the playlist is played. </li>
Default value: Loop.
                     * 
                     */
                    std::string GetPlayBackMode() const;

                    /**
                     * 设置Play mode, optional values:
<li>Loop: Play the playlist in a loop;</li>
<li>Linear: Play once, stop playing after the playlist is played. </li>
Default value: Loop.
                     * @param _playBackMode Play mode, optional values:
<li>Loop: Play the playlist in a loop;</li>
<li>Linear: Play once, stop playing after the playlist is played. </li>
Default value: Loop.
                     * 
                     */
                    void SetPlayBackMode(const std::string& _playBackMode);

                    /**
                     * 判断参数 PlayBackMode 是否已赋值
                     * @return PlayBackMode 是否已赋值
                     * 
                     */
                    bool PlayBackModeHasBeenSet() const;

                    /**
                     * 获取Carousel playback address.
                     * @return Url Carousel playback address.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Carousel playback address.
                     * @param _url Carousel playback address.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Creation time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @return CreateTime Creation time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @param _createTime Creation time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @return UpdateTime Update time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @param _updateTime Update time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playback of the playlist will stop after expiration. "9999-12-31t23:59:59+08:00" means never expire.
                     * @return ExpiredTime Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playback of the playlist will stop after expiration. "9999-12-31t23:59:59+08:00" means never expire.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playback of the playlist will stop after expiration. "9999-12-31t23:59:59+08:00" means never expire.
                     * @param _expiredTime Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playback of the playlist will stop after expiration. "9999-12-31t23:59:59+08:00" means never expire.
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * The playlist ID.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * The playback start time, in [ISO 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The files on the list.
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * The playlist name (not longer than 64 characters).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The playlist description (not longer than 256 characters).
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Playback status, optional values:
<li>Enabled: startup status;</li>
<li>Disabled: stop status. </li>
Default value: Enabled.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Play mode, optional values:
<li>Loop: Play the playlist in a loop;</li>
<li>Linear: Play once, stop playing after the playlist is played. </li>
Default value: Loop.
                     */
                    std::string m_playBackMode;
                    bool m_playBackModeHasBeenSet;

                    /**
                     * Carousel playback address.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Creation time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playback of the playlist will stop after expiration. "9999-12-31t23:59:59+08:00" means never expire.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_
