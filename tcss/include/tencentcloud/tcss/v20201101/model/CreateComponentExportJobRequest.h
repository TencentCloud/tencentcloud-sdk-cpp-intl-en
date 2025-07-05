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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPONENTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPONENTEXPORTJOBREQUEST_H_

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
                * CreateComponentExportJob request structure.
                */
                class CreateComponentExportJobRequest : public AbstractModel
                {
                public:
                    CreateComponentExportJobRequest();
                    ~CreateComponentExportJobRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Number of results to be returned. Default value: `10000`. Maximum value: `10000`.
                     * @return Limit Number of results to be returned. Default value: `10000`. Maximum value: `10000`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: `10000`. Maximum value: `10000`.
                     * @param _limit Number of results to be returned. Default value: `10000`. Maximum value: `10000`.
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
<li>ComponentName- String - Required: No - Image component name</li><li>ComponentVersion- String - Required: No - Image component version</li><li>ComponentType- String - Required: No - Image component type</li><li>VulLevel- String - Required: No - Vulnerability severity</li><li>HasVul- String - Required: No - Whether there is a vulnerability. Valid values: `true` (yes); `false` (no). If `ComponentName` is not passed in or is `ALL`, it indicates all.</li>
                     * @return Filters Filter
<li>ComponentName- String - Required: No - Image component name</li><li>ComponentVersion- String - Required: No - Image component version</li><li>ComponentType- String - Required: No - Image component type</li><li>VulLevel- String - Required: No - Vulnerability severity</li><li>HasVul- String - Required: No - Whether there is a vulnerability. Valid values: `true` (yes); `false` (no). If `ComponentName` is not passed in or is `ALL`, it indicates all.</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter
<li>ComponentName- String - Required: No - Image component name</li><li>ComponentVersion- String - Required: No - Image component version</li><li>ComponentType- String - Required: No - Image component type</li><li>VulLevel- String - Required: No - Vulnerability severity</li><li>HasVul- String - Required: No - Whether there is a vulnerability. Valid values: `true` (yes); `false` (no). If `ComponentName` is not passed in or is `ALL`, it indicates all.</li>
                     * @param _filters Filter
<li>ComponentName- String - Required: No - Image component name</li><li>ComponentVersion- String - Required: No - Image component version</li><li>ComponentType- String - Required: No - Image component type</li><li>VulLevel- String - Required: No - Vulnerability severity</li><li>HasVul- String - Required: No - Whether there is a vulnerability. Valid values: `true` (yes); `false` (no). If `ComponentName` is not passed in or is `ALL`, it indicates all.</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `desc`, `asc`.
                     * @return Order Sorting order. Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Valid values: `desc`, `asc`.
                     * @param _order Sorting order. Valid values: `desc`, `asc`.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

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

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: `10000`. Maximum value: `10000`.
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
<li>ComponentName- String - Required: No - Image component name</li><li>ComponentVersion- String - Required: No - Image component version</li><li>ComponentType- String - Required: No - Image component type</li><li>VulLevel- String - Required: No - Vulnerability severity</li><li>HasVul- String - Required: No - Whether there is a vulnerability. Valid values: `true` (yes); `false` (no). If `ComponentName` is not passed in or is `ALL`, it indicates all.</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting order. Valid values: `desc`, `asc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Export field
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECOMPONENTEXPORTJOBREQUEST_H_
