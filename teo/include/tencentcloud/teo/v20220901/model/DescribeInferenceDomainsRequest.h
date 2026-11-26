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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCEDOMAINSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCEDOMAINSREQUEST_H_

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
                * DescribeInferenceDomains request structure.
                */
                class DescribeInferenceDomainsRequest : public AbstractModel
                {
                public:
                    DescribeInferenceDomainsRequest();
                    ~DescribeInferenceDomainsRequest() = default;
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
                     * 获取<p>Inference service ID.</p>
                     * @return ServiceId <p>Inference service ID.</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>Inference service ID.</p>
                     * @param _serviceId <p>Inference service ID.</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field.</p><p>Enumeration values:</p><ul><li>CreateTime: domain name creation time;</li><li>UpdateTime: domain modification time.</li></ul><p>Default value: CreateTime.</p>
                     * @return SortBy <p>Sorting field.</p><p>Enumeration values:</p><ul><li>CreateTime: domain name creation time;</li><li>UpdateTime: domain modification time.</li></ul><p>Default value: CreateTime.</p>
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置<p>Sorting field.</p><p>Enumeration values:</p><ul><li>CreateTime: domain name creation time;</li><li>UpdateTime: domain modification time.</li></ul><p>Default value: CreateTime.</p>
                     * @param _sortBy <p>Sorting field.</p><p>Enumeration values:</p><ul><li>CreateTime: domain name creation time;</li><li>UpdateTime: domain modification time.</li></ul><p>Default value: CreateTime.</p>
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method.</p><p>Enumeration values:</p><ul><li>Asc: in ascending order;</li><li>Desc: in descending order.</li></ul><p>Default value: Desc.</p>
                     * @return SortOrder <p>Sorting method.</p><p>Enumeration values:</p><ul><li>Asc: in ascending order;</li><li>Desc: in descending order.</li></ul><p>Default value: Desc.</p>
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置<p>Sorting method.</p><p>Enumeration values:</p><ul><li>Asc: in ascending order;</li><li>Desc: in descending order.</li></ul><p>Default value: Desc.</p>
                     * @param _sortOrder <p>Sorting method.</p><p>Enumeration values:</p><ul><li>Asc: in ascending order;</li><li>Desc: in descending order.</li></ul><p>Default value: Desc.</p>
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset.</p><p>Default value: 0.</p>
                     * @return Offset <p>Paginated query offset.</p><p>Default value: 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset.</p><p>Default value: 0.</p>
                     * @param _offset <p>Paginated query offset.</p><p>Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query limit.</p><p>Default value: 20.</p><p>Maximum value: 200.</p>
                     * @return Limit <p>Paginated query limit.</p><p>Default value: 20.</p><p>Maximum value: 200.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit.</p><p>Default value: 20.</p><p>Maximum value: 200.</p>
                     * @param _limit <p>Paginated query limit.</p><p>Default value: 20.</p><p>Maximum value: 200.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

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
                     * <p>Inference service ID.</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Sorting field.</p><p>Enumeration values:</p><ul><li>CreateTime: domain name creation time;</li><li>UpdateTime: domain modification time.</li></ul><p>Default value: CreateTime.</p>
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * <p>Sorting method.</p><p>Enumeration values:</p><ul><li>Asc: in ascending order;</li><li>Desc: in descending order.</li></ul><p>Default value: Desc.</p>
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>Paginated query offset.</p><p>Default value: 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Paginated query limit.</p><p>Default value: 20.</p><p>Maximum value: 200.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCEDOMAINSREQUEST_H_
