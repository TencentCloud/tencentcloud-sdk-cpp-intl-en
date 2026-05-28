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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/BinlogInfo.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Node information type
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Node IP information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IP <p>Node IP information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>Node IP information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iP <p>Node IP information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>Node types, such as sqlengine, tdstore, mc</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type <p>Node types, such as sqlengine, tdstore, mc</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Node types, such as sqlengine, tdstore, mc</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type <p>Node types, such as sqlengine, tdstore, mc</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Unique identifier of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId <p>Unique identifier of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>Unique identifier of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId <p>Unique identifier of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Node port information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port <p>Node port information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Node port information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port <p>Node port information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Availability zone of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone <p>Availability zone of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Availability zone of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone <p>Availability zone of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Machine ip of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host <p>Machine ip of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Machine ip of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host <p>Machine ip of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Node log service information</p>
                     * @return BinlogInfo <p>Node log service information</p>
                     * 
                     */
                    std::vector<BinlogInfo> GetBinlogInfo() const;

                    /**
                     * 设置<p>Node log service information</p>
                     * @param _binlogInfo <p>Node log service information</p>
                     * 
                     */
                    void SetBinlogInfo(const std::vector<BinlogInfo>& _binlogInfo);

                    /**
                     * 判断参数 BinlogInfo 是否已赋值
                     * @return BinlogInfo 是否已赋值
                     * 
                     */
                    bool BinlogInfoHasBeenSet() const;

                    /**
                     * 获取<p>Number of CPUs of the node</p>
                     * @return Cpu <p>Number of CPUs of the node</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of CPUs of the node</p>
                     * @param _cpu <p>Number of CPUs of the node</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Node mem size</p>
                     * @return Mem <p>Node mem size</p>
                     * 
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置<p>Node mem size</p>
                     * @param _mem <p>Node mem size</p>
                     * 
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>Node disk size</p>
                     * @return DataDisk <p>Node disk size</p>
                     * 
                     */
                    int64_t GetDataDisk() const;

                    /**
                     * 设置<p>Node disk size</p>
                     * @param _dataDisk <p>Node disk size</p>
                     * 
                     */
                    void SetDataDisk(const int64_t& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     * 
                     */
                    bool DataDiskHasBeenSet() const;

                private:

                    /**
                     * <p>Node IP information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>Node types, such as sqlengine, tdstore, mc</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Unique identifier of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>Node port information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Availability zone of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Machine ip of the node</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Node log service information</p>
                     */
                    std::vector<BinlogInfo> m_binlogInfo;
                    bool m_binlogInfoHasBeenSet;

                    /**
                     * <p>Number of CPUs of the node</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Node mem size</p>
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>Node disk size</p>
                     */
                    int64_t m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_NODEINFO_H_
