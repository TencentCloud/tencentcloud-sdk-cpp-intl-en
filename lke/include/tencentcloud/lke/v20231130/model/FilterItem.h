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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILTERITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILTERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Filter criteria.
                */
                class FilterItem : public AbstractModel
                {
                public:
                    FilterItem();
                    ~FilterItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter the content.
For example, you can use "AuditStatus" to filter by review status.
                     * @return FilterKey Filter the content.
For example, you can use "AuditStatus" to filter by review status.
                     * 
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置Filter the content.
For example, you can use "AuditStatus" to filter by review status.
                     * @param _filterKey Filter the content.
For example, you can use "AuditStatus" to filter by review status.
                     * 
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     * 
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取Filtering criteria.
For example, for the filter content "AuditStatus", use the following filtering conditions:
"ContentFailed": "Content review failed"
"PictureFailed": "Image review failed",
"ContentAndPictureFailed": "Image and content review failed",
                     * @return FilterValue Filtering criteria.
For example, for the filter content "AuditStatus", use the following filtering conditions:
"ContentFailed": "Content review failed"
"PictureFailed": "Image review failed",
"ContentAndPictureFailed": "Image and content review failed",
                     * 
                     */
                    std::vector<std::string> GetFilterValue() const;

                    /**
                     * 设置Filtering criteria.
For example, for the filter content "AuditStatus", use the following filtering conditions:
"ContentFailed": "Content review failed"
"PictureFailed": "Image review failed",
"ContentAndPictureFailed": "Image and content review failed",
                     * @param _filterValue Filtering criteria.
For example, for the filter content "AuditStatus", use the following filtering conditions:
"ContentFailed": "Content review failed"
"PictureFailed": "Image review failed",
"ContentAndPictureFailed": "Image and content review failed",
                     * 
                     */
                    void SetFilterValue(const std::vector<std::string>& _filterValue);

                    /**
                     * 判断参数 FilterValue 是否已赋值
                     * @return FilterValue 是否已赋值
                     * 
                     */
                    bool FilterValueHasBeenSet() const;

                private:

                    /**
                     * Filter the content.
For example, you can use "AuditStatus" to filter by review status.
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * Filtering criteria.
For example, for the filter content "AuditStatus", use the following filtering conditions:
"ContentFailed": "Content review failed"
"PictureFailed": "Image review failed",
"ContentAndPictureFailed": "Image and content review failed",
                     */
                    std::vector<std::string> m_filterValue;
                    bool m_filterValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILTERITEM_H_
