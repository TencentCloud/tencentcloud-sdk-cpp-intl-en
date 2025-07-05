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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployRecordList.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Managed records.
                */
                class DeployRecord : public AbstractModel
                {
                public:
                    DeployRecord();
                    ~DeployRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number.
                     * @param _totalCount Total number.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total successes
                     * @return SuccessTotalCount Total successes
                     * 
                     */
                    int64_t GetSuccessTotalCount() const;

                    /**
                     * 设置Total successes
                     * @param _successTotalCount Total successes
                     * 
                     */
                    void SetSuccessTotalCount(const int64_t& _successTotalCount);

                    /**
                     * 判断参数 SuccessTotalCount 是否已赋值
                     * @return SuccessTotalCount 是否已赋值
                     * 
                     */
                    bool SuccessTotalCountHasBeenSet() const;

                    /**
                     * 获取Total failed deployments.
                     * @return FailedTotalCount Total failed deployments.
                     * 
                     */
                    int64_t GetFailedTotalCount() const;

                    /**
                     * 设置Total failed deployments.
                     * @param _failedTotalCount Total failed deployments.
                     * 
                     */
                    void SetFailedTotalCount(const int64_t& _failedTotalCount);

                    /**
                     * 判断参数 FailedTotalCount 是否已赋值
                     * @return FailedTotalCount 是否已赋值
                     * 
                     */
                    bool FailedTotalCountHasBeenSet() const;

                    /**
                     * 获取Deployment in progress total number.
                     * @return RunningTotalCount Deployment in progress total number.
                     * 
                     */
                    int64_t GetRunningTotalCount() const;

                    /**
                     * 设置Deployment in progress total number.
                     * @param _runningTotalCount Deployment in progress total number.
                     * 
                     */
                    void SetRunningTotalCount(const int64_t& _runningTotalCount);

                    /**
                     * 判断参数 RunningTotalCount 是否已赋值
                     * @return RunningTotalCount 是否已赋值
                     * 
                     */
                    bool RunningTotalCountHasBeenSet() const;

                    /**
                     * 获取Deployment record type 0 specifies deployment, 1 indicates rollback.
                     * @return Type Deployment record type 0 specifies deployment, 1 indicates rollback.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Deployment record type 0 specifies deployment, 1 indicates rollback.
                     * @param _type Deployment record type 0 specifies deployment, 1 indicates rollback.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Deployment record detail list.
                     * @return RecordDetailList Deployment record detail list.
                     * 
                     */
                    std::vector<DeployRecordList> GetRecordDetailList() const;

                    /**
                     * 设置Deployment record detail list.
                     * @param _recordDetailList Deployment record detail list.
                     * 
                     */
                    void SetRecordDetailList(const std::vector<DeployRecordList>& _recordDetailList);

                    /**
                     * 判断参数 RecordDetailList 是否已赋值
                     * @return RecordDetailList 是否已赋值
                     * 
                     */
                    bool RecordDetailListHasBeenSet() const;

                    /**
                     * 获取Hosted resource deployment state: `0` (awaiting deployment), `1` (deployment successful), `2` (deployment failed), `3` (deploying), `4` (rollback successful), `5` (rollback failure).
                     * @return Status Hosted resource deployment state: `0` (awaiting deployment), `1` (deployment successful), `2` (deployment failed), `3` (deploying), `4` (rollback successful), `5` (rollback failure).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Hosted resource deployment state: `0` (awaiting deployment), `1` (deployment successful), `2` (deployment failed), `3` (deploying), `4` (rollback successful), `5` (rollback failure).
                     * @param _status Hosted resource deployment state: `0` (awaiting deployment), `1` (deployment successful), `2` (deployment failed), `3` (deploying), `4` (rollback successful), `5` (rollback failure).
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
                     * 获取Managed resource creation time.
                     * @return CreateTime Managed resource creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Managed resource creation time.
                     * @param _createTime Managed resource creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total successes
                     */
                    int64_t m_successTotalCount;
                    bool m_successTotalCountHasBeenSet;

                    /**
                     * Total failed deployments.
                     */
                    int64_t m_failedTotalCount;
                    bool m_failedTotalCountHasBeenSet;

                    /**
                     * Deployment in progress total number.
                     */
                    int64_t m_runningTotalCount;
                    bool m_runningTotalCountHasBeenSet;

                    /**
                     * Deployment record type 0 specifies deployment, 1 indicates rollback.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Deployment record detail list.
                     */
                    std::vector<DeployRecordList> m_recordDetailList;
                    bool m_recordDetailListHasBeenSet;

                    /**
                     * Hosted resource deployment state: `0` (awaiting deployment), `1` (deployment successful), `2` (deployment failed), `3` (deploying), `4` (rollback successful), `5` (rollback failure).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Managed resource creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORD_H_
