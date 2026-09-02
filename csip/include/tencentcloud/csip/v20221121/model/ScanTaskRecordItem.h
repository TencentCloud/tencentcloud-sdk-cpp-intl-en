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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Scan task record details
                */
                class ScanTaskRecordItem : public AbstractModel
                {
                public:
                    ScanTaskRecordItem();
                    ~ScanTaskRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskID <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskID <p>Task ID.</p>
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p>
                     * @return Status <p>Task status.</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status.</p>
                     * @param _status <p>Task status.</p>
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
                     * 获取<p>Task progress</p>
                     * @return Progress <p>Task progress</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>Task progress</p>
                     * @param _progress <p>Task progress</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Consumed quota.</p>
                     * @return CostQuota <p>Consumed quota.</p>
                     * 
                     */
                    uint64_t GetCostQuota() const;

                    /**
                     * 设置<p>Consumed quota.</p>
                     * @param _costQuota <p>Consumed quota.</p>
                     * 
                     */
                    void SetCostQuota(const uint64_t& _costQuota);

                    /**
                     * 判断参数 CostQuota 是否已赋值
                     * @return CostQuota 是否已赋值
                     * 
                     */
                    bool CostQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time</p>
                     * @return CreateTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time</p>
                     * @param _createTime <p>Task creation time</p>
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
                     * 获取<p>Task end time.</p>
                     * @return EndTime <p>Task end time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Task end time.</p>
                     * @param _endTime <p>Task end time.</p>
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
                     * 获取<p>Task source</p>
                     * @return TaskSource <p>Task source</p>
                     * 
                     */
                    std::string GetTaskSource() const;

                    /**
                     * 设置<p>Task source</p>
                     * @param _taskSource <p>Task source</p>
                     * 
                     */
                    void SetTaskSource(const std::string& _taskSource);

                    /**
                     * 判断参数 TaskSource 是否已赋值
                     * @return TaskSource 是否已赋值
                     * 
                     */
                    bool TaskSourceHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>Task status.</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task progress</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Consumed quota.</p>
                     */
                    uint64_t m_costQuota;
                    bool m_costQuotaHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task end time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Task source</p>
                     */
                    std::string m_taskSource;
                    bool m_taskSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKRECORDITEM_H_
