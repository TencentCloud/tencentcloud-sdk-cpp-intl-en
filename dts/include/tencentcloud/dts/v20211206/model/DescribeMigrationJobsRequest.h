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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeMigrationJobs request structure.
                */
                class DescribeMigrationJobsRequest : public AbstractModel
                {
                public:
                    DescribeMigrationJobsRequest();
                    ~DescribeMigrationJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data migration task ID such as `dts-amm1jw5q`
                     * @return JobId Data migration task ID such as `dts-amm1jw5q`
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Data migration task ID such as `dts-amm1jw5q`
                     * @param JobId Data migration task ID such as `dts-amm1jw5q`
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Data migration task name
                     * @return JobName Data migration task name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Data migration task name
                     * @param JobName Data migration task name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Data migration task status. Valid values: `created`, `checking`, `checkPass`, `checkNotPass`, `readyRun`, `running`, `readyComplete`, `success`, `failed`, `stopping`, `completing`.
                     * @return Status Data migration task status. Valid values: `created`, `checking`, `checkPass`, `checkNotPass`, `readyRun`, `running`, `readyComplete`, `success`, `failed`, `stopping`, `completing`.
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置Data migration task status. Valid values: `created`, `checking`, `checkPass`, `checkNotPass`, `readyRun`, `running`, `readyComplete`, `success`, `failed`, `stopping`, `completing`.
                     * @param Status Data migration task status. Valid values: `created`, `checking`, `checkPass`, `checkNotPass`, `readyRun`, `running`, `readyComplete`, `success`, `failed`, `stopping`, `completing`.
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Source instance ID in the format of `cdb-c1nl9rpv`
                     * @return SrcInstanceId Source instance ID in the format of `cdb-c1nl9rpv`
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置Source instance ID in the format of `cdb-c1nl9rpv`
                     * @param SrcInstanceId Source instance ID in the format of `cdb-c1nl9rpv`
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取Source instance region, such as `ap-guangzhou`.
                     * @return SrcRegion Source instance region, such as `ap-guangzhou`.
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置Source instance region, such as `ap-guangzhou`.
                     * @param SrcRegion Source instance region, such as `ap-guangzhou`.
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取Source database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     * @return SrcDatabaseType Source database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    std::vector<std::string> GetSrcDatabaseType() const;

                    /**
                     * 设置Source database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     * @param SrcDatabaseType Source database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    void SetSrcDatabaseType(const std::vector<std::string>& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     * @return SrcAccessType Source instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    std::vector<std::string> GetSrcAccessType() const;

                    /**
                     * 设置Source instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     * @param SrcAccessType Source instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    void SetSrcAccessType(const std::vector<std::string>& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Target instance ID in the format of `cdb-c1nl9rpv`
                     * @return DstInstanceId Target instance ID in the format of `cdb-c1nl9rpv`
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置Target instance ID in the format of `cdb-c1nl9rpv`
                     * @param DstInstanceId Target instance ID in the format of `cdb-c1nl9rpv`
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target instance region, such as `ap-guangzhou`.
                     * @return DstRegion Target instance region, such as `ap-guangzhou`.
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置Target instance region, such as `ap-guangzhou`.
                     * @param DstRegion Target instance region, such as `ap-guangzhou`.
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Target database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     * @return DstDatabaseType Target database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    std::vector<std::string> GetDstDatabaseType() const;

                    /**
                     * 设置Target database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     * @param DstDatabaseType Target database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    void SetDstDatabaseType(const std::vector<std::string>& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     * @return DstAccessType Target instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    std::vector<std::string> GetDstAccessType() const;

                    /**
                     * 设置Target instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     * @param DstAccessType Target instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    void SetDstAccessType(const std::vector<std::string>& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Task running mode. Valid values: `immediate`, `timed`.
                     * @return RunMode Task running mode. Valid values: `immediate`, `timed`.
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Task running mode. Valid values: `immediate`, `timed`.
                     * @param RunMode Task running mode. Valid values: `immediate`, `timed`.
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc`, `desc`. Default value: `desc` by creation time.
                     * @return OrderSeq Sorting order. Valid values: `asc`, `desc`. Default value: `desc` by creation time.
                     */
                    std::string GetOrderSeq() const;

                    /**
                     * 设置Sorting order. Valid values: `asc`, `desc`. Default value: `desc` by creation time.
                     * @param OrderSeq Sorting order. Valid values: `asc`, `desc`. Default value: `desc` by creation time.
                     */
                    void SetOrderSeq(const std::string& _orderSeq);

                    /**
                     * 判断参数 OrderSeq 是否已赋值
                     * @return OrderSeq 是否已赋值
                     */
                    bool OrderSeqHasBeenSet() const;

                    /**
                     * 获取Number of instances to be returned. Value range: [1,100]. Default value: `20`.
                     * @return Limit Number of instances to be returned. Value range: [1,100]. Default value: `20`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of instances to be returned. Value range: [1,100]. Default value: `20`.
                     * @param Limit Number of instances to be returned. Value range: [1,100]. Default value: `20`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Tag filter
                     * @return TagFilters Tag filter
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filter
                     * @param TagFilters Tag filter
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Data migration task ID such as `dts-amm1jw5q`
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Data migration task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Data migration task status. Valid values: `created`, `checking`, `checkPass`, `checkNotPass`, `readyRun`, `running`, `readyComplete`, `success`, `failed`, `stopping`, `completing`.
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Source instance ID in the format of `cdb-c1nl9rpv`
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * Source instance region, such as `ap-guangzhou`.
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * Source database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    std::vector<std::string> m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    std::vector<std::string> m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Target instance ID in the format of `cdb-c1nl9rpv`
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * Target instance region, such as `ap-guangzhou`.
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * Target database type, such as `sqlserver`, `mysql`, `mongodb`, `redis`, `tendis`, `keewidb`, `clickhouse`, `cynosdbmysql`, `percona`, `tdsqlpercona`, `mariadb`, `tdsqlmysql`, `postgresql.
                     */
                    std::vector<std::string> m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target instance access type. Valid values: `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `cdb` (Database); `cvm` (self-build on CVM).
                     */
                    std::vector<std::string> m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Task running mode. Valid values: `immediate`, `timed`.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc`, `desc`. Default value: `desc` by creation time.
                     */
                    std::string m_orderSeq;
                    bool m_orderSeqHasBeenSet;

                    /**
                     * Number of instances to be returned. Value range: [1,100]. Default value: `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Tag filter
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMIGRATIONJOBSREQUEST_H_
