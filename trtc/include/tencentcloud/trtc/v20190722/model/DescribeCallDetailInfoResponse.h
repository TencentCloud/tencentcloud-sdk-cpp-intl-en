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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILINFORESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILINFORESPONSE_H_

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
                * DescribeCallDetailInfo response structure.
                */
                class DescribeCallDetailInfoResponse : public AbstractModel
                {
                public:
                    DescribeCallDetailInfoResponse();
                    ~DescribeCallDetailInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of records returned.
                     * @return Total The number of records returned.
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
                     * 获取The user information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserList The user information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserInformation> GetUserList() const;

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * 
                     */
                    bool UserListHasBeenSet() const;

                    /**
                     * 获取The call quality data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data The call quality data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QualityData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * The number of records returned.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The user information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserInformation> m_userList;
                    bool m_userListHasBeenSet;

                    /**
                     * The call quality data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QualityData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECALLDETAILINFORESPONSE_H_
