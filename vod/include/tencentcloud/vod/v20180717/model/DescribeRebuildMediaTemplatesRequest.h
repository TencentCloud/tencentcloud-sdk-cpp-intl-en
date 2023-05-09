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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREBUILDMEDIATEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREBUILDMEDIATEMPLATESREQUEST_H_

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
                * DescribeRebuildMediaTemplates request structure.
                */
                class DescribeRebuildMediaTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeRebuildMediaTemplatesRequest();
                    ~DescribeRebuildMediaTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The remaster template IDs.
                     * @return Definitions The remaster template IDs.
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置The remaster template IDs.
                     * @param Definitions The remaster template IDs.
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    int64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const int64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     * @return Type The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     * @param Type The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The pagination offset. Default value: 0.
                     * @return Offset The pagination offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The pagination offset. Default value: 0.
                     * @param Offset The pagination offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The maximum number of records to return. Default value: 10. Maximum value: 100.
                     * @return Limit The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of records to return. Default value: 10. Maximum value: 100.
                     * @param Limit The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The remaster template IDs.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    int64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The pagination offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of records to return. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEREBUILDMEDIATEMPLATESREQUEST_H_