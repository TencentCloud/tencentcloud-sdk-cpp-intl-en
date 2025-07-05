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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/SnapshotOperationLog.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSnapshotOperationLogs response structure.
                */
                class DescribeSnapshotOperationLogsResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotOperationLogsResponse();
                    ~DescribeSnapshotOperationLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of snapshot operation logs.
                     * @return SnapshotOperationLogSet List of snapshot operation logs.
                     * 
                     */
                    std::vector<SnapshotOperationLog> GetSnapshotOperationLogSet() const;

                    /**
                     * 判断参数 SnapshotOperationLogSet 是否已赋值
                     * @return SnapshotOperationLogSet 是否已赋值
                     * 
                     */
                    bool SnapshotOperationLogSetHasBeenSet() const;

                private:

                    /**
                     * List of snapshot operation logs.
                     */
                    std::vector<SnapshotOperationLog> m_snapshotOperationLogSet;
                    bool m_snapshotOperationLogSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_
