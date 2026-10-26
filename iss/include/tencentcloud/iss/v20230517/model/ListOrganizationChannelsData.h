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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/OrganizationChannelInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * data of the channel list query under the organizational unit directory
                */
                class ListOrganizationChannelsData : public AbstractModel
                {
                public:
                    ListOrganizationChannelsData();
                    ~ListOrganizationChannelsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Which page.
                     * @return PageNumber Which page.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Which page.
                     * @param _pageNumber Which page.
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
                     * 获取Number of devices on the current page
                     * @return PageSize Number of devices on the current page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of devices on the current page
                     * @param _pageSize Number of devices on the current page
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
                     * 获取Total number of device channels in this query
                     * @return TotalCount Total number of device channels in this query
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of device channels in this query
                     * @param _totalCount Total number of device channels in this query
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of device channel information
                     * @return List List of device channel information
                     * 
                     */
                    std::vector<OrganizationChannelInfo> GetList() const;

                    /**
                     * 设置List of device channel information
                     * @param _list List of device channel information
                     * 
                     */
                    void SetList(const std::vector<OrganizationChannelInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Which page.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of devices on the current page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of device channels in this query
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of device channel information
                     */
                    std::vector<OrganizationChannelInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSDATA_H_
