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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/RoomItem.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRooms response structure.
                */
                class GetRoomsResponse : public AbstractModel
                {
                public:
                    GetRoomsResponse();
                    ~GetRoomsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of rooms.
                     * @return Total The total number of rooms.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The room list.
                     * @return Rooms The room list.
                     * 
                     */
                    std::vector<RoomItem> GetRooms() const;

                    /**
                     * 判断参数 Rooms 是否已赋值
                     * @return Rooms 是否已赋值
                     * 
                     */
                    bool RoomsHasBeenSet() const;

                private:

                    /**
                     * The total number of rooms.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The room list.
                     */
                    std::vector<RoomItem> m_rooms;
                    bool m_roomsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMSRESPONSE_H_
