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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETL3CONNLISTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETL3CONNLISTREQUEST_H_

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
                * GetL3ConnList request structure.
                */
                class GetL3ConnListRequest : public AbstractModel
                {
                public:
                    GetL3ConnListRequest();
                    ~GetL3ConnListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Display records per page. When both PageSize and PageNumber are -1, match all devices with unlimited entries on one page.
                     * @return PageSize Display records per page. When both PageSize and PageNumber are -1, match all devices with unlimited entries on one page.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Display records per page. When both PageSize and PageNumber are -1, match all devices with unlimited entries on one page.
                     * @param _pageSize Display records per page. When both PageSize and PageNumber are -1, match all devices with unlimited entries on one page.
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
                     * 获取Currently viewed page number. When PageSize and PageNumber are both -1, match all devices with unlimited entries on one page.
                     * @return PageNumber Currently viewed page number. When PageSize and PageNumber are both -1, match all devices with unlimited entries on one page.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Currently viewed page number. When PageSize and PageNumber are both -1, match all devices with unlimited entries on one page.
                     * @param _pageNumber Currently viewed page number. When PageSize and PageNumber are both -1, match all devices with unlimited entries on one page.
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
                     * 获取Search for groups by DeviceId. Match all groups when empty.
                     * @return DeviceId Search for groups by DeviceId. Match all groups when empty.
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Search for groups by DeviceId. Match all groups when empty.
                     * @param _deviceId Search for groups by DeviceId. Match all groups when empty.
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * Display records per page. When both PageSize and PageNumber are -1, match all devices with unlimited entries on one page.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Currently viewed page number. When PageSize and PageNumber are both -1, match all devices with unlimited entries on one page.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Search for groups by DeviceId. Match all groups when empty.
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETL3CONNLISTREQUEST_H_
