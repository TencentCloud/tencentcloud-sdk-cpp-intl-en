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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DeleteRoomMember request structure.
                */
                class DeleteRoomMemberRequest : public AbstractModel
                {
                public:
                    DeleteRoomMemberRequest();
                    ~DeleteRoomMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the target room
                     * @return RoomId ID of the target room
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置ID of the target room
                     * @param _roomId ID of the target room
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取List of the members to remove
                     * @return Uids List of the members to remove
                     * 
                     */
                    std::vector<std::string> GetUids() const;

                    /**
                     * 设置List of the members to remove
                     * @param _uids List of the members to remove
                     * 
                     */
                    void SetUids(const std::vector<std::string>& _uids);

                    /**
                     * 判断参数 Uids 是否已赋值
                     * @return Uids 是否已赋值
                     * 
                     */
                    bool UidsHasBeenSet() const;

                    /**
                     * 获取Operation type. `1`: Delete a room; `2`: Remove members
                     * @return DeleteType Operation type. `1`: Delete a room; `2`: Remove members
                     * 
                     */
                    uint64_t GetDeleteType() const;

                    /**
                     * 设置Operation type. `1`: Delete a room; `2`: Remove members
                     * @param _deleteType Operation type. `1`: Delete a room; `2`: Remove members
                     * 
                     */
                    void SetDeleteType(const uint64_t& _deleteType);

                    /**
                     * 判断参数 DeleteType 是否已赋值
                     * @return DeleteType 是否已赋值
                     * 
                     */
                    bool DeleteTypeHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return BizId Application ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Application ID
                     * @param _bizId Application ID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                private:

                    /**
                     * ID of the target room
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * List of the members to remove
                     */
                    std::vector<std::string> m_uids;
                    bool m_uidsHasBeenSet;

                    /**
                     * Operation type. `1`: Delete a room; `2`: Remove members
                     */
                    uint64_t m_deleteType;
                    bool m_deleteTypeHasBeenSet;

                    /**
                     * Application ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DELETEROOMMEMBERREQUEST_H_
