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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYROUNDPLAYREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYROUNDPLAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyRoundPlay request structure.
                */
                class ModifyRoundPlayRequest : public AbstractModel
                {
                public:
                    ModifyRoundPlayRequest();
                    ~ModifyRoundPlayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the carousel playlist.
                     * @return RoundPlayId Unique identifier of the carousel playlist.
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置Unique identifier of the carousel playlist.
                     * @param _roundPlayId Unique identifier of the carousel playlist.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD from December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD from December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD from December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD from December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Playback start time, formatted according to the ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @return StartTime Playback start time, formatted according to the ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Playback start time, formatted according to the ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     * @param _startTime Playback start time, formatted according to the ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
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
                     * 获取Carousel list.
<li>Array length limit: 100.</li>
                     * @return RoundPlaylist Carousel list.
<li>Array length limit: 100.</li>
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置Carousel list.
<li>Array length limit: 100.</li>
                     * @param _roundPlaylist Carousel list.
<li>Array length limit: 100.</li>
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
                     * 获取Carousel playbill name. Length limit: 64 characters.
                     * @return Name Carousel playbill name. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Carousel playbill name. Length limit: 64 characters.
                     * @param _name Carousel playbill name. Length limit: 64 characters.
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
                     * 获取Carousel playlist description, with a length limit of 256 characters.
                     * @return Desc Carousel playlist description, with a length limit of 256 characters.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Carousel playlist description, with a length limit of 256 characters.
                     * @param _desc Carousel playlist description, with a length limit of 256 characters.
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
                     * 获取Playback status. Available values: <li>Disabled: stop playback.</li><li>Enabled: start playback after the duration of play arrives.</li>
                     * @return Status Playback status. Available values: <li>Disabled: stop playback.</li><li>Enabled: start playback after the duration of play arrives.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Playback status. Available values: <li>Disabled: stop playback.</li><li>Enabled: start playback after the duration of play arrives.</li>
                     * @param _status Playback status. Available values: <li>Disabled: stop playback.</li><li>Enabled: start playback after the duration of play arrives.</li>
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
                     * 获取Playback mode. Optional values:
<li>Loop: loop playback playlist;</li>
<li>Linear: single play, stop playback after playlist finishes.</li>
                     * @return PlayBackMode Playback mode. Optional values:
<li>Loop: loop playback playlist;</li>
<li>Linear: single play, stop playback after playlist finishes.</li>
                     * 
                     */
                    std::string GetPlayBackMode() const;

                    /**
                     * 设置Playback mode. Optional values:
<li>Loop: loop playback playlist;</li>
<li>Linear: single play, stop playback after playlist finishes.</li>
                     * @param _playBackMode Playback mode. Optional values:
<li>Loop: loop playback playlist;</li>
<li>Linear: single play, stop playback after playlist finishes.</li>
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
                     * 获取Expiration time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52). Playback stops after expiry. "9999-12-31T23:59:59+08:00" means never expire.
                     * @return ExpiredTime Expiration time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52). Playback stops after expiry. "9999-12-31T23:59:59+08:00" means never expire.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52). Playback stops after expiry. "9999-12-31T23:59:59+08:00" means never expire.
                     * @param _expiredTime Expiration time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52). Playback stops after expiry. "9999-12-31T23:59:59+08:00" means never expire.
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
                     * Unique identifier of the carousel playlist.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD from December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Playback start time, formatted according to the ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Carousel list.
<li>Array length limit: 100.</li>
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * Carousel playbill name. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Carousel playlist description, with a length limit of 256 characters.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Playback status. Available values: <li>Disabled: stop playback.</li><li>Enabled: start playback after the duration of play arrives.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Playback mode. Optional values:
<li>Loop: loop playback playlist;</li>
<li>Linear: single play, stop playback after playlist finishes.</li>
                     */
                    std::string m_playBackMode;
                    bool m_playBackModeHasBeenSet;

                    /**
                     * Expiration time in ISO 8601 format. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#52). Playback stops after expiry. "9999-12-31T23:59:59+08:00" means never expire.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYROUNDPLAYREQUEST_H_
