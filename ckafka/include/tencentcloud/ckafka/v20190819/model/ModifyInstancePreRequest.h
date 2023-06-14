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
                     * 获取Instance name.
                     * @return InstanceId Instance name.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceId Instance name.
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
                     * 获取Estimated disk capacity, which can be increased by increment.
                     * @return DiskSize Estimated disk capacity, which can be increased by increment.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Estimated disk capacity, which can be increased by increment.
                     * @param _diskSize Estimated disk capacity, which can be increased by increment.
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
                     * 获取Estimated bandwidth, which can be increased by increment.
                     * @return BandWidth Estimated bandwidth, which can be increased by increment.
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置Estimated bandwidth, which can be increased by increment.
                     * @param _bandWidth Estimated bandwidth, which can be increased by increment.
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
                     * 获取Estimated partition count, which can be increased by increment.
                     * @return Partition Estimated partition count, which can be increased by increment.
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Estimated partition count, which can be increased by increment.
                     * @param _partition Estimated partition count, which can be increased by increment.
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
                     * Instance name.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Estimated disk capacity, which can be increased by increment.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Estimated bandwidth, which can be increased by increment.
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * Estimated partition count, which can be increased by increment.
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
