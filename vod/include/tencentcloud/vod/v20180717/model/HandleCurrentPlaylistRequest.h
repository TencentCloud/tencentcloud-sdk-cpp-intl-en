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
                     * 获取<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574) id.</b>.
                     * @return SubAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574) id.</b>.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574) id.</b>.
                     * @param _subAppId <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574) id.</b>.
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
                     * 获取Operation type, available options:<li>insert: insert program into the current playlist.</li> <li>inserttemporary: temporarily insert program into the current playlist. can only be inserted after the currently playing program. temporarily inserted programs are only effective during this carousel process.</li><li>delete: delete program from the playlist. cannot delete currently playing programs.</li>.
                     * @return Operation Operation type, available options:<li>insert: insert program into the current playlist.</li> <li>inserttemporary: temporarily insert program into the current playlist. can only be inserted after the currently playing program. temporarily inserted programs are only effective during this carousel process.</li><li>delete: delete program from the playlist. cannot delete currently playing programs.</li>.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type, available options:<li>insert: insert program into the current playlist.</li> <li>inserttemporary: temporarily insert program into the current playlist. can only be inserted after the currently playing program. temporarily inserted programs are only effective during this carousel process.</li><li>delete: delete program from the playlist. cannot delete currently playing programs.</li>.
                     * @param _operation Operation type, available options:<li>insert: insert program into the current playlist.</li> <li>inserttemporary: temporarily insert program into the current playlist. can only be inserted after the currently playing program. temporarily inserted programs are only effective during this carousel process.</li><li>delete: delete program from the playlist. cannot delete currently playing programs.</li>.
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
                     * 获取Playlist program id. required when operation is insert, indicating the program list will be inserted after this program. the insertion position must be after the currently playing program.
                     * @return ItemId Playlist program id. required when operation is insert, indicating the program list will be inserted after this program. the insertion position must be after the currently playing program.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Playlist program id. required when operation is insert, indicating the program list will be inserted after this program. the insertion position must be after the currently playing program.
                     * @param _itemId Playlist program id. required when operation is insert, indicating the program list will be inserted after this program. the insertion position must be after the currently playing program.
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
                     * <B>VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574) id.</b>.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The unique identifier of the playlist.
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * Operation type, available options:<li>insert: insert program into the current playlist.</li> <li>inserttemporary: temporarily insert program into the current playlist. can only be inserted after the currently playing program. temporarily inserted programs are only effective during this carousel process.</li><li>delete: delete program from the playlist. cannot delete currently playing programs.</li>.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Playlist program id. required when operation is insert, indicating the program list will be inserted after this program. the insertion position must be after the currently playing program.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

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
