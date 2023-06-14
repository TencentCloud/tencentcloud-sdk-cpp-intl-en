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
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     * @param _payMode Billing mode. Valid values: `PrePay` (monthly subscription); `PostPay` (pay-as-you-go). Currently, DTS at Tencent Cloud International is free of charge.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @return SrcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * @param _srcDatabaseType Source database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, and `tdsqlmysql`.
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source database region, such as `ap-guangzhou`.
                     * @return SrcRegion Source database region, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置Source database region, such as `ap-guangzhou`.
                     * @param _srcRegion Source database region, such as `ap-guangzhou`.
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, `tdsqlmysql`, and `kafka`.
                     * @return DstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, `tdsqlmysql`, and `kafka`.
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, `tdsqlmysql`, and `kafka`.
                     * @param _dstDatabaseType Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, `tdsqlmysql`, and `kafka`.
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Target database region, such as `ap-guangzhou`.
                     * @return DstRegion Target database region, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置Target database region, such as `ap-guangzhou`.
                     * @param _dstRegion Target database region, such as `ap-guangzhou`.
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取Sync task specification, such as `Standard`.
                     * @return Specification Sync task specification, such as `Standard`.
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置Sync task specification, such as `Standard`.
                     * @param _specification Sync task specification, such as `Standard`.
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取Tag information
                     * @return Tags Tag information
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置Tag information
                     * @param _tags Tag information
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The number of sync tasks purchased at a time. Value range: [1, 10]. Default value: `1`.
                     * @return Count The number of sync tasks purchased at a time. Value range: [1, 10]. Default value: `1`.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置The number of sync tasks purchased at a time. Value range: [1, 10]. Default value: `1`.
                     * @param _count The number of sync tasks purchased at a time. Value range: [1, 10]. Default value: `1`.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled). Default value: `0`.
                     * @return AutoRenew Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled). Default value: `0`.
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled). Default value: `0`.
                     * @param _autoRenew Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled). Default value: `0`.
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取Sync link specification, such as `micro`, `small`, `medium`, and `large`. Default value: `medium`.
                     * @return InstanceClass Sync link specification, such as `micro`, `small`, `medium`, and `large`. Default value: `medium`.
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置Sync link specification, such as `micro`, `small`, `medium`, and `large`. Default value: `medium`.
                     * @param _instanceClass Sync link specification, such as `micro`, `small`, `medium`, and `large`. Default value: `medium`.
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取Sync task name
                     * @return JobName Sync task name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Sync task name
                     * @param _jobName Sync task name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取ID of the existing task used to create a similar task
                     * @return ExistedJobId ID of the existing task used to create a similar task
                     * 
                     */
                    std::string GetExistedJobId() const;

                    /**
                     * 设置ID of the existing task used to create a similar task
                     * @param _existedJobId ID of the existing task used to create a similar task
                     * 
                     */
                    void SetExistedJobId(const std::string& _existedJobId);

                    /**
                     * 判断参数 ExistedJobId 是否已赋值
                     * @return ExistedJobId 是否已赋值
                     * 
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
                     * Target database type, such as `mysql`, `cynosdbmysql`, `tdapg`, `tdpg`, `tdsqlmysql`, and `kafka`.
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
                     * Tag information
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The number of sync tasks purchased at a time. Value range: [1, 10]. Default value: `1`.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Auto-renewal flag, which takes effect if `PayMode` is `PrePay`. Valid values: `1` (auto-renewal enabled); `0` (auto-renewal disabled). Default value: `0`.
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * Sync link specification, such as `micro`, `small`, `medium`, and `large`. Default value: `medium`.
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * Sync task name
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
