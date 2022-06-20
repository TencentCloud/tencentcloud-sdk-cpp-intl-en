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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/L7OfflineLog.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DownloadL7Logs response structure.
                */
                class DownloadL7LogsResponse : public AbstractModel
                {
                public:
                    DownloadL7LogsResponse();
                    ~DownloadL7LogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Layer-7 offline log data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Data Layer-7 offline log data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<L7OfflineLog> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Page size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PageSize Page size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PageNo Page number
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Total number of pages
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Pages Total number of pages
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetPages() const;

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取Total number of entries
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TotalSize Total number of entries
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * Layer-7 offline log data
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<L7OfflineLog> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Page size
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Total number of pages
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * Total number of entries
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSRESPONSE_H_
