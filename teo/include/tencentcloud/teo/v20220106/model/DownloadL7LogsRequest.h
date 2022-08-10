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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DownloadL7Logs request structure.
                */
                class DownloadL7LogsRequest : public AbstractModel
                {
                public:
                    DownloadL7LogsRequest();
                    ~DownloadL7LogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time. It must conform to the RFC3339 standard.
                     * @return StartTime Start time. It must conform to the RFC3339 standard.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. It must conform to the RFC3339 standard.
                     * @param StartTime Start time. It must conform to the RFC3339 standard.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time. It must conform to the RFC3339 standard.
                     * @return EndTime End time. It must conform to the RFC3339 standard.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. It must conform to the RFC3339 standard.
                     * @param EndTime End time. It must conform to the RFC3339 standard.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return PageSize Number of entries per page
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page
                     * @param PageSize Number of entries per page
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Current page
                     * @return PageNo Current page
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Current page
                     * @param PageNo Current page
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Array of site names
                     * @return Zones Array of site names
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置Array of site names
                     * @param Zones Array of site names
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取Array of subdomain names
                     * @return Domains Array of subdomain names
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Array of subdomain names
                     * @param Domains Array of subdomain names
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * Start time. It must conform to the RFC3339 standard.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. It must conform to the RFC3339 standard.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Current page
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Array of site names
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * Array of subdomain names
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_
