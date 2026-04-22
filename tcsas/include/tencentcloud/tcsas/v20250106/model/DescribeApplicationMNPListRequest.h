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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPLISTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * DescribeApplicationMNPList request structure.
                */
                class DescribeApplicationMNPListRequest : public AbstractModel
                {
                public:
                    DescribeApplicationMNPListRequest();
                    ~DescribeApplicationMNPListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page offset
                     * @return Offset Page offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset
                     * @param _offset Page offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page
                     * @return Limit Number of results per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
                     * @param _limit Number of results per page
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
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Superapp ID
                     * @return ApplicationId Superapp ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID
                     * @param _applicationId Superapp ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Online status. 0 All (default); 1 Available; 2 In canary release
                     * @return OnlineStatus Online status. 0 All (default); 1 Available; 2 In canary release
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置Online status. 0 All (default); 1 Available; 2 In canary release
                     * @param _onlineStatus Online status. 0 All (default); 1 Available; 2 In canary release
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取Engine type. 0 Mini program; 1 Mini game
                     * @return EngineTypeList Engine type. 0 Mini program; 1 Mini game
                     * 
                     */
                    std::vector<int64_t> GetEngineTypeList() const;

                    /**
                     * 设置Engine type. 0 Mini program; 1 Mini game
                     * @param _engineTypeList Engine type. 0 Mini program; 1 Mini game
                     * 
                     */
                    void SetEngineTypeList(const std::vector<int64_t>& _engineTypeList);

                    /**
                     * 判断参数 EngineTypeList 是否已赋值
                     * @return EngineTypeList 是否已赋值
                     * 
                     */
                    bool EngineTypeListHasBeenSet() const;

                    /**
                     * 获取Secondary category name
                     * @return SubCategory Secondary category name
                     * 
                     */
                    std::string GetSubCategory() const;

                    /**
                     * 设置Secondary category name
                     * @param _subCategory Secondary category name
                     * 
                     */
                    void SetSubCategory(const std::string& _subCategory);

                    /**
                     * 判断参数 SubCategory 是否已赋值
                     * @return SubCategory 是否已赋值
                     * 
                     */
                    bool SubCategoryHasBeenSet() const;

                    /**
                     * 获取Primary category name
                     * @return PrimaryCategory Primary category name
                     * 
                     */
                    std::string GetPrimaryCategory() const;

                    /**
                     * 设置Primary category name
                     * @param _primaryCategory Primary category name
                     * 
                     */
                    void SetPrimaryCategory(const std::string& _primaryCategory);

                    /**
                     * 判断参数 PrimaryCategory 是否已赋值
                     * @return PrimaryCategory 是否已赋值
                     * 
                     */
                    bool PrimaryCategoryHasBeenSet() const;

                    /**
                     * 获取Keywords
                     * @return Keyword Keywords
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keywords
                     * @param _keyword Keywords
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Page offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Superapp ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Online status. 0 All (default); 1 Available; 2 In canary release
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * Engine type. 0 Mini program; 1 Mini game
                     */
                    std::vector<int64_t> m_engineTypeList;
                    bool m_engineTypeListHasBeenSet;

                    /**
                     * Secondary category name
                     */
                    std::string m_subCategory;
                    bool m_subCategoryHasBeenSet;

                    /**
                     * Primary category name
                     */
                    std::string m_primaryCategory;
                    bool m_primaryCategoryHasBeenSet;

                    /**
                     * Keywords
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONMNPLISTREQUEST_H_
