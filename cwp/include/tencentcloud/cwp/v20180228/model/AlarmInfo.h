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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ALARMINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information on alarms associated with the node
                */
                class AlarmInfo : public AbstractModel
                {
                public:
                    AlarmInfo();
                    ~AlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Table names of IDs of alarms associated with the node. Separate multiple pairs with commas. Example: t1:id1,t2:id2
                     * @return AlarmId Table names of IDs of alarms associated with the node. Separate multiple pairs with commas. Example: t1:id1,t2:id2
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Table names of IDs of alarms associated with the node. Separate multiple pairs with commas. Example: t1:id1,t2:id2
                     * @param _alarmId Table names of IDs of alarms associated with the node. Separate multiple pairs with commas. Example: t1:id1,t2:id2
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Alarm status. This parameter takes effect when this node is an alarm node.
                     * @return Status Alarm status. This parameter takes effect when this node is an alarm node.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Alarm status. This parameter takes effect when this node is an alarm node.
                     * @param _status Alarm status. This parameter takes effect when this node is an alarm node.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Table names of IDs of alarms associated with the node. Separate multiple pairs with commas. Example: t1:id1,t2:id2
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Alarm status. This parameter takes effect when this node is an alarm node.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ALARMINFO_H_
