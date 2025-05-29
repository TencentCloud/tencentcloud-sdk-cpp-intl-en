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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListApp request structure.
                */
                class ListAppRequest : public AbstractModel
                {
                public:
                    ListAppRequest();
                    ~ListAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @return AppType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @param _appType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Number of items per page, integer.
                     * @return PageSize Number of items per page, integer.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page, integer.
                     * @param _pageSize Number of items per page, integer.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number, integer.
                     * @return PageNumber Page number, integer.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, integer.
                     * @param _pageNumber Page number, integer.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Keywords: application / modifier.
                     * @return Keyword Keywords: application / modifier.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keywords: application / modifier.
                     * @param _keyword Keywords: application / modifier.
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
                     * 获取Login to user's sub-account (required in integrator mode).	
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).	
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Number of items per page, integer.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number, integer.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Keywords: application / modifier.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTAPPREQUEST_H_
