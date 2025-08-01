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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CdnLogInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCdnLogs response structure.
                */
                class DescribeCdnLogsResponse : public AbstractModel
                {
                public:
                    DescribeCdnLogsResponse();
                    ~DescribeCdnLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of log download links
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return TotalCount Total number of log download links
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Log download list for CDN nodes outside Mainland China. If global acceleration is not enabled for the domain name, ignore this parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OverseaCdnLogs Log download list for CDN nodes outside Mainland China. If global acceleration is not enabled for the domain name, ignore this parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CdnLogInfo> GetOverseaCdnLogs() const;

                    /**
                     * 判断参数 OverseaCdnLogs 是否已赋值
                     * @return OverseaCdnLogs 是否已赋值
                     * 
                     */
                    bool OverseaCdnLogsHasBeenSet() const;

                    /**
                     * 获取Log download list for CDN nodes in Mainland China.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DomesticCdnLogs Log download list for CDN nodes in Mainland China.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CdnLogInfo> GetDomesticCdnLogs() const;

                    /**
                     * 判断参数 DomesticCdnLogs 是否已赋值
                     * @return DomesticCdnLogs 是否已赋值
                     * 
                     */
                    bool DomesticCdnLogsHasBeenSet() const;

                private:

                    /**
                     * Total number of log download links
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Log download list for CDN nodes outside Mainland China. If global acceleration is not enabled for the domain name, ignore this parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CdnLogInfo> m_overseaCdnLogs;
                    bool m_overseaCdnLogsHasBeenSet;

                    /**
                     * Log download list for CDN nodes in Mainland China.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CdnLogInfo> m_domesticCdnLogs;
                    bool m_domesticCdnLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_
