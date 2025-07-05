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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDatabaseInfoList request structure.
                */
                class DescribeDatabaseInfoListRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseInfoListRequest();
                    ~DescribeDatabaseInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ignore Query String
                     * @return Filters Ignore Query String
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Ignore Query String
                     * @param _filters Ignore Query String
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
                     * 获取Connection Type
                     * @return ConnectionType Connection Type
                     * 
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置Connection Type
                     * @param _connectionType Connection Type
                     * 
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     * 
                     */
                    bool ConnectionTypeHasBeenSet() const;

                private:

                    /**
                     * Ignore Query String
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Connection Type
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_
