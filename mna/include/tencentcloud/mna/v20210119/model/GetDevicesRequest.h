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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICESREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICESREQUEST_H_

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
                * GetDevices request structure.
                */
                class GetDevicesRequest : public AbstractModel
                {
                public:
                    GetDevicesRequest();
                    ~GetDevicesRequest() = default;
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
                     * 获取Search for a device by keyword (ID or device name). Leave it empty to match all devices.
                     * @return Keyword Search for a device by keyword (ID or device name). Leave it empty to match all devices.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search for a device by keyword (ID or device name). Leave it empty to match all devices.
                     * @param _keyword Search for a device by keyword (ID or device name). Leave it empty to match all devices.
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
                     * 获取DeviceType
Leave it blank: Return all devices.
1: Your own equipment;
2: Third-party device
                     * @return DeviceType DeviceType
Leave it blank: Return all devices.
1: Your own equipment;
2: Third-party device
                     * 
                     */
                    int64_t GetDeviceType() const;

                    /**
                     * 设置DeviceType
Leave it blank: Return all devices.
1: Your own equipment;
2: Third-party device
                     * @param _deviceType DeviceType
Leave it blank: Return all devices.
1: Your own equipment;
2: Third-party device
                     * 
                     */
                    void SetDeviceType(const int64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

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
                     * Search for a device by keyword (ID or device name). Leave it empty to match all devices.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * DeviceType
Leave it blank: Return all devices.
1: Your own equipment;
2: Third-party device
                     */
                    int64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICESREQUEST_H_
