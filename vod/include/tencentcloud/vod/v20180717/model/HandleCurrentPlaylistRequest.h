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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_

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
                * HandleCurrentPlaylist request structure.
                */
                class HandleCurrentPlaylistRequest : public AbstractModel
                {
                public:
                    HandleCurrentPlaylistRequest();
                    ~HandleCurrentPlaylistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return RoundPlayId 
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置
                     * @param _roundPlayId 
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
                     * 获取
                     * @return Operation 
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置
                     * @param _operation 
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取
                     * @return ItemId 
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置
                     * @param _itemId 
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
                     * 获取
                     * @return SegmentIndex 
                     * 
                     */
                    int64_t GetSegmentIndex() const;

                    /**
                     * 设置
                     * @param _segmentIndex 
                     * 
                     */
                    void SetSegmentIndex(const int64_t& _segmentIndex);

                    /**
                     * 判断参数 SegmentIndex 是否已赋值
                     * @return SegmentIndex 是否已赋值
                     * 
                     */
                    bool SegmentIndexHasBeenSet() const;

                    /**
                     * 获取
                     * @return RoundPlaylist 
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置
                     * @param _roundPlaylist 
                     * 
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     * 
                     */
                    bool RoundPlaylistHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_segmentIndex;
                    bool m_segmentIndexHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
