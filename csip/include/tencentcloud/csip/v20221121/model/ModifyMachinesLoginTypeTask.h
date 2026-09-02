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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ModifyLoginTypeFailInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Batch task for modifying the host login method.
                */
                class ModifyMachinesLoginTypeTask : public AbstractModel
                {
                public:
                    ModifyMachinesLoginTypeTask();
                    ~ModifyMachinesLoginTypeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>1-In progress, 2 completed</p>
                     * @return Status <p>1-In progress, 2 completed</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>1-In progress, 2 completed</p>
                     * @param _status <p>1-In progress, 2 completed</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Successfully executed count.</p>
                     * @return SuccessCount <p>Successfully executed count.</p>
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置<p>Successfully executed count.</p>
                     * @param _successCount <p>Successfully executed count.</p>
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>Host list of failed execution</p>
                     * @return FailList <p>Host list of failed execution</p>
                     * 
                     */
                    std::vector<ModifyLoginTypeFailInfo> GetFailList() const;

                    /**
                     * 设置<p>Host list of failed execution</p>
                     * @param _failList <p>Host list of failed execution</p>
                     * 
                     */
                    void SetFailList(const std::vector<ModifyLoginTypeFailInfo>& _failList);

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取<p>List of instance IDs with successful modification.</p>
                     * @return SuccessInstances <p>List of instance IDs with successful modification.</p>
                     * 
                     */
                    std::vector<std::string> GetSuccessInstances() const;

                    /**
                     * 设置<p>List of instance IDs with successful modification.</p>
                     * @param _successInstances <p>List of instance IDs with successful modification.</p>
                     * 
                     */
                    void SetSuccessInstances(const std::vector<std::string>& _successInstances);

                    /**
                     * 判断参数 SuccessInstances 是否已赋值
                     * @return SuccessInstances 是否已赋值
                     * 
                     */
                    bool SuccessInstancesHasBeenSet() const;

                    /**
                     * 获取<p>List of instance IDs being modified</p>
                     * @return ProgressingInstances <p>List of instance IDs being modified</p>
                     * 
                     */
                    std::vector<std::string> GetProgressingInstances() const;

                    /**
                     * 设置<p>List of instance IDs being modified</p>
                     * @param _progressingInstances <p>List of instance IDs being modified</p>
                     * 
                     */
                    void SetProgressingInstances(const std::vector<std::string>& _progressingInstances);

                    /**
                     * 判断参数 ProgressingInstances 是否已赋值
                     * @return ProgressingInstances 是否已赋值
                     * 
                     */
                    bool ProgressingInstancesHasBeenSet() const;

                    /**
                     * 获取<p>Number of failed hosts</p>
                     * @return FailedHostCount <p>Number of failed hosts</p>
                     * 
                     */
                    uint64_t GetFailedHostCount() const;

                    /**
                     * 设置<p>Number of failed hosts</p>
                     * @param _failedHostCount <p>Number of failed hosts</p>
                     * 
                     */
                    void SetFailedHostCount(const uint64_t& _failedHostCount);

                    /**
                     * 判断参数 FailedHostCount 是否已赋值
                     * @return FailedHostCount 是否已赋值
                     * 
                     */
                    bool FailedHostCountHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>1-In progress, 2 completed</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Successfully executed count.</p>
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>Host list of failed execution</p>
                     */
                    std::vector<ModifyLoginTypeFailInfo> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * <p>List of instance IDs with successful modification.</p>
                     */
                    std::vector<std::string> m_successInstances;
                    bool m_successInstancesHasBeenSet;

                    /**
                     * <p>List of instance IDs being modified</p>
                     */
                    std::vector<std::string> m_progressingInstances;
                    bool m_progressingInstancesHasBeenSet;

                    /**
                     * <p>Number of failed hosts</p>
                     */
                    uint64_t m_failedHostCount;
                    bool m_failedHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPETASK_H_
