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
<li>Array length limit: 100.</li>
                     * @return RoundPlaylist The files on the list.
<li>Array length limit: 100.</li>
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置The files on the list.
<li>Array length limit: 100.</li>
                     * @param RoundPlaylist The files on the list.
<li>Array length limit: 100.</li>
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     */
                    bool RoundPlaylistHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

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
                     * The playback start time, in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The files on the list.
<li>Array length limit: 100.</li>
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_
