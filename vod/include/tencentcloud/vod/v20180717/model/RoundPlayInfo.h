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
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置The playlist ID.
                     * @param RoundPlayId The playlist ID.
                     */
                    void SetRoundPlayId(const std::string& _roundPlayId);

                    /**
                     * 判断参数 RoundPlayId 是否已赋值
                     * @return RoundPlayId 是否已赋值
                     */
                    bool RoundPlayIdHasBeenSet() const;

                    /**
                     * 获取The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @return StartTime The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @param StartTime The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The files on the list.
                     * @return RoundPlaylist The files on the list.
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置The files on the list.
                     * @param RoundPlaylist The files on the list.
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     */
                    bool RoundPlaylistHasBeenSet() const;

                    /**
                     * 获取The playlist name (not longer than 64 characters).
                     * @return Name The playlist name (not longer than 64 characters).
                     */
                    std::string GetName() const;

                    /**
                     * 设置The playlist name (not longer than 64 characters).
                     * @param Name The playlist name (not longer than 64 characters).
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The playlist description (not longer than 256 characters).
                     * @return Desc The playlist description (not longer than 256 characters).
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置The playlist description (not longer than 256 characters).
                     * @param Desc The playlist description (not longer than 256 characters).
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * The playlist ID.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_