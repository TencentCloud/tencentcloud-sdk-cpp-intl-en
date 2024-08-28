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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDEFENCEPLUGINEVENTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDEFENCEPLUGINEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportVulDefencePluginEvent request structure.
                */
                class ExportVulDefencePluginEventRequest : public AbstractModel
                {
                public:
                    ExportVulDefencePluginEventRequest();
                    ~ExportVulDefencePluginEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Keywords: IP or host name for fuzzy match, Quuid, Exception, Status for precise match
                     * @return Filters Keywords: IP or host name for fuzzy match, Quuid, Exception, Status for precise match
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Keywords: IP or host name for fuzzy match, Quuid, Exception, Status for precise match
                     * @param _filters Keywords: IP or host name for fuzzy match, Quuid, Exception, Status for precise match
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
                     * 获取Export fields and export all by default.
                     * @return Where Export fields and export all by default.
                     * 
                     */
                    std::vector<std::string> GetWhere() const;

                    /**
                     * 设置Export fields and export all by default.
                     * @param _where Export fields and export all by default.
                     * 
                     */
                    void SetWhere(const std::vector<std::string>& _where);

                    /**
                     * 判断参数 Where 是否已赋值
                     * @return Where 是否已赋值
                     * 
                     */
                    bool WhereHasBeenSet() const;

                private:

                    /**
                     * Keywords: IP or host name for fuzzy match, Quuid, Exception, Status for precise match
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Export fields and export all by default.
                     */
                    std::vector<std::string> m_where;
                    bool m_whereHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDEFENCEPLUGINEVENTREQUEST_H_
