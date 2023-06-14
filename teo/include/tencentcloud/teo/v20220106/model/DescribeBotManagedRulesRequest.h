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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_

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
                * DescribeBotManagedRules request structure.
                */
                class DescribeBotManagedRulesRequest : public AbstractModel
                {
                public:
                    DescribeBotManagedRulesRequest();
                    ~DescribeBotManagedRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Top-level domain name
                     * @return ZoneId Top-level domain name
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Top-level domain name
                     * @param _zoneId Top-level domain name
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
                     * 获取Subdomain name/layer-4 proxy
                     * @return Entity Subdomain name/layer-4 proxy
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Subdomain name/layer-4 proxy
                     * @param _entity Subdomain name/layer-4 proxy
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Total number of pages
                     * @return Page Total number of pages
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Total number of pages
                     * @param _page Total number of pages
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Number of rules per page
                     * @return PerPage Number of rules per page
                     * 
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置Number of rules per page
                     * @param _perPage Number of rules per page
                     * 
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     * 
                     */
                    bool PerPageHasBeenSet() const;

                    /**
                     * 获取Rule type. Values: `idcid`, `sipbot` and `uabot`. All rules will be returned if this field is not specified.
                     * @return RuleType Rule type. Values: `idcid`, `sipbot` and `uabot`. All rules will be returned if this field is not specified.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type. Values: `idcid`, `sipbot` and `uabot`. All rules will be returned if this field is not specified.
                     * @param _ruleType Rule type. Values: `idcid`, `sipbot` and `uabot`. All rules will be returned if this field is not specified.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * Top-level domain name
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain name/layer-4 proxy
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Total number of pages
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Number of rules per page
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                    /**
                     * Rule type. Values: `idcid`, `sipbot` and `uabot`. All rules will be returned if this field is not specified.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEBOTMANAGEDRULESREQUEST_H_
