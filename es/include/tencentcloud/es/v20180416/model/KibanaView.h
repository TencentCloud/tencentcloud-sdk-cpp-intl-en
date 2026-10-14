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
                     * 获取<p>Kibana node IP</p>
                     * @return Ip <p>Kibana node IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Kibana node IP</p>
                     * @param _ip <p>Kibana node IP</p>
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
                     * 获取<p>Total node disk size</p>
                     * @return DiskSize <p>Total node disk size</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Total node disk size</p>
                     * @param _diskSize <p>Total node disk size</p>
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
                     * 获取<p>Disk utilization rate</p>
                     * @return DiskUsage <p>Disk utilization rate</p>
                     * 
                     */
                    double GetDiskUsage() const;

                    /**
                     * 设置<p>Disk utilization rate</p>
                     * @param _diskUsage <p>Disk utilization rate</p>
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
                     * 获取<p>Node memory size</p>
                     * @return MemSize <p>Node memory size</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Node memory size</p>
                     * @param _memSize <p>Node memory size</p>
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
                     * 获取<p>Memory usage rate</p>
                     * @return MemUsage <p>Memory usage rate</p>
                     * 
                     */
                    double GetMemUsage() const;

                    /**
                     * 设置<p>Memory usage rate</p>
                     * @param _memUsage <p>Memory usage rate</p>
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
                     * 获取<p>Number of CPUs on the node</p>
                     * @return CpuNum <p>Number of CPUs on the node</p>
                     * 
                     */
                    int64_t GetCpuNum() const;

                    /**
                     * 设置<p>Number of CPUs on the node</p>
                     * @param _cpuNum <p>Number of CPUs on the node</p>
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
                     * 获取<p>cpu utilization</p>
                     * @return CpuUsage <p>cpu utilization</p>
                     * 
                     */
                    double GetCpuUsage() const;

                    /**
                     * 设置<p>cpu utilization</p>
                     * @param _cpuUsage <p>cpu utilization</p>
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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * @return NodeId <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * @param _nodeId <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>Client-side Ip info</p>
                     * @return UserIp <p>Client-side Ip info</p>
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置<p>Client-side Ip info</p>
                     * @param _userIp <p>Client-side Ip info</p>
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                private:

                    /**
                     * <p>Kibana node IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Total node disk size</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>Disk utilization rate</p>
                     */
                    double m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * <p>Node memory size</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Memory usage rate</p>
                     */
                    double m_memUsage;
                    bool m_memUsageHasBeenSet;

                    /**
                     * <p>Number of CPUs on the node</p>
                     */
                    int64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>cpu utilization</p>
                     */
                    double m_cpuUsage;
                    bool m_cpuUsageHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>ts-0noqayxu-az6-hot-03222010-0</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Client-side Ip info</p>
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_KIBANAVIEW_H_
