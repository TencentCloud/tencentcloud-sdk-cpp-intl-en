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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DEFENDATTACKLOG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DEFENDATTACKLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Network attack log
                */
                class DefendAttackLog : public AbstractModel
                {
                public:
                    DefendAttackLog();
                    ~DefendAttackLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log ID
                     * @return Id Log ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Log ID
                     * @param _id Log ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Client ID
                     * @return Uuid Client ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Client ID
                     * @param _uuid Client ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Source IP
                     * @return SrcIp Source IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Source IP
                     * @param _srcIp Source IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Source port
                     * @return SrcPort Source port
                     * 
                     */
                    uint64_t GetSrcPort() const;

                    /**
                     * 设置Source port
                     * @param _srcPort Source port
                     * 
                     */
                    void SetSrcPort(const uint64_t& _srcPort);

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取Attack method
                     * @return HttpMethod Attack method
                     * 
                     */
                    std::string GetHttpMethod() const;

                    /**
                     * 设置Attack method
                     * @param _httpMethod Attack method
                     * 
                     */
                    void SetHttpMethod(const std::string& _httpMethod);

                    /**
                     * 判断参数 HttpMethod 是否已赋值
                     * @return HttpMethod 是否已赋值
                     * 
                     */
                    bool HttpMethodHasBeenSet() const;

                    /**
                     * 获取Attack description
                     * @return HttpCgi Attack description
                     * 
                     */
                    std::string GetHttpCgi() const;

                    /**
                     * 设置Attack description
                     * @param _httpCgi Attack description
                     * 
                     */
                    void SetHttpCgi(const std::string& _httpCgi);

                    /**
                     * 判断参数 HttpCgi 是否已赋值
                     * @return HttpCgi 是否已赋值
                     * 
                     */
                    bool HttpCgiHasBeenSet() const;

                    /**
                     * 获取Attack parameter
                     * @return HttpParam Attack parameter
                     * 
                     */
                    std::string GetHttpParam() const;

                    /**
                     * 设置Attack parameter
                     * @param _httpParam Attack parameter
                     * 
                     */
                    void SetHttpParam(const std::string& _httpParam);

                    /**
                     * 判断参数 HttpParam 是否已赋值
                     * @return HttpParam 是否已赋值
                     * 
                     */
                    bool HttpParamHasBeenSet() const;

                    /**
                     * 获取Threat type
                     * @return VulType Threat type
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 设置Threat type
                     * @param _vulType Threat type
                     * 
                     */
                    void SetVulType(const std::string& _vulType);

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取Attack time
                     * @return CreatedAt Attack time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Attack time
                     * @param _createdAt Attack time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Target server IP
                     * @return MachineIp Target server IP
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Target server IP
                     * @param _machineIp Target server IP
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Target server name
                     * @return MachineName Target server name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Target server name
                     * @param _machineName Target server name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Target IP
                     * @return DstIp Target IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP
                     * @param _dstIp Target IP
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Target port
                     * @return DstPort Target port
                     * 
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置Target port
                     * @param _dstPort Target port
                     * 
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Attack content
                     * @return HttpContent Attack content
                     * 
                     */
                    std::string GetHttpContent() const;

                    /**
                     * 设置Attack content
                     * @param _httpContent Attack content
                     * 
                     */
                    void SetHttpContent(const std::string& _httpContent);

                    /**
                     * 判断参数 HttpContent 是否已赋值
                     * @return HttpContent 是否已赋值
                     * 
                     */
                    bool HttpContentHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Log ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Source IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Source port
                     */
                    uint64_t m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * Attack method
                     */
                    std::string m_httpMethod;
                    bool m_httpMethodHasBeenSet;

                    /**
                     * Attack description
                     */
                    std::string m_httpCgi;
                    bool m_httpCgiHasBeenSet;

                    /**
                     * Attack parameter
                     */
                    std::string m_httpParam;
                    bool m_httpParamHasBeenSet;

                    /**
                     * Threat type
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * Attack time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Target server IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Target server name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Target IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Target port
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Attack content
                     */
                    std::string m_httpContent;
                    bool m_httpContentHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DEFENDATTACKLOG_H_
