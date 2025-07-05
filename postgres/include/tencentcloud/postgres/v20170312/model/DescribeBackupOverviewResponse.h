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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_

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
                * DescribeBackupOverview response structure.
                */
                class DescribeBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBackupOverviewResponse();
                    ~DescribeBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total free space size in bytes
                     * @return TotalFreeSize Total free space size in bytes
                     * 
                     */
                    uint64_t GetTotalFreeSize() const;

                    /**
                     * 判断参数 TotalFreeSize 是否已赋值
                     * @return TotalFreeSize 是否已赋值
                     * 
                     */
                    bool TotalFreeSizeHasBeenSet() const;

                    /**
                     * 获取Used free space size in bytes
                     * @return UsedFreeSize Used free space size in bytes
                     * 
                     */
                    uint64_t GetUsedFreeSize() const;

                    /**
                     * 判断参数 UsedFreeSize 是否已赋值
                     * @return UsedFreeSize 是否已赋值
                     * 
                     */
                    bool UsedFreeSizeHasBeenSet() const;

                    /**
                     * 获取Used paid space size in bytes
                     * @return UsedBillingSize Used paid space size in bytes
                     * 
                     */
                    uint64_t GetUsedBillingSize() const;

                    /**
                     * 判断参数 UsedBillingSize 是否已赋值
                     * @return UsedBillingSize 是否已赋值
                     * 
                     */
                    bool UsedBillingSizeHasBeenSet() const;

                    /**
                     * 获取Number of log backups
                     * @return LogBackupCount Number of log backups
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取Log backup size in bytes
                     * @return LogBackupSize Log backup size in bytes
                     * 
                     */
                    uint64_t GetLogBackupSize() const;

                    /**
                     * 判断参数 LogBackupSize 是否已赋值
                     * @return LogBackupSize 是否已赋值
                     * 
                     */
                    bool LogBackupSizeHasBeenSet() const;

                    /**
                     * 获取Number of manually created full backups
                     * @return ManualBaseBackupCount Number of manually created full backups
                     * 
                     */
                    uint64_t GetManualBaseBackupCount() const;

                    /**
                     * 判断参数 ManualBaseBackupCount 是否已赋值
                     * @return ManualBaseBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取Size of manually created full backups in bytes
                     * @return ManualBaseBackupSize Size of manually created full backups in bytes
                     * 
                     */
                    uint64_t GetManualBaseBackupSize() const;

                    /**
                     * 判断参数 ManualBaseBackupSize 是否已赋值
                     * @return ManualBaseBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupSizeHasBeenSet() const;

                    /**
                     * 获取Number of automatically created full backups
                     * @return AutoBaseBackupCount Number of automatically created full backups
                     * 
                     */
                    uint64_t GetAutoBaseBackupCount() const;

                    /**
                     * 判断参数 AutoBaseBackupCount 是否已赋值
                     * @return AutoBaseBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取Size of automatically created full backups in bytes
                     * @return AutoBaseBackupSize Size of automatically created full backups in bytes
                     * 
                     */
                    uint64_t GetAutoBaseBackupSize() const;

                    /**
                     * 判断参数 AutoBaseBackupSize 是否已赋值
                     * @return AutoBaseBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupSizeHasBeenSet() const;

                private:

                    /**
                     * Total free space size in bytes
                     */
                    uint64_t m_totalFreeSize;
                    bool m_totalFreeSizeHasBeenSet;

                    /**
                     * Used free space size in bytes
                     */
                    uint64_t m_usedFreeSize;
                    bool m_usedFreeSizeHasBeenSet;

                    /**
                     * Used paid space size in bytes
                     */
                    uint64_t m_usedBillingSize;
                    bool m_usedBillingSizeHasBeenSet;

                    /**
                     * Number of log backups
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * Log backup size in bytes
                     */
                    uint64_t m_logBackupSize;
                    bool m_logBackupSizeHasBeenSet;

                    /**
                     * Number of manually created full backups
                     */
                    uint64_t m_manualBaseBackupCount;
                    bool m_manualBaseBackupCountHasBeenSet;

                    /**
                     * Size of manually created full backups in bytes
                     */
                    uint64_t m_manualBaseBackupSize;
                    bool m_manualBaseBackupSizeHasBeenSet;

                    /**
                     * Number of automatically created full backups
                     */
                    uint64_t m_autoBaseBackupCount;
                    bool m_autoBaseBackupCountHasBeenSet;

                    /**
                     * Size of automatically created full backups in bytes
                     */
                    uint64_t m_autoBaseBackupSize;
                    bool m_autoBaseBackupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPOVERVIEWRESPONSE_H_
