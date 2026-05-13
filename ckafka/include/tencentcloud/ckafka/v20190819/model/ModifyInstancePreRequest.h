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
                     * 获取<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @return InstanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     * @param _instanceId <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
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
                     * 获取<p>Disk size in GB. Maximum value is 500000 with a step length of 100. View specification limits through the following url: https://www.tencentcloud.com/document/product/597/122562?from_cn_redirect=1</p>
                     * @return DiskSize <p>Disk size in GB. Maximum value is 500000 with a step length of 100. View specification limits through the following url: https://www.tencentcloud.com/document/product/597/122562?from_cn_redirect=1</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Disk size in GB. Maximum value is 500000 with a step length of 100. View specification limits through the following url: https://www.tencentcloud.com/document/product/597/122562?from_cn_redirect=1</p>
                     * @param _diskSize <p>Disk size in GB. Maximum value is 500000 with a step length of 100. View specification limits through the following url: https://www.tencentcloud.com/document/product/597/122562?from_cn_redirect=1</p>
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
                     * 获取<p>Peak bandwidth in MB/s can be accessed through the following link to view specifications limit and corresponding step length: https://www.tencentcloud.com/document/product/597/11745?from_cn_redirect=1</p>
                     * @return BandWidth <p>Peak bandwidth in MB/s can be accessed through the following link to view specifications limit and corresponding step length: https://www.tencentcloud.com/document/product/597/11745?from_cn_redirect=1</p>
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>Peak bandwidth in MB/s can be accessed through the following link to view specifications limit and corresponding step length: https://www.tencentcloud.com/document/product/597/11745?from_cn_redirect=1</p>
                     * @param _bandWidth <p>Peak bandwidth in MB/s can be accessed through the following link to view specifications limit and corresponding step length: https://www.tencentcloud.com/document/product/597/11745?from_cn_redirect=1</p>
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
                     * 获取<p>Partition upper limit maximum value: 40000, step length: 100. View specification limits through the following URL: https://www.tencentcloud.com/document/product/597/122563?from_cn_redirect=1</p>
                     * @return Partition <p>Partition upper limit maximum value: 40000, step length: 100. View specification limits through the following URL: https://www.tencentcloud.com/document/product/597/122563?from_cn_redirect=1</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>Partition upper limit maximum value: 40000, step length: 100. View specification limits through the following URL: https://www.tencentcloud.com/document/product/597/122563?from_cn_redirect=1</p>
                     * @param _partition <p>Partition upper limit maximum value: 40000, step length: 100. View specification limits through the following URL: https://www.tencentcloud.com/document/product/597/122563?from_cn_redirect=1</p>
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
                     * <p>ckafka cluster instance Id, which can be obtained through the <a href="https://www.tencentcloud.com/document/product/597/40835?from_cn_redirect=1">DescribeInstances</a> API</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Disk size in GB. Maximum value is 500000 with a step length of 100. View specification limits through the following url: https://www.tencentcloud.com/document/product/597/122562?from_cn_redirect=1</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Peak bandwidth in MB/s can be accessed through the following link to view specifications limit and corresponding step length: https://www.tencentcloud.com/document/product/597/11745?from_cn_redirect=1</p>
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <p>Partition upper limit maximum value: 40000, step length: 100. View specification limits through the following URL: https://www.tencentcloud.com/document/product/597/122563?from_cn_redirect=1</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
