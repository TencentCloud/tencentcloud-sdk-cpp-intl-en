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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVULLISTEXPORTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVULLISTEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageVulListExport request structure.
                */
                class DescribeAssetImageVulListExportRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageVulListExportRequest();
                    ~DescribeAssetImageVulListExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Export field
                     * @return ExportField Export field
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置Export field
                     * @param _exportField Export field
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                    /**
                     * 获取Image ID
                     * @return ImageID Image ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置Image ID
                     * @param _imageID Image ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @return Limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     * @param _limit Number of results to be returned. Default value: `10`. Maximum value: `100`.
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Filter
<li>Name- String - Required: No - Vulnerability name</li>
<li>Level - String - Required: No - Risk level. Valid values: `1`, `2`, `3`, `4`.</li>
                     * @return Filters Filter
<li>Name- String - Required: No - Vulnerability name</li>
<li>Level - String - Required: No - Risk level. Valid values: `1`, `2`, `3`, `4`.</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter
<li>Name- String - Required: No - Vulnerability name</li>
<li>Level - String - Required: No - Risk level. Valid values: `1`, `2`, `3`, `4`.</li>
                     * @param _filters Filter
<li>Name- String - Required: No - Vulnerability name</li>
<li>Level - String - Required: No - Risk level. Valid values: `1`, `2`, `3`, `4`.</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Export field
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter
<li>Name- String - Required: No - Vulnerability name</li>
<li>Level - String - Required: No - Risk level. Valid values: `1`, `2`, `3`, `4`.</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVULLISTEXPORTREQUEST_H_
