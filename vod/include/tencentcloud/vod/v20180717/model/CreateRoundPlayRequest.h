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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_

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
                * CreateRoundPlay request structure.
                */
                class CreateRoundPlayRequest : public AbstractModel
                {
                public:
                    CreateRoundPlayRequest();
                    ~CreateRoundPlayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @return StartTime The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     * @param _startTime The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
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
                     * 获取The program list.
<Li>Array length limit: 100.</li>.
                     * @return RoundPlaylist The program list.
<Li>Array length limit: 100.</li>.
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置The program list.
<Li>Array length limit: 100.</li>.
                     * @param _roundPlaylist The program list.
<Li>Array length limit: 100.</li>.
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
                     * 获取<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @return SubAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     * @param _subAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
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
                     * 获取The playlist description, length limit: 256 characters.
                     * @return Desc The playlist description, length limit: 256 characters.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置The playlist description, length limit: 256 characters.
                     * @param _desc The playlist description, length limit: 256 characters.
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
                     * 获取Play mode, optional values:.
<Li>Loop: loop the playlist;</li>.
<Li>Linear: single play, stop playback after the single play finishes.</li>.
Default value: loop.
                     * @return PlayBackMode Play mode, optional values:.
<Li>Loop: loop the playlist;</li>.
<Li>Linear: single play, stop playback after the single play finishes.</li>.
Default value: loop.
                     * 
                     */
                    std::string GetPlayBackMode() const;

                    /**
                     * 设置Play mode, optional values:.
<Li>Loop: loop the playlist;</li>.
<Li>Linear: single play, stop playback after the single play finishes.</li>.
Default value: loop.
                     * @param _playBackMode Play mode, optional values:.
<Li>Loop: loop the playlist;</li>.
<Li>Linear: single play, stop playback after the single play finishes.</li>.
Default value: loop.
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
                     * 获取Playlist unique identifier id, with a length limit of 64 characters, only allowing uppercase and lowercase english letters (a-za-z), digits (0-9) and hyphens (-). if there is a playlist with the same roundplayid, return the error invalidparametervalue.roundplayalreadyexists. the default value is empty, which means it is system-assigned.
                     * @return RoundPlayId Playlist unique identifier id, with a length limit of 64 characters, only allowing uppercase and lowercase english letters (a-za-z), digits (0-9) and hyphens (-). if there is a playlist with the same roundplayid, return the error invalidparametervalue.roundplayalreadyexists. the default value is empty, which means it is system-assigned.
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置Playlist unique identifier id, with a length limit of 64 characters, only allowing uppercase and lowercase english letters (a-za-z), digits (0-9) and hyphens (-). if there is a playlist with the same roundplayid, return the error invalidparametervalue.roundplayalreadyexists. the default value is empty, which means it is system-assigned.
                     * @param _roundPlayId Playlist unique identifier id, with a length limit of 64 characters, only allowing uppercase and lowercase english letters (a-za-z), digits (0-9) and hyphens (-). if there is a playlist with the same roundplayid, return the error invalidparametervalue.roundplayalreadyexists. the default value is empty, which means it is system-assigned.
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
                     * 获取Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playlist will stop playing after expiration. "9999-12-31t23:59:59+08:00" means it does not expire. default value: 9999-12-31t23:59:59+08:00.
                     * @return ExpiredTime Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playlist will stop playing after expiration. "9999-12-31t23:59:59+08:00" means it does not expire. default value: 9999-12-31t23:59:59+08:00.
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playlist will stop playing after expiration. "9999-12-31t23:59:59+08:00" means it does not expire. default value: 9999-12-31t23:59:59+08:00.
                     * @param _expiredTime Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playlist will stop playing after expiration. "9999-12-31t23:59:59+08:00" means it does not expire. default value: 9999-12-31t23:59:59+08:00.
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
                     * The playback start time, in [iso 8601 date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The program list.
<Li>Array length limit: 100.</li>.
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id. starting from december 25, 2023, if you want to access resources in the vod application (whether it is the default application or a newly created application), you must enter the application id in this field.</b>.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The playlist name (not longer than 64 characters).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The playlist description, length limit: 256 characters.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Play mode, optional values:.
<Li>Loop: loop the playlist;</li>.
<Li>Linear: single play, stop playback after the single play finishes.</li>.
Default value: loop.
                     */
                    std::string m_playBackMode;
                    bool m_playBackModeHasBeenSet;

                    /**
                     * Playlist unique identifier id, with a length limit of 64 characters, only allowing uppercase and lowercase english letters (a-za-z), digits (0-9) and hyphens (-). if there is a playlist with the same roundplayid, return the error invalidparametervalue.roundplayalreadyexists. the default value is empty, which means it is system-assigned.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * Expiration time, in iso 8601 format. for details, see [iso date format](https://www.tencentcloud.com/document/product/266/11732?has_map=2#iso-date-format). the playlist will stop playing after expiration. "9999-12-31t23:59:59+08:00" means it does not expire. default value: 9999-12-31t23:59:59+08:00.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_
