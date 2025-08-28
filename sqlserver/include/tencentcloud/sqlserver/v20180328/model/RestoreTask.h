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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 
                */
                class RestoreTask : public AbstractModel
                {
                public:
                    RestoreTask();
                    ~RestoreTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TargetInstanceId 
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置
                     * @param _targetInstanceId 
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetInstanceName 
                     * 
                     */
                    std::string GetTargetInstanceName() const;

                    /**
                     * 设置
                     * @param _targetInstanceName 
                     * 
                     */
                    void SetTargetInstanceName(const std::string& _targetInstanceName);

                    /**
                     * 判断参数 TargetInstanceName 是否已赋值
                     * @return TargetInstanceName 是否已赋值
                     * 
                     */
                    bool TargetInstanceNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetInstanceStatus 
                     * 
                     */
                    int64_t GetTargetInstanceStatus() const;

                    /**
                     * 设置
                     * @param _targetInstanceStatus 
                     * 
                     */
                    void SetTargetInstanceStatus(const int64_t& _targetInstanceStatus);

                    /**
                     * 判断参数 TargetInstanceStatus 是否已赋值
                     * @return TargetInstanceStatus 是否已赋值
                     * 
                     */
                    bool TargetInstanceStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetRegion 
                     * 
                     */
                    std::string GetTargetRegion() const;

                    /**
                     * 设置
                     * @param _targetRegion 
                     * 
                     */
                    void SetTargetRegion(const std::string& _targetRegion);

                    /**
                     * 判断参数 TargetRegion 是否已赋值
                     * @return TargetRegion 是否已赋值
                     * 
                     */
                    bool TargetRegionHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreId 
                     * 
                     */
                    int64_t GetRestoreId() const;

                    /**
                     * 设置
                     * @param _restoreId 
                     * 
                     */
                    void SetRestoreId(const int64_t& _restoreId);

                    /**
                     * 判断参数 RestoreId 是否已赋值
                     * @return RestoreId 是否已赋值
                     * 
                     */
                    bool RestoreIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return TargetType 
                     * 
                     */
                    int64_t GetTargetType() const;

                    /**
                     * 设置
                     * @param _targetType 
                     * 
                     */
                    void SetTargetType(const int64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreType 
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置
                     * @param _restoreType 
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RestoreTime 
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置
                     * @param _restoreTime 
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
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
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return FlowId 
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置
                     * @param _flowId 
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_targetInstanceName;
                    bool m_targetInstanceNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_targetInstanceStatus;
                    bool m_targetInstanceStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_targetRegion;
                    bool m_targetRegionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_restoreId;
                    bool m_restoreIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTORETASK_H_
