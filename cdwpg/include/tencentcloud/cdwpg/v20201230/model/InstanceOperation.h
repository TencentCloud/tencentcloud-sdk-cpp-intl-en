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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEOPERATION_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Cluster operation description
                */
                class InstanceOperation : public AbstractModel
                {
                public:
                    InstanceOperation();
                    ~InstanceOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation name, such as create_instance, and scaleout_instance
                     * @return Id Operation name, such as create_instance, and scaleout_instance
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Operation name, such as create_instance, and scaleout_instance
                     * @param _id Operation name, such as create_instance, and scaleout_instance
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Operation name description, such as creating, and modifying the cluster name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Operation name description, such as creating, and modifying the cluster name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Operation name description, such as creating, and modifying the cluster name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action Operation name description, such as creating, and modifying the cluster name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Operation start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Operation start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Operation start time.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation end time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Operation end time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Operation end time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Operation end time.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Operation context.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Context Operation context.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Operation context.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _context Operation context.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Operation update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Operation update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Operation update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Operation update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Operation UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin Operation UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Operation UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin Operation UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * Operation name, such as create_instance, and scaleout_instance
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Cluster ID.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Operation name description, such as creating, and modifying the cluster name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Status.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Operation start time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Operation end time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Operation context.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Operation update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Operation UIN.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCEOPERATION_H_
