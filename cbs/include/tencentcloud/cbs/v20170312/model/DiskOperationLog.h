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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The operation log of the cloud disk.
                */
                class DiskOperationLog : public AbstractModel
                {
                public:
                    DiskOperationLog();
                    ~DiskOperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UIN of operator.
                     * @return Operator UIN of operator.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置UIN of operator.
                     * @param _operator UIN of operator.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Operation type. Value range:
CBS_OPERATION_ATTACH: Mount cloud disk
CBS_OPERATION_DETACH: Unmount cloud disk
CBS_OPERATION_RENEW: Renew
CBS_OPERATION_EXPAND: Expand
CBS_OPERATION_CREATE: Create
CBS_OPERATION_ISOLATE: Isolate
CBS_OPERATION_MODIFY: Modify cloud disk attributes
ASP_OPERATION_BIND: Associate scheduled snapshot policy
ASP_OPERATION_UNBIND: Cancel associated scheduled snapshot policy
                     * @return Operation Operation type. Value range:
CBS_OPERATION_ATTACH: Mount cloud disk
CBS_OPERATION_DETACH: Unmount cloud disk
CBS_OPERATION_RENEW: Renew
CBS_OPERATION_EXPAND: Expand
CBS_OPERATION_CREATE: Create
CBS_OPERATION_ISOLATE: Isolate
CBS_OPERATION_MODIFY: Modify cloud disk attributes
ASP_OPERATION_BIND: Associate scheduled snapshot policy
ASP_OPERATION_UNBIND: Cancel associated scheduled snapshot policy
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation type. Value range:
CBS_OPERATION_ATTACH: Mount cloud disk
CBS_OPERATION_DETACH: Unmount cloud disk
CBS_OPERATION_RENEW: Renew
CBS_OPERATION_EXPAND: Expand
CBS_OPERATION_CREATE: Create
CBS_OPERATION_ISOLATE: Isolate
CBS_OPERATION_MODIFY: Modify cloud disk attributes
ASP_OPERATION_BIND: Associate scheduled snapshot policy
ASP_OPERATION_UNBIND: Cancel associated scheduled snapshot policy
                     * @param _operation Operation type. Value range:
CBS_OPERATION_ATTACH: Mount cloud disk
CBS_OPERATION_DETACH: Unmount cloud disk
CBS_OPERATION_RENEW: Renew
CBS_OPERATION_EXPAND: Expand
CBS_OPERATION_CREATE: Create
CBS_OPERATION_ISOLATE: Isolate
CBS_OPERATION_MODIFY: Modify cloud disk attributes
ASP_OPERATION_BIND: Associate scheduled snapshot policy
ASP_OPERATION_UNBIND: Cancel associated scheduled snapshot policy
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Cloud disk ID of operation.
                     * @return DiskId Cloud disk ID of operation.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID of operation.
                     * @param _diskId Cloud disk ID of operation.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Status of operation. Value range:
SUCCESS: Operation successful 
FAILED: Operation failed 
PROCESSING: Operation in process
                     * @return OperationState Status of operation. Value range:
SUCCESS: Operation successful 
FAILED: Operation failed 
PROCESSING: Operation in process
                     * 
                     */
                    std::string GetOperationState() const;

                    /**
                     * 设置Status of operation. Value range:
SUCCESS: Operation successful 
FAILED: Operation failed 
PROCESSING: Operation in process
                     * @param _operationState Status of operation. Value range:
SUCCESS: Operation successful 
FAILED: Operation failed 
PROCESSING: Operation in process
                     * 
                     */
                    void SetOperationState(const std::string& _operationState);

                    /**
                     * 判断参数 OperationState 是否已赋值
                     * @return OperationState 是否已赋值
                     * 
                     */
                    bool OperationStateHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * UIN of operator.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Operation type. Value range:
CBS_OPERATION_ATTACH: Mount cloud disk
CBS_OPERATION_DETACH: Unmount cloud disk
CBS_OPERATION_RENEW: Renew
CBS_OPERATION_EXPAND: Expand
CBS_OPERATION_CREATE: Create
CBS_OPERATION_ISOLATE: Isolate
CBS_OPERATION_MODIFY: Modify cloud disk attributes
ASP_OPERATION_BIND: Associate scheduled snapshot policy
ASP_OPERATION_UNBIND: Cancel associated scheduled snapshot policy
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Cloud disk ID of operation.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Status of operation. Value range:
SUCCESS: Operation successful 
FAILED: Operation failed 
PROCESSING: Operation in process
                     */
                    std::string m_operationState;
                    bool m_operationStateHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKOPERATIONLOG_H_
