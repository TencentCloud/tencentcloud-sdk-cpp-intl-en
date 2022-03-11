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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Upper and lower limits of the disk
                */
                class NetworkStorageRange : public AbstractModel
                {
                public:
                    NetworkStorageRange();
                    ~NetworkStorageRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network bandwidth cap
                     * @return MaxBandwidth Network bandwidth cap
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Network bandwidth cap
                     * @param MaxBandwidth Network bandwidth cap
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Upper limit of the data disk size
                     * @return MaxSystemDiskSize Upper limit of the data disk size
                     */
                    int64_t GetMaxSystemDiskSize() const;

                    /**
                     * 设置Upper limit of the data disk size
                     * @param MaxSystemDiskSize Upper limit of the data disk size
                     */
                    void SetMaxSystemDiskSize(const int64_t& _maxSystemDiskSize);

                    /**
                     * 判断参数 MaxSystemDiskSize 是否已赋值
                     * @return MaxSystemDiskSize 是否已赋值
                     */
                    bool MaxSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Lower limit of the network bandwidth
                     * @return MinBandwidth Lower limit of the network bandwidth
                     */
                    int64_t GetMinBandwidth() const;

                    /**
                     * 设置Lower limit of the network bandwidth
                     * @param MinBandwidth Lower limit of the network bandwidth
                     */
                    void SetMinBandwidth(const int64_t& _minBandwidth);

                    /**
                     * 判断参数 MinBandwidth 是否已赋值
                     * @return MinBandwidth 是否已赋值
                     */
                    bool MinBandwidthHasBeenSet() const;

                    /**
                     * 获取Lower limit of the data disk size
                     * @return MinSystemDiskSize Lower limit of the data disk size
                     */
                    int64_t GetMinSystemDiskSize() const;

                    /**
                     * 设置Lower limit of the data disk size
                     * @param MinSystemDiskSize Lower limit of the data disk size
                     */
                    void SetMinSystemDiskSize(const int64_t& _minSystemDiskSize);

                    /**
                     * 判断参数 MinSystemDiskSize 是否已赋值
                     * @return MinSystemDiskSize 是否已赋值
                     */
                    bool MinSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Maximum data disk size
                     * @return MaxDataDiskSize Maximum data disk size
                     */
                    int64_t GetMaxDataDiskSize() const;

                    /**
                     * 设置Maximum data disk size
                     * @param MaxDataDiskSize Maximum data disk size
                     */
                    void SetMaxDataDiskSize(const int64_t& _maxDataDiskSize);

                    /**
                     * 判断参数 MaxDataDiskSize 是否已赋值
                     * @return MaxDataDiskSize 是否已赋值
                     */
                    bool MaxDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Minimum data disk size
                     * @return MinDataDiskSize Minimum data disk size
                     */
                    int64_t GetMinDataDiskSize() const;

                    /**
                     * 设置Minimum data disk size
                     * @param MinDataDiskSize Minimum data disk size
                     */
                    void SetMinDataDiskSize(const int64_t& _minDataDiskSize);

                    /**
                     * 判断参数 MinDataDiskSize 是否已赋值
                     * @return MinDataDiskSize 是否已赋值
                     */
                    bool MinDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Suggested bandwidth
                     * @return SuggestBandwidth Suggested bandwidth
                     */
                    int64_t GetSuggestBandwidth() const;

                    /**
                     * 设置Suggested bandwidth
                     * @param SuggestBandwidth Suggested bandwidth
                     */
                    void SetSuggestBandwidth(const int64_t& _suggestBandwidth);

                    /**
                     * 判断参数 SuggestBandwidth 是否已赋值
                     * @return SuggestBandwidth 是否已赋值
                     */
                    bool SuggestBandwidthHasBeenSet() const;

                    /**
                     * 获取Suggested disk size
                     * @return SuggestDataDiskSize Suggested disk size
                     */
                    int64_t GetSuggestDataDiskSize() const;

                    /**
                     * 设置Suggested disk size
                     * @param SuggestDataDiskSize Suggested disk size
                     */
                    void SetSuggestDataDiskSize(const int64_t& _suggestDataDiskSize);

                    /**
                     * 判断参数 SuggestDataDiskSize 是否已赋值
                     * @return SuggestDataDiskSize 是否已赋值
                     */
                    bool SuggestDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Suggested system disk size
                     * @return SuggestSystemDiskSize Suggested system disk size
                     */
                    int64_t GetSuggestSystemDiskSize() const;

                    /**
                     * 设置Suggested system disk size
                     * @param SuggestSystemDiskSize Suggested system disk size
                     */
                    void SetSuggestSystemDiskSize(const int64_t& _suggestSystemDiskSize);

                    /**
                     * 判断参数 SuggestSystemDiskSize 是否已赋值
                     * @return SuggestSystemDiskSize 是否已赋值
                     */
                    bool SuggestSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Peak number of CPU cores
                     * @return MaxVcpu Peak number of CPU cores
                     */
                    int64_t GetMaxVcpu() const;

                    /**
                     * 设置Peak number of CPU cores
                     * @param MaxVcpu Peak number of CPU cores
                     */
                    void SetMaxVcpu(const int64_t& _maxVcpu);

                    /**
                     * 判断参数 MaxVcpu 是否已赋值
                     * @return MaxVcpu 是否已赋值
                     */
                    bool MaxVcpuHasBeenSet() const;

                    /**
                     * 获取Minimum number of CPU cores
                     * @return MinVcpu Minimum number of CPU cores
                     */
                    int64_t GetMinVcpu() const;

                    /**
                     * 设置Minimum number of CPU cores
                     * @param MinVcpu Minimum number of CPU cores
                     */
                    void SetMinVcpu(const int64_t& _minVcpu);

                    /**
                     * 判断参数 MinVcpu 是否已赋值
                     * @return MinVcpu 是否已赋值
                     */
                    bool MinVcpuHasBeenSet() const;

                    /**
                     * 获取Maximum number of CPU cores per request
                     * @return MaxVcpuPerReq Maximum number of CPU cores per request
                     */
                    int64_t GetMaxVcpuPerReq() const;

                    /**
                     * 设置Maximum number of CPU cores per request
                     * @param MaxVcpuPerReq Maximum number of CPU cores per request
                     */
                    void SetMaxVcpuPerReq(const int64_t& _maxVcpuPerReq);

                    /**
                     * 判断参数 MaxVcpuPerReq 是否已赋值
                     * @return MaxVcpuPerReq 是否已赋值
                     */
                    bool MaxVcpuPerReqHasBeenSet() const;

                    /**
                     * 获取Bandwidth increment
                     * @return PerBandwidth Bandwidth increment
                     */
                    int64_t GetPerBandwidth() const;

                    /**
                     * 设置Bandwidth increment
                     * @param PerBandwidth Bandwidth increment
                     */
                    void SetPerBandwidth(const int64_t& _perBandwidth);

                    /**
                     * 判断参数 PerBandwidth 是否已赋值
                     * @return PerBandwidth 是否已赋值
                     */
                    bool PerBandwidthHasBeenSet() const;

                    /**
                     * 获取Data disk increment
                     * @return PerDataDisk Data disk increment
                     */
                    int64_t GetPerDataDisk() const;

                    /**
                     * 设置Data disk increment
                     * @param PerDataDisk Data disk increment
                     */
                    void SetPerDataDisk(const int64_t& _perDataDisk);

                    /**
                     * 判断参数 PerDataDisk 是否已赋值
                     * @return PerDataDisk 是否已赋值
                     */
                    bool PerDataDiskHasBeenSet() const;

                    /**
                     * 获取Total number of modules
                     * @return MaxModuleNum Total number of modules
                     */
                    int64_t GetMaxModuleNum() const;

                    /**
                     * 设置Total number of modules
                     * @param MaxModuleNum Total number of modules
                     */
                    void SetMaxModuleNum(const int64_t& _maxModuleNum);

                    /**
                     * 判断参数 MaxModuleNum 是否已赋值
                     * @return MaxModuleNum 是否已赋值
                     */
                    bool MaxModuleNumHasBeenSet() const;

                private:

                    /**
                     * Network bandwidth cap
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Upper limit of the data disk size
                     */
                    int64_t m_maxSystemDiskSize;
                    bool m_maxSystemDiskSizeHasBeenSet;

                    /**
                     * Lower limit of the network bandwidth
                     */
                    int64_t m_minBandwidth;
                    bool m_minBandwidthHasBeenSet;

                    /**
                     * Lower limit of the data disk size
                     */
                    int64_t m_minSystemDiskSize;
                    bool m_minSystemDiskSizeHasBeenSet;

                    /**
                     * Maximum data disk size
                     */
                    int64_t m_maxDataDiskSize;
                    bool m_maxDataDiskSizeHasBeenSet;

                    /**
                     * Minimum data disk size
                     */
                    int64_t m_minDataDiskSize;
                    bool m_minDataDiskSizeHasBeenSet;

                    /**
                     * Suggested bandwidth
                     */
                    int64_t m_suggestBandwidth;
                    bool m_suggestBandwidthHasBeenSet;

                    /**
                     * Suggested disk size
                     */
                    int64_t m_suggestDataDiskSize;
                    bool m_suggestDataDiskSizeHasBeenSet;

                    /**
                     * Suggested system disk size
                     */
                    int64_t m_suggestSystemDiskSize;
                    bool m_suggestSystemDiskSizeHasBeenSet;

                    /**
                     * Peak number of CPU cores
                     */
                    int64_t m_maxVcpu;
                    bool m_maxVcpuHasBeenSet;

                    /**
                     * Minimum number of CPU cores
                     */
                    int64_t m_minVcpu;
                    bool m_minVcpuHasBeenSet;

                    /**
                     * Maximum number of CPU cores per request
                     */
                    int64_t m_maxVcpuPerReq;
                    bool m_maxVcpuPerReqHasBeenSet;

                    /**
                     * Bandwidth increment
                     */
                    int64_t m_perBandwidth;
                    bool m_perBandwidthHasBeenSet;

                    /**
                     * Data disk increment
                     */
                    int64_t m_perDataDisk;
                    bool m_perDataDiskHasBeenSet;

                    /**
                     * Total number of modules
                     */
                    int64_t m_maxModuleNum;
                    bool m_maxModuleNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_NETWORKSTORAGERANGE_H_
