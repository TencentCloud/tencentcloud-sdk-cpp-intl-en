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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_

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
                * DescribeDocumentsByRoom request structure.
                */
                class DescribeDocumentsByRoomRequest : public AbstractModel
                {
                public:
                    DescribeDocumentsByRoomRequest();
                    ~DescribeDocumentsByRoomRequest() = default;
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
                     * 获取The SDKAppID assigned by LCIC.
                     * @return SdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The SDKAppID assigned by LCIC.
                     * @param _sdkAppId The SDKAppID assigned by LCIC.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

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
                     * 获取The maximum number of records to return per page. The maximum value can be 1000. The default value is 100.
                     * @return Limit The maximum number of records to return per page. The maximum value can be 1000. The default value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records to return per page. The maximum value can be 1000. The default value is 100.
                     * @param _limit The maximum number of records to return per page. The maximum value can be 1000. The default value is 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The document access type. [0]: The private documents of the owner. [1]: The public documents of the owner. [0,1]: The private and public documents of the owner. [2]: The private and public documents of all users (including the owner). Default value: [2].
                     * @return Permission The document access type. [0]: The private documents of the owner. [1]: The public documents of the owner. [0,1]: The private and public documents of the owner. [2]: The private and public documents of all users (including the owner). Default value: [2].
                     * 
                     */
                    std::vector<uint64_t> GetPermission() const;

                    /**
                     * 设置The document access type. [0]: The private documents of the owner. [1]: The public documents of the owner. [0,1]: The private and public documents of the owner. [2]: The private and public documents of all users (including the owner). Default value: [2].
                     * @param _permission The document access type. [0]: The private documents of the owner. [1]: The public documents of the owner. [0,1]: The private and public documents of the owner. [2]: The private and public documents of all users (including the owner). Default value: [2].
                     * 
                     */
                    void SetPermission(const std::vector<uint64_t>& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取The user ID of the document owner. If you do not specify this, the information of all documents under the application will be returned.
                     * @return Owner The user ID of the document owner. If you do not specify this, the information of all documents under the application will be returned.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置The user ID of the document owner. If you do not specify this, the information of all documents under the application will be returned.
                     * @param _owner The user ID of the document owner. If you do not specify this, the information of all documents under the application will be returned.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                private:

                    /**
                     * The room ID.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1, which is also the default value of this parameter.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The maximum number of records to return per page. The maximum value can be 1000. The default value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The document access type. [0]: The private documents of the owner. [1]: The public documents of the owner. [0,1]: The private and public documents of the owner. [2]: The private and public documents of all users (including the owner). Default value: [2].
                     */
                    std::vector<uint64_t> m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * The user ID of the document owner. If you do not specify this, the information of all documents under the application will be returned.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEDOCUMENTSBYROOMREQUEST_H_
