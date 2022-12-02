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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateSyncJob request structure.
                */
                class CreateSyncJobRequest : public AbstractModel
                {
                public:
                    CreateSyncJobRequest();
                    ~CreateSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     * @return PayMode Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     * @param PayMode Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @return SrcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @param SrcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source database region, such as `ap-guangzhou`.
                     * @return SrcRegion Source database region, such as `ap-guangzhou`.
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置Source database region, such as `ap-guangzhou`.
                     * @param SrcRegion Source database region, such as `ap-guangzhou`.
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @return DstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @param DstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target database region, such as `ap-guangzhou`.
                     * @return DstRegion Target database region, such as `ap-guangzhou`.
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置Target database region, such as `ap-guangzhou`.
                     * @param DstRegion Target database region, such as `ap-guangzhou`.
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Sync task specification, such as `Standard`.
                     * @return Specification Sync task specification, such as `Standard`.
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置Sync task specification, such as `Standard`.
                     * @param Specification Sync task specification, such as `Standard`.
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取Tag
                     * @return Tags Tag
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag
                     * @param Tags Tag
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Number of sync tasks
                     * @return Count Number of sync tasks
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of sync tasks
                     * @param Count Number of sync tasks
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
                     * @return AutoRenew Auto-renewal flag
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag
                     * @param AutoRenew Auto-renewal flag
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Sync link specification
                     * @return InstanceClass Sync link specification
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置Sync link specification
                     * @param InstanceClass Sync link specification
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取Sync link name
                     * @return JobName Sync link name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Sync link name
                     * @param JobName Sync link name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取ID of the existing task used to create a similar task
                     * @return ExistedJobId ID of the existing task used to create a similar task
                     */
                    std::string GetExistedJobId() const;

                    /**
                     * 设置ID of the existing task used to create a similar task
                     * @param ExistedJobId ID of the existing task used to create a similar task
                     */
                    void SetExistedJobId(const std::string& _existedJobId);

                    /**
                     * 判断参数 ExistedJobId 是否已赋值
                     * @return ExistedJobId 是否已赋值
                     */
                    bool ExistedJobIdHasBeenSet() const;

                private:

                    /**
                     * Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source database region, such as `ap-guangzhou`.
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Target database region, such as `ap-guangzhou`.
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * Sync task specification, such as `Standard`.
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Number of sync tasks
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Auto-renewal flag
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Sync link specification
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * Sync link name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * ID of the existing task used to create a similar task
                     */
                    std::string m_existedJobId;
                    bool m_existedJobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATESYNCJOBREQUEST_H_
