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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAuthoritiesList request structure.
                */
                class GetAuthoritiesListRequest : public AbstractModel
                {
                public:
                    GetAuthoritiesListRequest();
                    ~GetAuthoritiesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The page number, beginning from 1.
                     * @return PageNumber The page number, beginning from 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置The page number, beginning from 1.
                     * @param _pageNumber The page number, beginning from 1.
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
                     * 获取The number of records per page.
                     * @return PageSize The number of records per page.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The number of records per page.
                     * @param _pageSize The number of records per page.
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
                     * 获取The DID.
                     * @return Did The DID.
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置The DID.
                     * @param _did The DID.
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取Whether to query certified or uncertified authorities. `1`: Certified; `2`: Uncertified.
                     * @return Status Whether to query certified or uncertified authorities. `1`: Certified; `2`: Uncertified.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Whether to query certified or uncertified authorities. `1`: Certified; `2`: Uncertified.
                     * @param _status Whether to query certified or uncertified authorities. `1`: Certified; `2`: Uncertified.
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
                     * The page number, beginning from 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * The number of records per page.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * The DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * Whether to query certified or uncertified authorities. `1`: Certified; `2`: Uncertified.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_
