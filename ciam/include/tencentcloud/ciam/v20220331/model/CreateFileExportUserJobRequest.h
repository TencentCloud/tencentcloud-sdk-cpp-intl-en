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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>
#include <tencentcloud/ciam/v20220331/model/ExportPropertyMap.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * CreateFileExportUserJob request structure.
                */
                class CreateFileExportUserJobRequest : public AbstractModel
                {
                public:
                    CreateFileExportUserJobRequest();
                    ~CreateFileExportUserJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Exported data type

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * @return Format Exported data type

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Exported data type

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * @param _format Exported data type

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Valid values of `Key`: `condition`, `userGroupId`.

<li> **condition** </li>	Values = Query condition, which can be user ID, username, mobile number, or email address.
<li> **userGroupId** </li>	Values = User group ID
                     * @return Filters Valid values of `Key`: `condition`, `userGroupId`.

<li> **condition** </li>	Values = Query condition, which can be user ID, username, mobile number, or email address.
<li> **userGroupId** </li>	Values = User group ID
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Valid values of `Key`: `condition`, `userGroupId`.

<li> **condition** </li>	Values = Query condition, which can be user ID, username, mobile number, or email address.
<li> **userGroupId** </li>	Values = User group ID
                     * @param _filters Valid values of `Key`: `condition`, `userGroupId`.

<li> **condition** </li>	Values = Query condition, which can be user ID, username, mobile number, or email address.
<li> **userGroupId** </li>	Values = User group ID
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
                     * 获取Attributes and mapping names included in the exported user information. If this parameter is empty, all attributes will be included.
                     * @return ExportPropertyMaps Attributes and mapping names included in the exported user information. If this parameter is empty, all attributes will be included.
                     * 
                     */
                    std::vector<ExportPropertyMap> GetExportPropertyMaps() const;

                    /**
                     * 设置Attributes and mapping names included in the exported user information. If this parameter is empty, all attributes will be included.
                     * @param _exportPropertyMaps Attributes and mapping names included in the exported user information. If this parameter is empty, all attributes will be included.
                     * 
                     */
                    void SetExportPropertyMaps(const std::vector<ExportPropertyMap>& _exportPropertyMaps);

                    /**
                     * 判断参数 ExportPropertyMaps 是否已赋值
                     * @return ExportPropertyMaps 是否已赋值
                     * 
                     */
                    bool ExportPropertyMapsHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Exported data type

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Valid values of `Key`: `condition`, `userGroupId`.

<li> **condition** </li>	Values = Query condition, which can be user ID, username, mobile number, or email address.
<li> **userGroupId** </li>	Values = User group ID
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Attributes and mapping names included in the exported user information. If this parameter is empty, all attributes will be included.
                     */
                    std::vector<ExportPropertyMap> m_exportPropertyMaps;
                    bool m_exportPropertyMapsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEFILEEXPORTUSERJOBREQUEST_H_
