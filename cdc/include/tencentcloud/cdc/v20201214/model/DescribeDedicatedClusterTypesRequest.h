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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterTypes request structure.
                */
                class DescribeDedicatedClusterTypesRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterTypesRequest();
                    ~DescribeDedicatedClusterTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of fuzzy matching CDC configuration
                     * @return Name Name of fuzzy matching CDC configuration
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of fuzzy matching CDC configuration
                     * @param _name Name of fuzzy matching CDC configuration
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
                     * 获取List of CDC configuration ids to be queried
                     * @return DedicatedClusterTypeIds List of CDC configuration ids to be queried
                     * 
                     */
                    std::vector<std::string> GetDedicatedClusterTypeIds() const;

                    /**
                     * 设置List of CDC configuration ids to be queried
                     * @param _dedicatedClusterTypeIds List of CDC configuration ids to be queried
                     * 
                     */
                    void SetDedicatedClusterTypeIds(const std::vector<std::string>& _dedicatedClusterTypeIds);

                    /**
                     * 判断参数 DedicatedClusterTypeIds 是否已赋值
                     * @return DedicatedClusterTypeIds 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypeIdsHasBeenSet() const;

                    /**
                     * 获取Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Whether to query only the computing type?
                     * @return IsCompute Whether to query only the computing type?
                     * 
                     */
                    bool GetIsCompute() const;

                    /**
                     * 设置Whether to query only the computing type?
                     * @param _isCompute Whether to query only the computing type?
                     * 
                     */
                    void SetIsCompute(const bool& _isCompute);

                    /**
                     * 判断参数 IsCompute 是否已赋值
                     * @return IsCompute 是否已赋值
                     * 
                     */
                    bool IsComputeHasBeenSet() const;

                private:

                    /**
                     * Name of fuzzy matching CDC configuration
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * List of CDC configuration ids to be queried
                     */
                    std::vector<std::string> m_dedicatedClusterTypeIds;
                    bool m_dedicatedClusterTypeIdsHasBeenSet;

                    /**
                     * Offset, 0 by default For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned pieces, 20 by default and can be up to 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether to query only the computing type?
                     */
                    bool m_isCompute;
                    bool m_isComputeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERTYPESREQUEST_H_
