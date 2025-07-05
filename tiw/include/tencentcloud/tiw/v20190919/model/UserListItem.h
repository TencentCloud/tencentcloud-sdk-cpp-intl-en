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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Whiteboard user data returned for log queries.
                */
                class UserListItem : public AbstractModel
                {
                public:
                    UserListItem();
                    ~UserListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID in the room.
                     * @return UserId User ID in the room.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID in the room.
                     * @param _userId User ID in the room.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The first time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * @return StartTime The first time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The first time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * @param _startTime The first time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The last time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * @return EndTime The last time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The last time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * @param _endTime The last time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * User ID in the room.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The first time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The last time when the user ID appeared during the queried period, which is a Unix timestamp in milliseconds.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_USERLISTITEM_H_
