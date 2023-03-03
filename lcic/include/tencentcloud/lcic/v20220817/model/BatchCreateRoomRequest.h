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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/RoomInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchCreateRoom request structure.
                */
                class BatchCreateRoomRequest : public AbstractModel
                {
                public:
                    BatchCreateRoomRequest();
                    ~BatchCreateRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param SdkAppId The SDKAppID assigned by LCIC.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The information of the rooms to create.
                     * @return RoomInfos The information of the rooms to create.
                     */
                    std::vector<RoomInfo> GetRoomInfos() const;

                    /**
                     * 设置The information of the rooms to create.
                     * @param RoomInfos The information of the rooms to create.
                     */
                    void SetRoomInfos(const std::vector<RoomInfo>& _roomInfos);

                    /**
                     * 判断参数 RoomInfos 是否已赋值
                     * @return RoomInfos 是否已赋值
                     */
                    bool RoomInfosHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The information of the rooms to create.
                     */
                    std::vector<RoomInfo> m_roomInfos;
                    bool m_roomInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHCREATEROOMREQUEST_H_
