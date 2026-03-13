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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSnapshotOperationLogs request structure.
                */
                class DescribeSnapshotOperationLogsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotOperationLogsRequest();
                    ~DescribeSnapshotOperationLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot ID, which can be obtained by querying through the [DescribeCfsSnapshots](https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1) api.
                     * @return SnapshotId Snapshot ID, which can be obtained by querying through the [DescribeCfsSnapshots](https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be obtained by querying through the [DescribeCfsSnapshots](https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1) api.
                     * @param _snapshotId Snapshot ID, which can be obtained by querying through the [DescribeCfsSnapshots](https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1) api.
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Start time, format "YYYY-MM-DD hh:MM:ss".
                     * @return StartTime Start time, format "YYYY-MM-DD hh:MM:ss".
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, format "YYYY-MM-DD hh:MM:ss".
                     * @param _startTime Start time, format "YYYY-MM-DD hh:MM:ss".
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, format "YYYY-MM-DD hh:MM:ss".
                     * @return EndTime End time, format "YYYY-MM-DD hh:MM:ss".
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, format "YYYY-MM-DD hh:MM:ss".
                     * @param _endTime End time, format "YYYY-MM-DD hh:MM:ss".
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID, which can be obtained by querying through the [DescribeCfsSnapshots](https://www.tencentcloud.com/document/api/582/80206?from_cn_redirect=1) api.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Start time, format "YYYY-MM-DD hh:MM:ss".
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, format "YYYY-MM-DD hh:MM:ss".
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_
