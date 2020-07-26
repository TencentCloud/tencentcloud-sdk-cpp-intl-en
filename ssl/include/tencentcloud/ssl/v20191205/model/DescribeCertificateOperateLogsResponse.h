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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEOPERATELOGSRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEOPERATELOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/OperationLog.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateOperateLogs response structure.
                */
                class DescribeCertificateOperateLogsResponse : public AbstractModel
                {
                public:
                    DescribeCertificateOperateLogsResponse();
                    ~DescribeCertificateOperateLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total number of logs that meet query conditions.
                     * @return AllTotal Total number of logs that meet query conditions.
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     */
                    bool AllTotalHasBeenSet() const;

                    /**
                     * 获取Number of logs returned for this request.
                     * @return TotalCount Number of logs returned for this request.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Certificate operation log list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OperateLogs Certificate operation log list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OperationLog> GetOperateLogs() const;

                    /**
                     * 判断参数 OperateLogs 是否已赋值
                     * @return OperateLogs 是否已赋值
                     */
                    bool OperateLogsHasBeenSet() const;

                private:

                    /**
                     * Total number of logs that meet query conditions.
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                    /**
                     * Number of logs returned for this request.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Certificate operation log list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OperationLog> m_operateLogs;
                    bool m_operateLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEOPERATELOGSRESPONSE_H_
