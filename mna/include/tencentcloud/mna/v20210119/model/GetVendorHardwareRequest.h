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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWAREREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetVendorHardware request structure.
                */
                class GetVendorHardwareRequest : public AbstractModel
                {
                public:
                    GetVendorHardwareRequest();
                    ~GetVendorHardwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Page count
                     * @return PageSize Page count
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page count
                     * @param _pageSize Page count
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Keyword.
                     * @return Keyword Keyword.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword.
                     * @param _keyword Keyword.
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
                     * 获取Activation status
Empty: All;
1: To be activated.
2: Activated;
                     * @return Status Activation status
Empty: All;
1: To be activated.
2: Activated;
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Activation status
Empty: All;
1: To be activated.
2: Activated;
                     * @param _status Activation status
Empty: All;
1: To be activated.
2: Activated;
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page count
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Keyword.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Activation status
Empty: All;
1: To be activated.
2: Activated;
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETVENDORHARDWAREREQUEST_H_
