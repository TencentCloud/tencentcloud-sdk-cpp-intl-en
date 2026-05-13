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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceResizeDisk request structure.
                */
                class InquiryPriceResizeDiskRequest : public AbstractModel
                {
                public:
                    InquiryPriceResizeDiskRequest();
                    ~InquiryPriceResizeDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the size after expanding the cloud disk in GiB, which should not be less than the current disk size. for the cloud disk size range, please refer to the product type of CBS (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * @return DiskSize Specifies the size after expanding the cloud disk in GiB, which should not be less than the current disk size. for the cloud disk size range, please refer to the product type of CBS (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the size after expanding the cloud disk in GiB, which should not be less than the current disk size. for the cloud disk size range, please refer to the product type of CBS (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * @param _diskSize Specifies the size after expanding the cloud disk in GiB, which should not be less than the current disk size. for the cloud disk size range, please refer to the product type of CBS (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Cloud disk ID. can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskIds parameter.
                     * @return DiskId Cloud disk ID. can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskIds parameter.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID. can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskIds parameter.
                     * @param _diskId Cloud disk ID. can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskIds parameter.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

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

                    /**
                     * 获取Cloud disk ID list. queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskId parameter.
                     * @return DiskIds Cloud disk ID list. queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskId parameter.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置Cloud disk ID list. queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskId parameter.
                     * @param _diskIds Cloud disk ID list. queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskId parameter.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                private:

                    /**
                     * Specifies the size after expanding the cloud disk in GiB, which should not be less than the current disk size. for the cloud disk size range, please refer to the product type of CBS (https://www.tencentcloud.com/document/product/362/2353?from_cn_redirect=1).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Cloud disk ID. can be queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskIds parameter.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * cloud disk project ID. obtain this parameter by calling the projectId field in the return value of [DescribeProject](https://www.tencentcloud.com/document/api/651/78725?from_cn_redirect=1). if input, it is only for authentication.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Cloud disk ID list. queried via the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. mutually exclusive with the DiskId parameter.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_
