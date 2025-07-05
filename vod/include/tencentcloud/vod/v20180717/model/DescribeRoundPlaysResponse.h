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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeRoundPlays response structure.
                */
                class DescribeRoundPlaysResponse : public AbstractModel
                {
                public:
                    DescribeRoundPlaysResponse();
                    ~DescribeRoundPlaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of carousel broadcast playlists that meet the filter criteria. deprecated. for batch inquiries, please use the scrolltoken parameter.
                     * @return TotalCount The total number of carousel broadcast playlists that meet the filter criteria. deprecated. for batch inquiries, please use the scrolltoken parameter.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The details of the playlist.
                     * @return RoundPlaySet The details of the playlist.
                     * 
                     */
                    std::vector<RoundPlayInfo> GetRoundPlaySet() const;

                    /**
                     * 判断参数 RoundPlaySet 是否已赋值
                     * @return RoundPlaySet 是否已赋值
                     * 
                     */
                    bool RoundPlaySetHasBeenSet() const;

                    /**
                     * 获取Scrolling identifier. if a request does not return all the data entries, this field indicates the id of the next entry. if this field is empty, there is no more data.
                     * @return ScrollToken Scrolling identifier. if a request does not return all the data entries, this field indicates the id of the next entry. if this field is empty, there is no more data.
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                private:

                    /**
                     * The total number of carousel broadcast playlists that meet the filter criteria. deprecated. for batch inquiries, please use the scrolltoken parameter.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The details of the playlist.
                     */
                    std::vector<RoundPlayInfo> m_roundPlaySet;
                    bool m_roundPlaySetHasBeenSet;

                    /**
                     * Scrolling identifier. if a request does not return all the data entries, this field indicates the id of the next entry. if this field is empty, there is no more data.
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEROUNDPLAYSRESPONSE_H_
