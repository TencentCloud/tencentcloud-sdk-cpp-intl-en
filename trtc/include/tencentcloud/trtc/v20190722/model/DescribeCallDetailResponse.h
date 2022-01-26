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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/UserInformation.h>
#include <tencentcloud/trtc/v20190722/model/QualityData.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCallDetail response structure.
                */
                class DescribeCallDetailResponse : public AbstractModel
                {
                public:
                    DescribeCallDetailResponse();
                    ~DescribeCallDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of returned users
                     * @return Total Total number of returned users
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取User information list
                     * @return UserList User information list
                     */
                    std::vector<UserInformation> GetUserList() const;

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取Quality data
                     * @return Data Quality data
                     */
                    std::vector<QualityData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Total number of returned users
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * User information list
                     */
                    std::vector<UserInformation> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * Quality data
                     */
                    std::vector<QualityData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILRESPONSE_H_
