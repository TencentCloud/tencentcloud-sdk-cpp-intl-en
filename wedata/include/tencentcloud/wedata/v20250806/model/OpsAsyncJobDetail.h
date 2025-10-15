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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Asynchronous operation details.
                */
                class OpsAsyncJobDetail : public AbstractModel
                {
                public:
                    OpsAsyncJobDetail();
                    ~OpsAsyncJobDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Operation ID
                     * @return AsyncId Operation ID
                     * 
                     */
                    std::string GetAsyncId() const;

                    /**
                     * 设置Operation ID
                     * @param _asyncId Operation ID
                     * 
                     */
                    void SetAsyncId(const std::string& _asyncId);

                    /**
                     * 判断参数 AsyncId 是否已赋值
                     * @return AsyncId 是否已赋值
                     * 
                     */
                    bool AsyncIdHasBeenSet() const;

                    /**
                     * 获取Asynchronous operation type.
                     * @return AsyncType Asynchronous operation type.
                     * 
                     */
                    std::string GetAsyncType() const;

                    /**
                     * 设置Asynchronous operation type.
                     * @param _asyncType Asynchronous operation type.
                     * 
                     */
                    void SetAsyncType(const std::string& _asyncType);

                    /**
                     * 判断参数 AsyncType 是否已赋值
                     * @return AsyncType 是否已赋值
                     * 
                     */
                    bool AsyncTypeHasBeenSet() const;

                    /**
                     * 获取Asynchronous operation status: initial status: INIT; Running: RUNNING; Success: SUCCESS; failure: FAIL; partially successful: PART_SUCCESS.
                     * @return Status Asynchronous operation status: initial status: INIT; Running: RUNNING; Success: SUCCESS; failure: FAIL; partially successful: PART_SUCCESS.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Asynchronous operation status: initial status: INIT; Running: RUNNING; Success: SUCCESS; failure: FAIL; partially successful: PART_SUCCESS.
                     * @param _status Asynchronous operation status: initial status: INIT; Running: RUNNING; Success: SUCCESS; failure: FAIL; partially successful: PART_SUCCESS.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message.


                     * @return ErrorDesc Error message.


                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置Error message.


                     * @param _errorDesc Error message.


                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                    /**
                     * 获取Total sub-processes.
                     * @return TotalSubProcessCount Total sub-processes.
                     * 
                     */
                    uint64_t GetTotalSubProcessCount() const;

                    /**
                     * 设置Total sub-processes.
                     * @param _totalSubProcessCount Total sub-processes.
                     * 
                     */
                    void SetTotalSubProcessCount(const uint64_t& _totalSubProcessCount);

                    /**
                     * 判断参数 TotalSubProcessCount 是否已赋值
                     * @return TotalSubProcessCount 是否已赋值
                     * 
                     */
                    bool TotalSubProcessCountHasBeenSet() const;

                    /**
                     * 获取Number of completed sub-processes.

                     * @return FinishedSubProcessCount Number of completed sub-processes.

                     * 
                     */
                    uint64_t GetFinishedSubProcessCount() const;

                    /**
                     * 设置Number of completed sub-processes.

                     * @param _finishedSubProcessCount Number of completed sub-processes.

                     * 
                     */
                    void SetFinishedSubProcessCount(const uint64_t& _finishedSubProcessCount);

                    /**
                     * 判断参数 FinishedSubProcessCount 是否已赋值
                     * @return FinishedSubProcessCount 是否已赋值
                     * 
                     */
                    bool FinishedSubProcessCountHasBeenSet() const;

                    /**
                     * 获取Count of successful sub-processes.

                     * @return SuccessSubProcessCount Count of successful sub-processes.

                     * 
                     */
                    uint64_t GetSuccessSubProcessCount() const;

                    /**
                     * 设置Count of successful sub-processes.

                     * @param _successSubProcessCount Count of successful sub-processes.

                     * 
                     */
                    void SetSuccessSubProcessCount(const uint64_t& _successSubProcessCount);

                    /**
                     * 判断参数 SuccessSubProcessCount 是否已赋值
                     * @return SuccessSubProcessCount 是否已赋值
                     * 
                     */
                    bool SuccessSubProcessCountHasBeenSet() const;

                    /**
                     * 获取Operator id.
                     * @return CreateUserUin Operator id.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Operator id.
                     * @param _createUserUin Operator id.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Operation ID
                     */
                    std::string m_asyncId;
                    bool m_asyncIdHasBeenSet;

                    /**
                     * Asynchronous operation type.
                     */
                    std::string m_asyncType;
                    bool m_asyncTypeHasBeenSet;

                    /**
                     * Asynchronous operation status: initial status: INIT; Running: RUNNING; Success: SUCCESS; failure: FAIL; partially successful: PART_SUCCESS.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message.


                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                    /**
                     * Total sub-processes.
                     */
                    uint64_t m_totalSubProcessCount;
                    bool m_totalSubProcessCountHasBeenSet;

                    /**
                     * Number of completed sub-processes.

                     */
                    uint64_t m_finishedSubProcessCount;
                    bool m_finishedSubProcessCountHasBeenSet;

                    /**
                     * Count of successful sub-processes.

                     */
                    uint64_t m_successSubProcessCount;
                    bool m_successSubProcessCountHasBeenSet;

                    /**
                     * Operator id.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_OPSASYNCJOBDETAIL_H_
