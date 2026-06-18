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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseBindList request structure.
                */
                class DescribeLicenseBindListRequest : public AbstractModel
                {
                public:
                    DescribeLicenseBindListRequest();
                    ~DescribeLicenseBindListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>License ID. The value is the value of the LicenseId parameter under the List object of the DescribeLicenseList API.</p>
                     * @return LicenseId <p>License ID. The value is the value of the LicenseId parameter under the List object of the DescribeLicenseList API.</p>
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置<p>License ID. The value is the value of the LicenseId parameter under the List object of the DescribeLicenseList API.</p>
                     * @param _licenseId <p>License ID. The value is the value of the LicenseId parameter under the List object of the DescribeLicenseList API.</p>
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取<p>License type</p><p>Valid values:</p><ul><li>0: Pro Edition - pay-as-you-go</li><li>1: Pro Edition - monthly subscription (CWP)</li><li>2: Ultimate Edition - monthly subscription (CWP)</li><li>3: Lightweight Edition - LH monthly subscription</li><li>6: Pro Edition - monthly subscription (CSC)</li><li>7: Ultimate Edition - monthly subscription (CSC)</li></ul>
                     * @return LicenseType <p>License type</p><p>Valid values:</p><ul><li>0: Pro Edition - pay-as-you-go</li><li>1: Pro Edition - monthly subscription (CWP)</li><li>2: Ultimate Edition - monthly subscription (CWP)</li><li>3: Lightweight Edition - LH monthly subscription</li><li>6: Pro Edition - monthly subscription (CSC)</li><li>7: Ultimate Edition - monthly subscription (CSC)</li></ul>
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置<p>License type</p><p>Valid values:</p><ul><li>0: Pro Edition - pay-as-you-go</li><li>1: Pro Edition - monthly subscription (CWP)</li><li>2: Ultimate Edition - monthly subscription (CWP)</li><li>3: Lightweight Edition - LH monthly subscription</li><li>6: Pro Edition - monthly subscription (CSC)</li><li>7: Ultimate Edition - monthly subscription (CSC)</li></ul>
                     * @param _licenseType <p>License type</p><p>Valid values:</p><ul><li>0: Pro Edition - pay-as-you-go</li><li>1: Pro Edition - monthly subscription (CWP)</li><li>2: Ultimate Edition - monthly subscription (CWP)</li><li>3: Lightweight Edition - LH monthly subscription</li><li>6: Pro Edition - monthly subscription (CSC)</li><li>7: Ultimate Edition - monthly subscription (CSC)</li></ul>
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Resource ID. The value is the value of the ResourceId parameter under the List object of the DescribeLicenseList API.</p>
                     * @return ResourceId <p>Resource ID. The value is the value of the ResourceId parameter under the List object of the DescribeLicenseList API.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID. The value is the value of the ResourceId parameter under the List object of the DescribeLicenseList API.</p>
                     * @param _resourceId <p>Resource ID. The value is the value of the ResourceId parameter under the List object of the DescribeLicenseList API.</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<li>Fuzzy search by InstanceID, IP, or <p>MachineName</p></li>
                     * @return Filters <li>Fuzzy search by InstanceID, IP, or <p>MachineName</p></li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<li>Fuzzy search by InstanceID, IP, or <p>MachineName</p></li>
                     * @param _filters <li>Fuzzy search by InstanceID, IP, or <p>MachineName</p></li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>The maximum number of entries. Default value: 10.</p>
                     * @return Limit <p>The maximum number of entries. Default value: 10.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>The maximum number of entries. Default value: 10.</p>
                     * @param _limit <p>The maximum number of entries. Default value: 10.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * <p>License ID. The value is the value of the LicenseId parameter under the List object of the DescribeLicenseList API.</p>
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * <p>License type</p><p>Valid values:</p><ul><li>0: Pro Edition - pay-as-you-go</li><li>1: Pro Edition - monthly subscription (CWP)</li><li>2: Ultimate Edition - monthly subscription (CWP)</li><li>3: Lightweight Edition - LH monthly subscription</li><li>6: Pro Edition - monthly subscription (CSC)</li><li>7: Ultimate Edition - monthly subscription (CSC)</li></ul>
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>Resource ID. The value is the value of the ResourceId parameter under the List object of the DescribeLicenseList API.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <li>Fuzzy search by InstanceID, IP, or <p>MachineName</p></li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>The maximum number of entries. Default value: 10.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_
