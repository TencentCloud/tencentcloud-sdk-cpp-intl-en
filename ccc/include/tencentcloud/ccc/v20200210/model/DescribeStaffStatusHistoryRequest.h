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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeStaffStatusHistory request structure.
                */
                class DescribeStaffStatusHistoryRequest : public AbstractModel
                {
                public:
                    DescribeStaffStatusHistoryRequest();
                    ~DescribeStaffStatusHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Agent account.
                     * @return StaffUserId Agent account.
                     * 
                     */
                    std::string GetStaffUserId() const;

                    /**
                     * 设置Agent account.
                     * @param _staffUserId Agent account.
                     * 
                     */
                    void SetStaffUserId(const std::string& _staffUserId);

                    /**
                     * 判断参数 StaffUserId 是否已赋值
                     * @return StaffUserId 是否已赋值
                     * 
                     */
                    bool StaffUserIdHasBeenSet() const;

                    /**
                     * 获取Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * @return StartTimestamp Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * @param _startTimestamp Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 7 days.
                     * @return EndTimestamp End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 7 days.
                     * 
                     */
                    int64_t GetEndTimestamp() const;

                    /**
                     * 设置End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 7 days.
                     * @param _endTimestamp End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 7 days.
                     * 
                     */
                    void SetEndTimestamp(const int64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取Specifies the cursor used during paginated retrieval.
                     * @return Cursor Specifies the cursor used during paginated retrieval.
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置Specifies the cursor used during paginated retrieval.
                     * @param _cursor Specifies the cursor used during paginated retrieval.
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取Specifies the pagination size.
                     * @return PageSize Specifies the pagination size.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Specifies the pagination size.
                     * @param _pageSize Specifies the pagination size.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Agent account.
                     */
                    std::string m_staffUserId;
                    bool m_staffUserIdHasBeenSet;

                    /**
                     * Start timestamp. Unix second-level timestamp. supports up to nearly 180 days.
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * End timestamp, Unix second-level timestamp. the interval range between end time and start time is less than 7 days.
                     */
                    int64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * Specifies the cursor used during paginated retrieval.
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * Specifies the pagination size.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESTAFFSTATUSHISTORYREQUEST_H_
