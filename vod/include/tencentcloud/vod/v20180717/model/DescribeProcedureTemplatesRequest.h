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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeProcedureTemplates request structure.
                */
                class DescribeProcedureTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeProcedureTemplatesRequest();
                    ~DescribeProcedureTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Task flow template name filter conditions, with an array length limit of 100.</p>
                     * @return Names <p>Task flow template name filter conditions, with an array length limit of 100.</p>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置<p>Task flow template name filter conditions, with an array length limit of 100.</p>
                     * @param _names <p>Task flow template name filter conditions, with an array length limit of 100.</p>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取<p>Task flow template type filter conditions. Available values:</p><li>Preset: system preset task flow template;</li><li>Custom: user-defined task flow template.</li>
                     * @return Type <p>Task flow template type filter conditions. Available values:</p><li>Preset: system preset task flow template;</li><li>Custom: user-defined task flow template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Task flow template type filter conditions. Available values:</p><li>Preset: system preset task flow template;</li><li>Custom: user-defined task flow template.</li>
                     * @param _type <p>Task flow template type filter conditions. Available values:</p><li>Preset: system preset task flow template;</li><li>Custom: user-defined task flow template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Paging offset. Default value: 0.</p>
                     * @return Offset <p>Paging offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paging offset. Default value: 0.</p>
                     * @param _offset <p>Paging offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
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
                     * 获取<p>Sort the returned results by the specified field in ascending or descending order. Sort.Field currently only supports CreateTime. Sort.Order is desc (in descending order) or asc (in ascending order)</p><p>Input parameter limit: currently only supports CreateTime as the sorting field</p>
                     * @return SortBy <p>Sort the returned results by the specified field in ascending or descending order. Sort.Field currently only supports CreateTime. Sort.Order is desc (in descending order) or asc (in ascending order)</p><p>Input parameter limit: currently only supports CreateTime as the sorting field</p>
                     * 
                     */
                    std::vector<SortBy> GetSortBy() const;

                    /**
                     * 设置<p>Sort the returned results by the specified field in ascending or descending order. Sort.Field currently only supports CreateTime. Sort.Order is desc (in descending order) or asc (in ascending order)</p><p>Input parameter limit: currently only supports CreateTime as the sorting field</p>
                     * @param _sortBy <p>Sort the returned results by the specified field in ascending or descending order. Sort.Field currently only supports CreateTime. Sort.Order is desc (in descending order) or asc (in ascending order)</p><p>Input parameter limit: currently only supports CreateTime as the sorting field</p>
                     * 
                     */
                    void SetSortBy(const std::vector<SortBy>& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, if they access resources in on-demand applications (whether the default application or a newly created application), this field must be filled with the app ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Task flow template name filter conditions, with an array length limit of 100.</p>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * <p>Task flow template type filter conditions. Available values:</p><li>Preset: system preset task flow template;</li><li>Custom: user-defined task flow template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Paging offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned entries. Default value: 10. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Sort the returned results by the specified field in ascending or descending order. Sort.Field currently only supports CreateTime. Sort.Order is desc (in descending order) or asc (in ascending order)</p><p>Input parameter limit: currently only supports CreateTime as the sorting field</p>
                     */
                    std::vector<SortBy> m_sortBy;
                    bool m_sortByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_
