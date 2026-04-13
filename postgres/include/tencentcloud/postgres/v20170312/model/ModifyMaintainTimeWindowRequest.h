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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyMaintainTimeWindow request structure.
                */
                class ModifyMaintainTimeWindowRequest : public AbstractModel
                {
                public:
                    ModifyMaintainTimeWindowRequest();
                    ~ModifyMaintainTimeWindowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Maintenance start time. time zone is UTC+8.
                     * @return MaintainStartTime Maintenance start time. time zone is UTC+8.
                     * 
                     */
                    std::string GetMaintainStartTime() const;

                    /**
                     * 设置Maintenance start time. time zone is UTC+8.
                     * @param _maintainStartTime Maintenance start time. time zone is UTC+8.
                     * 
                     */
                    void SetMaintainStartTime(const std::string& _maintainStartTime);

                    /**
                     * 判断参数 MaintainStartTime 是否已赋值
                     * @return MaintainStartTime 是否已赋值
                     * 
                     */
                    bool MaintainStartTimeHasBeenSet() const;

                    /**
                     * 获取Maintenance duration. unit: hr. value range: [1,4].
                     * @return MaintainDuration Maintenance duration. unit: hr. value range: [1,4].
                     * 
                     */
                    uint64_t GetMaintainDuration() const;

                    /**
                     * 设置Maintenance duration. unit: hr. value range: [1,4].
                     * @param _maintainDuration Maintenance duration. unit: hr. value range: [1,4].
                     * 
                     */
                    void SetMaintainDuration(const uint64_t& _maintainDuration);

                    /**
                     * 判断参数 MaintainDuration 是否已赋值
                     * @return MaintainDuration 是否已赋值
                     * 
                     */
                    bool MaintainDurationHasBeenSet() const;

                    /**
                     * 获取Specifies the maintenance period.
                     * @return MaintainWeekDays Specifies the maintenance period.
                     * 
                     */
                    std::vector<std::string> GetMaintainWeekDays() const;

                    /**
                     * 设置Specifies the maintenance period.
                     * @param _maintainWeekDays Specifies the maintenance period.
                     * 
                     */
                    void SetMaintainWeekDays(const std::vector<std::string>& _maintainWeekDays);

                    /**
                     * 判断参数 MaintainWeekDays 是否已赋值
                     * @return MaintainWeekDays 是否已赋值
                     * 
                     */
                    bool MaintainWeekDaysHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Maintenance start time. time zone is UTC+8.
                     */
                    std::string m_maintainStartTime;
                    bool m_maintainStartTimeHasBeenSet;

                    /**
                     * Maintenance duration. unit: hr. value range: [1,4].
                     */
                    uint64_t m_maintainDuration;
                    bool m_maintainDurationHasBeenSet;

                    /**
                     * Specifies the maintenance period.
                     */
                    std::vector<std::string> m_maintainWeekDays;
                    bool m_maintainWeekDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYMAINTAINTIMEWINDOWREQUEST_H_
