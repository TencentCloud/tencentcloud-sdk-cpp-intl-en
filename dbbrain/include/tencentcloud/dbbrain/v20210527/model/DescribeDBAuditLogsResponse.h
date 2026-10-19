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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditProxyLogItem.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditDBLogItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBAuditLogs response structure.
                */
                class DescribeDBAuditLogsResponse : public AbstractModel
                {
                public:
                    DescribeDBAuditLogsResponse();
                    ~DescribeDBAuditLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of eligible entries.</p>
                     * @return TotalCount <p>Total number of eligible entries.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of records after filtering.</p>
                     * @return FilteredRecords <p>Number of records after filtering.</p>
                     * 
                     */
                    int64_t GetFilteredRecords() const;

                    /**
                     * 判断参数 FilteredRecords 是否已赋值
                     * @return FilteredRecords 是否已赋值
                     * 
                     */
                    bool FilteredRecordsHasBeenSet() const;

                    /**
                     * 获取<p>Proxy layer audit log list. Returned when LogType=Proxy or All. For field structure, see AuditProxyLogItem.</p>
                     * @return ProxyLogs <p>Proxy layer audit log list. Returned when LogType=Proxy or All. For field structure, see AuditProxyLogItem.</p>
                     * 
                     */
                    std::vector<AuditProxyLogItem> GetProxyLogs() const;

                    /**
                     * 判断参数 ProxyLogs 是否已赋值
                     * @return ProxyLogs 是否已赋值
                     * 
                     */
                    bool ProxyLogsHasBeenSet() const;

                    /**
                     * 获取<p>DB layer audit log list. Returned when LogType is DB or All. For the field structure, see AuditDBLogItem.</p>
                     * @return DBLogs <p>DB layer audit log list. Returned when LogType is DB or All. For the field structure, see AuditDBLogItem.</p>
                     * 
                     */
                    std::vector<AuditDBLogItem> GetDBLogs() const;

                    /**
                     * 判断参数 DBLogs 是否已赋值
                     * @return DBLogs 是否已赋值
                     * 
                     */
                    bool DBLogsHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of eligible entries.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Number of records after filtering.</p>
                     */
                    int64_t m_filteredRecords;
                    bool m_filteredRecordsHasBeenSet;

                    /**
                     * <p>Proxy layer audit log list. Returned when LogType=Proxy or All. For field structure, see AuditProxyLogItem.</p>
                     */
                    std::vector<AuditProxyLogItem> m_proxyLogs;
                    bool m_proxyLogsHasBeenSet;

                    /**
                     * <p>DB layer audit log list. Returned when LogType is DB or All. For the field structure, see AuditDBLogItem.</p>
                     */
                    std::vector<AuditDBLogItem> m_dBLogs;
                    bool m_dBLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBAUDITLOGSRESPONSE_H_
