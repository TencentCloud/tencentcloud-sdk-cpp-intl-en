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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Network attack logs on the large screen
                */
                class ScreenDefendAttackLog : public AbstractModel
                {
                public:
                    ScreenDefendAttackLog();
                    ~ScreenDefendAttackLog() = default;
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
                     * @return CreatedTime Attack time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Attack time
                     * @param _createdTime Attack time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

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
                     * 获取Host quuid
                     * @return Quuid Host quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host quuid
                     * @param _quuid Host quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

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
                     * Threat type
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * Attack time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Target port
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Host quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Target IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENDEFENDATTACKLOG_H_
