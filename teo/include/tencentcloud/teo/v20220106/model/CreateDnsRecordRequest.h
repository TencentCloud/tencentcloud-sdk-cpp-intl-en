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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATEDNSRECORDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATEDNSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateDnsRecord request structure.
                */
                class CreateDnsRecordRequest : public AbstractModel
                {
                public:
                    CreateDnsRecordRequest();
                    ~CreateDnsRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param _zoneId Site ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Record type
                     * @return Type Record type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Record type
                     * @param _type Record type
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
                     * 获取Record name
                     * @return Name Record name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Record name
                     * @param _name Record name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Record content
                     * @return Content Record content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Record content
                     * @param _content Record content
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Proxy mode. Valid values: `dns_only`, `cdn_only`, and `secure_cdn`.
                     * @return Mode Proxy mode. Valid values: `dns_only`, `cdn_only`, and `secure_cdn`.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Proxy mode. Valid values: `dns_only`, `cdn_only`, and `secure_cdn`.
                     * @param _mode Proxy mode. Valid values: `dns_only`, `cdn_only`, and `secure_cdn`.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Ttl 
                     * 
                     */
                    int64_t GetTtl() const;

                    /**
                     * 设置
                     * @param _ttl 
                     * 
                     */
                    void SetTtl(const int64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取Priority
                     * @return Priority Priority
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority
                     * @param _priority Priority
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Record type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Record name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Record content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Proxy mode. Valid values: `dns_only`, `cdn_only`, and `secure_cdn`.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * Priority
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATEDNSRECORDREQUEST_H_
