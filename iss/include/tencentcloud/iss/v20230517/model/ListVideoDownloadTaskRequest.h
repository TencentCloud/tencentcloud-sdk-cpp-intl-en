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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_

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
                * ListVideoDownloadTask request structure.
                */
                class ListVideoDownloadTaskRequest : public AbstractModel
                {
                public:
                    ListVideoDownloadTaskRequest();
                    ~ListVideoDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Device name. Fuzzy search supported.
                     * @return DeviceName Device name. Fuzzy search supported.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name. Fuzzy search supported.
                     * @param _deviceName Device name. Fuzzy search supported.
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
                     * 获取Channel name, used for fuzzy search
                     * @return ChannelName Channel name, used for fuzzy search
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name, used for fuzzy search
                     * @param _channelName Channel name, used for fuzzy search
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取Task status (0: preparing, 1: executing, 2: completed, 3: failure)
                     * @return Status Task status (0: preparing, 1: executing, 2: completed, 3: failure)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status (0: preparing, 1: executing, 2: completed, 3: failure)
                     * @param _status Task status (0: preparing, 1: executing, 2: completed, 3: failure)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sorting rule (only StartTime is supported. A hyphen (-) indicates descending order, e.g., -StartTime)
                     * @return SortRule Sorting rule (only StartTime is supported. A hyphen (-) indicates descending order, e.g., -StartTime)
                     * 
                     */
                    std::string GetSortRule() const;

                    /**
                     * 设置Sorting rule (only StartTime is supported. A hyphen (-) indicates descending order, e.g., -StartTime)
                     * @param _sortRule Sorting rule (only StartTime is supported. A hyphen (-) indicates descending order, e.g., -StartTime)
                     * 
                     */
                    void SetSortRule(const std::string& _sortRule);

                    /**
                     * 判断参数 SortRule 是否已赋值
                     * @return SortRule 是否已赋值
                     * 
                     */
                    bool SortRuleHasBeenSet() const;

                    /**
                     * 获取Whether the response carries the preview address (0: without; 1: carry)
                     * @return WithPreviewUrl Whether the response carries the preview address (0: without; 1: carry)
                     * 
                     */
                    int64_t GetWithPreviewUrl() const;

                    /**
                     * 设置Whether the response carries the preview address (0: without; 1: carry)
                     * @param _withPreviewUrl Whether the response carries the preview address (0: without; 1: carry)
                     * 
                     */
                    void SetWithPreviewUrl(const int64_t& _withPreviewUrl);

                    /**
                     * 判断参数 WithPreviewUrl 是否已赋值
                     * @return WithPreviewUrl 是否已赋值
                     * 
                     */
                    bool WithPreviewUrlHasBeenSet() const;

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
                     * 获取Pagination size.
                     * @return PageSize Pagination size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Pagination size.
                     * @param _pageSize Pagination size.
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
                     * 获取Download task ID
                     * @return DownloadTaskId Download task ID
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置Download task ID
                     * @param _downloadTaskId Download task ID
                     * 
                     */
                    void SetDownloadTaskId(const std::string& _downloadTaskId);

                    /**
                     * 判断参数 DownloadTaskId 是否已赋值
                     * @return DownloadTaskId 是否已赋值
                     * 
                     */
                    bool DownloadTaskIdHasBeenSet() const;

                    /**
                     * 获取URL expiration time (in seconds), with a maximum value of 86400 seconds (1 day).
                     * @return UrlExpires URL expiration time (in seconds), with a maximum value of 86400 seconds (1 day).
                     * 
                     */
                    int64_t GetUrlExpires() const;

                    /**
                     * 设置URL expiration time (in seconds), with a maximum value of 86400 seconds (1 day).
                     * @param _urlExpires URL expiration time (in seconds), with a maximum value of 86400 seconds (1 day).
                     * 
                     */
                    void SetUrlExpires(const int64_t& _urlExpires);

                    /**
                     * 判断参数 UrlExpires 是否已赋值
                     * @return UrlExpires 是否已赋值
                     * 
                     */
                    bool UrlExpiresHasBeenSet() const;

                    /**
                     * 获取Task date. Defaults to the current day.
                     * @return Date Task date. Defaults to the current day.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Task date. Defaults to the current day.
                     * @param _date Task date. Defaults to the current day.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * Device name. Fuzzy search supported.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Channel name, used for fuzzy search
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * Task status (0: preparing, 1: executing, 2: completed, 3: failure)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sorting rule (only StartTime is supported. A hyphen (-) indicates descending order, e.g., -StartTime)
                     */
                    std::string m_sortRule;
                    bool m_sortRuleHasBeenSet;

                    /**
                     * Whether the response carries the preview address (0: without; 1: carry)
                     */
                    int64_t m_withPreviewUrl;
                    bool m_withPreviewUrlHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Download task ID
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                    /**
                     * URL expiration time (in seconds), with a maximum value of 86400 seconds (1 day).
                     */
                    int64_t m_urlExpires;
                    bool m_urlExpiresHasBeenSet;

                    /**
                     * Task date. Defaults to the current day.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVIDEODOWNLOADTASKREQUEST_H_
