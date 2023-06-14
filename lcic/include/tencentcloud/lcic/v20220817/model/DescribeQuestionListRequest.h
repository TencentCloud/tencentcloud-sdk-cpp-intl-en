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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeQuestionList request structure.
                */
                class DescribeQuestionListRequest : public AbstractModel
                {
                public:
                    DescribeQuestionListRequest();
                    ~DescribeQuestionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The room ID.
                     * @return RoomId The room ID.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
                     * @param _roomId The room ID.
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @return Page The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @param _page The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @return Limit The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * @param _limit The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTREQUEST_H_
