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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCrossBackupStatistical request structure.
                */
                class DescribeCrossBackupStatisticalRequest : public AbstractModel
                {
                public:
                    DescribeCrossBackupStatisticalRequest();
                    ~DescribeCrossBackupStatisticalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination number.

                     * @return Offset Pagination number.

                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination number.

                     * @param _offset Pagination number.

                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Pagination size.

                     * @return Limit Pagination size.

                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size.

                     * @param _limit Pagination size.

                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Instance ID list.

                     * @return InstanceIdSet Instance ID list.

                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置Instance ID list.

                     * @param _instanceIdSet Instance ID list.

                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Instance name list.
                     * @return InstanceNameSet Instance name list.
                     * 
                     */
                    std::vector<std::string> GetInstanceNameSet() const;

                    /**
                     * 设置Instance name list.
                     * @param _instanceNameSet Instance name list.
                     * 
                     */
                    void SetInstanceNameSet(const std::vector<std::string>& _instanceNameSet);

                    /**
                     * 判断参数 InstanceNameSet 是否已赋值
                     * @return InstanceNameSet 是否已赋值
                     * 
                     */
                    bool InstanceNameSetHasBeenSet() const;

                    /**
                     * 获取Cross-region backup status. enable: enabled; disable: disabled.
                     * @return CrossBackupStatus Cross-region backup status. enable: enabled; disable: disabled.
                     * 
                     */
                    std::string GetCrossBackupStatus() const;

                    /**
                     * 设置Cross-region backup status. enable: enabled; disable: disabled.
                     * @param _crossBackupStatus Cross-region backup status. enable: enabled; disable: disabled.
                     * 
                     */
                    void SetCrossBackupStatus(const std::string& _crossBackupStatus);

                    /**
                     * 判断参数 CrossBackupStatus 是否已赋值
                     * @return CrossBackupStatus 是否已赋值
                     * 
                     */
                    bool CrossBackupStatusHasBeenSet() const;

                    /**
                     * 获取Target region for cross-region backups.
                     * @return CrossRegion Target region for cross-region backups.
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置Target region for cross-region backups.
                     * @param _crossRegion Target region for cross-region backups.
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取Sorting field. The default value is default, which indicates sorting by backup space in descending order. data - sort by data backup; log - sort by log backup.
                     * @return OrderBy Sorting field. The default value is default, which indicates sorting by backup space in descending order. data - sort by data backup; log - sort by log backup.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. The default value is default, which indicates sorting by backup space in descending order. data - sort by data backup; log - sort by log backup.
                     * @param _orderBy Sorting field. The default value is default, which indicates sorting by backup space in descending order. data - sort by data backup; log - sort by log backup.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * @return OrderByType Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * @param _orderByType Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Pagination number.

                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination size.

                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Instance ID list.

                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Instance name list.
                     */
                    std::vector<std::string> m_instanceNameSet;
                    bool m_instanceNameSetHasBeenSet;

                    /**
                     * Cross-region backup status. enable: enabled; disable: disabled.
                     */
                    std::string m_crossBackupStatus;
                    bool m_crossBackupStatusHasBeenSet;

                    /**
                     * Target region for cross-region backups.
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * Sorting field. The default value is default, which indicates sorting by backup space in descending order. data - sort by data backup; log - sort by log backup.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSBACKUPSTATISTICALREQUEST_H_
