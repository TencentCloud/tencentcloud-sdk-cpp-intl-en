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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSmsTemplateList request structure.
                */
                class DescribeSmsTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeSmsTemplateListRequest();
                    ~DescribeSmsTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @return International Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * @param _international Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取Array of template IDs. If the array is empty, the template list information will be queried by default. You need to use the `Limit` and `Offset` fields to set the query range.
<dx-alert infotype="notice" title="Note">The max array length is 100 by default.</dx-alert>
                     * @return TemplateIdSet Array of template IDs. If the array is empty, the template list information will be queried by default. You need to use the `Limit` and `Offset` fields to set the query range.
<dx-alert infotype="notice" title="Note">The max array length is 100 by default.</dx-alert>
                     * 
                     */
                    std::vector<uint64_t> GetTemplateIdSet() const;

                    /**
                     * 设置Array of template IDs. If the array is empty, the template list information will be queried by default. You need to use the `Limit` and `Offset` fields to set the query range.
<dx-alert infotype="notice" title="Note">The max array length is 100 by default.</dx-alert>
                     * @param _templateIdSet Array of template IDs. If the array is empty, the template list information will be queried by default. You need to use the `Limit` and `Offset` fields to set the query range.
<dx-alert infotype="notice" title="Note">The max array length is 100 by default.</dx-alert>
                     * 
                     */
                    void SetTemplateIdSet(const std::vector<uint64_t>& _templateIdSet);

                    /**
                     * 判断参数 TemplateIdSet 是否已赋值
                     * @return TemplateIdSet 是否已赋值
                     * 
                     */
                    bool TemplateIdSetHasBeenSet() const;

                    /**
                     * 获取Upper limit. Maximum value: 100.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * @return Limit Upper limit. Maximum value: 100.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Upper limit. Maximum value: 100.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * @param _limit Upper limit. Maximum value: 100.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * @return Offset Offset.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * @param _offset Offset.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Whether it is Global SMS:
0: Mainland China SMS.
1: Global SMS.
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * Array of template IDs. If the array is empty, the template list information will be queried by default. You need to use the `Limit` and `Offset` fields to set the query range.
<dx-alert infotype="notice" title="Note">The max array length is 100 by default.</dx-alert>
                     */
                    std::vector<uint64_t> m_templateIdSet;
                    bool m_templateIdSetHasBeenSet;

                    /**
                     * Upper limit. Maximum value: 100.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset.
Note: it is 0 by default and is enabled when `TemplateIdSet` is empty.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
