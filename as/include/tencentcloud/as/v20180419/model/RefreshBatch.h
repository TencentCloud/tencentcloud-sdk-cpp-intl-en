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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshBatchRelatedInstance.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * Instance refresh batch information, containing the refresh status, instances, start and end time, etc., of the batch.
                */
                class RefreshBatch : public AbstractModel
                {
                public:
                    RefreshBatch();
                    ~RefreshBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Refresh batch number. For example, a value of 2 indicates that the current batch of instances will be refreshed in the second batch.
                     * @return RefreshBatchNum Refresh batch number. For example, a value of 2 indicates that the current batch of instances will be refreshed in the second batch.
                     * 
                     */
                    uint64_t GetRefreshBatchNum() const;

                    /**
                     * 设置Refresh batch number. For example, a value of 2 indicates that the current batch of instances will be refreshed in the second batch.
                     * @param _refreshBatchNum Refresh batch number. For example, a value of 2 indicates that the current batch of instances will be refreshed in the second batch.
                     * 
                     */
                    void SetRefreshBatchNum(const uint64_t& _refreshBatchNum);

                    /**
                     * 判断参数 RefreshBatchNum 是否已赋值
                     * @return RefreshBatchNum 是否已赋值
                     * 
                     */
                    bool RefreshBatchNumHasBeenSet() const;

                    /**
                     * 获取Refresh batch status. Valid values: <br><li>WAITING: Pending refresh.</li> <li>INIT: Initializing.</li> <li>RUNNING: Refreshing.</li> <li>FAILED: Refresh failed.</li> <li>PARTIALLY_SUCCESSFUL: Partially successful in the batch.</li> <li>CANCELLED: Canceled.</li> <li>SUCCESSFUL: Refreshed.
                     * @return RefreshBatchStatus Refresh batch status. Valid values: <br><li>WAITING: Pending refresh.</li> <li>INIT: Initializing.</li> <li>RUNNING: Refreshing.</li> <li>FAILED: Refresh failed.</li> <li>PARTIALLY_SUCCESSFUL: Partially successful in the batch.</li> <li>CANCELLED: Canceled.</li> <li>SUCCESSFUL: Refreshed.
                     * 
                     */
                    std::string GetRefreshBatchStatus() const;

                    /**
                     * 设置Refresh batch status. Valid values: <br><li>WAITING: Pending refresh.</li> <li>INIT: Initializing.</li> <li>RUNNING: Refreshing.</li> <li>FAILED: Refresh failed.</li> <li>PARTIALLY_SUCCESSFUL: Partially successful in the batch.</li> <li>CANCELLED: Canceled.</li> <li>SUCCESSFUL: Refreshed.
                     * @param _refreshBatchStatus Refresh batch status. Valid values: <br><li>WAITING: Pending refresh.</li> <li>INIT: Initializing.</li> <li>RUNNING: Refreshing.</li> <li>FAILED: Refresh failed.</li> <li>PARTIALLY_SUCCESSFUL: Partially successful in the batch.</li> <li>CANCELLED: Canceled.</li> <li>SUCCESSFUL: Refreshed.
                     * 
                     */
                    void SetRefreshBatchStatus(const std::string& _refreshBatchStatus);

                    /**
                     * 判断参数 RefreshBatchStatus 是否已赋值
                     * @return RefreshBatchStatus 是否已赋值
                     * 
                     */
                    bool RefreshBatchStatusHasBeenSet() const;

                    /**
                     * 获取List of instances linked to a refresh batch.
                     * @return RefreshBatchRelatedInstanceSet List of instances linked to a refresh batch.
                     * 
                     */
                    std::vector<RefreshBatchRelatedInstance> GetRefreshBatchRelatedInstanceSet() const;

                    /**
                     * 设置List of instances linked to a refresh batch.
                     * @param _refreshBatchRelatedInstanceSet List of instances linked to a refresh batch.
                     * 
                     */
                    void SetRefreshBatchRelatedInstanceSet(const std::vector<RefreshBatchRelatedInstance>& _refreshBatchRelatedInstanceSet);

                    /**
                     * 判断参数 RefreshBatchRelatedInstanceSet 是否已赋值
                     * @return RefreshBatchRelatedInstanceSet 是否已赋值
                     * 
                     */
                    bool RefreshBatchRelatedInstanceSetHasBeenSet() const;

                    /**
                     * 获取Refresh batch start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Refresh batch start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Refresh batch start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Refresh batch start time.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Refresh batch end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Refresh batch end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Refresh batch end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Refresh batch end time.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Refresh batch number. For example, a value of 2 indicates that the current batch of instances will be refreshed in the second batch.
                     */
                    uint64_t m_refreshBatchNum;
                    bool m_refreshBatchNumHasBeenSet;

                    /**
                     * Refresh batch status. Valid values: <br><li>WAITING: Pending refresh.</li> <li>INIT: Initializing.</li> <li>RUNNING: Refreshing.</li> <li>FAILED: Refresh failed.</li> <li>PARTIALLY_SUCCESSFUL: Partially successful in the batch.</li> <li>CANCELLED: Canceled.</li> <li>SUCCESSFUL: Refreshed.
                     */
                    std::string m_refreshBatchStatus;
                    bool m_refreshBatchStatusHasBeenSet;

                    /**
                     * List of instances linked to a refresh batch.
                     */
                    std::vector<RefreshBatchRelatedInstance> m_refreshBatchRelatedInstanceSet;
                    bool m_refreshBatchRelatedInstanceSetHasBeenSet;

                    /**
                     * Refresh batch start time.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Refresh batch end time.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_REFRESHBATCH_H_
