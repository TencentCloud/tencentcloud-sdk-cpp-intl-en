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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取Name filter of task flow template. Array length limit: 100.
                     * @return Names Name filter of task flow template. Array length limit: 100.
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置Name filter of task flow template. Array length limit: 100.
                     * @param Names Name filter of task flow template. Array length limit: 100.
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取Filter of task flow template types. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     * @return Type Filter of task flow template types. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter of task flow template types. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     * @param Type Filter of task flow template types. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param Offset Pagination offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Name filter of task flow template. Array length limit: 100.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * Filter of task flow template types. Valid values:
<li>Preset: preset task flow template;</li>
<li>Custom: custom task flow template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPROCEDURETEMPLATESREQUEST_H_
