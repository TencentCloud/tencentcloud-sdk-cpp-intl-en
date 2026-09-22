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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
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
                     * 获取Carousel playlist unique identifier.
                     * @return RoundPlayId Carousel playlist unique identifier.
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置Carousel playlist unique identifier.
                     * @param _roundPlayId Carousel playlist unique identifier.
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
                     * 获取Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent carousel processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this carousel process.</li><li>Delete: Delete a program from the playlist. Currently playing programs cannot be deleted.</li>
                     * @return Operation Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent carousel processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this carousel process.</li><li>Delete: Delete a program from the playlist. Currently playing programs cannot be deleted.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent carousel processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this carousel process.</li><li>Delete: Delete a program from the playlist. Currently playing programs cannot be deleted.</li>
                     * @param _operation Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent carousel processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this carousel process.</li><li>Delete: Delete a program from the playlist. Currently playing programs cannot be deleted.</li>
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
                     * 获取Playlist program ID. <li>When Operation is Insert, this field is required. It means the inserted program list is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If not filled in, the program is inserted at the latest insertion point. If this field is filled in and SegmentIndex is also filled in, the program is inserted after the SegmentIndex fragment of the program corresponding to ItemId. Otherwise, it is inserted after this program.</li> <li>When Operation is Delete, this field is required. It means to delete this program. Currently playing programs cannot be deleted.</li>
                     * @return ItemId Playlist program ID. <li>When Operation is Insert, this field is required. It means the inserted program list is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If not filled in, the program is inserted at the latest insertion point. If this field is filled in and SegmentIndex is also filled in, the program is inserted after the SegmentIndex fragment of the program corresponding to ItemId. Otherwise, it is inserted after this program.</li> <li>When Operation is Delete, this field is required. It means to delete this program. Currently playing programs cannot be deleted.</li>
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Playlist program ID. <li>When Operation is Insert, this field is required. It means the inserted program list is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If not filled in, the program is inserted at the latest insertion point. If this field is filled in and SegmentIndex is also filled in, the program is inserted after the SegmentIndex fragment of the program corresponding to ItemId. Otherwise, it is inserted after this program.</li> <li>When Operation is Delete, this field is required. It means to delete this program. Currently playing programs cannot be deleted.</li>
                     * @param _itemId Playlist program ID. <li>When Operation is Insert, this field is required. It means the inserted program list is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If not filled in, the program is inserted at the latest insertion point. If this field is filled in and SegmentIndex is also filled in, the program is inserted after the SegmentIndex fragment of the program corresponding to ItemId. Otherwise, it is inserted after this program.</li> <li>When Operation is Delete, this field is required. It means to delete this program. Currently playing programs cannot be deleted.</li>
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
                     * 获取Index number of the M3U8 file shard. The SegmentIndex of the first shard in an M3U8 file is 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * @return SegmentIndex Index number of the M3U8 file shard. The SegmentIndex of the first shard in an M3U8 file is 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * 
                     */
                    int64_t GetSegmentIndex() const;

                    /**
                     * 设置Index number of the M3U8 file shard. The SegmentIndex of the first shard in an M3U8 file is 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * @param _segmentIndex Index number of the M3U8 file shard. The SegmentIndex of the first shard in an M3U8 file is 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
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
                     * 获取Program list. Required when Operation is Insert, InsertTemporary, or Delete. Indicates the program list to operate. Maximum list length: 10.
                     * @return RoundPlaylist Program list. Required when Operation is Insert, InsertTemporary, or Delete. Indicates the program list to operate. Maximum list length: 10.
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置Program list. Required when Operation is Insert, InsertTemporary, or Delete. Indicates the program list to operate. Maximum list length: 10.
                     * @param _roundPlaylist Program list. Required when Operation is Insert, InsertTemporary, or Delete. Indicates the program list to operate. Maximum list length: 10.
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
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Carousel playlist unique identifier.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent carousel processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this carousel process.</li><li>Delete: Delete a program from the playlist. Currently playing programs cannot be deleted.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Playlist program ID. <li>When Operation is Insert, this field is required. It means the inserted program list is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If not filled in, the program is inserted at the latest insertion point. If this field is filled in and SegmentIndex is also filled in, the program is inserted after the SegmentIndex fragment of the program corresponding to ItemId. Otherwise, it is inserted after this program.</li> <li>When Operation is Delete, this field is required. It means to delete this program. Currently playing programs cannot be deleted.</li>
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Index number of the M3U8 file shard. The SegmentIndex of the first shard in an M3U8 file is 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     */
                    int64_t m_segmentIndex;
                    bool m_segmentIndexHasBeenSet;

                    /**
                     * Program list. Required when Operation is Insert, InsertTemporary, or Delete. Indicates the program list to operate. Maximum list length: 10.
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
