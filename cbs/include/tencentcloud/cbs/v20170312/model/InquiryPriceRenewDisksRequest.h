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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDisks request structure.
                */
                class InquiryPriceRenewDisksRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewDisksRequest();
                    ~InquiryPriceRenewDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk ID, which can be queried by calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API.
                     * @return DiskIds Cloud disk ID, which can be queried by calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置Cloud disk ID, which can be queried by calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API.
                     * @param _diskIds Cloud disk ID, which can be queried by calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Prepaid mode, that is, settings related to the monthly subscription. Through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk. If CurInstanceDeadline is specified in this parameter, it will be renewed in aligned with the sub-machine expiration time. If it is a batch renewal inquiry, this parameter corresponds one-to-one with the Disks parameter, and the number of Element (XML) must be consistent.
                     * @return DiskChargePrepaids Prepaid mode, that is, settings related to the monthly subscription. Through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk. If CurInstanceDeadline is specified in this parameter, it will be renewed in aligned with the sub-machine expiration time. If it is a batch renewal inquiry, this parameter corresponds one-to-one with the Disks parameter, and the number of Element (XML) must be consistent.
                     * 
                     */
                    std::vector<DiskChargePrepaid> GetDiskChargePrepaids() const;

                    /**
                     * 设置Prepaid mode, that is, settings related to the monthly subscription. Through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk. If CurInstanceDeadline is specified in this parameter, it will be renewed in aligned with the sub-machine expiration time. If it is a batch renewal inquiry, this parameter corresponds one-to-one with the Disks parameter, and the number of Element (XML) must be consistent.
                     * @param _diskChargePrepaids Prepaid mode, that is, settings related to the monthly subscription. Through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk. If CurInstanceDeadline is specified in this parameter, it will be renewed in aligned with the sub-machine expiration time. If it is a batch renewal inquiry, this parameter corresponds one-to-one with the Disks parameter, and the number of Element (XML) must be consistent.
                     * 
                     */
                    void SetDiskChargePrepaids(const std::vector<DiskChargePrepaid>& _diskChargePrepaids);

                    /**
                     * 判断参数 DiskChargePrepaids 是否已赋值
                     * @return DiskChargePrepaids 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidsHasBeenSet() const;

                    /**
                     * 获取Specifies the new expiry time of the CBS in the format such as 2017-12-17 00:00:00. parameter `NewDeadline` and `DiskChargePrepaids` are two ways to specify inquiry duration. one of them must be input.
                     * @return NewDeadline Specifies the new expiry time of the CBS in the format such as 2017-12-17 00:00:00. parameter `NewDeadline` and `DiskChargePrepaids` are two ways to specify inquiry duration. one of them must be input.
                     * 
                     */
                    std::string GetNewDeadline() const;

                    /**
                     * 设置Specifies the new expiry time of the CBS in the format such as 2017-12-17 00:00:00. parameter `NewDeadline` and `DiskChargePrepaids` are two ways to specify inquiry duration. one of them must be input.
                     * @param _newDeadline Specifies the new expiry time of the CBS in the format such as 2017-12-17 00:00:00. parameter `NewDeadline` and `DiskChargePrepaids` are two ways to specify inquiry duration. one of them must be input.
                     * 
                     */
                    void SetNewDeadline(const std::string& _newDeadline);

                    /**
                     * 判断参数 NewDeadline 是否已赋值
                     * @return NewDeadline 是否已赋值
                     * 
                     */
                    bool NewDeadlineHasBeenSet() const;

                    /**
                     * 获取cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     * @return ProjectId cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     * @param _projectId cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Cloud disk ID, which can be queried by calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Prepaid mode, that is, settings related to the monthly subscription. Through this parameter, you can specify the purchase duration of the monthly subscribed cloud disk. If CurInstanceDeadline is specified in this parameter, it will be renewed in aligned with the sub-machine expiration time. If it is a batch renewal inquiry, this parameter corresponds one-to-one with the Disks parameter, and the number of Element (XML) must be consistent.
                     */
                    std::vector<DiskChargePrepaid> m_diskChargePrepaids;
                    bool m_diskChargePrepaidsHasBeenSet;

                    /**
                     * Specifies the new expiry time of the CBS in the format such as 2017-12-17 00:00:00. parameter `NewDeadline` and `DiskChargePrepaids` are two ways to specify inquiry duration. one of them must be input.
                     */
                    std::string m_newDeadline;
                    bool m_newDeadlineHasBeenSet;

                    /**
                     * cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_
