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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupManagedRules request structure.
                */
                class DescribeSecurityGroupManagedRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupManagedRulesRequest();
                    ~DescribeSecurityGroupManagedRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @return ZoneId The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @param ZoneId The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The subdomain name/L4 proxy. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @return Entity The subdomain name/L4 proxy. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置The subdomain name/L4 proxy. You must specify either "ZoneId+Entity" or "TemplateId".
                     * @param Entity The subdomain name/L4 proxy. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取The page offset. Default value: 0
                     * @return Offset The page offset. Default value: 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The page offset. Default value: 0
                     * @param Offset The page offset. Default value: 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @return Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The paginated query limit. Default value: 20. Maximum value: 1000.
                     * @param Limit The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The template ID. You must specify either this field or ZoneId+Entity".
                     * @return TemplateId The template ID. You must specify either this field or ZoneId+Entity".
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置The template ID. You must specify either this field or ZoneId+Entity".
                     * @param TemplateId The template ID. You must specify either this field or ZoneId+Entity".
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * The site ID. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The subdomain name/L4 proxy. You must specify either "ZoneId+Entity" or "TemplateId".
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * The page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The paginated query limit. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The template ID. You must specify either this field or ZoneId+Entity".
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_
