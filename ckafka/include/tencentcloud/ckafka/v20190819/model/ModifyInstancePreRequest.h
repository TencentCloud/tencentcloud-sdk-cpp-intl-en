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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyInstancePre request structure.
                */
                class ModifyInstancePreRequest : public AbstractModel
                {
                public:
                    ModifyInstancePreRequest();
                    ~ModifyInstancePreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies the disk capacity in GB. value range: 100 to 500000 with a step length of 100.
Specification limits can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1

                     * @return DiskSize Specifies the disk capacity in GB. value range: 100 to 500000 with a step length of 100.
Specification limits can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1

                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the disk capacity in GB. value range: 100 to 500000 with a step length of 100.
Specification limits can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1

                     * @param _diskSize Specifies the disk capacity in GB. value range: 100 to 500000 with a step length of 100.
Specification limits can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1

                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth in MB/s.
Specifies the specification limits and corresponding step length through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1

                     * @return BandWidth Peak bandwidth in MB/s.
Specifies the specification limits and corresponding step length through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1

                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Peak bandwidth in MB/s.
Specifies the specification limits and corresponding step length through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1

                     * @param _bandWidth Peak bandwidth in MB/s.
Specifies the specification limits and corresponding step length through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1

                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取Partition upper bound. maximum value of 40000. step length of 100.
Specifies the specifications and limits that can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @return Partition Partition upper bound. maximum value of 40000. step length of 100.
Specifies the specifications and limits that can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition upper bound. maximum value of 40000. step length of 100.
Specifies the specifications and limits that can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * @param _partition Partition upper bound. maximum value of 40000. step length of 100.
Specifies the specifications and limits that can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                private:

                    /**
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the disk capacity in GB. value range: 100 to 500000 with a step length of 100.
Specification limits can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122562.?from_cn_redirect=1

                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Peak bandwidth in MB/s.
Specifies the specification limits and corresponding step length through the following link: https://www.tencentcloud.comom/document/product/597/11745.?from_cn_redirect=1

                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Partition upper bound. maximum value of 40000. step length of 100.
Specifies the specifications and limits that can be viewed through the following link: https://www.tencentcloud.comom/document/product/597/122563.?from_cn_redirect=1
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
