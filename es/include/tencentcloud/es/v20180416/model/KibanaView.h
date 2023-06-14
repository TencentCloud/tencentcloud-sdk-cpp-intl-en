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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Kibana view data
                */
                class KibanaView : public AbstractModel
                {
                public:
                    KibanaView();
                    ~KibanaView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kibana node IP
                     * @return Ip Kibana node IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Kibana node IP
                     * @param _ip Kibana node IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Node disk size
                     * @return DiskSize Node disk size
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Node disk size
                     * @param _diskSize Node disk size
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
                     * 获取Disk usage
                     * @return DiskUsage Disk usage
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置Disk usage
                     * @param _diskUsage Disk usage
                     * 
                     */
                    void SetDiskUsage(const double& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Node memory size
                     * @return MemSize Node memory size
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Node memory size
                     * @param _memSize Node memory size
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Memory usage
                     * @return MemUsage Memory usage
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置Memory usage
                     * @param _memUsage Memory usage
                     * 
                     */
                    void SetMemUsage(const double& _memUsage);

                    /**
                     * 判断参数 MemUsage 是否已赋值
                     * @return MemUsage 是否已赋值
                     * 
                     */
                    bool MemUsageHasBeenSet() const;

                    /**
                     * 获取Number of node CPUs
                     * @return CpuNum Number of node CPUs
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置Number of node CPUs
                     * @param _cpuNum Number of node CPUs
                     * 
                     */
                    void SetCpuNum(const int64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取CPU usage
                     * @return CpuUsage CPU usage
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置CPU usage
                     * @param _cpuUsage CPU usage
                     * 
                     */
                    void SetCpuUsage(const double& _cpuUsage);

                    /**
                     * 判断参数 CpuUsage 是否已赋值
                     * @return CpuUsage 是否已赋值
                     * 
                     */
                    bool CpuUsageHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param _zone Availability zone
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Kibana node IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Node disk size
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Disk usage
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Node memory size
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Memory usage
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * Number of node CPUs
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * CPU usage
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
