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
                     * 获取<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id.</b>.
                     * @return SubAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id.</b>.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id.</b>.
                     * @param _subAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id.</b>.
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
                     * 获取The unique identifier of the playlist.
                     * @return RoundPlayId The unique identifier of the playlist.
                     * 
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置The unique identifier of the playlist.
                     * @param _roundPlayId The unique identifier of the playlist.
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
                     * 获取Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent loop banner processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this loop banner process.</li><li>Delete: Delete a program from the playback list. Cannot delete currently playing programs.</li>
                     * @return Operation Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent loop banner processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this loop banner process.</li><li>Delete: Delete a program from the playback list. Cannot delete currently playing programs.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent loop banner processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this loop banner process.</li><li>Delete: Delete a program from the playback list. Cannot delete currently playing programs.</li>
                     * @param _operation Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent loop banner processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this loop banner process.</li><li>Delete: Delete a program from the playback list. Cannot delete currently playing programs.</li>
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
                     * 获取Playlist program ID. <li>When Operation is Insert, this field is required, indicating the program list to be inserted is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If left blank, the program will be inserted at the latest insertion point. If this field is filled and SegmentIndex is also provided, the program will be inserted behind the fragment corresponding to SegmentIndex of the program specified by ItemId; otherwise, it will be inserted after the program.</li> <li>When Operation is Delete, this field is required, indicating the program to be deleted. Cannot delete currently playing programs.</li>
                     * @return ItemId Playlist program ID. <li>When Operation is Insert, this field is required, indicating the program list to be inserted is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If left blank, the program will be inserted at the latest insertion point. If this field is filled and SegmentIndex is also provided, the program will be inserted behind the fragment corresponding to SegmentIndex of the program specified by ItemId; otherwise, it will be inserted after the program.</li> <li>When Operation is Delete, this field is required, indicating the program to be deleted. Cannot delete currently playing programs.</li>
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Playlist program ID. <li>When Operation is Insert, this field is required, indicating the program list to be inserted is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If left blank, the program will be inserted at the latest insertion point. If this field is filled and SegmentIndex is also provided, the program will be inserted behind the fragment corresponding to SegmentIndex of the program specified by ItemId; otherwise, it will be inserted after the program.</li> <li>When Operation is Delete, this field is required, indicating the program to be deleted. Cannot delete currently playing programs.</li>
                     * @param _itemId Playlist program ID. <li>When Operation is Insert, this field is required, indicating the program list to be inserted is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If left blank, the program will be inserted at the latest insertion point. If this field is filled and SegmentIndex is also provided, the program will be inserted behind the fragment corresponding to SegmentIndex of the program specified by ItemId; otherwise, it will be inserted after the program.</li> <li>When Operation is Delete, this field is required, indicating the program to be deleted. Cannot delete currently playing programs.</li>
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
                     * 获取Segment index of the M3U8 file shard. The first shard of the M3U8 file has a SegmentIndex of 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * @return SegmentIndex Segment index of the M3U8 file shard. The first shard of the M3U8 file has a SegmentIndex of 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * 
                     */
                    int64_t GetSegmentIndex() const;

                    /**
                     * 设置Segment index of the M3U8 file shard. The first shard of the M3U8 file has a SegmentIndex of 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     * @param _segmentIndex Segment index of the M3U8 file shard. The first shard of the M3U8 file has a SegmentIndex of 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
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
                     * 获取Program list. required when operation is insert, inserttemporary, delete, indicating the list of programs to be operated on. the list length can be up to a maximum of 10.
                     * @return RoundPlaylist Program list. required when operation is insert, inserttemporary, delete, indicating the list of programs to be operated on. the list length can be up to a maximum of 10.
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置Program list. required when operation is insert, inserttemporary, delete, indicating the list of programs to be operated on. the list length can be up to a maximum of 10.
                     * @param _roundPlaylist Program list. required when operation is insert, inserttemporary, delete, indicating the list of programs to be operated on. the list length can be up to a maximum of 10.
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
                     * <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) id.</b>.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The unique identifier of the playlist.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * Operation type. Valid values: <li>Insert: Insert a program into the current playlist. The inserted program remains valid in subsequent loop banner processes.</li> <li>InsertTemporary: Temporarily insert a program into the current playlist. Temporarily inserted programs are only effective during this loop banner process.</li><li>Delete: Delete a program from the playback list. Cannot delete currently playing programs.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Playlist program ID. <li>When Operation is Insert, this field is required, indicating the program list to be inserted is located after this program.</li> <li>When Operation is InsertTemporary, this field is optional. If left blank, the program will be inserted at the latest insertion point. If this field is filled and SegmentIndex is also provided, the program will be inserted behind the fragment corresponding to SegmentIndex of the program specified by ItemId; otherwise, it will be inserted after the program.</li> <li>When Operation is Delete, this field is required, indicating the program to be deleted. Cannot delete currently playing programs.</li>
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Segment index of the M3U8 file shard. The first shard of the M3U8 file has a SegmentIndex of 0. This parameter is valid when Operation is InsertTemporary and ItemId has a value.
                     */
                    int64_t m_segmentIndex;
                    bool m_segmentIndexHasBeenSet;

                    /**
                     * Program list. required when operation is insert, inserttemporary, delete, indicating the list of programs to be operated on. the list length can be up to a maximum of 10.
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HANDLECURRENTPLAYLISTREQUEST_H_
