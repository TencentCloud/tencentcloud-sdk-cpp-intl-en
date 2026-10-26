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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListOrganizationChannels request structure.
                */
                class ListOrganizationChannelsRequest : public AbstractModel
                {
                public:
                    ListOrganizationChannelsRequest();
                    ~ListOrganizationChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization ID
                     * @return OrganizationId Organization ID
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置Organization ID
                     * @param _organizationId Organization ID
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of items per page
                     * @return PageSize Maximum number of items per page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Maximum number of items per page
                     * @param _pageSize Maximum number of items per page
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
                     * 获取Query condition. Query by device name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * @return DeviceName Query condition. Query by device name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Query condition. Query by device name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * @param _deviceName Query condition. Query by device name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Query condition. Proceed to query by channel name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * @return ChannelName Query condition. Proceed to query by channel name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Query condition. Proceed to query by channel name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * @param _channelName Query condition. Proceed to query by channel name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * Organization ID
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * Maximum number of items per page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Which page. 
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Query condition. Query by device name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Query condition. Proceed to query by channel name.
Only one query condition can take effect at a time. Length not exceeding 32 bytes.
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELSREQUEST_H_
