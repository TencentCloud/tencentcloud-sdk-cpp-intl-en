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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeAvailableOriginACLFamily request structure.
                */
                class DescribeAvailableOriginACLFamilyRequest : public AbstractModel
                {
                public:
                    DescribeAvailableOriginACLFamilyRequest();
                    ~DescribeAvailableOriginACLFamilyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all available versions under the current site are returned. The IP range control domain of origin protection includes the standard control domain and the streamlined control domain. The main difference between the standard control domain and the streamlined control domain is the quantity difference of origin IP ranges provided. The latter has fewer IP ranges, however it is limited in use. Contact technical support if needed. Specific values are as follows:<br>Detailed filter criteria are as follows:<br>OriginACLFamily: filter by control domain;</p><li>gaz: standard global availability zone control domain;</li><li>mlc: standard Chinese mainland availability zone control domain;</li><li>emc: standard global (excluding Chinese mainland) availability zone control domain;</li><li>plat-gaz: streamlined global availability zone control domain;</li><li>plat-mlc: streamlined Chinese mainland availability zone control domain;</li><li>plat-emc: streamlined global (excluding Chinese mainland) availability zone control domain;</li><li>plat-specific-gaz: custom edition global availability zone control domain;</li><li>plat-specific-mlc: custom edition Chinese mainland availability zone control domain;</li><li>plat-specific-emc: custom edition global (excluding Chinese mainland) availability zone control domain.</li>
                     * @return Filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all available versions under the current site are returned. The IP range control domain of origin protection includes the standard control domain and the streamlined control domain. The main difference between the standard control domain and the streamlined control domain is the quantity difference of origin IP ranges provided. The latter has fewer IP ranges, however it is limited in use. Contact technical support if needed. Specific values are as follows:<br>Detailed filter criteria are as follows:<br>OriginACLFamily: filter by control domain;</p><li>gaz: standard global availability zone control domain;</li><li>mlc: standard Chinese mainland availability zone control domain;</li><li>emc: standard global (excluding Chinese mainland) availability zone control domain;</li><li>plat-gaz: streamlined global availability zone control domain;</li><li>plat-mlc: streamlined Chinese mainland availability zone control domain;</li><li>plat-emc: streamlined global (excluding Chinese mainland) availability zone control domain;</li><li>plat-specific-gaz: custom edition global availability zone control domain;</li><li>plat-specific-mlc: custom edition Chinese mainland availability zone control domain;</li><li>plat-specific-emc: custom edition global (excluding Chinese mainland) availability zone control domain.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all available versions under the current site are returned. The IP range control domain of origin protection includes the standard control domain and the streamlined control domain. The main difference between the standard control domain and the streamlined control domain is the quantity difference of origin IP ranges provided. The latter has fewer IP ranges, however it is limited in use. Contact technical support if needed. Specific values are as follows:<br>Detailed filter criteria are as follows:<br>OriginACLFamily: filter by control domain;</p><li>gaz: standard global availability zone control domain;</li><li>mlc: standard Chinese mainland availability zone control domain;</li><li>emc: standard global (excluding Chinese mainland) availability zone control domain;</li><li>plat-gaz: streamlined global availability zone control domain;</li><li>plat-mlc: streamlined Chinese mainland availability zone control domain;</li><li>plat-emc: streamlined global (excluding Chinese mainland) availability zone control domain;</li><li>plat-specific-gaz: custom edition global availability zone control domain;</li><li>plat-specific-mlc: custom edition Chinese mainland availability zone control domain;</li><li>plat-specific-emc: custom edition global (excluding Chinese mainland) availability zone control domain.</li>
                     * @param _filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all available versions under the current site are returned. The IP range control domain of origin protection includes the standard control domain and the streamlined control domain. The main difference between the standard control domain and the streamlined control domain is the quantity difference of origin IP ranges provided. The latter has fewer IP ranges, however it is limited in use. Contact technical support if needed. Specific values are as follows:<br>Detailed filter criteria are as follows:<br>OriginACLFamily: filter by control domain;</p><li>gaz: standard global availability zone control domain;</li><li>mlc: standard Chinese mainland availability zone control domain;</li><li>emc: standard global (excluding Chinese mainland) availability zone control domain;</li><li>plat-gaz: streamlined global availability zone control domain;</li><li>plat-mlc: streamlined Chinese mainland availability zone control domain;</li><li>plat-emc: streamlined global (excluding Chinese mainland) availability zone control domain;</li><li>plat-specific-gaz: custom edition global availability zone control domain;</li><li>plat-specific-mlc: custom edition Chinese mainland availability zone control domain;</li><li>plat-specific-emc: custom edition global (excluding Chinese mainland) availability zone control domain.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>The offset of paginated query. Default value: 0.</p>
                     * @return Offset <p>The offset of paginated query. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>The offset of paginated query. Default value: 0.</p>
                     * @param _offset <p>The offset of paginated query. Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number limit of paginated query. Default value: 20. Maximum value: 100.</p>
                     * @return Limit <p>Number limit of paginated query. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number limit of paginated query. Default value: 20. Maximum value: 100.</p>
                     * @param _limit <p>Number limit of paginated query. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, all available versions under the current site are returned. The IP range control domain of origin protection includes the standard control domain and the streamlined control domain. The main difference between the standard control domain and the streamlined control domain is the quantity difference of origin IP ranges provided. The latter has fewer IP ranges, however it is limited in use. Contact technical support if needed. Specific values are as follows:<br>Detailed filter criteria are as follows:<br>OriginACLFamily: filter by control domain;</p><li>gaz: standard global availability zone control domain;</li><li>mlc: standard Chinese mainland availability zone control domain;</li><li>emc: standard global (excluding Chinese mainland) availability zone control domain;</li><li>plat-gaz: streamlined global availability zone control domain;</li><li>plat-mlc: streamlined Chinese mainland availability zone control domain;</li><li>plat-emc: streamlined global (excluding Chinese mainland) availability zone control domain;</li><li>plat-specific-gaz: custom edition global availability zone control domain;</li><li>plat-specific-mlc: custom edition Chinese mainland availability zone control domain;</li><li>plat-specific-emc: custom edition global (excluding Chinese mainland) availability zone control domain.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>The offset of paginated query. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number limit of paginated query. Default value: 20. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEAVAILABLEORIGINACLFAMILYREQUEST_H_
