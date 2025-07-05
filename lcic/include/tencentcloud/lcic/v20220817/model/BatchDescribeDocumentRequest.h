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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_

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
                * BatchDescribeDocument request structure.
                */
                class BatchDescribeDocumentRequest : public AbstractModel
                {
                public:
                    BatchDescribeDocumentRequest();
                    ~BatchDescribeDocumentRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取The page to return records from. Pagination starts from 1.
                     * @return Page The page to return records from. Pagination starts from 1.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置The page to return records from. Pagination starts from 1.
                     * @param _page The page to return records from. Pagination starts from 1.
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
                     * 获取The maximum number of records per page. The value of this parameter cannot exceed `1000`.
                     * @return Limit The maximum number of records per page. The value of this parameter cannot exceed `1000`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records per page. The value of this parameter cannot exceed `1000`.
                     * @param _limit The maximum number of records per page. The value of this parameter cannot exceed `1000`.
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
                     * 获取The courseware access. [0]: The private courseware of the specified user (`Owner`) will be returned; [1]: The public courseware of the specified user will be returned; [0,1]: Both the private and public courseware of the specified user will be returned; [2]: The private courseware of the specified user and the public courseware of all users (including `Owner`) will be returned.
                     * @return Permission The courseware access. [0]: The private courseware of the specified user (`Owner`) will be returned; [1]: The public courseware of the specified user will be returned; [0,1]: Both the private and public courseware of the specified user will be returned; [2]: The private courseware of the specified user and the public courseware of all users (including `Owner`) will be returned.
                     * 
                     */
                    std::vector<uint64_t> GetPermission() const;

                    /**
                     * 设置The courseware access. [0]: The private courseware of the specified user (`Owner`) will be returned; [1]: The public courseware of the specified user will be returned; [0,1]: Both the private and public courseware of the specified user will be returned; [2]: The private courseware of the specified user and the public courseware of all users (including `Owner`) will be returned.
                     * @param _permission The courseware access. [0]: The private courseware of the specified user (`Owner`) will be returned; [1]: The public courseware of the specified user will be returned; [0,1]: Both the private and public courseware of the specified user will be returned; [2]: The private courseware of the specified user and the public courseware of all users (including `Owner`) will be returned.
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
                     * 获取The user ID of the courseware owner. If you do not specify this, the information of all courseware under the application will be returned.
                     * @return Owner The user ID of the courseware owner. If you do not specify this, the information of all courseware under the application will be returned.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置The user ID of the courseware owner. If you do not specify this, the information of all courseware under the application will be returned.
                     * @param _owner The user ID of the courseware owner. If you do not specify this, the information of all courseware under the application will be returned.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取The filename keyword.
                     * @return Keyword The filename keyword.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置The filename keyword.
                     * @param _keyword The filename keyword.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取The courseware IDs. Non-existent IDs will be ignored.
                     * @return DocumentId The courseware IDs. Non-existent IDs will be ignored.
                     * 
                     */
                    std::vector<std::string> GetDocumentId() const;

                    /**
                     * 设置The courseware IDs. Non-existent IDs will be ignored.
                     * @param _documentId The courseware IDs. Non-existent IDs will be ignored.
                     * 
                     */
                    void SetDocumentId(const std::vector<std::string>& _documentId);

                    /**
                     * 判断参数 DocumentId 是否已赋值
                     * @return DocumentId 是否已赋值
                     * 
                     */
                    bool DocumentIdHasBeenSet() const;

                private:

                    /**
                     * The SDKAppID assigned by LCIC.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The page to return records from. Pagination starts from 1.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The maximum number of records per page. The value of this parameter cannot exceed `1000`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The courseware access. [0]: The private courseware of the specified user (`Owner`) will be returned; [1]: The public courseware of the specified user will be returned; [0,1]: Both the private and public courseware of the specified user will be returned; [2]: The private courseware of the specified user and the public courseware of all users (including `Owner`) will be returned.
                     */
                    std::vector<uint64_t> m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * The user ID of the courseware owner. If you do not specify this, the information of all courseware under the application will be returned.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * The filename keyword.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * The courseware IDs. Non-existent IDs will be ignored.
                     */
                    std::vector<std::string> m_documentId;
                    bool m_documentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHDESCRIBEDOCUMENTREQUEST_H_
