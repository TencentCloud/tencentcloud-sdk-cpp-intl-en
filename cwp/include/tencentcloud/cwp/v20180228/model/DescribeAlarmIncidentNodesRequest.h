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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAlarmIncidentNodes request structure.
                */
                class DescribeAlarmIncidentNodesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmIncidentNodesRequest();
                    ~DescribeAlarmIncidentNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine UUID
                     * @return Uuid Machine UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Machine UUID
                     * @param _uuid Machine UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Alarm VID
                     * @return AlarmVid Alarm VID
                     * 
                     */
                    std::string GetAlarmVid() const;

                    /**
                     * 设置Alarm VID
                     * @param _alarmVid Alarm VID
                     * 
                     */
                    void SetAlarmVid(const std::string& _alarmVid);

                    /**
                     * 判断参数 AlarmVid 是否已赋值
                     * @return AlarmVid 是否已赋值
                     * 
                     */
                    bool AlarmVidHasBeenSet() const;

                    /**
                     * 获取Alarm time
                     * @return AlarmTime Alarm time
                     * 
                     */
                    int64_t GetAlarmTime() const;

                    /**
                     * 设置Alarm time
                     * @param _alarmTime Alarm time
                     * 
                     */
                    void SetAlarmTime(const int64_t& _alarmTime);

                    /**
                     * 判断参数 AlarmTime 是否已赋值
                     * @return AlarmTime 是否已赋值
                     * 
                     */
                    bool AlarmTimeHasBeenSet() const;

                    /**
                     * 获取Alarm source table ID
                     * @return TableId Alarm source table ID
                     * 
                     */
                    int64_t GetTableId() const;

                    /**
                     * 设置Alarm source table ID
                     * @param _tableId Alarm source table ID
                     * 
                     */
                    void SetTableId(const int64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                private:

                    /**
                     * Machine UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Alarm VID
                     */
                    std::string m_alarmVid;
                    bool m_alarmVidHasBeenSet;

                    /**
                     * Alarm time
                     */
                    int64_t m_alarmTime;
                    bool m_alarmTimeHasBeenSet;

                    /**
                     * Alarm source table ID
                     */
                    int64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEALARMINCIDENTNODESREQUEST_H_
